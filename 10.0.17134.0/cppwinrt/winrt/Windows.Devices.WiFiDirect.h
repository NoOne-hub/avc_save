﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Devices.Enumeration.2.h"
#include "winrt/impl/Windows.Networking.2.h"
#include "winrt/impl/Windows.Security.Credentials.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Devices.WiFiDirect.2.h"
#include "winrt/Windows.Devices.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement> consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisement<D>::InformationElements() const
{
    Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement)->get_InformationElements(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisement<D>::InformationElements(param::vector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement)->put_InformationElements(get_abi(value)));
}

template <typename D> Windows::Devices::WiFiDirect::WiFiDirectAdvertisementListenStateDiscoverability consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisement<D>::ListenStateDiscoverability() const
{
    Windows::Devices::WiFiDirect::WiFiDirectAdvertisementListenStateDiscoverability value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement)->get_ListenStateDiscoverability(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisement<D>::ListenStateDiscoverability(Windows::Devices::WiFiDirect::WiFiDirectAdvertisementListenStateDiscoverability const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement)->put_ListenStateDiscoverability(get_abi(value)));
}

template <typename D> bool consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisement<D>::IsAutonomousGroupOwnerEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement)->get_IsAutonomousGroupOwnerEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisement<D>::IsAutonomousGroupOwnerEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement)->put_IsAutonomousGroupOwnerEnabled(value));
}

template <typename D> Windows::Devices::WiFiDirect::WiFiDirectLegacySettings consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisement<D>::LegacySettings() const
{
    Windows::Devices::WiFiDirect::WiFiDirectLegacySettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement)->get_LegacySettings(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod> consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisement2<D>::SupportedConfigurationMethods() const
{
    Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement2)->get_SupportedConfigurationMethods(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::WiFiDirect::WiFiDirectAdvertisement consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisementPublisher<D>::Advertisement() const
{
    Windows::Devices::WiFiDirect::WiFiDirectAdvertisement value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher)->get_Advertisement(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatus consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisementPublisher<D>::Status() const
{
    Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher)->get_Status(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisementPublisher<D>::StatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisher, Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatusChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher)->add_StatusChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher> consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisementPublisher<D>::StatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisher, Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatusChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher>(this, &abi_t<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher>::remove_StatusChanged, StatusChanged(handler));
}

template <typename D> void consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisementPublisher<D>::StatusChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher)->remove_StatusChanged(get_abi(token)));
}

template <typename D> void consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisementPublisher<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher)->Start());
}

template <typename D> void consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisementPublisher<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher)->Stop());
}

template <typename D> Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatus consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisementPublisherStatusChangedEventArgs<D>::Status() const
{
    Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::WiFiDirect::WiFiDirectError consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisementPublisherStatusChangedEventArgs<D>::Error() const
{
    Windows::Devices::WiFiDirect::WiFiDirectError value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs)->get_Error(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionListener<D>::ConnectionRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectConnectionListener, Windows::Devices::WiFiDirect::WiFiDirectConnectionRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener)->add_ConnectionRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener> consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionListener<D>::ConnectionRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectConnectionListener, Windows::Devices::WiFiDirect::WiFiDirectConnectionRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener>(this, &abi_t<Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener>::remove_ConnectionRequested, ConnectionRequested(handler));
}

template <typename D> void consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionListener<D>::ConnectionRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener)->remove_ConnectionRequested(get_abi(token)));
}

template <typename D> int16_t consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionParameters<D>::GroupOwnerIntent() const
{
    int16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters)->get_GroupOwnerIntent(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionParameters<D>::GroupOwnerIntent(int16_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters)->put_GroupOwnerIntent(value));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod> consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionParameters2<D>::PreferenceOrderedConfigurationMethods() const
{
    Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters2)->get_PreferenceOrderedConfigurationMethods(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::WiFiDirect::WiFiDirectPairingProcedure consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionParameters2<D>::PreferredPairingProcedure() const
{
    Windows::Devices::WiFiDirect::WiFiDirectPairingProcedure value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters2)->get_PreferredPairingProcedure(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionParameters2<D>::PreferredPairingProcedure(Windows::Devices::WiFiDirect::WiFiDirectPairingProcedure const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters2)->put_PreferredPairingProcedure(get_abi(value)));
}

template <typename D> Windows::Devices::Enumeration::DevicePairingKinds consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionParametersStatics<D>::GetDevicePairingKinds(Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod const& configurationMethod) const
{
    Windows::Devices::Enumeration::DevicePairingKinds result{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectConnectionParametersStatics)->GetDevicePairingKinds(get_abi(configurationMethod), put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::Enumeration::DeviceInformation consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionRequest<D>::DeviceInformation() const
{
    Windows::Devices::Enumeration::DeviceInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest)->get_DeviceInformation(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::WiFiDirect::WiFiDirectConnectionRequest consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionRequestedEventArgs<D>::GetConnectionRequest() const
{
    Windows::Devices::WiFiDirect::WiFiDirectConnectionRequest result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequestedEventArgs)->GetConnectionRequest(put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::WiFiDirect::WiFiDirectConnectionStatus consume_Windows_Devices_WiFiDirect_IWiFiDirectDevice<D>::ConnectionStatus() const
{
    Windows::Devices::WiFiDirect::WiFiDirectConnectionStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectDevice)->get_ConnectionStatus(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_WiFiDirect_IWiFiDirectDevice<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectDevice)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_WiFiDirect_IWiFiDirectDevice<D>::ConnectionStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectDevice, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectDevice)->add_ConnectionStatusChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::WiFiDirect::IWiFiDirectDevice> consume_Windows_Devices_WiFiDirect_IWiFiDirectDevice<D>::ConnectionStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectDevice, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::WiFiDirect::IWiFiDirectDevice>(this, &abi_t<Windows::Devices::WiFiDirect::IWiFiDirectDevice>::remove_ConnectionStatusChanged, ConnectionStatusChanged(handler));
}

template <typename D> void consume_Windows_Devices_WiFiDirect_IWiFiDirectDevice<D>::ConnectionStatusChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectDevice)->remove_ConnectionStatusChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair> consume_Windows_Devices_WiFiDirect_IWiFiDirectDevice<D>::GetConnectionEndpointPairs() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectDevice)->GetConnectionEndpointPairs(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_WiFiDirect_IWiFiDirectDeviceStatics<D>::GetDeviceSelector() const
{
    hstring deviceSelector{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics)->GetDeviceSelector(put_abi(deviceSelector)));
    return deviceSelector;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::WiFiDirectDevice> consume_Windows_Devices_WiFiDirect_IWiFiDirectDeviceStatics<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::WiFiDirectDevice> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics)->FromIdAsync(get_abi(deviceId), put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> hstring consume_Windows_Devices_WiFiDirect_IWiFiDirectDeviceStatics2<D>::GetDeviceSelector(Windows::Devices::WiFiDirect::WiFiDirectDeviceSelectorType const& type) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics2)->GetDeviceSelector(get_abi(type), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::WiFiDirectDevice> consume_Windows_Devices_WiFiDirect_IWiFiDirectDeviceStatics2<D>::FromIdAsync(param::hstring const& deviceId, Windows::Devices::WiFiDirect::WiFiDirectConnectionParameters const& connectionParameters) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::WiFiDirectDevice> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics2)->FromIdAsync(get_abi(deviceId), get_abi(connectionParameters), put_abi(result)));
    return result;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_WiFiDirect_IWiFiDirectInformationElement<D>::Oui() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectInformationElement)->get_Oui(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_WiFiDirect_IWiFiDirectInformationElement<D>::Oui(Windows::Storage::Streams::IBuffer const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectInformationElement)->put_Oui(get_abi(value)));
}

template <typename D> uint8_t consume_Windows_Devices_WiFiDirect_IWiFiDirectInformationElement<D>::OuiType() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectInformationElement)->get_OuiType(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_WiFiDirect_IWiFiDirectInformationElement<D>::OuiType(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectInformationElement)->put_OuiType(value));
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_WiFiDirect_IWiFiDirectInformationElement<D>::Value() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectInformationElement)->get_Value(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_WiFiDirect_IWiFiDirectInformationElement<D>::Value(Windows::Storage::Streams::IBuffer const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectInformationElement)->put_Value(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement> consume_Windows_Devices_WiFiDirect_IWiFiDirectInformationElementStatics<D>::CreateFromBuffer(Windows::Storage::Streams::IBuffer const& buffer) const
{
    Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectInformationElementStatics)->CreateFromBuffer(get_abi(buffer), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement> consume_Windows_Devices_WiFiDirect_IWiFiDirectInformationElementStatics<D>::CreateFromDeviceInformation(Windows::Devices::Enumeration::DeviceInformation const& deviceInformation) const
{
    Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectInformationElementStatics)->CreateFromDeviceInformation(get_abi(deviceInformation), put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Devices_WiFiDirect_IWiFiDirectLegacySettings<D>::IsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings)->get_IsEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_WiFiDirect_IWiFiDirectLegacySettings<D>::IsEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings)->put_IsEnabled(value));
}

template <typename D> hstring consume_Windows_Devices_WiFiDirect_IWiFiDirectLegacySettings<D>::Ssid() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings)->get_Ssid(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_WiFiDirect_IWiFiDirectLegacySettings<D>::Ssid(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings)->put_Ssid(get_abi(value)));
}

template <typename D> Windows::Security::Credentials::PasswordCredential consume_Windows_Devices_WiFiDirect_IWiFiDirectLegacySettings<D>::Passphrase() const
{
    Windows::Security::Credentials::PasswordCredential value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings)->get_Passphrase(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_WiFiDirect_IWiFiDirectLegacySettings<D>::Passphrase(Windows::Security::Credentials::PasswordCredential const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings)->put_Passphrase(get_abi(value)));
}

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement>
{
    HRESULT __stdcall get_InformationElements(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement>>(this->shim().InformationElements());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_InformationElements(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InformationElements(*reinterpret_cast<Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ListenStateDiscoverability(Windows::Devices::WiFiDirect::WiFiDirectAdvertisementListenStateDiscoverability* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementListenStateDiscoverability>(this->shim().ListenStateDiscoverability());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ListenStateDiscoverability(Windows::Devices::WiFiDirect::WiFiDirectAdvertisementListenStateDiscoverability value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ListenStateDiscoverability(*reinterpret_cast<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementListenStateDiscoverability const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsAutonomousGroupOwnerEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsAutonomousGroupOwnerEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsAutonomousGroupOwnerEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsAutonomousGroupOwnerEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LegacySettings(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::WiFiDirect::WiFiDirectLegacySettings>(this->shim().LegacySettings());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement2> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement2>
{
    HRESULT __stdcall get_SupportedConfigurationMethods(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod>>(this->shim().SupportedConfigurationMethods());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher>
{
    HRESULT __stdcall get_Advertisement(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::WiFiDirect::WiFiDirectAdvertisement>(this->shim().Advertisement());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_StatusChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().StatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisher, Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatusChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_StatusChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StatusChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Start() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs>
{
    HRESULT __stdcall get_Status(Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Error(Windows::Devices::WiFiDirect::WiFiDirectError* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::WiFiDirect::WiFiDirectError>(this->shim().Error());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener>
{
    HRESULT __stdcall add_ConnectionRequested(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ConnectionRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectConnectionListener, Windows::Devices::WiFiDirect::WiFiDirectConnectionRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ConnectionRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConnectionRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters>
{
    HRESULT __stdcall get_GroupOwnerIntent(int16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int16_t>(this->shim().GroupOwnerIntent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_GroupOwnerIntent(int16_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GroupOwnerIntent(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters2> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters2>
{
    HRESULT __stdcall get_PreferenceOrderedConfigurationMethods(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod>>(this->shim().PreferenceOrderedConfigurationMethods());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PreferredPairingProcedure(Windows::Devices::WiFiDirect::WiFiDirectPairingProcedure* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::WiFiDirect::WiFiDirectPairingProcedure>(this->shim().PreferredPairingProcedure());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PreferredPairingProcedure(Windows::Devices::WiFiDirect::WiFiDirectPairingProcedure value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PreferredPairingProcedure(*reinterpret_cast<Windows::Devices::WiFiDirect::WiFiDirectPairingProcedure const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectConnectionParametersStatics> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectConnectionParametersStatics>
{
    HRESULT __stdcall GetDevicePairingKinds(Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod configurationMethod, Windows::Devices::Enumeration::DevicePairingKinds* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Enumeration::DevicePairingKinds>(this->shim().GetDevicePairingKinds(*reinterpret_cast<Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod const*>(&configurationMethod)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest>
{
    HRESULT __stdcall get_DeviceInformation(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Enumeration::DeviceInformation>(this->shim().DeviceInformation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequestedEventArgs> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequestedEventArgs>
{
    HRESULT __stdcall GetConnectionRequest(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::WiFiDirect::WiFiDirectConnectionRequest>(this->shim().GetConnectionRequest());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectDevice> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectDevice>
{
    HRESULT __stdcall get_ConnectionStatus(Windows::Devices::WiFiDirect::WiFiDirectConnectionStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::WiFiDirect::WiFiDirectConnectionStatus>(this->shim().ConnectionStatus());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

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

    HRESULT __stdcall add_ConnectionStatusChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ConnectionStatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectDevice, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ConnectionStatusChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConnectionStatusChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetConnectionEndpointPairs(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>>(this->shim().GetConnectionEndpointPairs());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics>
{
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

    HRESULT __stdcall FromIdAsync(HSTRING deviceId, void** asyncOp) noexcept final
    {
        try
        {
            *asyncOp = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::WiFiDirectDevice>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics2> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics2>
{
    HRESULT __stdcall GetDeviceSelector(Windows::Devices::WiFiDirect::WiFiDirectDeviceSelectorType type, HSTRING* result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetDeviceSelector(*reinterpret_cast<Windows::Devices::WiFiDirect::WiFiDirectDeviceSelectorType const*>(&type)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING deviceId, void* connectionParameters, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::WiFiDirectDevice>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<Windows::Devices::WiFiDirect::WiFiDirectConnectionParameters const*>(&connectionParameters)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectInformationElement> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectInformationElement>
{
    HRESULT __stdcall get_Oui(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().Oui());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Oui(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Oui(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OuiType(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().OuiType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_OuiType(uint8_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OuiType(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Value(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Value(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectInformationElementStatics> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectInformationElementStatics>
{
    HRESULT __stdcall CreateFromBuffer(void* buffer, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement>>(this->shim().CreateFromBuffer(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFromDeviceInformation(void* deviceInformation, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement>>(this->shim().CreateFromDeviceInformation(*reinterpret_cast<Windows::Devices::Enumeration::DeviceInformation const*>(&deviceInformation)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings>
{
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

    HRESULT __stdcall get_Ssid(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Ssid());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Ssid(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Ssid(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Passphrase(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Credentials::PasswordCredential>(this->shim().Passphrase());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Passphrase(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Passphrase(*reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::WiFiDirect {

inline WiFiDirectAdvertisementPublisher::WiFiDirectAdvertisementPublisher() :
    WiFiDirectAdvertisementPublisher(get_activation_factory<WiFiDirectAdvertisementPublisher>().ActivateInstance<WiFiDirectAdvertisementPublisher>())
{}

inline WiFiDirectConnectionListener::WiFiDirectConnectionListener() :
    WiFiDirectConnectionListener(get_activation_factory<WiFiDirectConnectionListener>().ActivateInstance<WiFiDirectConnectionListener>())
{}

inline WiFiDirectConnectionParameters::WiFiDirectConnectionParameters() :
    WiFiDirectConnectionParameters(get_activation_factory<WiFiDirectConnectionParameters>().ActivateInstance<WiFiDirectConnectionParameters>())
{}

inline Windows::Devices::Enumeration::DevicePairingKinds WiFiDirectConnectionParameters::GetDevicePairingKinds(Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod const& configurationMethod)
{
    return get_activation_factory<WiFiDirectConnectionParameters, Windows::Devices::WiFiDirect::IWiFiDirectConnectionParametersStatics>().GetDevicePairingKinds(configurationMethod);
}

inline hstring WiFiDirectDevice::GetDeviceSelector()
{
    return get_activation_factory<WiFiDirectDevice, Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics>().GetDeviceSelector();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::WiFiDirectDevice> WiFiDirectDevice::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<WiFiDirectDevice, Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics>().FromIdAsync(deviceId);
}

inline hstring WiFiDirectDevice::GetDeviceSelector(Windows::Devices::WiFiDirect::WiFiDirectDeviceSelectorType const& type)
{
    return get_activation_factory<WiFiDirectDevice, Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics2>().GetDeviceSelector(type);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::WiFiDirectDevice> WiFiDirectDevice::FromIdAsync(param::hstring const& deviceId, Windows::Devices::WiFiDirect::WiFiDirectConnectionParameters const& connectionParameters)
{
    return get_activation_factory<WiFiDirectDevice, Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics2>().FromIdAsync(deviceId, connectionParameters);
}

inline WiFiDirectInformationElement::WiFiDirectInformationElement() :
    WiFiDirectInformationElement(get_activation_factory<WiFiDirectInformationElement>().ActivateInstance<WiFiDirectInformationElement>())
{}

inline Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement> WiFiDirectInformationElement::CreateFromBuffer(Windows::Storage::Streams::IBuffer const& buffer)
{
    return get_activation_factory<WiFiDirectInformationElement, Windows::Devices::WiFiDirect::IWiFiDirectInformationElementStatics>().CreateFromBuffer(buffer);
}

inline Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement> WiFiDirectInformationElement::CreateFromDeviceInformation(Windows::Devices::Enumeration::DeviceInformation const& deviceInformation)
{
    return get_activation_factory<WiFiDirectInformationElement, Windows::Devices::WiFiDirect::IWiFiDirectInformationElementStatics>().CreateFromDeviceInformation(deviceInformation);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement> : winrt::impl::hash_base<winrt::Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement> {};
template<> struct hash<winrt::Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement2> : winrt::impl::hash_base<winrt::Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement2> {};
template<> struct hash<winrt::Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher> : winrt::impl::hash_base<winrt::Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher> {};
template<> struct hash<winrt::Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener> : winrt::impl::hash_base<winrt::Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener> {};
template<> struct hash<winrt::Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters> : winrt::impl::hash_base<winrt::Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters> {};
template<> struct hash<winrt::Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters2> : winrt::impl::hash_base<winrt::Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters2> {};
template<> struct hash<winrt::Windows::Devices::WiFiDirect::IWiFiDirectConnectionParametersStatics> : winrt::impl::hash_base<winrt::Windows::Devices::WiFiDirect::IWiFiDirectConnectionParametersStatics> {};
template<> struct hash<winrt::Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest> : winrt::impl::hash_base<winrt::Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest> {};
template<> struct hash<winrt::Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::WiFiDirect::IWiFiDirectDevice> : winrt::impl::hash_base<winrt::Windows::Devices::WiFiDirect::IWiFiDirectDevice> {};
template<> struct hash<winrt::Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics> : winrt::impl::hash_base<winrt::Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics> {};
template<> struct hash<winrt::Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics2> : winrt::impl::hash_base<winrt::Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics2> {};
template<> struct hash<winrt::Windows::Devices::WiFiDirect::IWiFiDirectInformationElement> : winrt::impl::hash_base<winrt::Windows::Devices::WiFiDirect::IWiFiDirectInformationElement> {};
template<> struct hash<winrt::Windows::Devices::WiFiDirect::IWiFiDirectInformationElementStatics> : winrt::impl::hash_base<winrt::Windows::Devices::WiFiDirect::IWiFiDirectInformationElementStatics> {};
template<> struct hash<winrt::Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings> : winrt::impl::hash_base<winrt::Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings> {};
template<> struct hash<winrt::Windows::Devices::WiFiDirect::WiFiDirectAdvertisement> : winrt::impl::hash_base<winrt::Windows::Devices::WiFiDirect::WiFiDirectAdvertisement> {};
template<> struct hash<winrt::Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisher> : winrt::impl::hash_base<winrt::Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisher> {};
template<> struct hash<winrt::Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatusChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatusChangedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::WiFiDirect::WiFiDirectConnectionListener> : winrt::impl::hash_base<winrt::Windows::Devices::WiFiDirect::WiFiDirectConnectionListener> {};
template<> struct hash<winrt::Windows::Devices::WiFiDirect::WiFiDirectConnectionParameters> : winrt::impl::hash_base<winrt::Windows::Devices::WiFiDirect::WiFiDirectConnectionParameters> {};
template<> struct hash<winrt::Windows::Devices::WiFiDirect::WiFiDirectConnectionRequest> : winrt::impl::hash_base<winrt::Windows::Devices::WiFiDirect::WiFiDirectConnectionRequest> {};
template<> struct hash<winrt::Windows::Devices::WiFiDirect::WiFiDirectConnectionRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::WiFiDirect::WiFiDirectConnectionRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::WiFiDirect::WiFiDirectDevice> : winrt::impl::hash_base<winrt::Windows::Devices::WiFiDirect::WiFiDirectDevice> {};
template<> struct hash<winrt::Windows::Devices::WiFiDirect::WiFiDirectInformationElement> : winrt::impl::hash_base<winrt::Windows::Devices::WiFiDirect::WiFiDirectInformationElement> {};
template<> struct hash<winrt::Windows::Devices::WiFiDirect::WiFiDirectLegacySettings> : winrt::impl::hash_base<winrt::Windows::Devices::WiFiDirect::WiFiDirectLegacySettings> {};

}

WINRT_WARNING_POP
