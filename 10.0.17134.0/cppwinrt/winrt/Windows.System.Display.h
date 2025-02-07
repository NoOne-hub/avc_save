﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.System.Display.2.h"
#include "winrt/Windows.System.h"

namespace winrt::impl {

template <typename D> void consume_Windows_System_Display_IDisplayRequest<D>::RequestActive() const
{
    check_hresult(WINRT_SHIM(Windows::System::Display::IDisplayRequest)->RequestActive());
}

template <typename D> void consume_Windows_System_Display_IDisplayRequest<D>::RequestRelease() const
{
    check_hresult(WINRT_SHIM(Windows::System::Display::IDisplayRequest)->RequestRelease());
}

template <typename D>
struct produce<D, Windows::System::Display::IDisplayRequest> : produce_base<D, Windows::System::Display::IDisplayRequest>
{
    HRESULT __stdcall RequestActive() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestActive();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestRelease() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestRelease();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::System::Display {

inline DisplayRequest::DisplayRequest() :
    DisplayRequest(get_activation_factory<DisplayRequest>().ActivateInstance<DisplayRequest>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::System::Display::IDisplayRequest> : winrt::impl::hash_base<winrt::Windows::System::Display::IDisplayRequest> {};
template<> struct hash<winrt::Windows::System::Display::DisplayRequest> : winrt::impl::hash_base<winrt::Windows::System::Display::DisplayRequest> {};

}

WINRT_WARNING_POP
