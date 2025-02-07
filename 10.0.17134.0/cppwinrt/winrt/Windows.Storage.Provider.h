﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Storage.Provider.2.h"
#include "winrt/Windows.Storage.h"

namespace winrt::impl {

template <typename D> void consume_Windows_Storage_Provider_ICachedFileUpdaterStatics<D>::SetUpdateInformation(Windows::Storage::IStorageFile const& file, param::hstring const& contentId, Windows::Storage::Provider::ReadActivationMode const& readMode, Windows::Storage::Provider::WriteActivationMode const& writeMode, Windows::Storage::Provider::CachedFileOptions const& options) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::ICachedFileUpdaterStatics)->SetUpdateInformation(get_abi(file), get_abi(contentId), get_abi(readMode), get_abi(writeMode), get_abi(options)));
}

template <typename D> hstring consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::ICachedFileUpdaterUI)->get_Title(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::Title(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::ICachedFileUpdaterUI)->put_Title(get_abi(value)));
}

template <typename D> Windows::Storage::Provider::CachedFileTarget consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::UpdateTarget() const
{
    Windows::Storage::Provider::CachedFileTarget value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::ICachedFileUpdaterUI)->get_UpdateTarget(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::FileUpdateRequested(Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Storage::Provider::FileUpdateRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::ICachedFileUpdaterUI)->add_FileUpdateRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Storage::Provider::ICachedFileUpdaterUI> consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::FileUpdateRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Storage::Provider::FileUpdateRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Storage::Provider::ICachedFileUpdaterUI>(this, &abi_t<Windows::Storage::Provider::ICachedFileUpdaterUI>::remove_FileUpdateRequested, FileUpdateRequested(handler));
}

template <typename D> void consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::FileUpdateRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::ICachedFileUpdaterUI)->remove_FileUpdateRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::UIRequested(Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::ICachedFileUpdaterUI)->add_UIRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Storage::Provider::ICachedFileUpdaterUI> consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::UIRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Storage::Provider::ICachedFileUpdaterUI>(this, &abi_t<Windows::Storage::Provider::ICachedFileUpdaterUI>::remove_UIRequested, UIRequested(handler));
}

template <typename D> void consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::UIRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::ICachedFileUpdaterUI)->remove_UIRequested(get_abi(token)));
}

template <typename D> Windows::Storage::Provider::UIStatus consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::UIStatus() const
{
    Windows::Storage::Provider::UIStatus value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::ICachedFileUpdaterUI)->get_UIStatus(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Provider::FileUpdateRequest consume_Windows_Storage_Provider_ICachedFileUpdaterUI2<D>::UpdateRequest() const
{
    Windows::Storage::Provider::FileUpdateRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::ICachedFileUpdaterUI2)->get_UpdateRequest(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Provider::FileUpdateRequestDeferral consume_Windows_Storage_Provider_ICachedFileUpdaterUI2<D>::GetDeferral() const
{
    Windows::Storage::Provider::FileUpdateRequestDeferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::ICachedFileUpdaterUI2)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_Provider_IFileUpdateRequest<D>::ContentId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IFileUpdateRequest)->get_ContentId(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFile consume_Windows_Storage_Provider_IFileUpdateRequest<D>::File() const
{
    Windows::Storage::StorageFile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IFileUpdateRequest)->get_File(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Provider::FileUpdateStatus consume_Windows_Storage_Provider_IFileUpdateRequest<D>::Status() const
{
    Windows::Storage::Provider::FileUpdateStatus value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IFileUpdateRequest)->get_Status(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_IFileUpdateRequest<D>::Status(Windows::Storage::Provider::FileUpdateStatus const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IFileUpdateRequest)->put_Status(get_abi(value)));
}

template <typename D> Windows::Storage::Provider::FileUpdateRequestDeferral consume_Windows_Storage_Provider_IFileUpdateRequest<D>::GetDeferral() const
{
    Windows::Storage::Provider::FileUpdateRequestDeferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IFileUpdateRequest)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_IFileUpdateRequest<D>::UpdateLocalFile(Windows::Storage::IStorageFile const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IFileUpdateRequest)->UpdateLocalFile(get_abi(value)));
}

template <typename D> hstring consume_Windows_Storage_Provider_IFileUpdateRequest2<D>::UserInputNeededMessage() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IFileUpdateRequest2)->get_UserInputNeededMessage(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_IFileUpdateRequest2<D>::UserInputNeededMessage(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IFileUpdateRequest2)->put_UserInputNeededMessage(get_abi(value)));
}

template <typename D> void consume_Windows_Storage_Provider_IFileUpdateRequestDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IFileUpdateRequestDeferral)->Complete());
}

template <typename D> Windows::Storage::Provider::FileUpdateRequest consume_Windows_Storage_Provider_IFileUpdateRequestedEventArgs<D>::Request() const
{
    Windows::Storage::Provider::FileUpdateRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IFileUpdateRequestedEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Provider::StorageProviderUriSourceStatus consume_Windows_Storage_Provider_IStorageProviderGetContentInfoForPathResult<D>::Status() const
{
    Windows::Storage::Provider::StorageProviderUriSourceStatus value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_IStorageProviderGetContentInfoForPathResult<D>::Status(Windows::Storage::Provider::StorageProviderUriSourceStatus const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult)->put_Status(get_abi(value)));
}

template <typename D> hstring consume_Windows_Storage_Provider_IStorageProviderGetContentInfoForPathResult<D>::ContentUri() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult)->get_ContentUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_IStorageProviderGetContentInfoForPathResult<D>::ContentUri(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult)->put_ContentUri(get_abi(value)));
}

template <typename D> hstring consume_Windows_Storage_Provider_IStorageProviderGetContentInfoForPathResult<D>::ContentId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult)->get_ContentId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_IStorageProviderGetContentInfoForPathResult<D>::ContentId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult)->put_ContentId(get_abi(value)));
}

template <typename D> Windows::Storage::Provider::StorageProviderUriSourceStatus consume_Windows_Storage_Provider_IStorageProviderGetPathForContentUriResult<D>::Status() const
{
    Windows::Storage::Provider::StorageProviderUriSourceStatus value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_IStorageProviderGetPathForContentUriResult<D>::Status(Windows::Storage::Provider::StorageProviderUriSourceStatus const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult)->put_Status(get_abi(value)));
}

template <typename D> hstring consume_Windows_Storage_Provider_IStorageProviderGetPathForContentUriResult<D>::Path() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult)->get_Path(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_IStorageProviderGetPathForContentUriResult<D>::Path(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult)->put_Path(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_Provider_IStorageProviderItemPropertiesStatics<D>::SetAsync(Windows::Storage::IStorageItem const& item, param::async_iterable<Windows::Storage::Provider::StorageProviderItemProperty> const& itemProperties) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderItemPropertiesStatics)->SetAsync(get_abi(item), get_abi(itemProperties), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Storage_Provider_IStorageProviderItemProperty<D>::Id(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderItemProperty)->put_Id(value));
}

template <typename D> int32_t consume_Windows_Storage_Provider_IStorageProviderItemProperty<D>::Id() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderItemProperty)->get_Id(&value));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_IStorageProviderItemProperty<D>::Value(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderItemProperty)->put_Value(get_abi(value)));
}

template <typename D> hstring consume_Windows_Storage_Provider_IStorageProviderItemProperty<D>::Value() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderItemProperty)->get_Value(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_IStorageProviderItemProperty<D>::IconResource(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderItemProperty)->put_IconResource(get_abi(value)));
}

template <typename D> hstring consume_Windows_Storage_Provider_IStorageProviderItemProperty<D>::IconResource() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderItemProperty)->get_IconResource(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Storage_Provider_IStorageProviderItemPropertyDefinition<D>::Id() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderItemPropertyDefinition)->get_Id(&value));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_IStorageProviderItemPropertyDefinition<D>::Id(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderItemPropertyDefinition)->put_Id(value));
}

template <typename D> hstring consume_Windows_Storage_Provider_IStorageProviderItemPropertyDefinition<D>::DisplayNameResource() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderItemPropertyDefinition)->get_DisplayNameResource(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_IStorageProviderItemPropertyDefinition<D>::DisplayNameResource(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderItemPropertyDefinition)->put_DisplayNameResource(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::Storage::Provider::StorageProviderItemProperty> consume_Windows_Storage_Provider_IStorageProviderItemPropertySource<D>::GetItemProperties(param::hstring const& itemPath) const
{
    Windows::Foundation::Collections::IIterable<Windows::Storage::Provider::StorageProviderItemProperty> itemProperties{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderItemPropertySource)->GetItemProperties(get_abi(itemPath), put_abi(itemProperties)));
    return itemProperties;
}

template <typename D> bool consume_Windows_Storage_Provider_IStorageProviderPropertyCapabilities<D>::IsPropertySupported(param::hstring const& propertyCanonicalName) const
{
    bool isSupported{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderPropertyCapabilities)->IsPropertySupported(get_abi(propertyCanonicalName), &isSupported));
    return isSupported;
}

template <typename D> hstring consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_Id(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::Id(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->put_Id(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::Context() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_Context(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::Context(Windows::Storage::Streams::IBuffer const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->put_Context(get_abi(value)));
}

template <typename D> Windows::Storage::IStorageFolder consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::Path() const
{
    Windows::Storage::IStorageFolder folder{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_Path(put_abi(folder)));
    return folder;
}

template <typename D> void consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::Path(Windows::Storage::IStorageFolder const& folder) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->put_Path(get_abi(folder)));
}

template <typename D> hstring consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::DisplayNameResource() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_DisplayNameResource(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::DisplayNameResource(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->put_DisplayNameResource(get_abi(value)));
}

template <typename D> hstring consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::IconResource() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_IconResource(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::IconResource(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->put_IconResource(get_abi(value)));
}

template <typename D> Windows::Storage::Provider::StorageProviderHydrationPolicy consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::HydrationPolicy() const
{
    Windows::Storage::Provider::StorageProviderHydrationPolicy value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_HydrationPolicy(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::HydrationPolicy(Windows::Storage::Provider::StorageProviderHydrationPolicy const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->put_HydrationPolicy(get_abi(value)));
}

template <typename D> Windows::Storage::Provider::StorageProviderHydrationPolicyModifier consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::HydrationPolicyModifier() const
{
    Windows::Storage::Provider::StorageProviderHydrationPolicyModifier value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_HydrationPolicyModifier(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::HydrationPolicyModifier(Windows::Storage::Provider::StorageProviderHydrationPolicyModifier const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->put_HydrationPolicyModifier(get_abi(value)));
}

template <typename D> Windows::Storage::Provider::StorageProviderPopulationPolicy consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::PopulationPolicy() const
{
    Windows::Storage::Provider::StorageProviderPopulationPolicy value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_PopulationPolicy(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::PopulationPolicy(Windows::Storage::Provider::StorageProviderPopulationPolicy const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->put_PopulationPolicy(get_abi(value)));
}

template <typename D> Windows::Storage::Provider::StorageProviderInSyncPolicy consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::InSyncPolicy() const
{
    Windows::Storage::Provider::StorageProviderInSyncPolicy value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_InSyncPolicy(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::InSyncPolicy(Windows::Storage::Provider::StorageProviderInSyncPolicy const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->put_InSyncPolicy(get_abi(value)));
}

template <typename D> Windows::Storage::Provider::StorageProviderHardlinkPolicy consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::HardlinkPolicy() const
{
    Windows::Storage::Provider::StorageProviderHardlinkPolicy value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_HardlinkPolicy(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::HardlinkPolicy(Windows::Storage::Provider::StorageProviderHardlinkPolicy const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->put_HardlinkPolicy(get_abi(value)));
}

template <typename D> bool consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::ShowSiblingsAsGroup() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_ShowSiblingsAsGroup(&value));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::ShowSiblingsAsGroup(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->put_ShowSiblingsAsGroup(value));
}

template <typename D> hstring consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::Version() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_Version(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::Version(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->put_Version(get_abi(value)));
}

template <typename D> Windows::Storage::Provider::StorageProviderProtectionMode consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::ProtectionMode() const
{
    Windows::Storage::Provider::StorageProviderProtectionMode value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_ProtectionMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::ProtectionMode(Windows::Storage::Provider::StorageProviderProtectionMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->put_ProtectionMode(get_abi(value)));
}

template <typename D> bool consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::AllowPinning() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_AllowPinning(&value));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::AllowPinning(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->put_AllowPinning(value));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Storage::Provider::StorageProviderItemPropertyDefinition> consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::StorageProviderItemPropertyDefinitions() const
{
    Windows::Foundation::Collections::IVector<Windows::Storage::Provider::StorageProviderItemPropertyDefinition> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_StorageProviderItemPropertyDefinitions(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::RecycleBinUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_RecycleBinUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::RecycleBinUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->put_RecycleBinUri(get_abi(value)));
}

template <typename D> void consume_Windows_Storage_Provider_IStorageProviderSyncRootManagerStatics<D>::Register(Windows::Storage::Provider::StorageProviderSyncRootInfo const& syncRootInformation) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics)->Register(get_abi(syncRootInformation)));
}

template <typename D> void consume_Windows_Storage_Provider_IStorageProviderSyncRootManagerStatics<D>::Unregister(param::hstring const& id) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics)->Unregister(get_abi(id)));
}

template <typename D> Windows::Storage::Provider::StorageProviderSyncRootInfo consume_Windows_Storage_Provider_IStorageProviderSyncRootManagerStatics<D>::GetSyncRootInformationForFolder(Windows::Storage::IStorageFolder const& folder) const
{
    Windows::Storage::Provider::StorageProviderSyncRootInfo syncRootInformation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics)->GetSyncRootInformationForFolder(get_abi(folder), put_abi(syncRootInformation)));
    return syncRootInformation;
}

template <typename D> Windows::Storage::Provider::StorageProviderSyncRootInfo consume_Windows_Storage_Provider_IStorageProviderSyncRootManagerStatics<D>::GetSyncRootInformationForId(param::hstring const& id) const
{
    Windows::Storage::Provider::StorageProviderSyncRootInfo syncRootInformation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics)->GetSyncRootInformationForId(get_abi(id), put_abi(syncRootInformation)));
    return syncRootInformation;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Storage::Provider::StorageProviderSyncRootInfo> consume_Windows_Storage_Provider_IStorageProviderSyncRootManagerStatics<D>::GetCurrentSyncRoots() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Storage::Provider::StorageProviderSyncRootInfo> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics)->GetCurrentSyncRoots(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Provider_IStorageProviderUriSource<D>::GetPathForContentUri(param::hstring const& contentUri, Windows::Storage::Provider::StorageProviderGetPathForContentUriResult const& result) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderUriSource)->GetPathForContentUri(get_abi(contentUri), get_abi(result)));
}

template <typename D> void consume_Windows_Storage_Provider_IStorageProviderUriSource<D>::GetContentInfoForPath(param::hstring const& path, Windows::Storage::Provider::StorageProviderGetContentInfoForPathResult const& result) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Provider::IStorageProviderUriSource)->GetContentInfoForPath(get_abi(path), get_abi(result)));
}

template <typename D>
struct produce<D, Windows::Storage::Provider::ICachedFileUpdaterStatics> : produce_base<D, Windows::Storage::Provider::ICachedFileUpdaterStatics>
{
    HRESULT __stdcall SetUpdateInformation(void* file, HSTRING contentId, Windows::Storage::Provider::ReadActivationMode readMode, Windows::Storage::Provider::WriteActivationMode writeMode, Windows::Storage::Provider::CachedFileOptions options) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetUpdateInformation(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file), *reinterpret_cast<hstring const*>(&contentId), *reinterpret_cast<Windows::Storage::Provider::ReadActivationMode const*>(&readMode), *reinterpret_cast<Windows::Storage::Provider::WriteActivationMode const*>(&writeMode), *reinterpret_cast<Windows::Storage::Provider::CachedFileOptions const*>(&options));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Provider::ICachedFileUpdaterUI> : produce_base<D, Windows::Storage::Provider::ICachedFileUpdaterUI>
{
    HRESULT __stdcall get_Title(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Title(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UpdateTarget(Windows::Storage::Provider::CachedFileTarget* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::CachedFileTarget>(this->shim().UpdateTarget());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_FileUpdateRequested(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().FileUpdateRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Storage::Provider::FileUpdateRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_FileUpdateRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FileUpdateRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_UIRequested(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().UIRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_UIRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UIRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UIStatus(Windows::Storage::Provider::UIStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::UIStatus>(this->shim().UIStatus());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Provider::ICachedFileUpdaterUI2> : produce_base<D, Windows::Storage::Provider::ICachedFileUpdaterUI2>
{
    HRESULT __stdcall get_UpdateRequest(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::FileUpdateRequest>(this->shim().UpdateRequest());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::FileUpdateRequestDeferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Provider::IFileUpdateRequest> : produce_base<D, Windows::Storage::Provider::IFileUpdateRequest>
{
    HRESULT __stdcall get_ContentId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ContentId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_File(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::StorageFile>(this->shim().File());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Storage::Provider::FileUpdateStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::FileUpdateStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Status(Windows::Storage::Provider::FileUpdateStatus value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Status(*reinterpret_cast<Windows::Storage::Provider::FileUpdateStatus const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::FileUpdateRequestDeferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UpdateLocalFile(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateLocalFile(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Provider::IFileUpdateRequest2> : produce_base<D, Windows::Storage::Provider::IFileUpdateRequest2>
{
    HRESULT __stdcall get_UserInputNeededMessage(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UserInputNeededMessage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_UserInputNeededMessage(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserInputNeededMessage(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Provider::IFileUpdateRequestDeferral> : produce_base<D, Windows::Storage::Provider::IFileUpdateRequestDeferral>
{
    HRESULT __stdcall Complete() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Provider::IFileUpdateRequestedEventArgs> : produce_base<D, Windows::Storage::Provider::IFileUpdateRequestedEventArgs>
{
    HRESULT __stdcall get_Request(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::FileUpdateRequest>(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult> : produce_base<D, Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult>
{
    HRESULT __stdcall get_Status(Windows::Storage::Provider::StorageProviderUriSourceStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::StorageProviderUriSourceStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Status(Windows::Storage::Provider::StorageProviderUriSourceStatus value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Status(*reinterpret_cast<Windows::Storage::Provider::StorageProviderUriSourceStatus const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ContentUri(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ContentUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ContentUri(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentUri(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ContentId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ContentId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ContentId(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult> : produce_base<D, Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult>
{
    HRESULT __stdcall get_Status(Windows::Storage::Provider::StorageProviderUriSourceStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::StorageProviderUriSourceStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Status(Windows::Storage::Provider::StorageProviderUriSourceStatus value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Status(*reinterpret_cast<Windows::Storage::Provider::StorageProviderUriSourceStatus const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Path(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Path());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Path(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Path(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Provider::IStorageProviderItemPropertiesStatics> : produce_base<D, Windows::Storage::Provider::IStorageProviderItemPropertiesStatics>
{
    HRESULT __stdcall SetAsync(void* item, void* itemProperties, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SetAsync(*reinterpret_cast<Windows::Storage::IStorageItem const*>(&item), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Storage::Provider::StorageProviderItemProperty> const*>(&itemProperties)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Provider::IStorageProviderItemProperty> : produce_base<D, Windows::Storage::Provider::IStorageProviderItemProperty>
{
    HRESULT __stdcall put_Id(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Id(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Id(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Value(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Value(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IconResource(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IconResource(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IconResource(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().IconResource());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Provider::IStorageProviderItemPropertyDefinition> : produce_base<D, Windows::Storage::Provider::IStorageProviderItemPropertyDefinition>
{
    HRESULT __stdcall get_Id(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Id(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Id(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayNameResource(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayNameResource());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayNameResource(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayNameResource(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Provider::IStorageProviderItemPropertySource> : produce_base<D, Windows::Storage::Provider::IStorageProviderItemPropertySource>
{
    HRESULT __stdcall GetItemProperties(HSTRING itemPath, void** itemProperties) noexcept final
    {
        try
        {
            *itemProperties = nullptr;
            typename D::abi_guard guard(this->shim());
            *itemProperties = detach_from<Windows::Foundation::Collections::IIterable<Windows::Storage::Provider::StorageProviderItemProperty>>(this->shim().GetItemProperties(*reinterpret_cast<hstring const*>(&itemPath)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Provider::IStorageProviderPropertyCapabilities> : produce_base<D, Windows::Storage::Provider::IStorageProviderPropertyCapabilities>
{
    HRESULT __stdcall IsPropertySupported(HSTRING propertyCanonicalName, bool* isSupported) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *isSupported = detach_from<bool>(this->shim().IsPropertySupported(*reinterpret_cast<hstring const*>(&propertyCanonicalName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Provider::IStorageProviderSyncRootInfo> : produce_base<D, Windows::Storage::Provider::IStorageProviderSyncRootInfo>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Id(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Id(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Context(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().Context());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Context(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Context(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Path(void** folder) noexcept final
    {
        try
        {
            *folder = nullptr;
            typename D::abi_guard guard(this->shim());
            *folder = detach_from<Windows::Storage::IStorageFolder>(this->shim().Path());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Path(void* folder) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Path(*reinterpret_cast<Windows::Storage::IStorageFolder const*>(&folder));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayNameResource(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayNameResource());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayNameResource(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayNameResource(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IconResource(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().IconResource());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IconResource(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IconResource(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HydrationPolicy(Windows::Storage::Provider::StorageProviderHydrationPolicy* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::StorageProviderHydrationPolicy>(this->shim().HydrationPolicy());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_HydrationPolicy(Windows::Storage::Provider::StorageProviderHydrationPolicy value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HydrationPolicy(*reinterpret_cast<Windows::Storage::Provider::StorageProviderHydrationPolicy const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HydrationPolicyModifier(Windows::Storage::Provider::StorageProviderHydrationPolicyModifier* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::StorageProviderHydrationPolicyModifier>(this->shim().HydrationPolicyModifier());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_HydrationPolicyModifier(Windows::Storage::Provider::StorageProviderHydrationPolicyModifier value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HydrationPolicyModifier(*reinterpret_cast<Windows::Storage::Provider::StorageProviderHydrationPolicyModifier const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PopulationPolicy(Windows::Storage::Provider::StorageProviderPopulationPolicy* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::StorageProviderPopulationPolicy>(this->shim().PopulationPolicy());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PopulationPolicy(Windows::Storage::Provider::StorageProviderPopulationPolicy value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PopulationPolicy(*reinterpret_cast<Windows::Storage::Provider::StorageProviderPopulationPolicy const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InSyncPolicy(Windows::Storage::Provider::StorageProviderInSyncPolicy* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::StorageProviderInSyncPolicy>(this->shim().InSyncPolicy());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_InSyncPolicy(Windows::Storage::Provider::StorageProviderInSyncPolicy value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InSyncPolicy(*reinterpret_cast<Windows::Storage::Provider::StorageProviderInSyncPolicy const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HardlinkPolicy(Windows::Storage::Provider::StorageProviderHardlinkPolicy* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::StorageProviderHardlinkPolicy>(this->shim().HardlinkPolicy());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_HardlinkPolicy(Windows::Storage::Provider::StorageProviderHardlinkPolicy value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HardlinkPolicy(*reinterpret_cast<Windows::Storage::Provider::StorageProviderHardlinkPolicy const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ShowSiblingsAsGroup(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ShowSiblingsAsGroup());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ShowSiblingsAsGroup(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowSiblingsAsGroup(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Version(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Version());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Version(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Version(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ProtectionMode(Windows::Storage::Provider::StorageProviderProtectionMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::StorageProviderProtectionMode>(this->shim().ProtectionMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ProtectionMode(Windows::Storage::Provider::StorageProviderProtectionMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProtectionMode(*reinterpret_cast<Windows::Storage::Provider::StorageProviderProtectionMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AllowPinning(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowPinning());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AllowPinning(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowPinning(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StorageProviderItemPropertyDefinitions(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Storage::Provider::StorageProviderItemPropertyDefinition>>(this->shim().StorageProviderItemPropertyDefinitions());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RecycleBinUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().RecycleBinUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RecycleBinUri(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RecycleBinUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics> : produce_base<D, Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics>
{
    HRESULT __stdcall Register(void* syncRootInformation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Register(*reinterpret_cast<Windows::Storage::Provider::StorageProviderSyncRootInfo const*>(&syncRootInformation));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Unregister(HSTRING id) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Unregister(*reinterpret_cast<hstring const*>(&id));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetSyncRootInformationForFolder(void* folder, void** syncRootInformation) noexcept final
    {
        try
        {
            *syncRootInformation = nullptr;
            typename D::abi_guard guard(this->shim());
            *syncRootInformation = detach_from<Windows::Storage::Provider::StorageProviderSyncRootInfo>(this->shim().GetSyncRootInformationForFolder(*reinterpret_cast<Windows::Storage::IStorageFolder const*>(&folder)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetSyncRootInformationForId(HSTRING id, void** syncRootInformation) noexcept final
    {
        try
        {
            *syncRootInformation = nullptr;
            typename D::abi_guard guard(this->shim());
            *syncRootInformation = detach_from<Windows::Storage::Provider::StorageProviderSyncRootInfo>(this->shim().GetSyncRootInformationForId(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetCurrentSyncRoots(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Storage::Provider::StorageProviderSyncRootInfo>>(this->shim().GetCurrentSyncRoots());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Provider::IStorageProviderUriSource> : produce_base<D, Windows::Storage::Provider::IStorageProviderUriSource>
{
    HRESULT __stdcall GetPathForContentUri(HSTRING contentUri, void* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetPathForContentUri(*reinterpret_cast<hstring const*>(&contentUri), *reinterpret_cast<Windows::Storage::Provider::StorageProviderGetPathForContentUriResult const*>(&result));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetContentInfoForPath(HSTRING path, void* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetContentInfoForPath(*reinterpret_cast<hstring const*>(&path), *reinterpret_cast<Windows::Storage::Provider::StorageProviderGetContentInfoForPathResult const*>(&result));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Storage::Provider {

inline void CachedFileUpdater::SetUpdateInformation(Windows::Storage::IStorageFile const& file, param::hstring const& contentId, Windows::Storage::Provider::ReadActivationMode const& readMode, Windows::Storage::Provider::WriteActivationMode const& writeMode, Windows::Storage::Provider::CachedFileOptions const& options)
{
    get_activation_factory<CachedFileUpdater, Windows::Storage::Provider::ICachedFileUpdaterStatics>().SetUpdateInformation(file, contentId, readMode, writeMode, options);
}

inline StorageProviderGetContentInfoForPathResult::StorageProviderGetContentInfoForPathResult() :
    StorageProviderGetContentInfoForPathResult(get_activation_factory<StorageProviderGetContentInfoForPathResult>().ActivateInstance<StorageProviderGetContentInfoForPathResult>())
{}

inline StorageProviderGetPathForContentUriResult::StorageProviderGetPathForContentUriResult() :
    StorageProviderGetPathForContentUriResult(get_activation_factory<StorageProviderGetPathForContentUriResult>().ActivateInstance<StorageProviderGetPathForContentUriResult>())
{}

inline Windows::Foundation::IAsyncAction StorageProviderItemProperties::SetAsync(Windows::Storage::IStorageItem const& item, param::async_iterable<Windows::Storage::Provider::StorageProviderItemProperty> const& itemProperties)
{
    return get_activation_factory<StorageProviderItemProperties, Windows::Storage::Provider::IStorageProviderItemPropertiesStatics>().SetAsync(item, itemProperties);
}

inline StorageProviderItemProperty::StorageProviderItemProperty() :
    StorageProviderItemProperty(get_activation_factory<StorageProviderItemProperty>().ActivateInstance<StorageProviderItemProperty>())
{}

inline StorageProviderItemPropertyDefinition::StorageProviderItemPropertyDefinition() :
    StorageProviderItemPropertyDefinition(get_activation_factory<StorageProviderItemPropertyDefinition>().ActivateInstance<StorageProviderItemPropertyDefinition>())
{}

inline StorageProviderSyncRootInfo::StorageProviderSyncRootInfo() :
    StorageProviderSyncRootInfo(get_activation_factory<StorageProviderSyncRootInfo>().ActivateInstance<StorageProviderSyncRootInfo>())
{}

inline void StorageProviderSyncRootManager::Register(Windows::Storage::Provider::StorageProviderSyncRootInfo const& syncRootInformation)
{
    get_activation_factory<StorageProviderSyncRootManager, Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics>().Register(syncRootInformation);
}

inline void StorageProviderSyncRootManager::Unregister(param::hstring const& id)
{
    get_activation_factory<StorageProviderSyncRootManager, Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics>().Unregister(id);
}

inline Windows::Storage::Provider::StorageProviderSyncRootInfo StorageProviderSyncRootManager::GetSyncRootInformationForFolder(Windows::Storage::IStorageFolder const& folder)
{
    return get_activation_factory<StorageProviderSyncRootManager, Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics>().GetSyncRootInformationForFolder(folder);
}

inline Windows::Storage::Provider::StorageProviderSyncRootInfo StorageProviderSyncRootManager::GetSyncRootInformationForId(param::hstring const& id)
{
    return get_activation_factory<StorageProviderSyncRootManager, Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics>().GetSyncRootInformationForId(id);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Storage::Provider::StorageProviderSyncRootInfo> StorageProviderSyncRootManager::GetCurrentSyncRoots()
{
    return get_activation_factory<StorageProviderSyncRootManager, Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics>().GetCurrentSyncRoots();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Storage::Provider::ICachedFileUpdaterStatics> : winrt::impl::hash_base<winrt::Windows::Storage::Provider::ICachedFileUpdaterStatics> {};
template<> struct hash<winrt::Windows::Storage::Provider::ICachedFileUpdaterUI> : winrt::impl::hash_base<winrt::Windows::Storage::Provider::ICachedFileUpdaterUI> {};
template<> struct hash<winrt::Windows::Storage::Provider::ICachedFileUpdaterUI2> : winrt::impl::hash_base<winrt::Windows::Storage::Provider::ICachedFileUpdaterUI2> {};
template<> struct hash<winrt::Windows::Storage::Provider::IFileUpdateRequest> : winrt::impl::hash_base<winrt::Windows::Storage::Provider::IFileUpdateRequest> {};
template<> struct hash<winrt::Windows::Storage::Provider::IFileUpdateRequest2> : winrt::impl::hash_base<winrt::Windows::Storage::Provider::IFileUpdateRequest2> {};
template<> struct hash<winrt::Windows::Storage::Provider::IFileUpdateRequestDeferral> : winrt::impl::hash_base<winrt::Windows::Storage::Provider::IFileUpdateRequestDeferral> {};
template<> struct hash<winrt::Windows::Storage::Provider::IFileUpdateRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Storage::Provider::IFileUpdateRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult> : winrt::impl::hash_base<winrt::Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult> {};
template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult> : winrt::impl::hash_base<winrt::Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult> {};
template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderItemPropertiesStatics> : winrt::impl::hash_base<winrt::Windows::Storage::Provider::IStorageProviderItemPropertiesStatics> {};
template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderItemProperty> : winrt::impl::hash_base<winrt::Windows::Storage::Provider::IStorageProviderItemProperty> {};
template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderItemPropertyDefinition> : winrt::impl::hash_base<winrt::Windows::Storage::Provider::IStorageProviderItemPropertyDefinition> {};
template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderItemPropertySource> : winrt::impl::hash_base<winrt::Windows::Storage::Provider::IStorageProviderItemPropertySource> {};
template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderPropertyCapabilities> : winrt::impl::hash_base<winrt::Windows::Storage::Provider::IStorageProviderPropertyCapabilities> {};
template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderSyncRootInfo> : winrt::impl::hash_base<winrt::Windows::Storage::Provider::IStorageProviderSyncRootInfo> {};
template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics> : winrt::impl::hash_base<winrt::Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics> {};
template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderUriSource> : winrt::impl::hash_base<winrt::Windows::Storage::Provider::IStorageProviderUriSource> {};
template<> struct hash<winrt::Windows::Storage::Provider::CachedFileUpdater> : winrt::impl::hash_base<winrt::Windows::Storage::Provider::CachedFileUpdater> {};
template<> struct hash<winrt::Windows::Storage::Provider::CachedFileUpdaterUI> : winrt::impl::hash_base<winrt::Windows::Storage::Provider::CachedFileUpdaterUI> {};
template<> struct hash<winrt::Windows::Storage::Provider::FileUpdateRequest> : winrt::impl::hash_base<winrt::Windows::Storage::Provider::FileUpdateRequest> {};
template<> struct hash<winrt::Windows::Storage::Provider::FileUpdateRequestDeferral> : winrt::impl::hash_base<winrt::Windows::Storage::Provider::FileUpdateRequestDeferral> {};
template<> struct hash<winrt::Windows::Storage::Provider::FileUpdateRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Storage::Provider::FileUpdateRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Storage::Provider::StorageProviderGetContentInfoForPathResult> : winrt::impl::hash_base<winrt::Windows::Storage::Provider::StorageProviderGetContentInfoForPathResult> {};
template<> struct hash<winrt::Windows::Storage::Provider::StorageProviderGetPathForContentUriResult> : winrt::impl::hash_base<winrt::Windows::Storage::Provider::StorageProviderGetPathForContentUriResult> {};
template<> struct hash<winrt::Windows::Storage::Provider::StorageProviderItemProperties> : winrt::impl::hash_base<winrt::Windows::Storage::Provider::StorageProviderItemProperties> {};
template<> struct hash<winrt::Windows::Storage::Provider::StorageProviderItemProperty> : winrt::impl::hash_base<winrt::Windows::Storage::Provider::StorageProviderItemProperty> {};
template<> struct hash<winrt::Windows::Storage::Provider::StorageProviderItemPropertyDefinition> : winrt::impl::hash_base<winrt::Windows::Storage::Provider::StorageProviderItemPropertyDefinition> {};
template<> struct hash<winrt::Windows::Storage::Provider::StorageProviderSyncRootInfo> : winrt::impl::hash_base<winrt::Windows::Storage::Provider::StorageProviderSyncRootInfo> {};
template<> struct hash<winrt::Windows::Storage::Provider::StorageProviderSyncRootManager> : winrt::impl::hash_base<winrt::Windows::Storage::Provider::StorageProviderSyncRootManager> {};

}

WINRT_WARNING_POP
