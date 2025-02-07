﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Activation {

struct IActivatedEventArgs;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Preview::Holographic {

struct IHolographicApplicationPreviewStatics;
struct HolographicApplicationPreview;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Preview::Holographic::HolographicApplicationPreview>{ using type = class_category; };
template <> struct name<Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Preview.Holographic.IHolographicApplicationPreviewStatics" }; };
template <> struct name<Windows::ApplicationModel::Preview::Holographic::HolographicApplicationPreview>{ static constexpr auto & value{ L"Windows.ApplicationModel.Preview.Holographic.HolographicApplicationPreview" }; };
template <> struct guid<Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics>{ static constexpr GUID value{ 0xFE038691,0x2A3A,0x45A9,{ 0xA2,0x08,0x7B,0xED,0x69,0x19,0x19,0xF3 } }; };

template <typename D>
struct consume_Windows_ApplicationModel_Preview_Holographic_IHolographicApplicationPreviewStatics
{
    bool IsCurrentViewPresentedOnHolographicDisplay() const;
    bool IsHolographicActivation(Windows::ApplicationModel::Activation::IActivatedEventArgs const& activatedEventArgs) const;
};
template <> struct consume<Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Preview_Holographic_IHolographicApplicationPreviewStatics<D>; };

template <> struct abi<Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall IsCurrentViewPresentedOnHolographicDisplay(bool* result) noexcept = 0;
    virtual HRESULT __stdcall IsHolographicActivation(void* activatedEventArgs, bool* result) noexcept = 0;
};};

}
