﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.Services.Cortana.1.h"

WINRT_EXPORT namespace winrt::Windows::Services::Cortana {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::Services::Cortana {

struct WINRT_EBO CortanaPermissionsManager :
    Windows::Services::Cortana::ICortanaPermissionsManager
{
    CortanaPermissionsManager(std::nullptr_t) noexcept {}
    static Windows::Services::Cortana::CortanaPermissionsManager GetDefault();
};

struct WINRT_EBO CortanaSettings :
    Windows::Services::Cortana::ICortanaSettings
{
    CortanaSettings(std::nullptr_t) noexcept {}
    static bool IsSupported();
    static Windows::Services::Cortana::CortanaSettings GetDefault();
};

}
