using Devcon.CellularAutomata;
using UnityEngine;

public class AutomataTest : MonoBehaviour
{
    const float STEP_INTERVAL = 0.05f;

    public SpriteRenderer[] _spriteRenderers;

    private Sprite[] _sprites;
    private AutomatonWorldGrid _grid;
    private float _nextStep = 0;
    private int _currentMode = 0;

    public void OnEnable()
    {
        float[] values = new float[(int)WorldSettingsEnum.VAR_COUNT]
        {
            0.8f,
            0.9f,
            0.05f,
            0.9f,
            0.1667f,
            0.1667f,
            0.83333f,
            0.0275f,
            0.05f
        };

        WorldSettings settings = new WorldSettings()
        {
            values = values
        };

        _grid = new AutomatonWorldGrid(GridConstants.GRID_SIZE, GridBuildType.WorldMap, settings);

        _nextStep = Time.time + STEP_INTERVAL;
    }

    public void Update()
    {
        if (Input.GetKeyUp(KeyCode.Space))
        {
            Reset();
            return;
        }

        if (Input.GetKeyUp(KeyCode.M))
        {
            ++_currentMode;

            if (_currentMode > 4)
                _currentMode = 0;

            SetMode(_currentMode);
            return;
        }

        if (Time.time < _nextStep)
            return;

        _grid.Step();

        ApplyTextures();

        _nextStep = Time.time + STEP_INTERVAL;
    }

    private void SetMode(int mode)
    {
        _grid.SetMode(mode);
    }

    private void ApplyTextures()
    {
        Texture2D[] textures = _grid.GetTextures();

        _sprites = new Sprite[textures.Length];

        for (int i = 0; i < _sprites.Length; ++i)
        {
            Texture2D texture = textures[i];
            Sprite sprite = Sprite.Create(texture, new Rect(0.0f, 0.0f, texture.width, texture.height), new Vector2(0.5f, 0.5f), ((float)GridConstants.GRID_SIZE / 1024f) * 64f, 0, SpriteMeshType.FullRect);

            _sprites[i] = sprite;

            if (i < _spriteRenderers.Length - 1)
                _spriteRenderers[i].sprite = sprite;
        }
    }

    public void Reset()
    {
        _grid.Dispose();
        _grid.Build(GridConstants.GRID_SIZE);
    }
}