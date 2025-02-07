﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Graphics.DirectX.1.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.1.h"
#include "winrt/impl/Windows.Perception.1.h"
#include "winrt/impl/Windows.Perception.Spatial.1.h"
#include "winrt/impl/Windows.UI.Core.1.h"
#include "winrt/impl/Windows.Graphics.Holographic.1.h"

WINRT_EXPORT namespace winrt::Windows::Graphics::Holographic {

struct HolographicAdapterId
{
    uint32_t LowPart;
    int32_t HighPart;
};

inline bool operator==(HolographicAdapterId const& left, HolographicAdapterId const& right) noexcept
{
    return left.LowPart == right.LowPart && left.HighPart == right.HighPart;
}

inline bool operator!=(HolographicAdapterId const& left, HolographicAdapterId const& right) noexcept
{
    return !(left == right);
}

struct HolographicStereoTransform
{
    Windows::Foundation::Numerics::float4x4 Left;
    Windows::Foundation::Numerics::float4x4 Right;
};

inline bool operator==(HolographicStereoTransform const& left, HolographicStereoTransform const& right) noexcept
{
    return left.Left == right.Left && left.Right == right.Right;
}

inline bool operator!=(HolographicStereoTransform const& left, HolographicStereoTransform const& right) noexcept
{
    return !(left == right);
}

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Holographic {

struct WINRT_EBO HolographicCamera :
    Windows::Graphics::Holographic::IHolographicCamera,
    impl::require<HolographicCamera, Windows::Graphics::Holographic::IHolographicCamera2, Windows::Graphics::Holographic::IHolographicCamera3, Windows::Graphics::Holographic::IHolographicCamera4>
{
    HolographicCamera(std::nullptr_t) noexcept {}
};

struct WINRT_EBO HolographicCameraPose :
    Windows::Graphics::Holographic::IHolographicCameraPose,
    impl::require<HolographicCameraPose, Windows::Graphics::Holographic::IHolographicCameraPose2>
{
    HolographicCameraPose(std::nullptr_t) noexcept {}
};

struct WINRT_EBO HolographicCameraRenderingParameters :
    Windows::Graphics::Holographic::IHolographicCameraRenderingParameters,
    impl::require<HolographicCameraRenderingParameters, Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2, Windows::Graphics::Holographic::IHolographicCameraRenderingParameters3>
{
    HolographicCameraRenderingParameters(std::nullptr_t) noexcept {}
};

struct WINRT_EBO HolographicCameraViewportParameters :
    Windows::Graphics::Holographic::IHolographicCameraViewportParameters
{
    HolographicCameraViewportParameters(std::nullptr_t) noexcept {}
};

struct WINRT_EBO HolographicDisplay :
    Windows::Graphics::Holographic::IHolographicDisplay,
    impl::require<HolographicDisplay, Windows::Graphics::Holographic::IHolographicDisplay2>
{
    HolographicDisplay(std::nullptr_t) noexcept {}
    static Windows::Graphics::Holographic::HolographicDisplay GetDefault();
};

struct WINRT_EBO HolographicFrame :
    Windows::Graphics::Holographic::IHolographicFrame,
    impl::require<HolographicFrame, Windows::Graphics::Holographic::IHolographicFrame2>
{
    HolographicFrame(std::nullptr_t) noexcept {}
};

struct WINRT_EBO HolographicFramePrediction :
    Windows::Graphics::Holographic::IHolographicFramePrediction
{
    HolographicFramePrediction(std::nullptr_t) noexcept {}
};

struct WINRT_EBO HolographicFramePresentationMonitor :
    Windows::Graphics::Holographic::IHolographicFramePresentationMonitor
{
    HolographicFramePresentationMonitor(std::nullptr_t) noexcept {}
};

struct WINRT_EBO HolographicFramePresentationReport :
    Windows::Graphics::Holographic::IHolographicFramePresentationReport
{
    HolographicFramePresentationReport(std::nullptr_t) noexcept {}
};

struct WINRT_EBO HolographicQuadLayer :
    Windows::Graphics::Holographic::IHolographicQuadLayer,
    impl::require<HolographicQuadLayer, Windows::Foundation::IClosable>
{
    HolographicQuadLayer(std::nullptr_t) noexcept {}
    HolographicQuadLayer(Windows::Foundation::Size const& size);
    HolographicQuadLayer(Windows::Foundation::Size const& size, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat);
};

struct WINRT_EBO HolographicQuadLayerUpdateParameters :
    Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters
{
    HolographicQuadLayerUpdateParameters(std::nullptr_t) noexcept {}
};

struct WINRT_EBO HolographicSpace :
    Windows::Graphics::Holographic::IHolographicSpace,
    impl::require<HolographicSpace, Windows::Graphics::Holographic::IHolographicSpace2>
{
    HolographicSpace(std::nullptr_t) noexcept {}
    static Windows::Graphics::Holographic::HolographicSpace CreateForCoreWindow(Windows::UI::Core::CoreWindow const& window);
    static bool IsSupported();
    static bool IsAvailable();
    static event_token IsAvailableChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using IsAvailableChanged_revoker = factory_event_revoker<Windows::Graphics::Holographic::IHolographicSpaceStatics2>;
    static IsAvailableChanged_revoker IsAvailableChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void IsAvailableChanged(event_token const& token);
    static bool IsConfigured();
};

struct WINRT_EBO HolographicSpaceCameraAddedEventArgs :
    Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs
{
    HolographicSpaceCameraAddedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO HolographicSpaceCameraRemovedEventArgs :
    Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs
{
    HolographicSpaceCameraRemovedEventArgs(std::nullptr_t) noexcept {}
};

}
