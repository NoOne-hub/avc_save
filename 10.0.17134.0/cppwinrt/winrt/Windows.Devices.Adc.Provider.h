﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Devices.Adc.Provider.2.h"
#include "winrt/Windows.Devices.adc.h"

namespace winrt::impl {

template <typename D> int32_t consume_Windows_Devices_Adc_Provider_IAdcControllerProvider<D>::ChannelCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Adc::Provider::IAdcControllerProvider)->get_ChannelCount(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Adc_Provider_IAdcControllerProvider<D>::ResolutionInBits() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Adc::Provider::IAdcControllerProvider)->get_ResolutionInBits(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Adc_Provider_IAdcControllerProvider<D>::MinValue() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Adc::Provider::IAdcControllerProvider)->get_MinValue(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Adc_Provider_IAdcControllerProvider<D>::MaxValue() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Adc::Provider::IAdcControllerProvider)->get_MaxValue(&value));
    return value;
}

template <typename D> Windows::Devices::Adc::Provider::ProviderAdcChannelMode consume_Windows_Devices_Adc_Provider_IAdcControllerProvider<D>::ChannelMode() const
{
    Windows::Devices::Adc::Provider::ProviderAdcChannelMode value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Adc::Provider::IAdcControllerProvider)->get_ChannelMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Adc_Provider_IAdcControllerProvider<D>::ChannelMode(Windows::Devices::Adc::Provider::ProviderAdcChannelMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Adc::Provider::IAdcControllerProvider)->put_ChannelMode(get_abi(value)));
}

template <typename D> bool consume_Windows_Devices_Adc_Provider_IAdcControllerProvider<D>::IsChannelModeSupported(Windows::Devices::Adc::Provider::ProviderAdcChannelMode const& channelMode) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Adc::Provider::IAdcControllerProvider)->IsChannelModeSupported(get_abi(channelMode), &result));
    return result;
}

template <typename D> void consume_Windows_Devices_Adc_Provider_IAdcControllerProvider<D>::AcquireChannel(int32_t channel) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Adc::Provider::IAdcControllerProvider)->AcquireChannel(channel));
}

template <typename D> void consume_Windows_Devices_Adc_Provider_IAdcControllerProvider<D>::ReleaseChannel(int32_t channel) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Adc::Provider::IAdcControllerProvider)->ReleaseChannel(channel));
}

template <typename D> int32_t consume_Windows_Devices_Adc_Provider_IAdcControllerProvider<D>::ReadValue(int32_t channelNumber) const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Adc::Provider::IAdcControllerProvider)->ReadValue(channelNumber, &result));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Adc::Provider::IAdcControllerProvider> consume_Windows_Devices_Adc_Provider_IAdcProvider<D>::GetControllers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Adc::Provider::IAdcControllerProvider> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Adc::Provider::IAdcProvider)->GetControllers(put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Devices::Adc::Provider::IAdcControllerProvider> : produce_base<D, Windows::Devices::Adc::Provider::IAdcControllerProvider>
{
    HRESULT __stdcall get_ChannelCount(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().ChannelCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ResolutionInBits(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().ResolutionInBits());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MinValue(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().MinValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxValue(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().MaxValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ChannelMode(Windows::Devices::Adc::Provider::ProviderAdcChannelMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Adc::Provider::ProviderAdcChannelMode>(this->shim().ChannelMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ChannelMode(Windows::Devices::Adc::Provider::ProviderAdcChannelMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ChannelMode(*reinterpret_cast<Windows::Devices::Adc::Provider::ProviderAdcChannelMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsChannelModeSupported(Windows::Devices::Adc::Provider::ProviderAdcChannelMode channelMode, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsChannelModeSupported(*reinterpret_cast<Windows::Devices::Adc::Provider::ProviderAdcChannelMode const*>(&channelMode)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AcquireChannel(int32_t channel) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AcquireChannel(channel);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReleaseChannel(int32_t channel) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReleaseChannel(channel);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReadValue(int32_t channelNumber, int32_t* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().ReadValue(channelNumber));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Adc::Provider::IAdcProvider> : produce_base<D, Windows::Devices::Adc::Provider::IAdcProvider>
{
    HRESULT __stdcall GetControllers(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Adc::Provider::IAdcControllerProvider>>(this->shim().GetControllers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::Adc::Provider {

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Adc::Provider::IAdcControllerProvider> : winrt::impl::hash_base<winrt::Windows::Devices::Adc::Provider::IAdcControllerProvider> {};
template<> struct hash<winrt::Windows::Devices::Adc::Provider::IAdcProvider> : winrt::impl::hash_base<winrt::Windows::Devices::Adc::Provider::IAdcProvider> {};

}

WINRT_WARNING_POP
