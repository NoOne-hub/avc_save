﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Web.2.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IInputStream> consume_Windows_Web_IUriToStreamResolver<D>::UriToStreamAsync(Windows::Foundation::Uri const& uri) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IInputStream> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::IUriToStreamResolver)->UriToStreamAsync(get_abi(uri), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Web::WebErrorStatus consume_Windows_Web_IWebErrorStatics<D>::GetStatus(int32_t hresult) const
{
    Windows::Web::WebErrorStatus status{};
    check_hresult(WINRT_SHIM(Windows::Web::IWebErrorStatics)->GetStatus(hresult, put_abi(status)));
    return status;
}

template <typename D>
struct produce<D, Windows::Web::IUriToStreamResolver> : produce_base<D, Windows::Web::IUriToStreamResolver>
{
    HRESULT __stdcall UriToStreamAsync(void* uri, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IInputStream>>(this->shim().UriToStreamAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::IWebErrorStatics> : produce_base<D, Windows::Web::IWebErrorStatics>
{
    HRESULT __stdcall GetStatus(int32_t hresult, Windows::Web::WebErrorStatus* status) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *status = detach_from<Windows::Web::WebErrorStatus>(this->shim().GetStatus(hresult));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Web {

inline Windows::Web::WebErrorStatus WebError::GetStatus(int32_t hresult)
{
    return get_activation_factory<WebError, Windows::Web::IWebErrorStatics>().GetStatus(hresult);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Web::IUriToStreamResolver> : winrt::impl::hash_base<winrt::Windows::Web::IUriToStreamResolver> {};
template<> struct hash<winrt::Windows::Web::IWebErrorStatics> : winrt::impl::hash_base<winrt::Windows::Web::IWebErrorStatics> {};
template<> struct hash<winrt::Windows::Web::WebError> : winrt::impl::hash_base<winrt::Windows::Web::WebError> {};

}

WINRT_WARNING_POP
