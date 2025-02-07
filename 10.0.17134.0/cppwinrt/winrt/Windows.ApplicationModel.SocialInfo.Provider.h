﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.ApplicationModel.SocialInfo.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.ApplicationModel.SocialInfo.Provider.2.h"
#include "winrt/Windows.ApplicationModel.SocialInfo.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialDashboardItemUpdater<D>::OwnerRemoteId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater)->get_OwnerRemoteId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::SocialInfo::SocialFeedContent consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialDashboardItemUpdater<D>::Content() const
{
    Windows::ApplicationModel::SocialInfo::SocialFeedContent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater)->get_Content(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialDashboardItemUpdater<D>::Timestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialDashboardItemUpdater<D>::Timestamp(Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater)->put_Timestamp(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialDashboardItemUpdater<D>::Thumbnail(Windows::ApplicationModel::SocialInfo::SocialItemThumbnail const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater)->put_Thumbnail(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::SocialInfo::SocialItemThumbnail consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialDashboardItemUpdater<D>::Thumbnail() const
{
    Windows::ApplicationModel::SocialInfo::SocialItemThumbnail value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater)->get_Thumbnail(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialDashboardItemUpdater<D>::CommitAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater)->CommitAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialDashboardItemUpdater<D>::TargetUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater)->get_TargetUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialDashboardItemUpdater<D>::TargetUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater)->put_TargetUri(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialFeedUpdater<D>::OwnerRemoteId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater)->get_OwnerRemoteId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::SocialInfo::SocialFeedKind consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialFeedUpdater<D>::Kind() const
{
    Windows::ApplicationModel::SocialInfo::SocialFeedKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialFeedItem> consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialFeedUpdater<D>::Items() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialFeedItem> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater)->get_Items(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialFeedUpdater<D>::CommitAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater)->CommitAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::SocialInfo::Provider::SocialFeedUpdater> consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialInfoProviderManagerStatics<D>::CreateSocialFeedUpdaterAsync(Windows::ApplicationModel::SocialInfo::SocialFeedKind const& kind, Windows::ApplicationModel::SocialInfo::SocialFeedUpdateMode const& mode, param::hstring const& ownerRemoteId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::SocialInfo::Provider::SocialFeedUpdater> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::Provider::ISocialInfoProviderManagerStatics)->CreateSocialFeedUpdaterAsync(get_abi(kind), get_abi(mode), get_abi(ownerRemoteId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::SocialInfo::Provider::SocialDashboardItemUpdater> consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialInfoProviderManagerStatics<D>::CreateDashboardItemUpdaterAsync(param::hstring const& ownerRemoteId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::SocialInfo::Provider::SocialDashboardItemUpdater> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::Provider::ISocialInfoProviderManagerStatics)->CreateDashboardItemUpdaterAsync(get_abi(ownerRemoteId), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialInfoProviderManagerStatics<D>::UpdateBadgeCountValue(param::hstring const& itemRemoteId, int32_t newCount) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::Provider::ISocialInfoProviderManagerStatics)->UpdateBadgeCountValue(get_abi(itemRemoteId), newCount));
}

template <typename D> void consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialInfoProviderManagerStatics<D>::ReportNewContentAvailable(param::hstring const& contactRemoteId, Windows::ApplicationModel::SocialInfo::SocialFeedKind const& kind) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::Provider::ISocialInfoProviderManagerStatics)->ReportNewContentAvailable(get_abi(contactRemoteId), get_abi(kind)));
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialInfoProviderManagerStatics<D>::ProvisionAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::Provider::ISocialInfoProviderManagerStatics)->ProvisionAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_SocialInfo_Provider_ISocialInfoProviderManagerStatics<D>::DeprovisionAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::Provider::ISocialInfoProviderManagerStatics)->DeprovisionAsync(put_abi(operation)));
    return operation;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater> : produce_base<D, Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater>
{
    HRESULT __stdcall get_OwnerRemoteId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().OwnerRemoteId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Content(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::SocialInfo::SocialFeedContent>(this->shim().Content());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Timestamp(Windows::Foundation::DateTime value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Timestamp(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Thumbnail(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Thumbnail(*reinterpret_cast<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnail(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail>(this->shim().Thumbnail());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CommitAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().CommitAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TargetUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().TargetUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TargetUri(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater> : produce_base<D, Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater>
{
    HRESULT __stdcall get_OwnerRemoteId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().OwnerRemoteId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(Windows::ApplicationModel::SocialInfo::SocialFeedKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::SocialInfo::SocialFeedKind>(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Items(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialFeedItem>>(this->shim().Items());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CommitAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().CommitAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::SocialInfo::Provider::ISocialInfoProviderManagerStatics> : produce_base<D, Windows::ApplicationModel::SocialInfo::Provider::ISocialInfoProviderManagerStatics>
{
    HRESULT __stdcall CreateSocialFeedUpdaterAsync(Windows::ApplicationModel::SocialInfo::SocialFeedKind kind, Windows::ApplicationModel::SocialInfo::SocialFeedUpdateMode mode, HSTRING ownerRemoteId, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::SocialInfo::Provider::SocialFeedUpdater>>(this->shim().CreateSocialFeedUpdaterAsync(*reinterpret_cast<Windows::ApplicationModel::SocialInfo::SocialFeedKind const*>(&kind), *reinterpret_cast<Windows::ApplicationModel::SocialInfo::SocialFeedUpdateMode const*>(&mode), *reinterpret_cast<hstring const*>(&ownerRemoteId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateDashboardItemUpdaterAsync(HSTRING ownerRemoteId, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::SocialInfo::Provider::SocialDashboardItemUpdater>>(this->shim().CreateDashboardItemUpdaterAsync(*reinterpret_cast<hstring const*>(&ownerRemoteId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UpdateBadgeCountValue(HSTRING itemRemoteId, int32_t newCount) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateBadgeCountValue(*reinterpret_cast<hstring const*>(&itemRemoteId), newCount);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReportNewContentAvailable(HSTRING contactRemoteId, Windows::ApplicationModel::SocialInfo::SocialFeedKind kind) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportNewContentAvailable(*reinterpret_cast<hstring const*>(&contactRemoteId), *reinterpret_cast<Windows::ApplicationModel::SocialInfo::SocialFeedKind const*>(&kind));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ProvisionAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().ProvisionAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall DeprovisionAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().DeprovisionAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::SocialInfo::Provider {

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::SocialInfo::Provider::SocialFeedUpdater> SocialInfoProviderManager::CreateSocialFeedUpdaterAsync(Windows::ApplicationModel::SocialInfo::SocialFeedKind const& kind, Windows::ApplicationModel::SocialInfo::SocialFeedUpdateMode const& mode, param::hstring const& ownerRemoteId)
{
    return get_activation_factory<SocialInfoProviderManager, Windows::ApplicationModel::SocialInfo::Provider::ISocialInfoProviderManagerStatics>().CreateSocialFeedUpdaterAsync(kind, mode, ownerRemoteId);
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::SocialInfo::Provider::SocialDashboardItemUpdater> SocialInfoProviderManager::CreateDashboardItemUpdaterAsync(param::hstring const& ownerRemoteId)
{
    return get_activation_factory<SocialInfoProviderManager, Windows::ApplicationModel::SocialInfo::Provider::ISocialInfoProviderManagerStatics>().CreateDashboardItemUpdaterAsync(ownerRemoteId);
}

inline void SocialInfoProviderManager::UpdateBadgeCountValue(param::hstring const& itemRemoteId, int32_t newCount)
{
    get_activation_factory<SocialInfoProviderManager, Windows::ApplicationModel::SocialInfo::Provider::ISocialInfoProviderManagerStatics>().UpdateBadgeCountValue(itemRemoteId, newCount);
}

inline void SocialInfoProviderManager::ReportNewContentAvailable(param::hstring const& contactRemoteId, Windows::ApplicationModel::SocialInfo::SocialFeedKind const& kind)
{
    get_activation_factory<SocialInfoProviderManager, Windows::ApplicationModel::SocialInfo::Provider::ISocialInfoProviderManagerStatics>().ReportNewContentAvailable(contactRemoteId, kind);
}

inline Windows::Foundation::IAsyncOperation<bool> SocialInfoProviderManager::ProvisionAsync()
{
    return get_activation_factory<SocialInfoProviderManager, Windows::ApplicationModel::SocialInfo::Provider::ISocialInfoProviderManagerStatics>().ProvisionAsync();
}

inline Windows::Foundation::IAsyncAction SocialInfoProviderManager::DeprovisionAsync()
{
    return get_activation_factory<SocialInfoProviderManager, Windows::ApplicationModel::SocialInfo::Provider::ISocialInfoProviderManagerStatics>().DeprovisionAsync();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::SocialInfo::Provider::ISocialDashboardItemUpdater> {};
template<> struct hash<winrt::Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::SocialInfo::Provider::ISocialFeedUpdater> {};
template<> struct hash<winrt::Windows::ApplicationModel::SocialInfo::Provider::ISocialInfoProviderManagerStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::SocialInfo::Provider::ISocialInfoProviderManagerStatics> {};
template<> struct hash<winrt::Windows::ApplicationModel::SocialInfo::Provider::SocialDashboardItemUpdater> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::SocialInfo::Provider::SocialDashboardItemUpdater> {};
template<> struct hash<winrt::Windows::ApplicationModel::SocialInfo::Provider::SocialFeedUpdater> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::SocialInfo::Provider::SocialFeedUpdater> {};
template<> struct hash<winrt::Windows::ApplicationModel::SocialInfo::Provider::SocialInfoProviderManager> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::SocialInfo::Provider::SocialInfoProviderManager> {};

}

WINRT_WARNING_POP
