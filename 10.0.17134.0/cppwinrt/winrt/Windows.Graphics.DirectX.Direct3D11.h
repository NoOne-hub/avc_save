﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Graphics.DirectX.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.2.h"
#include "winrt/Windows.Graphics.DirectX.h"

namespace winrt::impl {

template <typename D> void consume_Windows_Graphics_DirectX_Direct3D11_IDirect3DDevice<D>::Trim() const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice)->Trim());
}

template <typename D> Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription consume_Windows_Graphics_DirectX_Direct3D11_IDirect3DSurface<D>::Description() const
{
    Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface)->get_Description(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice> : produce_base<D, Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice>
{
    HRESULT __stdcall Trim() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Trim();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface> : produce_base<D, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>
{
    HRESULT __stdcall get_Description(struct struct_Windows_Graphics_DirectX_Direct3D11_Direct3DSurfaceDescription* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription>(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX::Direct3D11 {

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice> : winrt::impl::hash_base<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice> {};
template<> struct hash<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface> : winrt::impl::hash_base<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface> {};

}

WINRT_WARNING_POP
