using System;
using System.IO;
using System.Collections;
using System.Runtime.Serialization.Formatters.Binary;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;
using UnityEngine.Jobs;
using UnityEngine.UI;
using TMPro;
using System.Collections.Generic;

namespace Devcon.CellularAutomata
{
    public class UIWeatherSlider : MonoBehaviour
    {
        protected Slider _slider;
        protected TMP_Text _valueText;
        private UIWeatherEditor _editor;
        private WorldSettingsEnum _type;

        public void Start()
        {
            //_slider.onValueChanged;
        }

        public void OnValueChanged(float value)
        {
            _editor.UpdateSettings(_type, value);
        }

        public void RegisterEditor(UIWeatherEditor editor)
        {
            _editor = editor;
        }

        public Slider Slider { get { return _slider; } set { _slider = value; } }
        public TMP_Text ValueText { get { return _valueText; } set { _valueText = value; } }
    }

    public class UIWeatherPanel : MonoBehaviour
    {
        public UIWeatherSlider[] _sliders;
    }

    public class UIWeatherEditor : MonoBehaviour
    {
        public Button[] _buttons;
        public GameObject[] _panels;
        public AutomatonWorldGrid _grid;

        public void Start()
        {
            
        }

        public void Update()
        {
            
        }

        public void Show()
        {

        }

        public void Hide()
        {

        }

        public void UpdateSettings(WorldSettingsEnum type, float value)
        {
            WorldSettings settings = _grid.GetSettings();

            settings[type] = value;

            _grid.ApplySettings(settings);
        }

    }
}
