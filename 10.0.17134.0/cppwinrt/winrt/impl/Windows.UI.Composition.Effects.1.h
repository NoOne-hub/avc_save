﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.Graphics.Effects.0.h"
#include "winrt/impl/Windows.UI.Composition.Effects.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Composition::Effects {

struct WINRT_EBO ISceneLightingEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISceneLightingEffect>
{
    ISceneLightingEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISceneLightingEffect2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISceneLightingEffect2>
{
    ISceneLightingEffect2(std::nullptr_t = nullptr) noexcept {}
};

}
