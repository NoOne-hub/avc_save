﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.Devices.Radios.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Radios {

struct WINRT_EBO IRadio :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadio>
{
    IRadio(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRadioStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadioStatics>
{
    IRadioStatics(std::nullptr_t = nullptr) noexcept {}
};

}
