﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Devices.Adc.Provider.2.h"
#include "winrt/impl/Windows.Devices.Gpio.Provider.2.h"
#include "winrt/impl/Windows.Devices.I2c.Provider.2.h"
#include "winrt/impl/Windows.Devices.Pwm.Provider.2.h"
#include "winrt/impl/Windows.Devices.Spi.Provider.2.h"
#include "winrt/impl/Windows.Devices.2.h"

namespace winrt::impl {

template <typename D> Windows::Devices::Adc::Provider::IAdcControllerProvider consume_Windows_Devices_ILowLevelDevicesAggregateProvider<D>::AdcControllerProvider() const
{
    Windows::Devices::Adc::Provider::IAdcControllerProvider value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::ILowLevelDevicesAggregateProvider)->get_AdcControllerProvider(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Pwm::Provider::IPwmControllerProvider consume_Windows_Devices_ILowLevelDevicesAggregateProvider<D>::PwmControllerProvider() const
{
    Windows::Devices::Pwm::Provider::IPwmControllerProvider value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::ILowLevelDevicesAggregateProvider)->get_PwmControllerProvider(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Gpio::Provider::IGpioControllerProvider consume_Windows_Devices_ILowLevelDevicesAggregateProvider<D>::GpioControllerProvider() const
{
    Windows::Devices::Gpio::Provider::IGpioControllerProvider value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::ILowLevelDevicesAggregateProvider)->get_GpioControllerProvider(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::I2c::Provider::II2cControllerProvider consume_Windows_Devices_ILowLevelDevicesAggregateProvider<D>::I2cControllerProvider() const
{
    Windows::Devices::I2c::Provider::II2cControllerProvider value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::ILowLevelDevicesAggregateProvider)->get_I2cControllerProvider(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Spi::Provider::ISpiControllerProvider consume_Windows_Devices_ILowLevelDevicesAggregateProvider<D>::SpiControllerProvider() const
{
    Windows::Devices::Spi::Provider::ISpiControllerProvider value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::ILowLevelDevicesAggregateProvider)->get_SpiControllerProvider(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::LowLevelDevicesAggregateProvider consume_Windows_Devices_ILowLevelDevicesAggregateProviderFactory<D>::Create(Windows::Devices::Adc::Provider::IAdcControllerProvider const& adc, Windows::Devices::Pwm::Provider::IPwmControllerProvider const& pwm, Windows::Devices::Gpio::Provider::IGpioControllerProvider const& gpio, Windows::Devices::I2c::Provider::II2cControllerProvider const& i2c, Windows::Devices::Spi::Provider::ISpiControllerProvider const& spi) const
{
    Windows::Devices::LowLevelDevicesAggregateProvider value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::ILowLevelDevicesAggregateProviderFactory)->Create(get_abi(adc), get_abi(pwm), get_abi(gpio), get_abi(i2c), get_abi(spi), put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::ILowLevelDevicesAggregateProvider consume_Windows_Devices_ILowLevelDevicesControllerStatics<D>::DefaultProvider() const
{
    Windows::Devices::ILowLevelDevicesAggregateProvider value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::ILowLevelDevicesControllerStatics)->get_DefaultProvider(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_ILowLevelDevicesControllerStatics<D>::DefaultProvider(Windows::Devices::ILowLevelDevicesAggregateProvider const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::ILowLevelDevicesControllerStatics)->put_DefaultProvider(get_abi(value)));
}

template <typename D>
struct produce<D, Windows::Devices::ILowLevelDevicesAggregateProvider> : produce_base<D, Windows::Devices::ILowLevelDevicesAggregateProvider>
{
    HRESULT __stdcall get_AdcControllerProvider(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Adc::Provider::IAdcControllerProvider>(this->shim().AdcControllerProvider());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PwmControllerProvider(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Pwm::Provider::IPwmControllerProvider>(this->shim().PwmControllerProvider());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_GpioControllerProvider(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Gpio::Provider::IGpioControllerProvider>(this->shim().GpioControllerProvider());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_I2cControllerProvider(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::I2c::Provider::II2cControllerProvider>(this->shim().I2cControllerProvider());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SpiControllerProvider(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Spi::Provider::ISpiControllerProvider>(this->shim().SpiControllerProvider());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::ILowLevelDevicesAggregateProviderFactory> : produce_base<D, Windows::Devices::ILowLevelDevicesAggregateProviderFactory>
{
    HRESULT __stdcall Create(void* adc, void* pwm, void* gpio, void* i2c, void* spi, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::LowLevelDevicesAggregateProvider>(this->shim().Create(*reinterpret_cast<Windows::Devices::Adc::Provider::IAdcControllerProvider const*>(&adc), *reinterpret_cast<Windows::Devices::Pwm::Provider::IPwmControllerProvider const*>(&pwm), *reinterpret_cast<Windows::Devices::Gpio::Provider::IGpioControllerProvider const*>(&gpio), *reinterpret_cast<Windows::Devices::I2c::Provider::II2cControllerProvider const*>(&i2c), *reinterpret_cast<Windows::Devices::Spi::Provider::ISpiControllerProvider const*>(&spi)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::ILowLevelDevicesController> : produce_base<D, Windows::Devices::ILowLevelDevicesController>
{};

template <typename D>
struct produce<D, Windows::Devices::ILowLevelDevicesControllerStatics> : produce_base<D, Windows::Devices::ILowLevelDevicesControllerStatics>
{
    HRESULT __stdcall get_DefaultProvider(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::ILowLevelDevicesAggregateProvider>(this->shim().DefaultProvider());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultProvider(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultProvider(*reinterpret_cast<Windows::Devices::ILowLevelDevicesAggregateProvider const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices {

inline LowLevelDevicesAggregateProvider::LowLevelDevicesAggregateProvider(Windows::Devices::Adc::Provider::IAdcControllerProvider const& adc, Windows::Devices::Pwm::Provider::IPwmControllerProvider const& pwm, Windows::Devices::Gpio::Provider::IGpioControllerProvider const& gpio, Windows::Devices::I2c::Provider::II2cControllerProvider const& i2c, Windows::Devices::Spi::Provider::ISpiControllerProvider const& spi) :
    LowLevelDevicesAggregateProvider(get_activation_factory<LowLevelDevicesAggregateProvider, Windows::Devices::ILowLevelDevicesAggregateProviderFactory>().Create(adc, pwm, gpio, i2c, spi))
{}

inline Windows::Devices::ILowLevelDevicesAggregateProvider LowLevelDevicesController::DefaultProvider()
{
    return get_activation_factory<LowLevelDevicesController, Windows::Devices::ILowLevelDevicesControllerStatics>().DefaultProvider();
}

inline void LowLevelDevicesController::DefaultProvider(Windows::Devices::ILowLevelDevicesAggregateProvider const& value)
{
    get_activation_factory<LowLevelDevicesController, Windows::Devices::ILowLevelDevicesControllerStatics>().DefaultProvider(value);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::ILowLevelDevicesAggregateProvider> : winrt::impl::hash_base<winrt::Windows::Devices::ILowLevelDevicesAggregateProvider> {};
template<> struct hash<winrt::Windows::Devices::ILowLevelDevicesAggregateProviderFactory> : winrt::impl::hash_base<winrt::Windows::Devices::ILowLevelDevicesAggregateProviderFactory> {};
template<> struct hash<winrt::Windows::Devices::ILowLevelDevicesController> : winrt::impl::hash_base<winrt::Windows::Devices::ILowLevelDevicesController> {};
template<> struct hash<winrt::Windows::Devices::ILowLevelDevicesControllerStatics> : winrt::impl::hash_base<winrt::Windows::Devices::ILowLevelDevicesControllerStatics> {};
template<> struct hash<winrt::Windows::Devices::LowLevelDevicesAggregateProvider> : winrt::impl::hash_base<winrt::Windows::Devices::LowLevelDevicesAggregateProvider> {};
template<> struct hash<winrt::Windows::Devices::LowLevelDevicesController> : winrt::impl::hash_base<winrt::Windows::Devices::LowLevelDevicesController> {};

}

WINRT_WARNING_POP
