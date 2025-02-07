﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Wallet.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.ApplicationModel.Wallet.System.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Wallet::System {

struct WINRT_EBO IWalletItemSystemStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletItemSystemStore>
{
    IWalletItemSystemStore(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWalletItemSystemStore2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletItemSystemStore2>
{
    IWalletItemSystemStore2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWalletManagerSystemStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWalletManagerSystemStatics>
{
    IWalletManagerSystemStatics(std::nullptr_t = nullptr) noexcept {}
};

}
