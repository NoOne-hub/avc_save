﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.UI.Composition.2.h"
#include "winrt/impl/Windows.UI.Composition.Desktop.2.h"
#include "winrt/Windows.UI.Composition.h"

namespace winrt::impl {

template <typename D> bool consume_Windows_UI_Composition_Desktop_IDesktopWindowTarget<D>::IsTopmost() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Desktop::IDesktopWindowTarget)->get_IsTopmost(&value));
    return value;
}

template <typename D>
struct produce<D, Windows::UI::Composition::Desktop::IDesktopWindowTarget> : produce_base<D, Windows::UI::Composition::Desktop::IDesktopWindowTarget>
{
    HRESULT __stdcall get_IsTopmost(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsTopmost());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Composition::Desktop {

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Composition::Desktop::IDesktopWindowTarget> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Desktop::IDesktopWindowTarget> {};
template<> struct hash<winrt::Windows::UI::Composition::Desktop::DesktopWindowTarget> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Desktop::DesktopWindowTarget> {};

}

WINRT_WARNING_POP
