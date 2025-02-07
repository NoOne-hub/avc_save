﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.Services.Cortana.0.h"

WINRT_EXPORT namespace winrt::Windows::Services::Cortana {

struct WINRT_EBO ICortanaPermissionsManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICortanaPermissionsManager>
{
    ICortanaPermissionsManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICortanaPermissionsManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICortanaPermissionsManagerStatics>
{
    ICortanaPermissionsManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICortanaSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICortanaSettings>
{
    ICortanaSettings(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICortanaSettingsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICortanaSettingsStatics>
{
    ICortanaSettingsStatics(std::nullptr_t = nullptr) noexcept {}
};

}
