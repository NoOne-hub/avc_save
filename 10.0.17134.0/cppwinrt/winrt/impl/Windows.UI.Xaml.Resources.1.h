﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.UI.Xaml.Resources.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Resources {

struct WINRT_EBO ICustomXamlResourceLoader :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomXamlResourceLoader>
{
    ICustomXamlResourceLoader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICustomXamlResourceLoaderFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomXamlResourceLoaderFactory>
{
    ICustomXamlResourceLoaderFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICustomXamlResourceLoaderOverrides :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomXamlResourceLoaderOverrides>
{
    ICustomXamlResourceLoaderOverrides(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICustomXamlResourceLoaderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomXamlResourceLoaderStatics>
{
    ICustomXamlResourceLoaderStatics(std::nullptr_t = nullptr) noexcept {}
};

}
