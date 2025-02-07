﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Security.Cryptography.DataProtection.2.h"
#include "winrt/Windows.Security.Cryptography.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> consume_Windows_Security_Cryptography_DataProtection_IDataProtectionProvider<D>::ProtectAsync(Windows::Storage::Streams::IBuffer const& data) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::DataProtection::IDataProtectionProvider)->ProtectAsync(get_abi(data), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> consume_Windows_Security_Cryptography_DataProtection_IDataProtectionProvider<D>::UnprotectAsync(Windows::Storage::Streams::IBuffer const& data) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::DataProtection::IDataProtectionProvider)->UnprotectAsync(get_abi(data), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Cryptography_DataProtection_IDataProtectionProvider<D>::ProtectStreamAsync(Windows::Storage::Streams::IInputStream const& src, Windows::Storage::Streams::IOutputStream const& dest) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::DataProtection::IDataProtectionProvider)->ProtectStreamAsync(get_abi(src), get_abi(dest), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Cryptography_DataProtection_IDataProtectionProvider<D>::UnprotectStreamAsync(Windows::Storage::Streams::IInputStream const& src, Windows::Storage::Streams::IOutputStream const& dest) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::DataProtection::IDataProtectionProvider)->UnprotectStreamAsync(get_abi(src), get_abi(dest), put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::DataProtection::DataProtectionProvider consume_Windows_Security_Cryptography_DataProtection_IDataProtectionProviderFactory<D>::CreateOverloadExplicit(param::hstring const& protectionDescriptor) const
{
    Windows::Security::Cryptography::DataProtection::DataProtectionProvider value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::DataProtection::IDataProtectionProviderFactory)->CreateOverloadExplicit(get_abi(protectionDescriptor), put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Security::Cryptography::DataProtection::IDataProtectionProvider> : produce_base<D, Windows::Security::Cryptography::DataProtection::IDataProtectionProvider>
{
    HRESULT __stdcall ProtectAsync(void* data, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>>(this->shim().ProtectAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UnprotectAsync(void* data, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>>(this->shim().UnprotectAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ProtectStreamAsync(void* src, void* dest, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ProtectStreamAsync(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&src), *reinterpret_cast<Windows::Storage::Streams::IOutputStream const*>(&dest)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UnprotectStreamAsync(void* src, void* dest, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncAction>(this->shim().UnprotectStreamAsync(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&src), *reinterpret_cast<Windows::Storage::Streams::IOutputStream const*>(&dest)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::DataProtection::IDataProtectionProviderFactory> : produce_base<D, Windows::Security::Cryptography::DataProtection::IDataProtectionProviderFactory>
{
    HRESULT __stdcall CreateOverloadExplicit(HSTRING protectionDescriptor, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::DataProtection::DataProtectionProvider>(this->shim().CreateOverloadExplicit(*reinterpret_cast<hstring const*>(&protectionDescriptor)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Security::Cryptography::DataProtection {

inline DataProtectionProvider::DataProtectionProvider() :
    DataProtectionProvider(get_activation_factory<DataProtectionProvider>().ActivateInstance<DataProtectionProvider>())
{}

inline DataProtectionProvider::DataProtectionProvider(param::hstring const& protectionDescriptor) :
    DataProtectionProvider(get_activation_factory<DataProtectionProvider, Windows::Security::Cryptography::DataProtection::IDataProtectionProviderFactory>().CreateOverloadExplicit(protectionDescriptor))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Security::Cryptography::DataProtection::IDataProtectionProvider> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::DataProtection::IDataProtectionProvider> {};
template<> struct hash<winrt::Windows::Security::Cryptography::DataProtection::IDataProtectionProviderFactory> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::DataProtection::IDataProtectionProviderFactory> {};
template<> struct hash<winrt::Windows::Security::Cryptography::DataProtection::DataProtectionProvider> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::DataProtection::DataProtectionProvider> {};

}

WINRT_WARNING_POP
