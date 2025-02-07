﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.System.Diagnostics.Telemetry.1.h"

WINRT_EXPORT namespace winrt::Windows::System::Diagnostics::Telemetry {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::System::Diagnostics::Telemetry {

struct PlatformTelemetryClient
{
    PlatformTelemetryClient() = delete;
    static Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult Register(param::hstring const& id);
    static Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult Register(param::hstring const& id, Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings const& settings);
};

struct WINRT_EBO PlatformTelemetryRegistrationResult :
    Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult
{
    PlatformTelemetryRegistrationResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PlatformTelemetryRegistrationSettings :
    Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings
{
    PlatformTelemetryRegistrationSettings(std::nullptr_t) noexcept {}
    PlatformTelemetryRegistrationSettings();
};

}
