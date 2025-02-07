﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Devices.Printers.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Printers {

struct WINRT_EBO IPrint3DDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrint3DDevice>
{
    IPrint3DDevice(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrint3DDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrint3DDeviceStatics>
{
    IPrint3DDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintSchema :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintSchema>
{
    IPrintSchema(std::nullptr_t = nullptr) noexcept {}
};

}
