﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.Gaming.XboxLive.Storage.2.h"

namespace winrt::impl {

template <typename D> Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus consume_Windows_Gaming_XboxLive_Storage_IGameSaveBlobGetResult<D>::Status() const
{
    Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::IBuffer> consume_Windows_Gaming_XboxLive_Storage_IGameSaveBlobGetResult<D>::Value() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::IBuffer> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult)->get_Value(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Gaming_XboxLive_Storage_IGameSaveBlobInfo<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo)->get_Name(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Gaming_XboxLive_Storage_IGameSaveBlobInfo<D>::Size() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo)->get_Size(&value));
    return value;
}

template <typename D> Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus consume_Windows_Gaming_XboxLive_Storage_IGameSaveBlobInfoGetResult<D>::Status() const
{
    Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfo> consume_Windows_Gaming_XboxLive_Storage_IGameSaveBlobInfoGetResult<D>::Value() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfo> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult)->get_Value(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult> consume_Windows_Gaming_XboxLive_Storage_IGameSaveBlobInfoQuery<D>::GetBlobInfoAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoQuery)->GetBlobInfoAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult> consume_Windows_Gaming_XboxLive_Storage_IGameSaveBlobInfoQuery<D>::GetBlobInfoAsync(uint32_t startIndex, uint32_t maxNumberOfItems) const
{
    Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoQuery)->GetBlobInfoWithIndexAndMaxAsync(startIndex, maxNumberOfItems, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<uint32_t> consume_Windows_Gaming_XboxLive_Storage_IGameSaveBlobInfoQuery<D>::GetItemCountAsync() const
{
    Windows::Foundation::IAsyncOperation<uint32_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoQuery)->GetItemCountAsync(put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_Gaming_XboxLive_Storage_IGameSaveContainer<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveContainer)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::XboxLive::Storage::GameSaveProvider consume_Windows_Gaming_XboxLive_Storage_IGameSaveContainer<D>::Provider() const
{
    Windows::Gaming::XboxLive::Storage::GameSaveProvider value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveContainer)->get_Provider(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult> consume_Windows_Gaming_XboxLive_Storage_IGameSaveContainer<D>::SubmitUpdatesAsync(param::async_map_view<hstring, Windows::Storage::Streams::IBuffer> const& blobsToWrite, param::async_iterable<hstring> const& blobsToDelete, param::hstring const& displayName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveContainer)->SubmitUpdatesAsync(get_abi(blobsToWrite), get_abi(blobsToDelete), get_abi(displayName), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult> consume_Windows_Gaming_XboxLive_Storage_IGameSaveContainer<D>::ReadAsync(param::async_map_view<hstring, Windows::Storage::Streams::IBuffer> const& blobsToRead) const
{
    Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult> action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveContainer)->ReadAsync(get_abi(blobsToRead), put_abi(action)));
    return action;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveBlobGetResult> consume_Windows_Gaming_XboxLive_Storage_IGameSaveContainer<D>::GetAsync(param::async_iterable<hstring> const& blobsToRead) const
{
    Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveBlobGetResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveContainer)->GetAsync(get_abi(blobsToRead), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult> consume_Windows_Gaming_XboxLive_Storage_IGameSaveContainer<D>::SubmitPropertySetUpdatesAsync(Windows::Foundation::Collections::IPropertySet const& blobsToWrite, param::async_iterable<hstring> const& blobsToDelete, param::hstring const& displayName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveContainer)->SubmitPropertySetUpdatesAsync(get_abi(blobsToWrite), get_abi(blobsToDelete), get_abi(displayName), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoQuery consume_Windows_Gaming_XboxLive_Storage_IGameSaveContainer<D>::CreateBlobInfoQuery(param::hstring const& blobNamePrefix) const
{
    Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoQuery query{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveContainer)->CreateBlobInfoQuery(get_abi(blobNamePrefix), put_abi(query)));
    return query;
}

template <typename D> hstring consume_Windows_Gaming_XboxLive_Storage_IGameSaveContainerInfo<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo)->get_Name(put_abi(value)));
    return value;
}

template <typename D> uint64_t consume_Windows_Gaming_XboxLive_Storage_IGameSaveContainerInfo<D>::TotalSize() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo)->get_TotalSize(&value));
    return value;
}

template <typename D> hstring consume_Windows_Gaming_XboxLive_Storage_IGameSaveContainerInfo<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Gaming_XboxLive_Storage_IGameSaveContainerInfo<D>::LastModifiedTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo)->get_LastModifiedTime(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Gaming_XboxLive_Storage_IGameSaveContainerInfo<D>::NeedsSync() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo)->get_NeedsSync(&value));
    return value;
}

template <typename D> Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus consume_Windows_Gaming_XboxLive_Storage_IGameSaveContainerInfoGetResult<D>::Status() const
{
    Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfo> consume_Windows_Gaming_XboxLive_Storage_IGameSaveContainerInfoGetResult<D>::Value() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfo> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult)->get_Value(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult> consume_Windows_Gaming_XboxLive_Storage_IGameSaveContainerInfoQuery<D>::GetContainerInfoAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery)->GetContainerInfoAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult> consume_Windows_Gaming_XboxLive_Storage_IGameSaveContainerInfoQuery<D>::GetContainerInfoAsync(uint32_t startIndex, uint32_t maxNumberOfItems) const
{
    Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery)->GetContainerInfoWithIndexAndMaxAsync(startIndex, maxNumberOfItems, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<uint32_t> consume_Windows_Gaming_XboxLive_Storage_IGameSaveContainerInfoQuery<D>::GetItemCountAsync() const
{
    Windows::Foundation::IAsyncOperation<uint32_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery)->GetItemCountAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus consume_Windows_Gaming_XboxLive_Storage_IGameSaveOperationResult<D>::Status() const
{
    Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveOperationResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::System::User consume_Windows_Gaming_XboxLive_Storage_IGameSaveProvider<D>::User() const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveProvider)->get_User(put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::XboxLive::Storage::GameSaveContainer consume_Windows_Gaming_XboxLive_Storage_IGameSaveProvider<D>::CreateContainer(param::hstring const& name) const
{
    Windows::Gaming::XboxLive::Storage::GameSaveContainer result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveProvider)->CreateContainer(get_abi(name), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult> consume_Windows_Gaming_XboxLive_Storage_IGameSaveProvider<D>::DeleteContainerAsync(param::hstring const& name) const
{
    Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult> action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveProvider)->DeleteContainerAsync(get_abi(name), put_abi(action)));
    return action;
}

template <typename D> Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoQuery consume_Windows_Gaming_XboxLive_Storage_IGameSaveProvider<D>::CreateContainerInfoQuery() const
{
    Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoQuery query{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveProvider)->CreateContainerInfoQuery(put_abi(query)));
    return query;
}

template <typename D> Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoQuery consume_Windows_Gaming_XboxLive_Storage_IGameSaveProvider<D>::CreateContainerInfoQuery(param::hstring const& containerNamePrefix) const
{
    Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoQuery query{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveProvider)->CreateContainerInfoQueryWithName(get_abi(containerNamePrefix), put_abi(query)));
    return query;
}

template <typename D> Windows::Foundation::IAsyncOperation<int64_t> consume_Windows_Gaming_XboxLive_Storage_IGameSaveProvider<D>::GetRemainingBytesInQuotaAsync() const
{
    Windows::Foundation::IAsyncOperation<int64_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveProvider)->GetRemainingBytesInQuotaAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Gaming_XboxLive_Storage_IGameSaveProvider<D>::ContainersChangedSinceLastSync() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveProvider)->get_ContainersChangedSinceLastSync(put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus consume_Windows_Gaming_XboxLive_Storage_IGameSaveProviderGetResult<D>::Status() const
{
    Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::XboxLive::Storage::GameSaveProvider consume_Windows_Gaming_XboxLive_Storage_IGameSaveProviderGetResult<D>::Value() const
{
    Windows::Gaming::XboxLive::Storage::GameSaveProvider value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult)->get_Value(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult> consume_Windows_Gaming_XboxLive_Storage_IGameSaveProviderStatics<D>::GetForUserAsync(Windows::System::User const& user, param::hstring const& serviceConfigId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveProviderStatics)->GetForUserAsync(get_abi(user), get_abi(serviceConfigId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult> consume_Windows_Gaming_XboxLive_Storage_IGameSaveProviderStatics<D>::GetSyncOnDemandForUserAsync(Windows::System::User const& user, param::hstring const& serviceConfigId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::XboxLive::Storage::IGameSaveProviderStatics)->GetSyncOnDemandForUserAsync(get_abi(user), get_abi(serviceConfigId), put_abi(operation)));
    return operation;
}

template <typename D>
struct produce<D, Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult> : produce_base<D, Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult>
{
    HRESULT __stdcall get_Status(Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Value(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::IBuffer>>(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo> : produce_base<D, Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo>
{
    HRESULT __stdcall get_Name(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Size(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult> : produce_base<D, Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult>
{
    HRESULT __stdcall get_Status(Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Value(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfo>>(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoQuery> : produce_base<D, Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoQuery>
{
    HRESULT __stdcall GetBlobInfoAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult>>(this->shim().GetBlobInfoAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetBlobInfoWithIndexAndMaxAsync(uint32_t startIndex, uint32_t maxNumberOfItems, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult>>(this->shim().GetBlobInfoAsync(startIndex, maxNumberOfItems));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetItemCountAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<uint32_t>>(this->shim().GetItemCountAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::XboxLive::Storage::IGameSaveContainer> : produce_base<D, Windows::Gaming::XboxLive::Storage::IGameSaveContainer>
{
    HRESULT __stdcall get_Name(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Provider(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::XboxLive::Storage::GameSaveProvider>(this->shim().Provider());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SubmitUpdatesAsync(void* blobsToWrite, void* blobsToDelete, HSTRING displayName, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult>>(this->shim().SubmitUpdatesAsync(*reinterpret_cast<Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::IBuffer> const*>(&blobsToWrite), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&blobsToDelete), *reinterpret_cast<hstring const*>(&displayName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReadAsync(void* blobsToRead, void** action) noexcept final
    {
        try
        {
            *action = nullptr;
            typename D::abi_guard guard(this->shim());
            *action = detach_from<Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult>>(this->shim().ReadAsync(*reinterpret_cast<Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::IBuffer> const*>(&blobsToRead)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetAsync(void* blobsToRead, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveBlobGetResult>>(this->shim().GetAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&blobsToRead)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SubmitPropertySetUpdatesAsync(void* blobsToWrite, void* blobsToDelete, HSTRING displayName, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult>>(this->shim().SubmitPropertySetUpdatesAsync(*reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&blobsToWrite), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&blobsToDelete), *reinterpret_cast<hstring const*>(&displayName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateBlobInfoQuery(HSTRING blobNamePrefix, void** query) noexcept final
    {
        try
        {
            *query = nullptr;
            typename D::abi_guard guard(this->shim());
            *query = detach_from<Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoQuery>(this->shim().CreateBlobInfoQuery(*reinterpret_cast<hstring const*>(&blobNamePrefix)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo> : produce_base<D, Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo>
{
    HRESULT __stdcall get_Name(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TotalSize(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().TotalSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LastModifiedTime(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().LastModifiedTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NeedsSync(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().NeedsSync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult> : produce_base<D, Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult>
{
    HRESULT __stdcall get_Status(Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Value(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfo>>(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery> : produce_base<D, Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery>
{
    HRESULT __stdcall GetContainerInfoAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult>>(this->shim().GetContainerInfoAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetContainerInfoWithIndexAndMaxAsync(uint32_t startIndex, uint32_t maxNumberOfItems, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult>>(this->shim().GetContainerInfoAsync(startIndex, maxNumberOfItems));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetItemCountAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<uint32_t>>(this->shim().GetItemCountAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::XboxLive::Storage::IGameSaveOperationResult> : produce_base<D, Windows::Gaming::XboxLive::Storage::IGameSaveOperationResult>
{
    HRESULT __stdcall get_Status(Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::XboxLive::Storage::IGameSaveProvider> : produce_base<D, Windows::Gaming::XboxLive::Storage::IGameSaveProvider>
{
    HRESULT __stdcall get_User(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::User>(this->shim().User());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateContainer(HSTRING name, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Gaming::XboxLive::Storage::GameSaveContainer>(this->shim().CreateContainer(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall DeleteContainerAsync(HSTRING name, void** action) noexcept final
    {
        try
        {
            *action = nullptr;
            typename D::abi_guard guard(this->shim());
            *action = detach_from<Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveOperationResult>>(this->shim().DeleteContainerAsync(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateContainerInfoQuery(void** query) noexcept final
    {
        try
        {
            *query = nullptr;
            typename D::abi_guard guard(this->shim());
            *query = detach_from<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoQuery>(this->shim().CreateContainerInfoQuery());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateContainerInfoQueryWithName(HSTRING containerNamePrefix, void** query) noexcept final
    {
        try
        {
            *query = nullptr;
            typename D::abi_guard guard(this->shim());
            *query = detach_from<Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoQuery>(this->shim().CreateContainerInfoQuery(*reinterpret_cast<hstring const*>(&containerNamePrefix)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetRemainingBytesInQuotaAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<int64_t>>(this->shim().GetRemainingBytesInQuotaAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ContainersChangedSinceLastSync(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().ContainersChangedSinceLastSync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult> : produce_base<D, Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult>
{
    HRESULT __stdcall get_Status(Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Value(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::XboxLive::Storage::GameSaveProvider>(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::XboxLive::Storage::IGameSaveProviderStatics> : produce_base<D, Windows::Gaming::XboxLive::Storage::IGameSaveProviderStatics>
{
    HRESULT __stdcall GetForUserAsync(void* user, HSTRING serviceConfigId, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult>>(this->shim().GetForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&serviceConfigId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetSyncOnDemandForUserAsync(void* user, HSTRING serviceConfigId, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult>>(this->shim().GetSyncOnDemandForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&serviceConfigId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Gaming::XboxLive::Storage {

inline Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult> GameSaveProvider::GetForUserAsync(Windows::System::User const& user, param::hstring const& serviceConfigId)
{
    return get_activation_factory<GameSaveProvider, Windows::Gaming::XboxLive::Storage::IGameSaveProviderStatics>().GetForUserAsync(user, serviceConfigId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult> GameSaveProvider::GetSyncOnDemandForUserAsync(Windows::System::User const& user, param::hstring const& serviceConfigId)
{
    return get_activation_factory<GameSaveProvider, Windows::Gaming::XboxLive::Storage::IGameSaveProviderStatics>().GetSyncOnDemandForUserAsync(user, serviceConfigId);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult> : winrt::impl::hash_base<winrt::Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult> {};
template<> struct hash<winrt::Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo> : winrt::impl::hash_base<winrt::Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo> {};
template<> struct hash<winrt::Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult> : winrt::impl::hash_base<winrt::Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult> {};
template<> struct hash<winrt::Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoQuery> : winrt::impl::hash_base<winrt::Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoQuery> {};
template<> struct hash<winrt::Windows::Gaming::XboxLive::Storage::IGameSaveContainer> : winrt::impl::hash_base<winrt::Windows::Gaming::XboxLive::Storage::IGameSaveContainer> {};
template<> struct hash<winrt::Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo> : winrt::impl::hash_base<winrt::Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo> {};
template<> struct hash<winrt::Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult> : winrt::impl::hash_base<winrt::Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult> {};
template<> struct hash<winrt::Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery> : winrt::impl::hash_base<winrt::Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery> {};
template<> struct hash<winrt::Windows::Gaming::XboxLive::Storage::IGameSaveOperationResult> : winrt::impl::hash_base<winrt::Windows::Gaming::XboxLive::Storage::IGameSaveOperationResult> {};
template<> struct hash<winrt::Windows::Gaming::XboxLive::Storage::IGameSaveProvider> : winrt::impl::hash_base<winrt::Windows::Gaming::XboxLive::Storage::IGameSaveProvider> {};
template<> struct hash<winrt::Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult> : winrt::impl::hash_base<winrt::Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult> {};
template<> struct hash<winrt::Windows::Gaming::XboxLive::Storage::IGameSaveProviderStatics> : winrt::impl::hash_base<winrt::Windows::Gaming::XboxLive::Storage::IGameSaveProviderStatics> {};
template<> struct hash<winrt::Windows::Gaming::XboxLive::Storage::GameSaveBlobGetResult> : winrt::impl::hash_base<winrt::Windows::Gaming::XboxLive::Storage::GameSaveBlobGetResult> {};
template<> struct hash<winrt::Windows::Gaming::XboxLive::Storage::GameSaveBlobInfo> : winrt::impl::hash_base<winrt::Windows::Gaming::XboxLive::Storage::GameSaveBlobInfo> {};
template<> struct hash<winrt::Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult> : winrt::impl::hash_base<winrt::Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult> {};
template<> struct hash<winrt::Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoQuery> : winrt::impl::hash_base<winrt::Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoQuery> {};
template<> struct hash<winrt::Windows::Gaming::XboxLive::Storage::GameSaveContainer> : winrt::impl::hash_base<winrt::Windows::Gaming::XboxLive::Storage::GameSaveContainer> {};
template<> struct hash<winrt::Windows::Gaming::XboxLive::Storage::GameSaveContainerInfo> : winrt::impl::hash_base<winrt::Windows::Gaming::XboxLive::Storage::GameSaveContainerInfo> {};
template<> struct hash<winrt::Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult> : winrt::impl::hash_base<winrt::Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult> {};
template<> struct hash<winrt::Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoQuery> : winrt::impl::hash_base<winrt::Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoQuery> {};
template<> struct hash<winrt::Windows::Gaming::XboxLive::Storage::GameSaveOperationResult> : winrt::impl::hash_base<winrt::Windows::Gaming::XboxLive::Storage::GameSaveOperationResult> {};
template<> struct hash<winrt::Windows::Gaming::XboxLive::Storage::GameSaveProvider> : winrt::impl::hash_base<winrt::Windows::Gaming::XboxLive::Storage::GameSaveProvider> {};
template<> struct hash<winrt::Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult> : winrt::impl::hash_base<winrt::Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult> {};

}

WINRT_WARNING_POP
