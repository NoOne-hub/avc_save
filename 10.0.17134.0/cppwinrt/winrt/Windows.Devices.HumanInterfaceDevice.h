﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Devices.HumanInterfaceDevice.2.h"
#include "winrt/Windows.Devices.h"

namespace winrt::impl {

template <typename D> uint32_t consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControl<D>::Id() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidBooleanControl)->get_Id(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControl<D>::UsagePage() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidBooleanControl)->get_UsagePage(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControl<D>::UsageId() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidBooleanControl)->get_UsageId(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControl<D>::IsActive() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidBooleanControl)->get_IsActive(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControl<D>::IsActive(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidBooleanControl)->put_IsActive(value));
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControl<D>::ControlDescription() const
{
    Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidBooleanControl)->get_ControlDescription(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControlDescription<D>::Id() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription)->get_Id(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControlDescription<D>::ReportId() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription)->get_ReportId(&value));
    return value;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidReportType consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControlDescription<D>::ReportType() const
{
    Windows::Devices::HumanInterfaceDevice::HidReportType value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription)->get_ReportType(put_abi(value)));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControlDescription<D>::UsagePage() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription)->get_UsagePage(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControlDescription<D>::UsageId() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription)->get_UsageId(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidCollection> consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControlDescription<D>::ParentCollections() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidCollection> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription)->get_ParentCollections(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_HumanInterfaceDevice_IHidBooleanControlDescription2<D>::IsAbsolute() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription2)->get_IsAbsolute(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_HumanInterfaceDevice_IHidCollection<D>::Id() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidCollection)->get_Id(&value));
    return value;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidCollectionType consume_Windows_Devices_HumanInterfaceDevice_IHidCollection<D>::Type() const
{
    Windows::Devices::HumanInterfaceDevice::HidCollectionType value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidCollection)->get_Type(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_HumanInterfaceDevice_IHidCollection<D>::UsagePage() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidCollection)->get_UsagePage(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_HumanInterfaceDevice_IHidCollection<D>::UsageId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidCollection)->get_UsageId(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_HumanInterfaceDevice_IHidDevice<D>::VendorId() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidDevice)->get_VendorId(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_HumanInterfaceDevice_IHidDevice<D>::ProductId() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidDevice)->get_ProductId(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_HumanInterfaceDevice_IHidDevice<D>::Version() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidDevice)->get_Version(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_HumanInterfaceDevice_IHidDevice<D>::UsagePage() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidDevice)->get_UsagePage(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_HumanInterfaceDevice_IHidDevice<D>::UsageId() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidDevice)->get_UsageId(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidInputReport> consume_Windows_Devices_HumanInterfaceDevice_IHidDevice<D>::GetInputReportAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidInputReport> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidDevice)->GetInputReportAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidInputReport> consume_Windows_Devices_HumanInterfaceDevice_IHidDevice<D>::GetInputReportAsync(uint16_t reportId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidInputReport> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidDevice)->GetInputReportByIdAsync(reportId, put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidFeatureReport> consume_Windows_Devices_HumanInterfaceDevice_IHidDevice<D>::GetFeatureReportAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidFeatureReport> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidDevice)->GetFeatureReportAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidFeatureReport> consume_Windows_Devices_HumanInterfaceDevice_IHidDevice<D>::GetFeatureReportAsync(uint16_t reportId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidFeatureReport> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidDevice)->GetFeatureReportByIdAsync(reportId, put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidOutputReport consume_Windows_Devices_HumanInterfaceDevice_IHidDevice<D>::CreateOutputReport() const
{
    Windows::Devices::HumanInterfaceDevice::HidOutputReport outputReport{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidDevice)->CreateOutputReport(put_abi(outputReport)));
    return outputReport;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidOutputReport consume_Windows_Devices_HumanInterfaceDevice_IHidDevice<D>::CreateOutputReport(uint16_t reportId) const
{
    Windows::Devices::HumanInterfaceDevice::HidOutputReport outputReport{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidDevice)->CreateOutputReportById(reportId, put_abi(outputReport)));
    return outputReport;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidFeatureReport consume_Windows_Devices_HumanInterfaceDevice_IHidDevice<D>::CreateFeatureReport() const
{
    Windows::Devices::HumanInterfaceDevice::HidFeatureReport featureReport{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidDevice)->CreateFeatureReport(put_abi(featureReport)));
    return featureReport;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidFeatureReport consume_Windows_Devices_HumanInterfaceDevice_IHidDevice<D>::CreateFeatureReport(uint16_t reportId) const
{
    Windows::Devices::HumanInterfaceDevice::HidFeatureReport featureReport{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidDevice)->CreateFeatureReportById(reportId, put_abi(featureReport)));
    return featureReport;
}

template <typename D> Windows::Foundation::IAsyncOperation<uint32_t> consume_Windows_Devices_HumanInterfaceDevice_IHidDevice<D>::SendOutputReportAsync(Windows::Devices::HumanInterfaceDevice::HidOutputReport const& outputReport) const
{
    Windows::Foundation::IAsyncOperation<uint32_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidDevice)->SendOutputReportAsync(get_abi(outputReport), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<uint32_t> consume_Windows_Devices_HumanInterfaceDevice_IHidDevice<D>::SendFeatureReportAsync(Windows::Devices::HumanInterfaceDevice::HidFeatureReport const& featureReport) const
{
    Windows::Foundation::IAsyncOperation<uint32_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidDevice)->SendFeatureReportAsync(get_abi(featureReport), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription> consume_Windows_Devices_HumanInterfaceDevice_IHidDevice<D>::GetBooleanControlDescriptions(Windows::Devices::HumanInterfaceDevice::HidReportType const& reportType, uint16_t usagePage, uint16_t usageId) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidDevice)->GetBooleanControlDescriptions(get_abi(reportType), usagePage, usageId, put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription> consume_Windows_Devices_HumanInterfaceDevice_IHidDevice<D>::GetNumericControlDescriptions(Windows::Devices::HumanInterfaceDevice::HidReportType const& reportType, uint16_t usagePage, uint16_t usageId) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidDevice)->GetNumericControlDescriptions(get_abi(reportType), usagePage, usageId, put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_HumanInterfaceDevice_IHidDevice<D>::InputReportReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::HumanInterfaceDevice::HidDevice, Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs> const& reportHandler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidDevice)->add_InputReportReceived(get_abi(reportHandler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::HumanInterfaceDevice::IHidDevice> consume_Windows_Devices_HumanInterfaceDevice_IHidDevice<D>::InputReportReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::HumanInterfaceDevice::HidDevice, Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs> const& reportHandler) const
{
    return impl::make_event_revoker<D, Windows::Devices::HumanInterfaceDevice::IHidDevice>(this, &abi_t<Windows::Devices::HumanInterfaceDevice::IHidDevice>::remove_InputReportReceived, InputReportReceived(reportHandler));
}

template <typename D> void consume_Windows_Devices_HumanInterfaceDevice_IHidDevice<D>::InputReportReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidDevice)->remove_InputReportReceived(get_abi(token)));
}

template <typename D> hstring consume_Windows_Devices_HumanInterfaceDevice_IHidDeviceStatics<D>::GetDeviceSelector(uint16_t usagePage, uint16_t usageId) const
{
    hstring selector{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidDeviceStatics)->GetDeviceSelector(usagePage, usageId, put_abi(selector)));
    return selector;
}

template <typename D> hstring consume_Windows_Devices_HumanInterfaceDevice_IHidDeviceStatics<D>::GetDeviceSelector(uint16_t usagePage, uint16_t usageId, uint16_t vendorId, uint16_t productId) const
{
    hstring selector{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidDeviceStatics)->GetDeviceSelectorVidPid(usagePage, usageId, vendorId, productId, put_abi(selector)));
    return selector;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidDevice> consume_Windows_Devices_HumanInterfaceDevice_IHidDeviceStatics<D>::FromIdAsync(param::hstring const& deviceId, Windows::Storage::FileAccessMode const& accessMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidDevice> hidDevice{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidDeviceStatics)->FromIdAsync(get_abi(deviceId), get_abi(accessMode), put_abi(hidDevice)));
    return hidDevice;
}

template <typename D> uint16_t consume_Windows_Devices_HumanInterfaceDevice_IHidFeatureReport<D>::Id() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidFeatureReport)->get_Id(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_HumanInterfaceDevice_IHidFeatureReport<D>::Data() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidFeatureReport)->get_Data(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_HumanInterfaceDevice_IHidFeatureReport<D>::Data(Windows::Storage::Streams::IBuffer const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidFeatureReport)->put_Data(get_abi(value)));
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidBooleanControl consume_Windows_Devices_HumanInterfaceDevice_IHidFeatureReport<D>::GetBooleanControl(uint16_t usagePage, uint16_t usageId) const
{
    Windows::Devices::HumanInterfaceDevice::HidBooleanControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidFeatureReport)->GetBooleanControl(usagePage, usageId, put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidBooleanControl consume_Windows_Devices_HumanInterfaceDevice_IHidFeatureReport<D>::GetBooleanControlByDescription(Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription const& controlDescription) const
{
    Windows::Devices::HumanInterfaceDevice::HidBooleanControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidFeatureReport)->GetBooleanControlByDescription(get_abi(controlDescription), put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidNumericControl consume_Windows_Devices_HumanInterfaceDevice_IHidFeatureReport<D>::GetNumericControl(uint16_t usagePage, uint16_t usageId) const
{
    Windows::Devices::HumanInterfaceDevice::HidNumericControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidFeatureReport)->GetNumericControl(usagePage, usageId, put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidNumericControl consume_Windows_Devices_HumanInterfaceDevice_IHidFeatureReport<D>::GetNumericControlByDescription(Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription const& controlDescription) const
{
    Windows::Devices::HumanInterfaceDevice::HidNumericControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidFeatureReport)->GetNumericControlByDescription(get_abi(controlDescription), put_abi(value)));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_HumanInterfaceDevice_IHidInputReport<D>::Id() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidInputReport)->get_Id(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_HumanInterfaceDevice_IHidInputReport<D>::Data() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidInputReport)->get_Data(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidBooleanControl> consume_Windows_Devices_HumanInterfaceDevice_IHidInputReport<D>::ActivatedBooleanControls() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidBooleanControl> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidInputReport)->get_ActivatedBooleanControls(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidBooleanControl> consume_Windows_Devices_HumanInterfaceDevice_IHidInputReport<D>::TransitionedBooleanControls() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidBooleanControl> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidInputReport)->get_TransitionedBooleanControls(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidBooleanControl consume_Windows_Devices_HumanInterfaceDevice_IHidInputReport<D>::GetBooleanControl(uint16_t usagePage, uint16_t usageId) const
{
    Windows::Devices::HumanInterfaceDevice::HidBooleanControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidInputReport)->GetBooleanControl(usagePage, usageId, put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidBooleanControl consume_Windows_Devices_HumanInterfaceDevice_IHidInputReport<D>::GetBooleanControlByDescription(Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription const& controlDescription) const
{
    Windows::Devices::HumanInterfaceDevice::HidBooleanControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidInputReport)->GetBooleanControlByDescription(get_abi(controlDescription), put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidNumericControl consume_Windows_Devices_HumanInterfaceDevice_IHidInputReport<D>::GetNumericControl(uint16_t usagePage, uint16_t usageId) const
{
    Windows::Devices::HumanInterfaceDevice::HidNumericControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidInputReport)->GetNumericControl(usagePage, usageId, put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidNumericControl consume_Windows_Devices_HumanInterfaceDevice_IHidInputReport<D>::GetNumericControlByDescription(Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription const& controlDescription) const
{
    Windows::Devices::HumanInterfaceDevice::HidNumericControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidInputReport)->GetNumericControlByDescription(get_abi(controlDescription), put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidInputReport consume_Windows_Devices_HumanInterfaceDevice_IHidInputReportReceivedEventArgs<D>::Report() const
{
    Windows::Devices::HumanInterfaceDevice::HidInputReport value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidInputReportReceivedEventArgs)->get_Report(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControl<D>::Id() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidNumericControl)->get_Id(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControl<D>::IsGrouped() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidNumericControl)->get_IsGrouped(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControl<D>::UsagePage() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidNumericControl)->get_UsagePage(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControl<D>::UsageId() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidNumericControl)->get_UsageId(&value));
    return value;
}

template <typename D> int64_t consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControl<D>::Value() const
{
    int64_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidNumericControl)->get_Value(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControl<D>::Value(int64_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidNumericControl)->put_Value(value));
}

template <typename D> int64_t consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControl<D>::ScaledValue() const
{
    int64_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidNumericControl)->get_ScaledValue(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControl<D>::ScaledValue(int64_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidNumericControl)->put_ScaledValue(value));
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControl<D>::ControlDescription() const
{
    Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidNumericControl)->get_ControlDescription(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControlDescription<D>::Id() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription)->get_Id(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControlDescription<D>::ReportId() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription)->get_ReportId(&value));
    return value;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidReportType consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControlDescription<D>::ReportType() const
{
    Windows::Devices::HumanInterfaceDevice::HidReportType value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription)->get_ReportType(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControlDescription<D>::ReportSize() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription)->get_ReportSize(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControlDescription<D>::ReportCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription)->get_ReportCount(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControlDescription<D>::UsagePage() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription)->get_UsagePage(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControlDescription<D>::UsageId() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription)->get_UsageId(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControlDescription<D>::LogicalMinimum() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription)->get_LogicalMinimum(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControlDescription<D>::LogicalMaximum() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription)->get_LogicalMaximum(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControlDescription<D>::PhysicalMinimum() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription)->get_PhysicalMinimum(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControlDescription<D>::PhysicalMaximum() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription)->get_PhysicalMaximum(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControlDescription<D>::UnitExponent() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription)->get_UnitExponent(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControlDescription<D>::Unit() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription)->get_Unit(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControlDescription<D>::IsAbsolute() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription)->get_IsAbsolute(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControlDescription<D>::HasNull() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription)->get_HasNull(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidCollection> consume_Windows_Devices_HumanInterfaceDevice_IHidNumericControlDescription<D>::ParentCollections() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidCollection> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription)->get_ParentCollections(put_abi(value)));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_HumanInterfaceDevice_IHidOutputReport<D>::Id() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidOutputReport)->get_Id(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_HumanInterfaceDevice_IHidOutputReport<D>::Data() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidOutputReport)->get_Data(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_HumanInterfaceDevice_IHidOutputReport<D>::Data(Windows::Storage::Streams::IBuffer const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidOutputReport)->put_Data(get_abi(value)));
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidBooleanControl consume_Windows_Devices_HumanInterfaceDevice_IHidOutputReport<D>::GetBooleanControl(uint16_t usagePage, uint16_t usageId) const
{
    Windows::Devices::HumanInterfaceDevice::HidBooleanControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidOutputReport)->GetBooleanControl(usagePage, usageId, put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidBooleanControl consume_Windows_Devices_HumanInterfaceDevice_IHidOutputReport<D>::GetBooleanControlByDescription(Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription const& controlDescription) const
{
    Windows::Devices::HumanInterfaceDevice::HidBooleanControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidOutputReport)->GetBooleanControlByDescription(get_abi(controlDescription), put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidNumericControl consume_Windows_Devices_HumanInterfaceDevice_IHidOutputReport<D>::GetNumericControl(uint16_t usagePage, uint16_t usageId) const
{
    Windows::Devices::HumanInterfaceDevice::HidNumericControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidOutputReport)->GetNumericControl(usagePage, usageId, put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::HumanInterfaceDevice::HidNumericControl consume_Windows_Devices_HumanInterfaceDevice_IHidOutputReport<D>::GetNumericControlByDescription(Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription const& controlDescription) const
{
    Windows::Devices::HumanInterfaceDevice::HidNumericControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::HumanInterfaceDevice::IHidOutputReport)->GetNumericControlByDescription(get_abi(controlDescription), put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Devices::HumanInterfaceDevice::IHidBooleanControl> : produce_base<D, Windows::Devices::HumanInterfaceDevice::IHidBooleanControl>
{
    HRESULT __stdcall get_Id(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UsagePage(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().UsagePage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UsageId(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().UsageId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsActive(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsActive());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsActive(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsActive(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ControlDescription(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription>(this->shim().ControlDescription());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription> : produce_base<D, Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription>
{
    HRESULT __stdcall get_Id(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ReportId(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().ReportId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ReportType(Windows::Devices::HumanInterfaceDevice::HidReportType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::HumanInterfaceDevice::HidReportType>(this->shim().ReportType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UsagePage(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().UsagePage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UsageId(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().UsageId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ParentCollections(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidCollection>>(this->shim().ParentCollections());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription2> : produce_base<D, Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription2>
{
    HRESULT __stdcall get_IsAbsolute(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsAbsolute());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::HumanInterfaceDevice::IHidCollection> : produce_base<D, Windows::Devices::HumanInterfaceDevice::IHidCollection>
{
    HRESULT __stdcall get_Id(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Type(Windows::Devices::HumanInterfaceDevice::HidCollectionType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::HumanInterfaceDevice::HidCollectionType>(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UsagePage(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().UsagePage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UsageId(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().UsageId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::HumanInterfaceDevice::IHidDevice> : produce_base<D, Windows::Devices::HumanInterfaceDevice::IHidDevice>
{
    HRESULT __stdcall get_VendorId(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().VendorId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ProductId(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().ProductId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Version(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().Version());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UsagePage(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().UsagePage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UsageId(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().UsageId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetInputReportAsync(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidInputReport>>(this->shim().GetInputReportAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetInputReportByIdAsync(uint16_t reportId, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidInputReport>>(this->shim().GetInputReportAsync(reportId));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetFeatureReportAsync(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidFeatureReport>>(this->shim().GetFeatureReportAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetFeatureReportByIdAsync(uint16_t reportId, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidFeatureReport>>(this->shim().GetFeatureReportAsync(reportId));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateOutputReport(void** outputReport) noexcept final
    {
        try
        {
            *outputReport = nullptr;
            typename D::abi_guard guard(this->shim());
            *outputReport = detach_from<Windows::Devices::HumanInterfaceDevice::HidOutputReport>(this->shim().CreateOutputReport());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateOutputReportById(uint16_t reportId, void** outputReport) noexcept final
    {
        try
        {
            *outputReport = nullptr;
            typename D::abi_guard guard(this->shim());
            *outputReport = detach_from<Windows::Devices::HumanInterfaceDevice::HidOutputReport>(this->shim().CreateOutputReport(reportId));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFeatureReport(void** featureReport) noexcept final
    {
        try
        {
            *featureReport = nullptr;
            typename D::abi_guard guard(this->shim());
            *featureReport = detach_from<Windows::Devices::HumanInterfaceDevice::HidFeatureReport>(this->shim().CreateFeatureReport());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFeatureReportById(uint16_t reportId, void** featureReport) noexcept final
    {
        try
        {
            *featureReport = nullptr;
            typename D::abi_guard guard(this->shim());
            *featureReport = detach_from<Windows::Devices::HumanInterfaceDevice::HidFeatureReport>(this->shim().CreateFeatureReport(reportId));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SendOutputReportAsync(void* outputReport, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<uint32_t>>(this->shim().SendOutputReportAsync(*reinterpret_cast<Windows::Devices::HumanInterfaceDevice::HidOutputReport const*>(&outputReport)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SendFeatureReportAsync(void* featureReport, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<uint32_t>>(this->shim().SendFeatureReportAsync(*reinterpret_cast<Windows::Devices::HumanInterfaceDevice::HidFeatureReport const*>(&featureReport)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetBooleanControlDescriptions(Windows::Devices::HumanInterfaceDevice::HidReportType reportType, uint16_t usagePage, uint16_t usageId, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription>>(this->shim().GetBooleanControlDescriptions(*reinterpret_cast<Windows::Devices::HumanInterfaceDevice::HidReportType const*>(&reportType), usagePage, usageId));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetNumericControlDescriptions(Windows::Devices::HumanInterfaceDevice::HidReportType reportType, uint16_t usagePage, uint16_t usageId, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription>>(this->shim().GetNumericControlDescriptions(*reinterpret_cast<Windows::Devices::HumanInterfaceDevice::HidReportType const*>(&reportType), usagePage, usageId));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_InputReportReceived(void* reportHandler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().InputReportReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::HumanInterfaceDevice::HidDevice, Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs> const*>(&reportHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_InputReportReceived(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InputReportReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::HumanInterfaceDevice::IHidDeviceStatics> : produce_base<D, Windows::Devices::HumanInterfaceDevice::IHidDeviceStatics>
{
    HRESULT __stdcall GetDeviceSelector(uint16_t usagePage, uint16_t usageId, HSTRING* selector) noexcept final
    {
        try
        {
            *selector = nullptr;
            typename D::abi_guard guard(this->shim());
            *selector = detach_from<hstring>(this->shim().GetDeviceSelector(usagePage, usageId));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelectorVidPid(uint16_t usagePage, uint16_t usageId, uint16_t vendorId, uint16_t productId, HSTRING* selector) noexcept final
    {
        try
        {
            *selector = nullptr;
            typename D::abi_guard guard(this->shim());
            *selector = detach_from<hstring>(this->shim().GetDeviceSelector(usagePage, usageId, vendorId, productId));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING deviceId, Windows::Storage::FileAccessMode accessMode, void** hidDevice) noexcept final
    {
        try
        {
            *hidDevice = nullptr;
            typename D::abi_guard guard(this->shim());
            *hidDevice = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidDevice>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<Windows::Storage::FileAccessMode const*>(&accessMode)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::HumanInterfaceDevice::IHidFeatureReport> : produce_base<D, Windows::Devices::HumanInterfaceDevice::IHidFeatureReport>
{
    HRESULT __stdcall get_Id(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Data(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Data(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Data(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetBooleanControl(uint16_t usagePage, uint16_t usageId, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::HumanInterfaceDevice::HidBooleanControl>(this->shim().GetBooleanControl(usagePage, usageId));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetBooleanControlByDescription(void* controlDescription, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::HumanInterfaceDevice::HidBooleanControl>(this->shim().GetBooleanControlByDescription(*reinterpret_cast<Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription const*>(&controlDescription)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetNumericControl(uint16_t usagePage, uint16_t usageId, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::HumanInterfaceDevice::HidNumericControl>(this->shim().GetNumericControl(usagePage, usageId));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetNumericControlByDescription(void* controlDescription, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::HumanInterfaceDevice::HidNumericControl>(this->shim().GetNumericControlByDescription(*reinterpret_cast<Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription const*>(&controlDescription)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::HumanInterfaceDevice::IHidInputReport> : produce_base<D, Windows::Devices::HumanInterfaceDevice::IHidInputReport>
{
    HRESULT __stdcall get_Id(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Data(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ActivatedBooleanControls(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidBooleanControl>>(this->shim().ActivatedBooleanControls());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TransitionedBooleanControls(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidBooleanControl>>(this->shim().TransitionedBooleanControls());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetBooleanControl(uint16_t usagePage, uint16_t usageId, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::HumanInterfaceDevice::HidBooleanControl>(this->shim().GetBooleanControl(usagePage, usageId));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetBooleanControlByDescription(void* controlDescription, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::HumanInterfaceDevice::HidBooleanControl>(this->shim().GetBooleanControlByDescription(*reinterpret_cast<Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription const*>(&controlDescription)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetNumericControl(uint16_t usagePage, uint16_t usageId, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::HumanInterfaceDevice::HidNumericControl>(this->shim().GetNumericControl(usagePage, usageId));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetNumericControlByDescription(void* controlDescription, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::HumanInterfaceDevice::HidNumericControl>(this->shim().GetNumericControlByDescription(*reinterpret_cast<Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription const*>(&controlDescription)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::HumanInterfaceDevice::IHidInputReportReceivedEventArgs> : produce_base<D, Windows::Devices::HumanInterfaceDevice::IHidInputReportReceivedEventArgs>
{
    HRESULT __stdcall get_Report(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::HumanInterfaceDevice::HidInputReport>(this->shim().Report());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::HumanInterfaceDevice::IHidNumericControl> : produce_base<D, Windows::Devices::HumanInterfaceDevice::IHidNumericControl>
{
    HRESULT __stdcall get_Id(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsGrouped(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsGrouped());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UsagePage(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().UsagePage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UsageId(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().UsageId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Value(int64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int64_t>(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Value(int64_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ScaledValue(int64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int64_t>(this->shim().ScaledValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ScaledValue(int64_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScaledValue(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ControlDescription(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription>(this->shim().ControlDescription());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription> : produce_base<D, Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription>
{
    HRESULT __stdcall get_Id(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ReportId(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().ReportId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ReportType(Windows::Devices::HumanInterfaceDevice::HidReportType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::HumanInterfaceDevice::HidReportType>(this->shim().ReportType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ReportSize(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ReportSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ReportCount(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ReportCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UsagePage(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().UsagePage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UsageId(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().UsageId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LogicalMinimum(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().LogicalMinimum());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LogicalMaximum(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().LogicalMaximum());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PhysicalMinimum(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().PhysicalMinimum());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PhysicalMaximum(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().PhysicalMaximum());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UnitExponent(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().UnitExponent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Unit(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Unit());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsAbsolute(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsAbsolute());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HasNull(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasNull());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ParentCollections(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidCollection>>(this->shim().ParentCollections());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::HumanInterfaceDevice::IHidOutputReport> : produce_base<D, Windows::Devices::HumanInterfaceDevice::IHidOutputReport>
{
    HRESULT __stdcall get_Id(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Data(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Data(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Data(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetBooleanControl(uint16_t usagePage, uint16_t usageId, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::HumanInterfaceDevice::HidBooleanControl>(this->shim().GetBooleanControl(usagePage, usageId));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetBooleanControlByDescription(void* controlDescription, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::HumanInterfaceDevice::HidBooleanControl>(this->shim().GetBooleanControlByDescription(*reinterpret_cast<Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription const*>(&controlDescription)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetNumericControl(uint16_t usagePage, uint16_t usageId, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::HumanInterfaceDevice::HidNumericControl>(this->shim().GetNumericControl(usagePage, usageId));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetNumericControlByDescription(void* controlDescription, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::HumanInterfaceDevice::HidNumericControl>(this->shim().GetNumericControlByDescription(*reinterpret_cast<Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription const*>(&controlDescription)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::HumanInterfaceDevice {

inline hstring HidDevice::GetDeviceSelector(uint16_t usagePage, uint16_t usageId)
{
    return get_activation_factory<HidDevice, Windows::Devices::HumanInterfaceDevice::IHidDeviceStatics>().GetDeviceSelector(usagePage, usageId);
}

inline hstring HidDevice::GetDeviceSelector(uint16_t usagePage, uint16_t usageId, uint16_t vendorId, uint16_t productId)
{
    return get_activation_factory<HidDevice, Windows::Devices::HumanInterfaceDevice::IHidDeviceStatics>().GetDeviceSelector(usagePage, usageId, vendorId, productId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidDevice> HidDevice::FromIdAsync(param::hstring const& deviceId, Windows::Storage::FileAccessMode const& accessMode)
{
    return get_activation_factory<HidDevice, Windows::Devices::HumanInterfaceDevice::IHidDeviceStatics>().FromIdAsync(deviceId, accessMode);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::HumanInterfaceDevice::IHidBooleanControl> : winrt::impl::hash_base<winrt::Windows::Devices::HumanInterfaceDevice::IHidBooleanControl> {};
template<> struct hash<winrt::Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription> : winrt::impl::hash_base<winrt::Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription> {};
template<> struct hash<winrt::Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription2> : winrt::impl::hash_base<winrt::Windows::Devices::HumanInterfaceDevice::IHidBooleanControlDescription2> {};
template<> struct hash<winrt::Windows::Devices::HumanInterfaceDevice::IHidCollection> : winrt::impl::hash_base<winrt::Windows::Devices::HumanInterfaceDevice::IHidCollection> {};
template<> struct hash<winrt::Windows::Devices::HumanInterfaceDevice::IHidDevice> : winrt::impl::hash_base<winrt::Windows::Devices::HumanInterfaceDevice::IHidDevice> {};
template<> struct hash<winrt::Windows::Devices::HumanInterfaceDevice::IHidDeviceStatics> : winrt::impl::hash_base<winrt::Windows::Devices::HumanInterfaceDevice::IHidDeviceStatics> {};
template<> struct hash<winrt::Windows::Devices::HumanInterfaceDevice::IHidFeatureReport> : winrt::impl::hash_base<winrt::Windows::Devices::HumanInterfaceDevice::IHidFeatureReport> {};
template<> struct hash<winrt::Windows::Devices::HumanInterfaceDevice::IHidInputReport> : winrt::impl::hash_base<winrt::Windows::Devices::HumanInterfaceDevice::IHidInputReport> {};
template<> struct hash<winrt::Windows::Devices::HumanInterfaceDevice::IHidInputReportReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::HumanInterfaceDevice::IHidInputReportReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::HumanInterfaceDevice::IHidNumericControl> : winrt::impl::hash_base<winrt::Windows::Devices::HumanInterfaceDevice::IHidNumericControl> {};
template<> struct hash<winrt::Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription> : winrt::impl::hash_base<winrt::Windows::Devices::HumanInterfaceDevice::IHidNumericControlDescription> {};
template<> struct hash<winrt::Windows::Devices::HumanInterfaceDevice::IHidOutputReport> : winrt::impl::hash_base<winrt::Windows::Devices::HumanInterfaceDevice::IHidOutputReport> {};
template<> struct hash<winrt::Windows::Devices::HumanInterfaceDevice::HidBooleanControl> : winrt::impl::hash_base<winrt::Windows::Devices::HumanInterfaceDevice::HidBooleanControl> {};
template<> struct hash<winrt::Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription> : winrt::impl::hash_base<winrt::Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription> {};
template<> struct hash<winrt::Windows::Devices::HumanInterfaceDevice::HidCollection> : winrt::impl::hash_base<winrt::Windows::Devices::HumanInterfaceDevice::HidCollection> {};
template<> struct hash<winrt::Windows::Devices::HumanInterfaceDevice::HidDevice> : winrt::impl::hash_base<winrt::Windows::Devices::HumanInterfaceDevice::HidDevice> {};
template<> struct hash<winrt::Windows::Devices::HumanInterfaceDevice::HidFeatureReport> : winrt::impl::hash_base<winrt::Windows::Devices::HumanInterfaceDevice::HidFeatureReport> {};
template<> struct hash<winrt::Windows::Devices::HumanInterfaceDevice::HidInputReport> : winrt::impl::hash_base<winrt::Windows::Devices::HumanInterfaceDevice::HidInputReport> {};
template<> struct hash<winrt::Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::HumanInterfaceDevice::HidNumericControl> : winrt::impl::hash_base<winrt::Windows::Devices::HumanInterfaceDevice::HidNumericControl> {};
template<> struct hash<winrt::Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription> : winrt::impl::hash_base<winrt::Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription> {};
template<> struct hash<winrt::Windows::Devices::HumanInterfaceDevice::HidOutputReport> : winrt::impl::hash_base<winrt::Windows::Devices::HumanInterfaceDevice::HidOutputReport> {};

}

WINRT_WARNING_POP
