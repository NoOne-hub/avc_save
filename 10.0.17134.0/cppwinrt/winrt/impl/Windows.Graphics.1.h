﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.Graphics.0.h"

WINRT_EXPORT namespace winrt::Windows::Graphics {

struct WINRT_EBO IGeometrySource2D :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeometrySource2D>
{
    IGeometrySource2D(std::nullptr_t = nullptr) noexcept {}
};

}
