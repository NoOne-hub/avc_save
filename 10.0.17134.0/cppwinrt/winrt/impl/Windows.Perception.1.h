﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.Perception.0.h"

WINRT_EXPORT namespace winrt::Windows::Perception {

struct WINRT_EBO IPerceptionTimestamp :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionTimestamp>
{
    IPerceptionTimestamp(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPerceptionTimestampHelperStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionTimestampHelperStatics>
{
    IPerceptionTimestampHelperStatics(std::nullptr_t = nullptr) noexcept {}
};

}
