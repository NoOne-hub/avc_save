﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.System.RemoteDesktop.0.h"

WINRT_EXPORT namespace winrt::Windows::System::RemoteDesktop {

struct WINRT_EBO IInteractiveSessionStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractiveSessionStatics>
{
    IInteractiveSessionStatics(std::nullptr_t = nullptr) noexcept {}
};

}
