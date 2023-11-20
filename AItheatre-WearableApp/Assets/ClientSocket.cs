using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using System.Net.Sockets;
using System.Text;
using TMPro;
using Unity.Networking.Transport;
using UnityEngine.UI;

public class ClientSocket : MonoBehaviour
{
    private TcpClient _client;
    [SerializeField] private string _host = "";
    [SerializeField] private int _port = 8000;

    public NetworkStream Stream;
    [SerializeField] private TextMeshProUGUI _exceptionText;
    [SerializeField] private TextMeshProUGUI _hostIPAddressText;
    [SerializeField] private TextMeshProUGUI _portText;

    [SerializeField] private TMP_InputField _hostIPAddressInputField;
    [SerializeField] private TMP_InputField _portInputField;
    [SerializeField] private Button _submitButton;
    private bool _handRaised;

    private void Start()
    {
        _submitButton.onClick.AddListener(() =>
        {
            _host = _hostIPAddressInputField.text;
            int.TryParse(_portInputField.text, out _port);
            SetupClient();
        });
        _hostIPAddressInputField.onSubmit.AddListener((arg) => SetupClient(arg));
        _portInputField.onSubmit.AddListener((arg) => SetupClient(arg));
        SetupClient();
    }

    private void SetupClient(string ipAddress = "empty", int port = -1)
    {
        if (ipAddress != "empty")
            _host = ipAddress;
        if (port != -1)
            _port = port;
            
        _hostIPAddressText.SetText($"Current host: {_host}");
        _portText.SetText($"Port: {_port.ToString()}");
        
        try
        {
            _client = new TcpClient(_host, _port);
            Stream = _client.GetStream();
            
            _exceptionText.SetText("Connected to server");
        }
        catch(Exception e)
        {
            _exceptionText.text += $"\nError while setting up client: {e}";
        }
    }

    public void SendDataToServer(string data)
    {
        if (data == "Raise hand" && _handRaised)
            return;
        if (data == "Raise hand")
            _handRaised = true;

        if (data == "Lower hand" && !_handRaised)
            return;
        if (data == "Lower hand")
            _handRaised = false;

        try
        {
            byte[] dataBytes = Encoding.UTF8.GetBytes(data);
            Stream.Write(dataBytes, 0, dataBytes.Length);
        }
        catch (Exception e)
        {
            Debug.Log($"Error sending data: {e}");
        }
    }

    private void OnDestroy()
    {
        if(_client!= null)
            _client.Close();
    }
}
