﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.UserDataAccounts.1.h"
#include "winrt/impl/Windows.ApplicationModel.UserDataAccounts.Provider.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataAccounts::Provider {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataAccounts::Provider {

struct WINRT_EBO UserDataAccountPartnerAccountInfo :
    Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountPartnerAccountInfo
{
    UserDataAccountPartnerAccountInfo(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UserDataAccountProviderAddAccountOperation :
    Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderAddAccountOperation
{
    UserDataAccountProviderAddAccountOperation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UserDataAccountProviderResolveErrorsOperation :
    Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderResolveErrorsOperation
{
    UserDataAccountProviderResolveErrorsOperation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UserDataAccountProviderSettingsOperation :
    Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderSettingsOperation
{
    UserDataAccountProviderSettingsOperation(std::nullptr_t) noexcept {}
};

}
