﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.Devices.Geolocation.0.h"
#include "winrt/impl/Windows.Services.Maps.OfflineMaps.0.h"

WINRT_EXPORT namespace winrt::Windows::Services::Maps::OfflineMaps {

struct WINRT_EBO IOfflineMapPackage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOfflineMapPackage>
{
    IOfflineMapPackage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IOfflineMapPackageQueryResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOfflineMapPackageQueryResult>
{
    IOfflineMapPackageQueryResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IOfflineMapPackageStartDownloadResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOfflineMapPackageStartDownloadResult>
{
    IOfflineMapPackageStartDownloadResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IOfflineMapPackageStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOfflineMapPackageStatics>
{
    IOfflineMapPackageStatics(std::nullptr_t = nullptr) noexcept {}
};

}
