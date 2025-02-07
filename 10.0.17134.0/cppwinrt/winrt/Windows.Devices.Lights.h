﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Devices.Lights.2.h"
#include "winrt/Windows.Devices.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Devices_Lights_ILamp<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Lights::ILamp)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Lights_ILamp<D>::IsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Lights::ILamp)->get_IsEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Lights_ILamp<D>::IsEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Lights::ILamp)->put_IsEnabled(value));
}

template <typename D> float consume_Windows_Devices_Lights_ILamp<D>::BrightnessLevel() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Lights::ILamp)->get_BrightnessLevel(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Lights_ILamp<D>::BrightnessLevel(float value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Lights::ILamp)->put_BrightnessLevel(value));
}

template <typename D> bool consume_Windows_Devices_Lights_ILamp<D>::IsColorSettable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Lights::ILamp)->get_IsColorSettable(&value));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_Devices_Lights_ILamp<D>::Color() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Lights::ILamp)->get_Color(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Lights_ILamp<D>::Color(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Lights::ILamp)->put_Color(get_abi(value)));
}

template <typename D> event_token consume_Windows_Devices_Lights_ILamp<D>::AvailabilityChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Lights::Lamp, Windows::Devices::Lights::LampAvailabilityChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Lights::ILamp)->add_AvailabilityChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Lights::ILamp> consume_Windows_Devices_Lights_ILamp<D>::AvailabilityChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Lights::Lamp, Windows::Devices::Lights::LampAvailabilityChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Lights::ILamp>(this, &abi_t<Windows::Devices::Lights::ILamp>::remove_AvailabilityChanged, AvailabilityChanged(handler));
}

template <typename D> void consume_Windows_Devices_Lights_ILamp<D>::AvailabilityChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Lights::ILamp)->remove_AvailabilityChanged(get_abi(token)));
}

template <typename D> bool consume_Windows_Devices_Lights_ILampAvailabilityChangedEventArgs<D>::IsAvailable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Lights::ILampAvailabilityChangedEventArgs)->get_IsAvailable(&value));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Lights_ILampStatics<D>::GetDeviceSelector() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Lights::ILampStatics)->GetDeviceSelector(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::Lamp> consume_Windows_Devices_Lights_ILampStatics<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::Lamp> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Lights::ILampStatics)->FromIdAsync(get_abi(deviceId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::Lamp> consume_Windows_Devices_Lights_ILampStatics<D>::GetDefaultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::Lamp> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Lights::ILampStatics)->GetDefaultAsync(put_abi(operation)));
    return operation;
}

template <typename D>
struct produce<D, Windows::Devices::Lights::ILamp> : produce_base<D, Windows::Devices::Lights::ILamp>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BrightnessLevel(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().BrightnessLevel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_BrightnessLevel(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BrightnessLevel(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsColorSettable(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsColorSettable());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Color(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Color());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Color(struct struct_Windows_UI_Color value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Color(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_AvailabilityChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().AvailabilityChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Lights::Lamp, Windows::Devices::Lights::LampAvailabilityChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_AvailabilityChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AvailabilityChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Lights::ILampAvailabilityChangedEventArgs> : produce_base<D, Windows::Devices::Lights::ILampAvailabilityChangedEventArgs>
{
    HRESULT __stdcall get_IsAvailable(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsAvailable());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Lights::ILampStatics> : produce_base<D, Windows::Devices::Lights::ILampStatics>
{
    HRESULT __stdcall GetDeviceSelector(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING deviceId, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::Lamp>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDefaultAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::Lamp>>(this->shim().GetDefaultAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::Lights {

inline hstring Lamp::GetDeviceSelector()
{
    return get_activation_factory<Lamp, Windows::Devices::Lights::ILampStatics>().GetDeviceSelector();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::Lamp> Lamp::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<Lamp, Windows::Devices::Lights::ILampStatics>().FromIdAsync(deviceId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::Lamp> Lamp::GetDefaultAsync()
{
    return get_activation_factory<Lamp, Windows::Devices::Lights::ILampStatics>().GetDefaultAsync();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Lights::ILamp> : winrt::impl::hash_base<winrt::Windows::Devices::Lights::ILamp> {};
template<> struct hash<winrt::Windows::Devices::Lights::ILampAvailabilityChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Lights::ILampAvailabilityChangedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::Lights::ILampStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Lights::ILampStatics> {};
template<> struct hash<winrt::Windows::Devices::Lights::Lamp> : winrt::impl::hash_base<winrt::Windows::Devices::Lights::Lamp> {};
template<> struct hash<winrt::Windows::Devices::Lights::LampAvailabilityChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Lights::LampAvailabilityChangedEventArgs> {};

}

WINRT_WARNING_POP
