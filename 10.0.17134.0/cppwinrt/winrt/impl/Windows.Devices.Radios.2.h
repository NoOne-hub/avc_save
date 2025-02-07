﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.Devices.Radios.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Radios {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::Devices::Radios {

struct WINRT_EBO Radio :
    Windows::Devices::Radios::IRadio
{
    Radio(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Radios::Radio>> GetRadiosAsync();
    static hstring GetDeviceSelector();
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Radios::Radio> FromIdAsync(param::hstring const& deviceId);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Radios::RadioAccessStatus> RequestAccessAsync();
};

}
