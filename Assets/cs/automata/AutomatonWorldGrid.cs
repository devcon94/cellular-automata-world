using System;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;
using UnityEngine.Jobs;
using Random = Unity.Mathematics.Random;

namespace Devcon.CellularAutomata
{
    #region CONSTANTS
    public static class GridConstants
    {
        public const int GRID_SIZE = 1024;
        public const int BATCH_SIZE = 512;
        public const int GRID_LENGTH = GRID_SIZE * GRID_SIZE;
        public const int BATCH_LENGTH = BATCH_SIZE * BATCH_SIZE;
        public const int BATCH_COUNT = GRID_LENGTH / BATCH_LENGTH;
        public const int MODE_COUNT = 4;
        public static readonly string SAVE_PATH = Application.persistentDataPath + "/saves/";
    }

    [Serializable]
    public enum GridBuildType
    {
        FungusTest,
        WorldMap,
        Covid
    }

    #endregion

    [Serializable]
    public class AutomatonWorldGrid
    {
        // Serializable variables
        [SerializeField]
        protected GridBuildType _type;
        [SerializeField]
        protected int _size;
        [SerializeField]
        protected int _stage;
        [SerializeField]
        protected int _mode = 0;
        [SerializeField]
        protected int _curBatch = 0;
        [SerializeField]
        protected int _batches = GridConstants.BATCH_COUNT;
        [SerializeField]
        protected NativeArray<Cell> _layer1;
        [SerializeField]
        protected NativeArray<Cell> _layer2;
        [SerializeField]
        protected NativeArray<Cell> _layer3;
        [SerializeField]
        protected WorldSettings _worldSettings;

        // Variables that cannot be serialized
        private Texture2D _texture1;
        private Texture2D _texture2;


        public AutomatonWorldGrid(int size, GridBuildType type, WorldSettings worldSettings)
        {
            _type = type;
            _worldSettings = worldSettings;
            Build(size);
        }

        public void Build(int size)
        {
            size = MathUtil.NearestPowerOf2(size);

            _texture1 = new Texture2D(size, size, TextureFormat.RGBAFloat, false);
            _texture1.filterMode = FilterMode.Point;

            _texture2 = new Texture2D(size, size, TextureFormat.RGBAFloat, false);
            _texture2.filterMode = FilterMode.Point;

            _layer1 = new NativeArray<Cell>(size * size, Allocator.Persistent);
            _layer2 = new NativeArray<Cell>(size * size, Allocator.Persistent);
            _layer3 = new NativeArray<Cell>(size * size, Allocator.Persistent);

            Build();

            _size = size;

            UpdateTextures();
        }

        private static void EnsureSaveDirectoryExists()
        {
            if (!Directory.Exists(GridConstants.SAVE_PATH))
                Directory.CreateDirectory(GridConstants.SAVE_PATH);
        }

        public static AutomatonWorldGrid Load(string name)
        {
            EnsureSaveDirectoryExists();

            string saveFilePath = GridConstants.SAVE_PATH + name + ".save";

            if (!File.Exists(saveFilePath))
                return null;

            AutomatonWorldGrid loadedGrid = null;

            FileStream stream = new FileStream(saveFilePath, FileMode.Open);

            try
            {
                BinaryFormatter formatter = new BinaryFormatter();

                loadedGrid = (AutomatonWorldGrid)formatter.Deserialize(stream);
            }
            catch (Exception e)
            {
                Debug.LogError("ERROR - COULD NOT DESERIALIZE SAVE DATA: " + e);
            }
            finally
            {
                stream.Close();
            }

            return loadedGrid;
        }

        public void Save(string name)
        {
            EnsureSaveDirectoryExists();

            string saveFilePath = GridConstants.SAVE_PATH + name + ".save";

            if (File.Exists(saveFilePath))
                File.Delete(saveFilePath);

            FileStream stream = File.Create(saveFilePath);

            try
            {
                BinaryFormatter formatter = new BinaryFormatter();

                formatter.Serialize(stream, this);
            }
            finally
            {
                stream.Close();
            }
        }

        public void SetMode(int mode)
        {
            _mode = mode;
        }

        private void Build()
        {
            NativeArray<Random> nativeRandom = new NativeArray<Random>(_layer1.Length, Allocator.TempJob);

            for (int i = 0; i < _layer1.Length; ++i)
                nativeRandom[i] = new Random((uint)UnityEngine.Random.Range(1, uint.MaxValue));

            Random rand = nativeRandom[1];

            int terrainSeed = rand.NextInt();
            float noiseX = rand.NextFloat(0, 2048);
            float noiseY = rand.NextFloat(0, 2048);

            BaseWorldPass firstPass = new BaseWorldPass()
            {

                rand = nativeRandom,
                layer1 = _layer1,
                terrainSeed = terrainSeed,
                noiseX = noiseX,
                noiseY = noiseY
            };

            JobHandle jobHandle = firstPass.Schedule(_layer1.Length, 1);

            jobHandle.Complete();

            BaseWaterPass waterPass = new BaseWaterPass()
            {
                rand = nativeRandom,
                layer1 = _layer1,
                worldSettings = _worldSettings
            };

            jobHandle = waterPass.Schedule(_layer1.Length, 1);
            jobHandle.Complete();

            BaseAirPass airPass = new BaseAirPass()
            {
                rand = nativeRandom,
                layer1 = _layer1,
                layer2 = _layer2,
            };

            jobHandle = airPass.Schedule(_layer2.Length, 1);
            jobHandle.Complete();

            UpdateTextures();
        }

        public void Step()
        {
            int offset = _curBatch * GridConstants.BATCH_LENGTH;

            GridStep gridStepJob = new GridStep()
            {
                offset = offset,
                layer1 = _layer1,
                layer2 = _layer2,
                layer3 = _layer3,
                worldSettings = _worldSettings,
                mode = _mode,
                stage = _stage
            };

            JobHandle jobHandle = gridStepJob.Schedule(GridConstants.BATCH_LENGTH, 4);

            jobHandle.Complete();

            ++_stage;

            if (_stage == 8)
                _stage = 0;

            ++_curBatch;

            if (_batches < 128 || _curBatch % 128 == 0)
                UpdateTextures();

            if (_curBatch == _batches)
                _curBatch = 0;
        }

        private void UpdateTextures()
        {
            UpdateTexture(_layer1, _texture1);
            UpdateTexture(_layer2, _texture2);
        }

        private void UpdateTexture(NativeArray<Cell> layer, Texture2D texture)
        {
            NativeArray<float4> nativePixels = new NativeArray<float4>(layer.Length, Allocator.TempJob);

            GridUpdateTexture gridUpdateTextureJob = new GridUpdateTexture()
            {
                pixels = nativePixels,
                cells = layer
            };

            JobHandle jobHandle = gridUpdateTextureJob.Schedule(layer.Length, 4);

            jobHandle.Complete();

            texture.LoadRawTextureData(nativePixels);

            texture.Apply(false, false);

            nativePixels.Dispose();
        }

        public WorldSettings GetSettings()
        {
            return _worldSettings;
        }

        public void ApplySettings(WorldSettings worldSettings)
        {
            _worldSettings = worldSettings;
        }

        public Texture2D[] GetTextures()
        {
            return new Texture2D[]{
                _texture1,
                _texture2
            };
        }

        public void Dispose()
        {
            _layer1.Dispose();
            _layer2.Dispose();
            _layer3.Dispose();
        }
    }

    public struct Cell
    {
        private readonly int _index;
        private AutomatonState _state;

        public Cell(int index, AutomatonState state)
        {
            _index = index;
            _state = state;
        }
        public int GetIndex()
        {
            return _index;
        }

        public AutomatonState GetState()
        {
            return _state;
        }

        public void SetState(AutomatonState state)
        {
            _state = state;
        }
    }
}
