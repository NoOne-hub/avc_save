﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Devices.Radios.2.h"
#include "winrt/Windows.Devices.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Radios::RadioAccessStatus> consume_Windows_Devices_Radios_IRadio<D>::SetStateAsync(Windows::Devices::Radios::RadioState const& value) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Radios::RadioAccessStatus> retval{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Radios::IRadio)->SetStateAsync(get_abi(value), put_abi(retval)));
    return retval;
}

template <typename D> event_token consume_Windows_Devices_Radios_IRadio<D>::StateChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Radios::Radio, Windows::Foundation::IInspectable> const& handler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Devices::Radios::IRadio)->add_StateChanged(get_abi(handler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Devices::Radios::IRadio> consume_Windows_Devices_Radios_IRadio<D>::StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Radios::Radio, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Radios::IRadio>(this, &abi_t<Windows::Devices::Radios::IRadio>::remove_StateChanged, StateChanged(handler));
}

template <typename D> void consume_Windows_Devices_Radios_IRadio<D>::StateChanged(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Radios::IRadio)->remove_StateChanged(get_abi(eventCookie)));
}

template <typename D> Windows::Devices::Radios::RadioState consume_Windows_Devices_Radios_IRadio<D>::State() const
{
    Windows::Devices::Radios::RadioState value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Radios::IRadio)->get_State(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Radios_IRadio<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Radios::IRadio)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Radios::RadioKind consume_Windows_Devices_Radios_IRadio<D>::Kind() const
{
    Windows::Devices::Radios::RadioKind value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Radios::IRadio)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Radios::Radio>> consume_Windows_Devices_Radios_IRadioStatics<D>::GetRadiosAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Radios::Radio>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Radios::IRadioStatics)->GetRadiosAsync(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Radios_IRadioStatics<D>::GetDeviceSelector() const
{
    hstring deviceSelector{};
    check_hresult(WINRT_SHIM(Windows::Devices::Radios::IRadioStatics)->GetDeviceSelector(put_abi(deviceSelector)));
    return deviceSelector;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Radios::Radio> consume_Windows_Devices_Radios_IRadioStatics<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Radios::Radio> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Radios::IRadioStatics)->FromIdAsync(get_abi(deviceId), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Radios::RadioAccessStatus> consume_Windows_Devices_Radios_IRadioStatics<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Radios::RadioAccessStatus> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Radios::IRadioStatics)->RequestAccessAsync(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Devices::Radios::IRadio> : produce_base<D, Windows::Devices::Radios::IRadio>
{
    HRESULT __stdcall SetStateAsync(Windows::Devices::Radios::RadioState value, void** retval) noexcept final
    {
        try
        {
            *retval = nullptr;
            typename D::abi_guard guard(this->shim());
            *retval = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Radios::RadioAccessStatus>>(this->shim().SetStateAsync(*reinterpret_cast<Windows::Devices::Radios::RadioState const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_StateChanged(void* handler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().StateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Radios::Radio, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_StateChanged(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StateChanged(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_State(Windows::Devices::Radios::RadioState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Radios::RadioState>(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Name(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(Windows::Devices::Radios::RadioKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Radios::RadioKind>(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Radios::IRadioStatics> : produce_base<D, Windows::Devices::Radios::IRadioStatics>
{
    HRESULT __stdcall GetRadiosAsync(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Radios::Radio>>>(this->shim().GetRadiosAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelector(HSTRING* deviceSelector) noexcept final
    {
        try
        {
            *deviceSelector = nullptr;
            typename D::abi_guard guard(this->shim());
            *deviceSelector = detach_from<hstring>(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING deviceId, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Radios::Radio>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestAccessAsync(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Radios::RadioAccessStatus>>(this->shim().RequestAccessAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::Radios {

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Radios::Radio>> Radio::GetRadiosAsync()
{
    return get_activation_factory<Radio, Windows::Devices::Radios::IRadioStatics>().GetRadiosAsync();
}

inline hstring Radio::GetDeviceSelector()
{
    return get_activation_factory<Radio, Windows::Devices::Radios::IRadioStatics>().GetDeviceSelector();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Radios::Radio> Radio::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<Radio, Windows::Devices::Radios::IRadioStatics>().FromIdAsync(deviceId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Radios::RadioAccessStatus> Radio::RequestAccessAsync()
{
    return get_activation_factory<Radio, Windows::Devices::Radios::IRadioStatics>().RequestAccessAsync();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Radios::IRadio> : winrt::impl::hash_base<winrt::Windows::Devices::Radios::IRadio> {};
template<> struct hash<winrt::Windows::Devices::Radios::IRadioStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Radios::IRadioStatics> {};
template<> struct hash<winrt::Windows::Devices::Radios::Radio> : winrt::impl::hash_base<winrt::Windows::Devices::Radios::Radio> {};

}

WINRT_WARNING_POP
