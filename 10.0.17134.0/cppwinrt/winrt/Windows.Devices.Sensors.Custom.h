﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Devices.Sensors.Custom.2.h"
#include "winrt/Windows.Devices.sensors.h"

namespace winrt::impl {

template <typename D> Windows::Devices::Sensors::Custom::CustomSensorReading consume_Windows_Devices_Sensors_Custom_ICustomSensor<D>::GetCurrentReading() const
{
    Windows::Devices::Sensors::Custom::CustomSensorReading value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::Custom::ICustomSensor)->GetCurrentReading(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_Custom_ICustomSensor<D>::MinimumReportInterval() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::Custom::ICustomSensor)->get_MinimumReportInterval(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Sensors_Custom_ICustomSensor<D>::ReportInterval(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::Custom::ICustomSensor)->put_ReportInterval(value));
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_Custom_ICustomSensor<D>::ReportInterval() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::Custom::ICustomSensor)->get_ReportInterval(&value));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sensors_Custom_ICustomSensor<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::Custom::ICustomSensor)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Sensors_Custom_ICustomSensor<D>::ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Custom::CustomSensor, Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::Custom::ICustomSensor)->add_ReadingChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Sensors::Custom::ICustomSensor> consume_Windows_Devices_Sensors_Custom_ICustomSensor<D>::ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Custom::CustomSensor, Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Sensors::Custom::ICustomSensor>(this, &abi_t<Windows::Devices::Sensors::Custom::ICustomSensor>::remove_ReadingChanged, ReadingChanged(handler));
}

template <typename D> void consume_Windows_Devices_Sensors_Custom_ICustomSensor<D>::ReadingChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::Custom::ICustomSensor)->remove_ReadingChanged(get_abi(token)));
}

template <typename D> void consume_Windows_Devices_Sensors_Custom_ICustomSensor2<D>::ReportLatency(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::Custom::ICustomSensor2)->put_ReportLatency(value));
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_Custom_ICustomSensor2<D>::ReportLatency() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::Custom::ICustomSensor2)->get_ReportLatency(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Sensors_Custom_ICustomSensor2<D>::MaxBatchSize() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::Custom::ICustomSensor2)->get_MaxBatchSize(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Sensors_Custom_ICustomSensorReading<D>::Timestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::Custom::ICustomSensorReading)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_Devices_Sensors_Custom_ICustomSensorReading<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::Custom::ICustomSensorReading)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Devices_Sensors_Custom_ICustomSensorReading2<D>::PerformanceCount() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::Custom::ICustomSensorReading2)->get_PerformanceCount(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sensors::Custom::CustomSensorReading consume_Windows_Devices_Sensors_Custom_ICustomSensorReadingChangedEventArgs<D>::Reading() const
{
    Windows::Devices::Sensors::Custom::CustomSensorReading value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs)->get_Reading(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sensors_Custom_ICustomSensorStatics<D>::GetDeviceSelector(GUID const& interfaceId) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::Custom::ICustomSensorStatics)->GetDeviceSelector(get_abi(interfaceId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Custom::CustomSensor> consume_Windows_Devices_Sensors_Custom_ICustomSensorStatics<D>::FromIdAsync(param::hstring const& sensorId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Custom::CustomSensor> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sensors::Custom::ICustomSensorStatics)->FromIdAsync(get_abi(sensorId), put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Devices::Sensors::Custom::ICustomSensor> : produce_base<D, Windows::Devices::Sensors::Custom::ICustomSensor>
{
    HRESULT __stdcall GetCurrentReading(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Sensors::Custom::CustomSensorReading>(this->shim().GetCurrentReading());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MinimumReportInterval(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MinimumReportInterval());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ReportInterval(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportInterval(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ReportInterval(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ReportInterval());
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

    HRESULT __stdcall add_ReadingChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ReadingChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Custom::CustomSensor, Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ReadingChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadingChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::Custom::ICustomSensor2> : produce_base<D, Windows::Devices::Sensors::Custom::ICustomSensor2>
{
    HRESULT __stdcall put_ReportLatency(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportLatency(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ReportLatency(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ReportLatency());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxBatchSize(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxBatchSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::Custom::ICustomSensorReading> : produce_base<D, Windows::Devices::Sensors::Custom::ICustomSensorReading>
{
    HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::Custom::ICustomSensorReading2> : produce_base<D, Windows::Devices::Sensors::Custom::ICustomSensorReading2>
{
    HRESULT __stdcall get_PerformanceCount(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>>(this->shim().PerformanceCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs> : produce_base<D, Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs>
{
    HRESULT __stdcall get_Reading(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Sensors::Custom::CustomSensorReading>(this->shim().Reading());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sensors::Custom::ICustomSensorStatics> : produce_base<D, Windows::Devices::Sensors::Custom::ICustomSensorStatics>
{
    HRESULT __stdcall GetDeviceSelector(GUID interfaceId, HSTRING* result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetDeviceSelector(*reinterpret_cast<GUID const*>(&interfaceId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING sensorId, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Custom::CustomSensor>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&sensorId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::Sensors::Custom {

inline hstring CustomSensor::GetDeviceSelector(GUID const& interfaceId)
{
    return get_activation_factory<CustomSensor, Windows::Devices::Sensors::Custom::ICustomSensorStatics>().GetDeviceSelector(interfaceId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Custom::CustomSensor> CustomSensor::FromIdAsync(param::hstring const& sensorId)
{
    return get_activation_factory<CustomSensor, Windows::Devices::Sensors::Custom::ICustomSensorStatics>().FromIdAsync(sensorId);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Sensors::Custom::ICustomSensor> : winrt::impl::hash_base<winrt::Windows::Devices::Sensors::Custom::ICustomSensor> {};
template<> struct hash<winrt::Windows::Devices::Sensors::Custom::ICustomSensor2> : winrt::impl::hash_base<winrt::Windows::Devices::Sensors::Custom::ICustomSensor2> {};
template<> struct hash<winrt::Windows::Devices::Sensors::Custom::ICustomSensorReading> : winrt::impl::hash_base<winrt::Windows::Devices::Sensors::Custom::ICustomSensorReading> {};
template<> struct hash<winrt::Windows::Devices::Sensors::Custom::ICustomSensorReading2> : winrt::impl::hash_base<winrt::Windows::Devices::Sensors::Custom::ICustomSensorReading2> {};
template<> struct hash<winrt::Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::Sensors::Custom::ICustomSensorStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Sensors::Custom::ICustomSensorStatics> {};
template<> struct hash<winrt::Windows::Devices::Sensors::Custom::CustomSensor> : winrt::impl::hash_base<winrt::Windows::Devices::Sensors::Custom::CustomSensor> {};
template<> struct hash<winrt::Windows::Devices::Sensors::Custom::CustomSensorReading> : winrt::impl::hash_base<winrt::Windows::Devices::Sensors::Custom::CustomSensorReading> {};
template<> struct hash<winrt::Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs> {};

}

WINRT_WARNING_POP
