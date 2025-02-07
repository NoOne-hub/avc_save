﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Calls.Background.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Calls::Background {

struct WINRT_EBO IPhoneCallBlockedTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallBlockedTriggerDetails>
{
    IPhoneCallBlockedTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneCallOriginDataRequestTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallOriginDataRequestTriggerDetails>
{
    IPhoneCallOriginDataRequestTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneLineChangedTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneLineChangedTriggerDetails>
{
    IPhoneLineChangedTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneNewVoicemailMessageTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneNewVoicemailMessageTriggerDetails>
{
    IPhoneNewVoicemailMessageTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

}
