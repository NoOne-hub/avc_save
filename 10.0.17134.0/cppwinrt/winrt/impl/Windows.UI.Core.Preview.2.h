﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.UI.Core.Preview.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::Core::Preview {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::UI::Core::Preview {

struct WINRT_EBO SystemNavigationCloseRequestedPreviewEventArgs :
    Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs
{
    SystemNavigationCloseRequestedPreviewEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SystemNavigationManagerPreview :
    Windows::UI::Core::Preview::ISystemNavigationManagerPreview
{
    SystemNavigationManagerPreview(std::nullptr_t) noexcept {}
    static Windows::UI::Core::Preview::SystemNavigationManagerPreview GetForCurrentView();
};

}
