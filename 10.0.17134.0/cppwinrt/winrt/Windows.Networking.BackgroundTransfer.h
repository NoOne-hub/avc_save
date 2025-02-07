﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.ApplicationModel.Background.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Security.Credentials.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.Notifications.2.h"
#include "winrt/impl/Windows.Web.2.h"
#include "winrt/impl/Windows.Networking.BackgroundTransfer.2.h"
#include "winrt/Windows.Networking.h"

namespace winrt::impl {

template <typename D> Windows::Networking::BackgroundTransfer::DownloadOperation consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader<D>::CreateDownload(Windows::Foundation::Uri const& uri, Windows::Storage::IStorageFile const& resultFile) const
{
    Windows::Networking::BackgroundTransfer::DownloadOperation operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader)->CreateDownload(get_abi(uri), get_abi(resultFile), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Networking::BackgroundTransfer::DownloadOperation consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader<D>::CreateDownload(Windows::Foundation::Uri const& uri, Windows::Storage::IStorageFile const& resultFile, Windows::Storage::IStorageFile const& requestBodyFile) const
{
    Windows::Networking::BackgroundTransfer::DownloadOperation operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader)->CreateDownloadFromFile(get_abi(uri), get_abi(resultFile), get_abi(requestBodyFile), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::DownloadOperation> consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader<D>::CreateDownloadAsync(Windows::Foundation::Uri const& uri, Windows::Storage::IStorageFile const& resultFile, Windows::Storage::Streams::IInputStream const& requestBodyStream) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::DownloadOperation> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader)->CreateDownloadAsync(get_abi(uri), get_abi(resultFile), get_abi(requestBodyStream), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundTransferGroup consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>::TransferGroup() const
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferGroup value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader2)->get_TransferGroup(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>::TransferGroup(Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader2)->put_TransferGroup(get_abi(value)));
}

template <typename D> Windows::UI::Notifications::ToastNotification consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>::SuccessToastNotification() const
{
    Windows::UI::Notifications::ToastNotification value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader2)->get_SuccessToastNotification(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>::SuccessToastNotification(Windows::UI::Notifications::ToastNotification const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader2)->put_SuccessToastNotification(get_abi(value)));
}

template <typename D> Windows::UI::Notifications::ToastNotification consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>::FailureToastNotification() const
{
    Windows::UI::Notifications::ToastNotification value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader2)->get_FailureToastNotification(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>::FailureToastNotification(Windows::UI::Notifications::ToastNotification const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader2)->put_FailureToastNotification(get_abi(value)));
}

template <typename D> Windows::UI::Notifications::TileNotification consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>::SuccessTileNotification() const
{
    Windows::UI::Notifications::TileNotification value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader2)->get_SuccessTileNotification(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>::SuccessTileNotification(Windows::UI::Notifications::TileNotification const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader2)->put_SuccessTileNotification(get_abi(value)));
}

template <typename D> Windows::UI::Notifications::TileNotification consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>::FailureTileNotification() const
{
    Windows::UI::Notifications::TileNotification value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader2)->get_FailureTileNotification(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>::FailureTileNotification(Windows::UI::Notifications::TileNotification const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader2)->put_FailureTileNotification(get_abi(value)));
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader3<D>::CompletionGroup() const
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader3)->get_CompletionGroup(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundDownloader consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderFactory<D>::CreateWithCompletionGroup(Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup const& completionGroup) const
{
    Windows::Networking::BackgroundTransfer::BackgroundDownloader backgroundDownloader{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory)->CreateWithCompletionGroup(get_abi(completionGroup), put_abi(backgroundDownloader)));
    return backgroundDownloader;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderStaticMethods<D>::GetCurrentDownloadsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods)->GetCurrentDownloadsAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderStaticMethods<D>::GetCurrentDownloadsAsync(param::hstring const& group) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods)->GetCurrentDownloadsForGroupAsync(get_abi(group), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderStaticMethods2<D>::GetCurrentDownloadsForTransferGroupAsync(Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const& group) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2)->GetCurrentDownloadsForTransferGroupAsync(get_abi(group), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderUserConsent<D>::RequestUnconstrainedDownloadsAsync(param::async_iterable<Windows::Networking::BackgroundTransfer::DownloadOperation> const& operations) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent)->RequestUnconstrainedDownloadsAsync(get_abi(operations), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::SetRequestHeader(param::hstring const& headerName, param::hstring const& headerValue) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->SetRequestHeader(get_abi(headerName), get_abi(headerValue)));
}

template <typename D> Windows::Security::Credentials::PasswordCredential consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::ServerCredential() const
{
    Windows::Security::Credentials::PasswordCredential credential{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->get_ServerCredential(put_abi(credential)));
    return credential;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::ServerCredential(Windows::Security::Credentials::PasswordCredential const& credential) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->put_ServerCredential(get_abi(credential)));
}

template <typename D> Windows::Security::Credentials::PasswordCredential consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::ProxyCredential() const
{
    Windows::Security::Credentials::PasswordCredential credential{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->get_ProxyCredential(put_abi(credential)));
    return credential;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::ProxyCredential(Windows::Security::Credentials::PasswordCredential const& credential) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->put_ProxyCredential(get_abi(credential)));
}

template <typename D> hstring consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::Method() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->get_Method(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::Method(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->put_Method(get_abi(value)));
}

template <typename D> hstring consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::Group() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->get_Group(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::Group(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->put_Group(get_abi(value)));
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::CostPolicy() const
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->get_CostPolicy(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::CostPolicy(Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->put_CostPolicy(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Background::IBackgroundTrigger consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferCompletionGroup<D>::Trigger() const
{
    Windows::ApplicationModel::Background::IBackgroundTrigger value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup)->get_Trigger(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferCompletionGroup<D>::IsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup)->get_IsEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferCompletionGroup<D>::Enable() const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup)->Enable());
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation> consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferCompletionGroupTriggerDetails<D>::Downloads() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails)->get_Downloads(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation> consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferCompletionGroupTriggerDetails<D>::Uploads() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails)->get_Uploads(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferContentPart<D>::SetHeader(param::hstring const& headerName, param::hstring const& headerValue) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart)->SetHeader(get_abi(headerName), get_abi(headerValue)));
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferContentPart<D>::SetText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart)->SetText(get_abi(value)));
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferContentPart<D>::SetFile(Windows::Storage::IStorageFile const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart)->SetFile(get_abi(value)));
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferContentPartFactory<D>::CreateWithName(param::hstring const& name) const
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory)->CreateWithName(get_abi(name), put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferContentPartFactory<D>::CreateWithNameAndFileName(param::hstring const& name, param::hstring const& fileName) const
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory)->CreateWithNameAndFileName(get_abi(name), get_abi(fileName), put_abi(value)));
    return value;
}

template <typename D> Windows::Web::WebErrorStatus consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferErrorStaticMethods<D>::GetStatus(int32_t hresult) const
{
    Windows::Web::WebErrorStatus status{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods)->GetStatus(hresult, put_abi(status)));
    return status;
}

template <typename D> hstring consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferGroup<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferGroup<D>::TransferBehavior() const
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup)->get_TransferBehavior(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferGroup<D>::TransferBehavior(Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup)->put_TransferBehavior(get_abi(value)));
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundTransferGroup consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferGroupStatics<D>::CreateGroup(param::hstring const& name) const
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferGroup value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics)->CreateGroup(get_abi(name), put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation<D>::Guid() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation)->get_Guid(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation<D>::RequestedUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation)->get_RequestedUri(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation<D>::Method() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation)->get_Method(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation<D>::Group() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation)->get_Group(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation<D>::CostPolicy() const
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation)->get_CostPolicy(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation<D>::CostPolicy(Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation)->put_CostPolicy(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IInputStream consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation<D>::GetResultStreamAt(uint64_t position) const
{
    Windows::Storage::Streams::IInputStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation)->GetResultStreamAt(position, put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::BackgroundTransfer::ResponseInformation consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation<D>::GetResponseInformation() const
{
    Windows::Networking::BackgroundTransfer::ResponseInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation)->GetResponseInformation(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundTransferPriority consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperationPriority<D>::Priority() const
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferPriority value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority)->get_Priority(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperationPriority<D>::Priority(Windows::Networking::BackgroundTransfer::BackgroundTransferPriority const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority)->put_Priority(get_abi(value)));
}

template <typename D> bool consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferRangesDownloadedEventArgs<D>::WasDownloadRestarted() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferRangesDownloadedEventArgs)->get_WasDownloadRestarted(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange> consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferRangesDownloadedEventArgs<D>::AddedRanges() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferRangesDownloadedEventArgs)->get_AddedRanges(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferRangesDownloadedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferRangesDownloadedEventArgs)->GetDeferral(put_abi(result)));
    return result;
}

template <typename D> Windows::Networking::BackgroundTransfer::UploadOperation consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader<D>::CreateUpload(Windows::Foundation::Uri const& uri, Windows::Storage::IStorageFile const& sourceFile) const
{
    Windows::Networking::BackgroundTransfer::UploadOperation operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader)->CreateUpload(get_abi(uri), get_abi(sourceFile), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation> consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader<D>::CreateUploadFromStreamAsync(Windows::Foundation::Uri const& uri, Windows::Storage::Streams::IInputStream const& sourceStream) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader)->CreateUploadFromStreamAsync(get_abi(uri), get_abi(sourceStream), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation> consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader<D>::CreateUploadAsync(Windows::Foundation::Uri const& uri, param::async_iterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> const& parts) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader)->CreateUploadWithFormDataAndAutoBoundaryAsync(get_abi(uri), get_abi(parts), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation> consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader<D>::CreateUploadAsync(Windows::Foundation::Uri const& uri, param::async_iterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> const& parts, param::hstring const& subType) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader)->CreateUploadWithSubTypeAsync(get_abi(uri), get_abi(parts), get_abi(subType), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation> consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader<D>::CreateUploadAsync(Windows::Foundation::Uri const& uri, param::async_iterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> const& parts, param::hstring const& subType, param::hstring const& boundary) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader)->CreateUploadWithSubTypeAndBoundaryAsync(get_abi(uri), get_abi(parts), get_abi(subType), get_abi(boundary), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundTransferGroup consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>::TransferGroup() const
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferGroup value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader2)->get_TransferGroup(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>::TransferGroup(Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader2)->put_TransferGroup(get_abi(value)));
}

template <typename D> Windows::UI::Notifications::ToastNotification consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>::SuccessToastNotification() const
{
    Windows::UI::Notifications::ToastNotification value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader2)->get_SuccessToastNotification(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>::SuccessToastNotification(Windows::UI::Notifications::ToastNotification const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader2)->put_SuccessToastNotification(get_abi(value)));
}

template <typename D> Windows::UI::Notifications::ToastNotification consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>::FailureToastNotification() const
{
    Windows::UI::Notifications::ToastNotification value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader2)->get_FailureToastNotification(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>::FailureToastNotification(Windows::UI::Notifications::ToastNotification const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader2)->put_FailureToastNotification(get_abi(value)));
}

template <typename D> Windows::UI::Notifications::TileNotification consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>::SuccessTileNotification() const
{
    Windows::UI::Notifications::TileNotification value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader2)->get_SuccessTileNotification(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>::SuccessTileNotification(Windows::UI::Notifications::TileNotification const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader2)->put_SuccessTileNotification(get_abi(value)));
}

template <typename D> Windows::UI::Notifications::TileNotification consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>::FailureTileNotification() const
{
    Windows::UI::Notifications::TileNotification value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader2)->get_FailureTileNotification(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>::FailureTileNotification(Windows::UI::Notifications::TileNotification const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader2)->put_FailureTileNotification(get_abi(value)));
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader3<D>::CompletionGroup() const
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader3)->get_CompletionGroup(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundUploader consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderFactory<D>::CreateWithCompletionGroup(Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup const& completionGroup) const
{
    Windows::Networking::BackgroundTransfer::BackgroundUploader backgroundUploader{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory)->CreateWithCompletionGroup(get_abi(completionGroup), put_abi(backgroundUploader)));
    return backgroundUploader;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderStaticMethods<D>::GetCurrentUploadsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods)->GetCurrentUploadsAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderStaticMethods<D>::GetCurrentUploadsAsync(param::hstring const& group) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods)->GetCurrentUploadsForGroupAsync(get_abi(group), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderStaticMethods2<D>::GetCurrentUploadsForTransferGroupAsync(Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const& group) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2)->GetCurrentUploadsForTransferGroupAsync(get_abi(group), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderUserConsent<D>::RequestUnconstrainedUploadsAsync(param::async_iterable<Windows::Networking::BackgroundTransfer::UploadOperation> const& operations) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent)->RequestUnconstrainedUploadsAsync(get_abi(operations), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Foundation::Uri> consume_Windows_Networking_BackgroundTransfer_IContentPrefetcher<D>::ContentUris() const
{
    Windows::Foundation::Collections::IVector<Windows::Foundation::Uri> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IContentPrefetcher)->get_ContentUris(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IContentPrefetcher<D>::IndirectContentUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IContentPrefetcher)->put_IndirectContentUri(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_Networking_BackgroundTransfer_IContentPrefetcher<D>::IndirectContentUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IContentPrefetcher)->get_IndirectContentUri(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_Networking_BackgroundTransfer_IContentPrefetcherTime<D>::LastSuccessfulPrefetchTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IContentPrefetcherTime)->get_LastSuccessfulPrefetchTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::IStorageFile consume_Windows_Networking_BackgroundTransfer_IDownloadOperation<D>::ResultFile() const
{
    Windows::Storage::IStorageFile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation)->get_ResultFile(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundDownloadProgress consume_Windows_Networking_BackgroundTransfer_IDownloadOperation<D>::Progress() const
{
    Windows::Networking::BackgroundTransfer::BackgroundDownloadProgress value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation)->get_Progress(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::DownloadOperation> consume_Windows_Networking_BackgroundTransfer_IDownloadOperation<D>::StartAsync() const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::DownloadOperation> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation)->StartAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::DownloadOperation> consume_Windows_Networking_BackgroundTransfer_IDownloadOperation<D>::AttachAsync() const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::DownloadOperation> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation)->AttachAsync(put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IDownloadOperation<D>::Pause() const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation)->Pause());
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IDownloadOperation<D>::Resume() const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation)->Resume());
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundTransferGroup consume_Windows_Networking_BackgroundTransfer_IDownloadOperation2<D>::TransferGroup() const
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferGroup value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation2)->get_TransferGroup(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_BackgroundTransfer_IDownloadOperation3<D>::IsRandomAccessRequired() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation3)->get_IsRandomAccessRequired(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IDownloadOperation3<D>::IsRandomAccessRequired(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation3)->put_IsRandomAccessRequired(value));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_Networking_BackgroundTransfer_IDownloadOperation3<D>::GetResultRandomAccessStreamReference() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference stream{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation3)->GetResultRandomAccessStreamReference(put_abi(stream)));
    return stream;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange> consume_Windows_Networking_BackgroundTransfer_IDownloadOperation3<D>::GetDownloadedRanges() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation3)->GetDownloadedRanges(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Networking_BackgroundTransfer_IDownloadOperation3<D>::RangesDownloaded(Windows::Foundation::TypedEventHandler<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::BackgroundTransferRangesDownloadedEventArgs> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation3)->add_RangesDownloaded(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Networking::BackgroundTransfer::IDownloadOperation3> consume_Windows_Networking_BackgroundTransfer_IDownloadOperation3<D>::RangesDownloaded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::BackgroundTransferRangesDownloadedEventArgs> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Networking::BackgroundTransfer::IDownloadOperation3>(this, &abi_t<Windows::Networking::BackgroundTransfer::IDownloadOperation3>::remove_RangesDownloaded, RangesDownloaded(eventHandler));
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IDownloadOperation3<D>::RangesDownloaded(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation3)->remove_RangesDownloaded(get_abi(eventCookie)));
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IDownloadOperation3<D>::RequestedUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation3)->put_RequestedUri(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::WebErrorStatus> consume_Windows_Networking_BackgroundTransfer_IDownloadOperation3<D>::RecoverableWebErrorStatuses() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::WebErrorStatus> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation3)->get_RecoverableWebErrorStatuses(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Web::WebErrorStatus> consume_Windows_Networking_BackgroundTransfer_IDownloadOperation3<D>::CurrentWebErrorStatus() const
{
    Windows::Foundation::IReference<Windows::Web::WebErrorStatus> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation3)->get_CurrentWebErrorStatus(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IDownloadOperation4<D>::MakeCurrentInTransferGroup() const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation4)->MakeCurrentInTransferGroup());
}

template <typename D> bool consume_Windows_Networking_BackgroundTransfer_IResponseInformation<D>::IsResumable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IResponseInformation)->get_IsResumable(&value));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Networking_BackgroundTransfer_IResponseInformation<D>::ActualUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IResponseInformation)->get_ActualUri(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Networking_BackgroundTransfer_IResponseInformation<D>::StatusCode() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IResponseInformation)->get_StatusCode(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, hstring> consume_Windows_Networking_BackgroundTransfer_IResponseInformation<D>::Headers() const
{
    Windows::Foundation::Collections::IMapView<hstring, hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IResponseInformation)->get_Headers(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_BackgroundTransfer_IUnconstrainedTransferRequestResult<D>::IsUnconstrained() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult)->get_IsUnconstrained(&value));
    return value;
}

template <typename D> Windows::Storage::IStorageFile consume_Windows_Networking_BackgroundTransfer_IUploadOperation<D>::SourceFile() const
{
    Windows::Storage::IStorageFile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IUploadOperation)->get_SourceFile(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundUploadProgress consume_Windows_Networking_BackgroundTransfer_IUploadOperation<D>::Progress() const
{
    Windows::Networking::BackgroundTransfer::BackgroundUploadProgress value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IUploadOperation)->get_Progress(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::UploadOperation, Windows::Networking::BackgroundTransfer::UploadOperation> consume_Windows_Networking_BackgroundTransfer_IUploadOperation<D>::StartAsync() const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::UploadOperation, Windows::Networking::BackgroundTransfer::UploadOperation> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IUploadOperation)->StartAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::UploadOperation, Windows::Networking::BackgroundTransfer::UploadOperation> consume_Windows_Networking_BackgroundTransfer_IUploadOperation<D>::AttachAsync() const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::UploadOperation, Windows::Networking::BackgroundTransfer::UploadOperation> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IUploadOperation)->AttachAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundTransferGroup consume_Windows_Networking_BackgroundTransfer_IUploadOperation2<D>::TransferGroup() const
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferGroup value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IUploadOperation2)->get_TransferGroup(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IUploadOperation3<D>::MakeCurrentInTransferGroup() const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IUploadOperation3)->MakeCurrentInTransferGroup());
}

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloader> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloader>
{
    HRESULT __stdcall CreateDownload(void* uri, void* resultFile, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Networking::BackgroundTransfer::DownloadOperation>(this->shim().CreateDownload(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Storage::IStorageFile const*>(&resultFile)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateDownloadFromFile(void* uri, void* resultFile, void* requestBodyFile, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Networking::BackgroundTransfer::DownloadOperation>(this->shim().CreateDownload(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Storage::IStorageFile const*>(&resultFile), *reinterpret_cast<Windows::Storage::IStorageFile const*>(&requestBodyFile)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateDownloadAsync(void* uri, void* resultFile, void* requestBodyStream, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::DownloadOperation>>(this->shim().CreateDownloadAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Storage::IStorageFile const*>(&resultFile), *reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&requestBodyStream)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloader2> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloader2>
{
    HRESULT __stdcall get_TransferGroup(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::BackgroundTransferGroup>(this->shim().TransferGroup());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TransferGroup(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransferGroup(*reinterpret_cast<Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SuccessToastNotification(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Notifications::ToastNotification>(this->shim().SuccessToastNotification());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SuccessToastNotification(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SuccessToastNotification(*reinterpret_cast<Windows::UI::Notifications::ToastNotification const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FailureToastNotification(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Notifications::ToastNotification>(this->shim().FailureToastNotification());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FailureToastNotification(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FailureToastNotification(*reinterpret_cast<Windows::UI::Notifications::ToastNotification const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SuccessTileNotification(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Notifications::TileNotification>(this->shim().SuccessTileNotification());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SuccessTileNotification(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SuccessTileNotification(*reinterpret_cast<Windows::UI::Notifications::TileNotification const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FailureTileNotification(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Notifications::TileNotification>(this->shim().FailureTileNotification());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FailureTileNotification(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FailureTileNotification(*reinterpret_cast<Windows::UI::Notifications::TileNotification const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloader3> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloader3>
{
    HRESULT __stdcall get_CompletionGroup(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup>(this->shim().CompletionGroup());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory>
{
    HRESULT __stdcall CreateWithCompletionGroup(void* completionGroup, void** backgroundDownloader) noexcept final
    {
        try
        {
            *backgroundDownloader = nullptr;
            typename D::abi_guard guard(this->shim());
            *backgroundDownloader = detach_from<Windows::Networking::BackgroundTransfer::BackgroundDownloader>(this->shim().CreateWithCompletionGroup(*reinterpret_cast<Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup const*>(&completionGroup)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods>
{
    HRESULT __stdcall GetCurrentDownloadsAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>>>(this->shim().GetCurrentDownloadsAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetCurrentDownloadsForGroupAsync(HSTRING group, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>>>(this->shim().GetCurrentDownloadsAsync(*reinterpret_cast<hstring const*>(&group)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2>
{
    HRESULT __stdcall GetCurrentDownloadsForTransferGroupAsync(void* group, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>>>(this->shim().GetCurrentDownloadsForTransferGroupAsync(*reinterpret_cast<Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const*>(&group)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent>
{
    HRESULT __stdcall RequestUnconstrainedDownloadsAsync(void* operations, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult>>(this->shim().RequestUnconstrainedDownloadsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Networking::BackgroundTransfer::DownloadOperation> const*>(&operations)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferBase> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferBase>
{
    HRESULT __stdcall SetRequestHeader(HSTRING headerName, HSTRING headerValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetRequestHeader(*reinterpret_cast<hstring const*>(&headerName), *reinterpret_cast<hstring const*>(&headerValue));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ServerCredential(void** credential) noexcept final
    {
        try
        {
            *credential = nullptr;
            typename D::abi_guard guard(this->shim());
            *credential = detach_from<Windows::Security::Credentials::PasswordCredential>(this->shim().ServerCredential());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ServerCredential(void* credential) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServerCredential(*reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&credential));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ProxyCredential(void** credential) noexcept final
    {
        try
        {
            *credential = nullptr;
            typename D::abi_guard guard(this->shim());
            *credential = detach_from<Windows::Security::Credentials::PasswordCredential>(this->shim().ProxyCredential());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ProxyCredential(void* credential) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProxyCredential(*reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&credential));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Method(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Method());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Method(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Method(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Group(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Group());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Group(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Group(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CostPolicy(Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy>(this->shim().CostPolicy());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CostPolicy(Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CostPolicy(*reinterpret_cast<Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup>
{
    HRESULT __stdcall get_Trigger(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Background::IBackgroundTrigger>(this->shim().Trigger());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Enable() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Enable();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails>
{
    HRESULT __stdcall get_Downloads(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>>(this->shim().Downloads());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Uploads(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>>(this->shim().Uploads());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart>
{
    HRESULT __stdcall SetHeader(HSTRING headerName, HSTRING headerValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetHeader(*reinterpret_cast<hstring const*>(&headerName), *reinterpret_cast<hstring const*>(&headerValue));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetText(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetFile(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFile(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory>
{
    HRESULT __stdcall CreateWithName(HSTRING name, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart>(this->shim().CreateWithName(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithNameAndFileName(HSTRING name, HSTRING fileName, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart>(this->shim().CreateWithNameAndFileName(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&fileName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods>
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

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup>
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

    HRESULT __stdcall get_TransferBehavior(Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior>(this->shim().TransferBehavior());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TransferBehavior(Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransferBehavior(*reinterpret_cast<Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics>
{
    HRESULT __stdcall CreateGroup(HSTRING name, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::BackgroundTransferGroup>(this->shim().CreateGroup(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation>
{
    HRESULT __stdcall get_Guid(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().Guid());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RequestedUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().RequestedUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Method(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Method());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Group(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Group());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CostPolicy(Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy>(this->shim().CostPolicy());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CostPolicy(Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CostPolicy(*reinterpret_cast<Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetResultStreamAt(uint64_t position, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IInputStream>(this->shim().GetResultStreamAt(position));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetResponseInformation(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::ResponseInformation>(this->shim().GetResponseInformation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority>
{
    HRESULT __stdcall get_Priority(Windows::Networking::BackgroundTransfer::BackgroundTransferPriority* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::BackgroundTransferPriority>(this->shim().Priority());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Priority(Windows::Networking::BackgroundTransfer::BackgroundTransferPriority value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Priority(*reinterpret_cast<Windows::Networking::BackgroundTransfer::BackgroundTransferPriority const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferRangesDownloadedEventArgs> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferRangesDownloadedEventArgs>
{
    HRESULT __stdcall get_WasDownloadRestarted(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().WasDownloadRestarted());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AddedRanges(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange>>(this->shim().AddedRanges());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundUploader> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundUploader>
{
    HRESULT __stdcall CreateUpload(void* uri, void* sourceFile, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Networking::BackgroundTransfer::UploadOperation>(this->shim().CreateUpload(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Storage::IStorageFile const*>(&sourceFile)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateUploadFromStreamAsync(void* uri, void* sourceStream, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation>>(this->shim().CreateUploadFromStreamAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&sourceStream)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateUploadWithFormDataAndAutoBoundaryAsync(void* uri, void* parts, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation>>(this->shim().CreateUploadAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> const*>(&parts)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateUploadWithSubTypeAsync(void* uri, void* parts, HSTRING subType, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation>>(this->shim().CreateUploadAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> const*>(&parts), *reinterpret_cast<hstring const*>(&subType)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateUploadWithSubTypeAndBoundaryAsync(void* uri, void* parts, HSTRING subType, HSTRING boundary, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation>>(this->shim().CreateUploadAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> const*>(&parts), *reinterpret_cast<hstring const*>(&subType), *reinterpret_cast<hstring const*>(&boundary)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundUploader2> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundUploader2>
{
    HRESULT __stdcall get_TransferGroup(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::BackgroundTransferGroup>(this->shim().TransferGroup());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TransferGroup(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransferGroup(*reinterpret_cast<Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SuccessToastNotification(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Notifications::ToastNotification>(this->shim().SuccessToastNotification());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SuccessToastNotification(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SuccessToastNotification(*reinterpret_cast<Windows::UI::Notifications::ToastNotification const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FailureToastNotification(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Notifications::ToastNotification>(this->shim().FailureToastNotification());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FailureToastNotification(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FailureToastNotification(*reinterpret_cast<Windows::UI::Notifications::ToastNotification const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SuccessTileNotification(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Notifications::TileNotification>(this->shim().SuccessTileNotification());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SuccessTileNotification(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SuccessTileNotification(*reinterpret_cast<Windows::UI::Notifications::TileNotification const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FailureTileNotification(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Notifications::TileNotification>(this->shim().FailureTileNotification());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FailureTileNotification(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FailureTileNotification(*reinterpret_cast<Windows::UI::Notifications::TileNotification const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundUploader3> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundUploader3>
{
    HRESULT __stdcall get_CompletionGroup(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup>(this->shim().CompletionGroup());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory>
{
    HRESULT __stdcall CreateWithCompletionGroup(void* completionGroup, void** backgroundUploader) noexcept final
    {
        try
        {
            *backgroundUploader = nullptr;
            typename D::abi_guard guard(this->shim());
            *backgroundUploader = detach_from<Windows::Networking::BackgroundTransfer::BackgroundUploader>(this->shim().CreateWithCompletionGroup(*reinterpret_cast<Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup const*>(&completionGroup)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods>
{
    HRESULT __stdcall GetCurrentUploadsAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>>>(this->shim().GetCurrentUploadsAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetCurrentUploadsForGroupAsync(HSTRING group, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>>>(this->shim().GetCurrentUploadsAsync(*reinterpret_cast<hstring const*>(&group)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2>
{
    HRESULT __stdcall GetCurrentUploadsForTransferGroupAsync(void* group, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>>>(this->shim().GetCurrentUploadsForTransferGroupAsync(*reinterpret_cast<Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const*>(&group)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent>
{
    HRESULT __stdcall RequestUnconstrainedUploadsAsync(void* operations, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult>>(this->shim().RequestUnconstrainedUploadsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Networking::BackgroundTransfer::UploadOperation> const*>(&operations)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IContentPrefetcher> : produce_base<D, Windows::Networking::BackgroundTransfer::IContentPrefetcher>
{
    HRESULT __stdcall get_ContentUris(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Foundation::Uri>>(this->shim().ContentUris());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IndirectContentUri(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IndirectContentUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IndirectContentUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().IndirectContentUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IContentPrefetcherTime> : produce_base<D, Windows::Networking::BackgroundTransfer::IContentPrefetcherTime>
{
    HRESULT __stdcall get_LastSuccessfulPrefetchTime(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::DateTime>>(this->shim().LastSuccessfulPrefetchTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IDownloadOperation> : produce_base<D, Windows::Networking::BackgroundTransfer::IDownloadOperation>
{
    HRESULT __stdcall get_ResultFile(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::IStorageFile>(this->shim().ResultFile());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Progress(struct struct_Windows_Networking_BackgroundTransfer_BackgroundDownloadProgress* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::BackgroundDownloadProgress>(this->shim().Progress());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::DownloadOperation>>(this->shim().StartAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AttachAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::DownloadOperation>>(this->shim().AttachAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Pause() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Pause();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Resume() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Resume();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IDownloadOperation2> : produce_base<D, Windows::Networking::BackgroundTransfer::IDownloadOperation2>
{
    HRESULT __stdcall get_TransferGroup(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::BackgroundTransferGroup>(this->shim().TransferGroup());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IDownloadOperation3> : produce_base<D, Windows::Networking::BackgroundTransfer::IDownloadOperation3>
{
    HRESULT __stdcall get_IsRandomAccessRequired(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsRandomAccessRequired());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsRandomAccessRequired(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsRandomAccessRequired(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetResultRandomAccessStreamReference(void** stream) noexcept final
    {
        try
        {
            *stream = nullptr;
            typename D::abi_guard guard(this->shim());
            *stream = detach_from<Windows::Storage::Streams::IRandomAccessStreamReference>(this->shim().GetResultRandomAccessStreamReference());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDownloadedRanges(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange>>(this->shim().GetDownloadedRanges());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_RangesDownloaded(void* eventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().RangesDownloaded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::BackgroundTransferRangesDownloadedEventArgs> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_RangesDownloaded(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RangesDownloaded(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RequestedUri(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestedUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RecoverableWebErrorStatuses(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Web::WebErrorStatus>>(this->shim().RecoverableWebErrorStatuses());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentWebErrorStatus(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Web::WebErrorStatus>>(this->shim().CurrentWebErrorStatus());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IDownloadOperation4> : produce_base<D, Windows::Networking::BackgroundTransfer::IDownloadOperation4>
{
    HRESULT __stdcall MakeCurrentInTransferGroup() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MakeCurrentInTransferGroup();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IResponseInformation> : produce_base<D, Windows::Networking::BackgroundTransfer::IResponseInformation>
{
    HRESULT __stdcall get_IsResumable(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsResumable());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ActualUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().ActualUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StatusCode(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().StatusCode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Headers(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, hstring>>(this->shim().Headers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult> : produce_base<D, Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult>
{
    HRESULT __stdcall get_IsUnconstrained(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsUnconstrained());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IUploadOperation> : produce_base<D, Windows::Networking::BackgroundTransfer::IUploadOperation>
{
    HRESULT __stdcall get_SourceFile(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::IStorageFile>(this->shim().SourceFile());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Progress(struct struct_Windows_Networking_BackgroundTransfer_BackgroundUploadProgress* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::BackgroundUploadProgress>(this->shim().Progress());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::UploadOperation, Windows::Networking::BackgroundTransfer::UploadOperation>>(this->shim().StartAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AttachAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::UploadOperation, Windows::Networking::BackgroundTransfer::UploadOperation>>(this->shim().AttachAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IUploadOperation2> : produce_base<D, Windows::Networking::BackgroundTransfer::IUploadOperation2>
{
    HRESULT __stdcall get_TransferGroup(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::BackgroundTransferGroup>(this->shim().TransferGroup());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IUploadOperation3> : produce_base<D, Windows::Networking::BackgroundTransfer::IUploadOperation3>
{
    HRESULT __stdcall MakeCurrentInTransferGroup() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MakeCurrentInTransferGroup();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Networking::BackgroundTransfer {

inline BackgroundDownloader::BackgroundDownloader() :
    BackgroundDownloader(get_activation_factory<BackgroundDownloader>().ActivateInstance<BackgroundDownloader>())
{}

inline BackgroundDownloader::BackgroundDownloader(Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup const& completionGroup) :
    BackgroundDownloader(get_activation_factory<BackgroundDownloader, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory>().CreateWithCompletionGroup(completionGroup))
{}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> BackgroundDownloader::GetCurrentDownloadsAsync()
{
    return get_activation_factory<BackgroundDownloader, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods>().GetCurrentDownloadsAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> BackgroundDownloader::GetCurrentDownloadsAsync(param::hstring const& group)
{
    return get_activation_factory<BackgroundDownloader, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods>().GetCurrentDownloadsAsync(group);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> BackgroundDownloader::GetCurrentDownloadsForTransferGroupAsync(Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const& group)
{
    return get_activation_factory<BackgroundDownloader, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2>().GetCurrentDownloadsForTransferGroupAsync(group);
}

inline Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> BackgroundDownloader::RequestUnconstrainedDownloadsAsync(param::async_iterable<Windows::Networking::BackgroundTransfer::DownloadOperation> const& operations)
{
    return get_activation_factory<BackgroundDownloader, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent>().RequestUnconstrainedDownloadsAsync(operations);
}

inline BackgroundTransferCompletionGroup::BackgroundTransferCompletionGroup() :
    BackgroundTransferCompletionGroup(get_activation_factory<BackgroundTransferCompletionGroup>().ActivateInstance<BackgroundTransferCompletionGroup>())
{}

inline BackgroundTransferContentPart::BackgroundTransferContentPart() :
    BackgroundTransferContentPart(get_activation_factory<BackgroundTransferContentPart>().ActivateInstance<BackgroundTransferContentPart>())
{}

inline BackgroundTransferContentPart::BackgroundTransferContentPart(param::hstring const& name) :
    BackgroundTransferContentPart(get_activation_factory<BackgroundTransferContentPart, Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory>().CreateWithName(name))
{}

inline BackgroundTransferContentPart::BackgroundTransferContentPart(param::hstring const& name, param::hstring const& fileName) :
    BackgroundTransferContentPart(get_activation_factory<BackgroundTransferContentPart, Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory>().CreateWithNameAndFileName(name, fileName))
{}

inline Windows::Web::WebErrorStatus BackgroundTransferError::GetStatus(int32_t hresult)
{
    return get_activation_factory<BackgroundTransferError, Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods>().GetStatus(hresult);
}

inline Windows::Networking::BackgroundTransfer::BackgroundTransferGroup BackgroundTransferGroup::CreateGroup(param::hstring const& name)
{
    return get_activation_factory<BackgroundTransferGroup, Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics>().CreateGroup(name);
}

inline BackgroundUploader::BackgroundUploader() :
    BackgroundUploader(get_activation_factory<BackgroundUploader>().ActivateInstance<BackgroundUploader>())
{}

inline BackgroundUploader::BackgroundUploader(Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup const& completionGroup) :
    BackgroundUploader(get_activation_factory<BackgroundUploader, Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory>().CreateWithCompletionGroup(completionGroup))
{}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> BackgroundUploader::GetCurrentUploadsAsync()
{
    return get_activation_factory<BackgroundUploader, Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods>().GetCurrentUploadsAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> BackgroundUploader::GetCurrentUploadsAsync(param::hstring const& group)
{
    return get_activation_factory<BackgroundUploader, Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods>().GetCurrentUploadsAsync(group);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> BackgroundUploader::GetCurrentUploadsForTransferGroupAsync(Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const& group)
{
    return get_activation_factory<BackgroundUploader, Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2>().GetCurrentUploadsForTransferGroupAsync(group);
}

inline Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> BackgroundUploader::RequestUnconstrainedUploadsAsync(param::async_iterable<Windows::Networking::BackgroundTransfer::UploadOperation> const& operations)
{
    return get_activation_factory<BackgroundUploader, Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent>().RequestUnconstrainedUploadsAsync(operations);
}

inline Windows::Foundation::Collections::IVector<Windows::Foundation::Uri> ContentPrefetcher::ContentUris()
{
    return get_activation_factory<ContentPrefetcher, Windows::Networking::BackgroundTransfer::IContentPrefetcher>().ContentUris();
}

inline void ContentPrefetcher::IndirectContentUri(Windows::Foundation::Uri const& value)
{
    get_activation_factory<ContentPrefetcher, Windows::Networking::BackgroundTransfer::IContentPrefetcher>().IndirectContentUri(value);
}

inline Windows::Foundation::Uri ContentPrefetcher::IndirectContentUri()
{
    return get_activation_factory<ContentPrefetcher, Windows::Networking::BackgroundTransfer::IContentPrefetcher>().IndirectContentUri();
}

inline Windows::Foundation::IReference<Windows::Foundation::DateTime> ContentPrefetcher::LastSuccessfulPrefetchTime()
{
    return get_activation_factory<ContentPrefetcher, Windows::Networking::BackgroundTransfer::IContentPrefetcherTime>().LastSuccessfulPrefetchTime();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloader> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloader> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloader2> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloader2> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloader3> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloader3> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferBase> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferBase> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferRangesDownloadedEventArgs> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferRangesDownloadedEventArgs> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploader> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploader> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploader2> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploader2> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploader3> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploader3> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IContentPrefetcher> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IContentPrefetcher> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IContentPrefetcherTime> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IContentPrefetcherTime> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IDownloadOperation> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IDownloadOperation> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IDownloadOperation2> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IDownloadOperation2> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IDownloadOperation3> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IDownloadOperation3> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IDownloadOperation4> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IDownloadOperation4> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IResponseInformation> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IResponseInformation> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IUploadOperation> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IUploadOperation> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IUploadOperation2> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IUploadOperation2> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IUploadOperation3> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::IUploadOperation3> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::BackgroundDownloader> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::BackgroundDownloader> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroupTriggerDetails> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroupTriggerDetails> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferError> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferError> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferGroup> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferGroup> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferRangesDownloadedEventArgs> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferRangesDownloadedEventArgs> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::BackgroundUploader> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::BackgroundUploader> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::ContentPrefetcher> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::ContentPrefetcher> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::DownloadOperation> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::DownloadOperation> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::ResponseInformation> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::ResponseInformation> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> {};
template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::UploadOperation> : winrt::impl::hash_base<winrt::Windows::Networking::BackgroundTransfer::UploadOperation> {};

}

WINRT_WARNING_POP
