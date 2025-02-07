﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Devices.Lights.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Lights {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::Devices::Lights {

struct WINRT_EBO Lamp :
    Windows::Devices::Lights::ILamp
{
    Lamp(std::nullptr_t) noexcept {}
    static hstring GetDeviceSelector();
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::Lamp> FromIdAsync(param::hstring const& deviceId);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::Lamp> GetDefaultAsync();
};

struct WINRT_EBO LampAvailabilityChangedEventArgs :
    Windows::Devices::Lights::ILampAvailabilityChangedEventArgs
{
    LampAvailabilityChangedEventArgs(std::nullptr_t) noexcept {}
};

}
