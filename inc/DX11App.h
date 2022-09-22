#pragma once
#include "Window.h"

class DX11App
{   //=======================================================싱글톤
    SINGLETON(DX11App);
private:
    DX11App();
    ~DX11App();
private:
    //=======================================================디바이스
    ComPtr<ID3D11Device>           dx11Device;
    ComPtr<ID3D11DeviceContext>    dx11Context;
    ComPtr<IDXGIFactory>           dxgiFactory;
    ComPtr<IDXGISwapChain>         dx11SwapChain;      
    ComPtr<ID3D11RenderTargetView> dx11RTView;
    D3D11_VIEWPORT                 viewport;   
public:
    //=======================================================값반환 함수
    ID3D11Device*           GetDevice()           { return dx11Device.Get(); }
    ID3D11DeviceContext*    GetDeviceContext()    { return dx11Context.Get(); }
    IDXGIFactory*           GetFactory()          { return dxgiFactory.Get(); }
    IDXGISwapChain*         GetSwapChain()        { return dx11SwapChain.Get(); }
    ID3D11RenderTargetView* GetRenderTargetView() { return dx11RTView.Get(); }
    D3D11_VIEWPORT          GetViewPort()         { return viewport; }

public:
    bool Init(POINT _WndSize, HWND _hWnd);
    void Frame();
    void Clear();
    void Render();
    void Release();
};

#define DXAPP_INSTANCE DX11App::GetInst()
