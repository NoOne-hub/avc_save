﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.ApplicationModel.Activation.2.h"
#include "winrt/impl/Windows.ApplicationModel.Calls.Background.2.h"
#include "winrt/impl/Windows.Devices.Bluetooth.2.h"
#include "winrt/impl/Windows.Devices.Bluetooth.Advertisement.2.h"
#include "winrt/impl/Windows.Devices.Bluetooth.Background.2.h"
#include "winrt/impl/Windows.Devices.Bluetooth.GenericAttributeProfile.2.h"
#include "winrt/impl/Windows.Devices.Geolocation.2.h"
#include "winrt/impl/Windows.Devices.Sensors.2.h"
#include "winrt/impl/Windows.Devices.SmartCards.2.h"
#include "winrt/impl/Windows.Devices.Sms.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Networking.2.h"
#include "winrt/impl/Windows.Networking.Sockets.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Provider.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.UI.Notifications.2.h"
#include "winrt/impl/Windows.ApplicationModel.Background.2.h"
#include "winrt/Windows.ApplicationModel.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::Collections::IVector<Windows::Devices::Sensors::ActivityType> consume_Windows_ApplicationModel_Background_IActivitySensorTrigger<D>::SubscribedActivities() const
{
    Windows::Foundation::Collections::IVector<Windows::Devices::Sensors::ActivityType> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IActivitySensorTrigger)->get_SubscribedActivities(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Background_IActivitySensorTrigger<D>::ReportInterval() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IActivitySensorTrigger)->get_ReportInterval(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ActivityType> consume_Windows_ApplicationModel_Background_IActivitySensorTrigger<D>::SupportedActivities() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ActivityType> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IActivitySensorTrigger)->get_SupportedActivities(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Background_IActivitySensorTrigger<D>::MinimumReportInterval() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IActivitySensorTrigger)->get_MinimumReportInterval(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Background::ActivitySensorTrigger consume_Windows_ApplicationModel_Background_IActivitySensorTriggerFactory<D>::Create(uint32_t reportIntervalInMilliseconds) const
{
    Windows::ApplicationModel::Background::ActivitySensorTrigger activityTrigger{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IActivitySensorTriggerFactory)->Create(reportIntervalInMilliseconds, put_abi(activityTrigger)));
    return activityTrigger;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::AlarmAccessStatus> consume_Windows_ApplicationModel_Background_IAlarmApplicationManagerStatics<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::AlarmAccessStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IAlarmApplicationManagerStatics)->RequestAccessAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::ApplicationModel::Background::AlarmAccessStatus consume_Windows_ApplicationModel_Background_IAlarmApplicationManagerStatics<D>::GetAccessStatus() const
{
    Windows::ApplicationModel::Background::AlarmAccessStatus status{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IAlarmApplicationManagerStatics)->GetAccessStatus(put_abi(status)));
    return status;
}

template <typename D> void consume_Windows_ApplicationModel_Background_IAppBroadcastTrigger<D>::ProviderInfo(Windows::ApplicationModel::Background::AppBroadcastTriggerProviderInfo const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IAppBroadcastTrigger)->put_ProviderInfo(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Background::AppBroadcastTriggerProviderInfo consume_Windows_ApplicationModel_Background_IAppBroadcastTrigger<D>::ProviderInfo() const
{
    Windows::ApplicationModel::Background::AppBroadcastTriggerProviderInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IAppBroadcastTrigger)->get_ProviderInfo(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Background::AppBroadcastTrigger consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerFactory<D>::CreateAppBroadcastTrigger(param::hstring const& providerKey) const
{
    Windows::ApplicationModel::Background::AppBroadcastTrigger broadcastTrigger{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IAppBroadcastTriggerFactory)->CreateAppBroadcastTrigger(get_abi(providerKey), put_abi(broadcastTrigger)));
    return broadcastTrigger;
}

template <typename D> void consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo<D>::DisplayNameResource(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo)->put_DisplayNameResource(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo<D>::DisplayNameResource() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo)->get_DisplayNameResource(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo<D>::LogoResource(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo)->put_LogoResource(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo<D>::LogoResource() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo)->get_LogoResource(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo<D>::VideoKeyFrameInterval(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo)->put_VideoKeyFrameInterval(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo<D>::VideoKeyFrameInterval() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo)->get_VideoKeyFrameInterval(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo<D>::MaxVideoBitrate(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo)->put_MaxVideoBitrate(value));
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo<D>::MaxVideoBitrate() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo)->get_MaxVideoBitrate(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo<D>::MaxVideoWidth(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo)->put_MaxVideoWidth(value));
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo<D>::MaxVideoWidth() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo)->get_MaxVideoWidth(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo<D>::MaxVideoHeight(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo)->put_MaxVideoHeight(value));
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo<D>::MaxVideoHeight() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo)->get_MaxVideoHeight(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::ApplicationTriggerResult> consume_Windows_ApplicationModel_Background_IApplicationTrigger<D>::RequestAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::ApplicationTriggerResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IApplicationTrigger)->RequestAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::ApplicationTriggerResult> consume_Windows_ApplicationModel_Background_IApplicationTrigger<D>::RequestAsync(Windows::Foundation::Collections::ValueSet const& arguments) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::ApplicationTriggerResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IApplicationTrigger)->RequestAsyncWithArguments(get_abi(arguments), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::ValueSet consume_Windows_ApplicationModel_Background_IApplicationTriggerDetails<D>::Arguments() const
{
    Windows::Foundation::Collections::ValueSet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IApplicationTriggerDetails)->get_Arguments(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::BackgroundAccessStatus> consume_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::BackgroundAccessStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics)->RequestAccessAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::BackgroundAccessStatus> consume_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics<D>::RequestAccessAsync(param::hstring const& applicationId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::BackgroundAccessStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics)->RequestAccessForApplicationAsync(get_abi(applicationId), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics<D>::RemoveAccess() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics)->RemoveAccess());
}

template <typename D> void consume_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics<D>::RemoveAccess(param::hstring const& applicationId) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics)->RemoveAccessForApplication(get_abi(applicationId)));
}

template <typename D> Windows::ApplicationModel::Background::BackgroundAccessStatus consume_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics<D>::GetAccessStatus() const
{
    Windows::ApplicationModel::Background::BackgroundAccessStatus status{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics)->GetAccessStatus(put_abi(status)));
    return status;
}

template <typename D> Windows::ApplicationModel::Background::BackgroundAccessStatus consume_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics<D>::GetAccessStatus(param::hstring const& applicationId) const
{
    Windows::ApplicationModel::Background::BackgroundAccessStatus status{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics)->GetAccessStatusForApplication(get_abi(applicationId), put_abi(status)));
    return status;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics2<D>::RequestAccessKindAsync(Windows::ApplicationModel::Background::BackgroundAccessRequestKind const& requestedAccess, param::hstring const& reason) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics2)->RequestAccessKindAsync(get_abi(requestedAccess), get_abi(reason), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_ApplicationModel_Background_IBackgroundTask<D>::Run(Windows::ApplicationModel::Background::IBackgroundTaskInstance const& taskInstance) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTask)->Run(get_abi(taskInstance)));
}

template <typename D> void consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder<D>::TaskEntryPoint(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskBuilder)->put_TaskEntryPoint(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder<D>::TaskEntryPoint() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskBuilder)->get_TaskEntryPoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder<D>::SetTrigger(Windows::ApplicationModel::Background::IBackgroundTrigger const& trigger) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskBuilder)->SetTrigger(get_abi(trigger)));
}

template <typename D> void consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder<D>::AddCondition(Windows::ApplicationModel::Background::IBackgroundCondition const& condition) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskBuilder)->AddCondition(get_abi(condition)));
}

template <typename D> void consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder<D>::Name(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskBuilder)->put_Name(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskBuilder)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Background::BackgroundTaskRegistration consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder<D>::Register() const
{
    Windows::ApplicationModel::Background::BackgroundTaskRegistration task{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskBuilder)->Register(put_abi(task)));
    return task;
}

template <typename D> void consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder2<D>::CancelOnConditionLoss(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskBuilder2)->put_CancelOnConditionLoss(value));
}

template <typename D> bool consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder2<D>::CancelOnConditionLoss() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskBuilder2)->get_CancelOnConditionLoss(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder3<D>::IsNetworkRequested(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskBuilder3)->put_IsNetworkRequested(value));
}

template <typename D> bool consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder3<D>::IsNetworkRequested() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskBuilder3)->get_IsNetworkRequested(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder4<D>::TaskGroup() const
{
    Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskBuilder4)->get_TaskGroup(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder4<D>::TaskGroup(Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskBuilder4)->put_TaskGroup(get_abi(value)));
}

template <typename D> GUID consume_Windows_ApplicationModel_Background_IBackgroundTaskCompletedEventArgs<D>::InstanceId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskCompletedEventArgs)->get_InstanceId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Background_IBackgroundTaskCompletedEventArgs<D>::CheckResult() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskCompletedEventArgs)->CheckResult());
}

template <typename D> void consume_Windows_ApplicationModel_Background_IBackgroundTaskDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskDeferral)->Complete());
}

template <typename D> GUID consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance<D>::InstanceId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskInstance)->get_InstanceId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Background::BackgroundTaskRegistration consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance<D>::Task() const
{
    Windows::ApplicationModel::Background::BackgroundTaskRegistration task{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskInstance)->get_Task(put_abi(task)));
    return task;
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance<D>::Progress() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskInstance)->get_Progress(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance<D>::Progress(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskInstance)->put_Progress(value));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance<D>::TriggerDetails() const
{
    Windows::Foundation::IInspectable triggerDetails{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskInstance)->get_TriggerDetails(put_abi(triggerDetails)));
    return triggerDetails;
}

template <typename D> event_token consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance<D>::Canceled(Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler const& cancelHandler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskInstance)->add_Canceled(get_abi(cancelHandler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::ApplicationModel::Background::IBackgroundTaskInstance> consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance<D>::Canceled(auto_revoke_t, Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler const& cancelHandler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Background::IBackgroundTaskInstance>(this, &abi_t<Windows::ApplicationModel::Background::IBackgroundTaskInstance>::remove_Canceled, Canceled(cancelHandler));
}

template <typename D> void consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance<D>::Canceled(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskInstance)->remove_Canceled(get_abi(cookie)));
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance<D>::SuspendedCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskInstance)->get_SuspendedCount(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Background::BackgroundTaskDeferral consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance<D>::GetDeferral() const
{
    Windows::ApplicationModel::Background::BackgroundTaskDeferral deferral{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskInstance)->GetDeferral(put_abi(deferral)));
    return deferral;
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance2<D>::GetThrottleCount(Windows::ApplicationModel::Background::BackgroundTaskThrottleCounter const& counter) const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskInstance2)->GetThrottleCount(get_abi(counter), &value));
    return value;
}

template <typename D> Windows::System::User consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance4<D>::User() const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskInstance4)->get_User(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_ApplicationModel_Background_IBackgroundTaskProgressEventArgs<D>::InstanceId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskProgressEventArgs)->get_InstanceId(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Background_IBackgroundTaskProgressEventArgs<D>::Progress() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskProgressEventArgs)->get_Progress(&value));
    return value;
}

template <typename D> GUID consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration<D>::TaskId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskRegistration)->get_TaskId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskRegistration)->get_Name(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration<D>::Progress(Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskRegistration)->add_Progress(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::ApplicationModel::Background::IBackgroundTaskRegistration> consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration<D>::Progress(auto_revoke_t, Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Background::IBackgroundTaskRegistration>(this, &abi_t<Windows::ApplicationModel::Background::IBackgroundTaskRegistration>::remove_Progress, Progress(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration<D>::Progress(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskRegistration)->remove_Progress(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration<D>::Completed(Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskRegistration)->add_Completed(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::ApplicationModel::Background::IBackgroundTaskRegistration> consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration<D>::Completed(auto_revoke_t, Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Background::IBackgroundTaskRegistration>(this, &abi_t<Windows::ApplicationModel::Background::IBackgroundTaskRegistration>::remove_Completed, Completed(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration<D>::Completed(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskRegistration)->remove_Completed(get_abi(cookie)));
}

template <typename D> void consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration<D>::Unregister(bool cancelTask) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskRegistration)->Unregister(cancelTask));
}

template <typename D> Windows::ApplicationModel::Background::IBackgroundTrigger consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration2<D>::Trigger() const
{
    Windows::ApplicationModel::Background::IBackgroundTrigger value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskRegistration2)->get_Trigger(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration3<D>::TaskGroup() const
{
    Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskRegistration3)->get_TaskGroup(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroup<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroup<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup)->get_Name(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroup<D>::BackgroundActivated(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup, Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup)->add_BackgroundActivated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup> consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroup<D>::BackgroundActivated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup, Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup>(this, &abi_t<Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup>::remove_BackgroundActivated, BackgroundActivated(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroup<D>::BackgroundActivated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup)->remove_BackgroundActivated(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IMapView<GUID, Windows::ApplicationModel::Background::BackgroundTaskRegistration> consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroup<D>::AllTasks() const
{
    Windows::Foundation::Collections::IMapView<GUID, Windows::ApplicationModel::Background::BackgroundTaskRegistration> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup)->get_AllTasks(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroupFactory<D>::Create(param::hstring const& id) const
{
    Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup group{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroupFactory)->Create(get_abi(id), put_abi(group)));
    return group;
}

template <typename D> Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroupFactory<D>::CreateWithName(param::hstring const& id, param::hstring const& name) const
{
    Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup group{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroupFactory)->CreateWithName(get_abi(id), get_abi(name), put_abi(group)));
    return group;
}

template <typename D> Windows::Foundation::Collections::IMapView<GUID, Windows::ApplicationModel::Background::IBackgroundTaskRegistration> consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationStatics<D>::AllTasks() const
{
    Windows::Foundation::Collections::IMapView<GUID, Windows::ApplicationModel::Background::IBackgroundTaskRegistration> tasks{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics)->get_AllTasks(put_abi(tasks)));
    return tasks;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup> consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationStatics2<D>::AllTaskGroups() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics2)->get_AllTaskGroups(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationStatics2<D>::GetTaskGroup(param::hstring const& groupId) const
{
    Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics2)->GetTaskGroup(get_abi(groupId), put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Background::BackgroundWorkCostValue consume_Windows_ApplicationModel_Background_IBackgroundWorkCostStatics<D>::CurrentBackgroundWorkCost() const
{
    Windows::ApplicationModel::Background::BackgroundWorkCostValue value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBackgroundWorkCostStatics)->get_CurrentBackgroundWorkCost(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementPublisherTrigger<D>::Advertisement() const
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger)->get_Advertisement(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementWatcherTrigger<D>::MinSamplingInterval() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger)->get_MinSamplingInterval(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementWatcherTrigger<D>::MaxSamplingInterval() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger)->get_MaxSamplingInterval(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementWatcherTrigger<D>::MinOutOfRangeTimeout() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger)->get_MinOutOfRangeTimeout(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementWatcherTrigger<D>::MaxOutOfRangeTimeout() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger)->get_MaxOutOfRangeTimeout(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementWatcherTrigger<D>::SignalStrengthFilter() const
{
    Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger)->get_SignalStrengthFilter(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementWatcherTrigger<D>::SignalStrengthFilter(Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger)->put_SignalStrengthFilter(get_abi(value)));
}

template <typename D> Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementWatcherTrigger<D>::AdvertisementFilter() const
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger)->get_AdvertisementFilter(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementWatcherTrigger<D>::AdvertisementFilter(Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger)->put_AdvertisementFilter(get_abi(value)));
}

template <typename D> Windows::Storage::Provider::CachedFileTarget consume_Windows_ApplicationModel_Background_ICachedFileUpdaterTriggerDetails<D>::UpdateTarget() const
{
    Windows::Storage::Provider::CachedFileTarget value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails)->get_UpdateTarget(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Provider::FileUpdateRequest consume_Windows_ApplicationModel_Background_ICachedFileUpdaterTriggerDetails<D>::UpdateRequest() const
{
    Windows::Storage::Provider::FileUpdateRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails)->get_UpdateRequest(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Background_ICachedFileUpdaterTriggerDetails<D>::CanRequestUserInput() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails)->get_CanRequestUserInput(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_ApplicationModel_Background_IContentPrefetchTrigger<D>::WaitInterval() const
{
    Windows::Foundation::TimeSpan waitInterval{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IContentPrefetchTrigger)->get_WaitInterval(put_abi(waitInterval)));
    return waitInterval;
}

template <typename D> Windows::ApplicationModel::Background::ContentPrefetchTrigger consume_Windows_ApplicationModel_Background_IContentPrefetchTriggerFactory<D>::Create(Windows::Foundation::TimeSpan const& waitInterval) const
{
    Windows::ApplicationModel::Background::ContentPrefetchTrigger trigger{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IContentPrefetchTriggerFactory)->Create(get_abi(waitInterval), put_abi(trigger)));
    return trigger;
}

template <typename D> hstring consume_Windows_ApplicationModel_Background_ICustomSystemEventTrigger<D>::TriggerId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::ICustomSystemEventTrigger)->get_TriggerId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Background::CustomSystemEventTriggerRecurrence consume_Windows_ApplicationModel_Background_ICustomSystemEventTrigger<D>::Recurrence() const
{
    Windows::ApplicationModel::Background::CustomSystemEventTriggerRecurrence value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::ICustomSystemEventTrigger)->get_Recurrence(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Background::CustomSystemEventTrigger consume_Windows_ApplicationModel_Background_ICustomSystemEventTriggerFactory<D>::Create(param::hstring const& triggerId, Windows::ApplicationModel::Background::CustomSystemEventTriggerRecurrence const& recurrence) const
{
    Windows::ApplicationModel::Background::CustomSystemEventTrigger trigger{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::ICustomSystemEventTriggerFactory)->Create(get_abi(triggerId), get_abi(recurrence), put_abi(trigger)));
    return trigger;
}

template <typename D> hstring consume_Windows_ApplicationModel_Background_IDeviceConnectionChangeTrigger<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Background_IDeviceConnectionChangeTrigger<D>::CanMaintainConnection() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger)->get_CanMaintainConnection(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Background_IDeviceConnectionChangeTrigger<D>::MaintainConnection() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger)->get_MaintainConnection(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Background_IDeviceConnectionChangeTrigger<D>::MaintainConnection(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger)->put_MaintainConnection(value));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger> consume_Windows_ApplicationModel_Background_IDeviceConnectionChangeTriggerStatics<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger> deviceChangeTrigger{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IDeviceConnectionChangeTriggerStatics)->FromIdAsync(get_abi(deviceId), put_abi(deviceChangeTrigger)));
    return deviceChangeTrigger;
}

template <typename D> hstring consume_Windows_ApplicationModel_Background_IDeviceManufacturerNotificationTrigger<D>::TriggerQualifier() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger)->get_TriggerQualifier(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Background_IDeviceManufacturerNotificationTrigger<D>::OneShot() const
{
    bool oneShot{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger)->get_OneShot(&oneShot));
    return oneShot;
}

template <typename D> Windows::ApplicationModel::Background::DeviceManufacturerNotificationTrigger consume_Windows_ApplicationModel_Background_IDeviceManufacturerNotificationTriggerFactory<D>::Create(param::hstring const& triggerQualifier, bool oneShot) const
{
    Windows::ApplicationModel::Background::DeviceManufacturerNotificationTrigger trigger{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTriggerFactory)->Create(get_abi(triggerQualifier), oneShot, put_abi(trigger)));
    return trigger;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::DeviceTriggerResult> consume_Windows_ApplicationModel_Background_IDeviceServicingTrigger<D>::RequestAsync(param::hstring const& deviceId, Windows::Foundation::TimeSpan const& expectedDuration) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::DeviceTriggerResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IDeviceServicingTrigger)->RequestAsyncSimple(get_abi(deviceId), get_abi(expectedDuration), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::DeviceTriggerResult> consume_Windows_ApplicationModel_Background_IDeviceServicingTrigger<D>::RequestAsync(param::hstring const& deviceId, Windows::Foundation::TimeSpan const& expectedDuration, param::hstring const& arguments) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::DeviceTriggerResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IDeviceServicingTrigger)->RequestAsyncWithArguments(get_abi(deviceId), get_abi(expectedDuration), get_abi(arguments), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::DeviceTriggerResult> consume_Windows_ApplicationModel_Background_IDeviceUseTrigger<D>::RequestAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::DeviceTriggerResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IDeviceUseTrigger)->RequestAsyncSimple(get_abi(deviceId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::DeviceTriggerResult> consume_Windows_ApplicationModel_Background_IDeviceUseTrigger<D>::RequestAsync(param::hstring const& deviceId, param::hstring const& arguments) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::DeviceTriggerResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IDeviceUseTrigger)->RequestAsyncWithArguments(get_abi(deviceId), get_abi(arguments), put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTrigger<D>::Characteristic() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger)->get_Characteristic(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTrigger2<D>::EventTriggeringMode() const
{
    Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger2)->get_EventTriggeringMode(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTriggerFactory<D>::Create(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic const& characteristic) const
{
    Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger gattCharacteristicNotificationTrigger{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory)->Create(get_abi(characteristic), put_abi(gattCharacteristicNotificationTrigger)));
    return gattCharacteristicNotificationTrigger;
}

template <typename D> Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTriggerFactory2<D>::Create(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic const& characteristic, Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode const& eventTriggeringMode) const
{
    Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory2)->CreateWithEventTriggeringMode(get_abi(characteristic), get_abi(eventTriggeringMode), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Background_IGattServiceProviderTrigger<D>::TriggerId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IGattServiceProviderTrigger)->get_TriggerId(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService consume_Windows_ApplicationModel_Background_IGattServiceProviderTrigger<D>::Service() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IGattServiceProviderTrigger)->get_Service(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Background_IGattServiceProviderTrigger<D>::AdvertisingParameters(Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IGattServiceProviderTrigger)->put_AdvertisingParameters(get_abi(value)));
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters consume_Windows_ApplicationModel_Background_IGattServiceProviderTrigger<D>::AdvertisingParameters() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IGattServiceProviderTrigger)->get_AdvertisingParameters(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Background::GattServiceProviderTrigger consume_Windows_ApplicationModel_Background_IGattServiceProviderTriggerResult<D>::Trigger() const
{
    Windows::ApplicationModel::Background::GattServiceProviderTrigger value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IGattServiceProviderTriggerResult)->get_Trigger(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothError consume_Windows_ApplicationModel_Background_IGattServiceProviderTriggerResult<D>::Error() const
{
    Windows::Devices::Bluetooth::BluetoothError value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IGattServiceProviderTriggerResult)->get_Error(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::GattServiceProviderTriggerResult> consume_Windows_ApplicationModel_Background_IGattServiceProviderTriggerStatics<D>::CreateAsync(param::hstring const& triggerId, GUID const& serviceUuid) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::GattServiceProviderTriggerResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IGattServiceProviderTriggerStatics)->CreateAsync(get_abi(triggerId), get_abi(serviceUuid), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Devices::Geolocation::VisitMonitoringScope consume_Windows_ApplicationModel_Background_IGeovisitTrigger<D>::MonitoringScope() const
{
    Windows::Devices::Geolocation::VisitMonitoringScope value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IGeovisitTrigger)->get_MonitoringScope(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Background_IGeovisitTrigger<D>::MonitoringScope(Windows::Devices::Geolocation::VisitMonitoringScope const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IGeovisitTrigger)->put_MonitoringScope(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Background::LocationTriggerType consume_Windows_ApplicationModel_Background_ILocationTrigger<D>::TriggerType() const
{
    Windows::ApplicationModel::Background::LocationTriggerType triggerType{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::ILocationTrigger)->get_TriggerType(put_abi(triggerType)));
    return triggerType;
}

template <typename D> Windows::ApplicationModel::Background::LocationTrigger consume_Windows_ApplicationModel_Background_ILocationTriggerFactory<D>::Create(Windows::ApplicationModel::Background::LocationTriggerType const& triggerType) const
{
    Windows::ApplicationModel::Background::LocationTrigger locationTrigger{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::ILocationTriggerFactory)->Create(get_abi(triggerType), put_abi(locationTrigger)));
    return locationTrigger;
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Background_IMaintenanceTrigger<D>::FreshnessTime() const
{
    uint32_t freshnessTime{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IMaintenanceTrigger)->get_FreshnessTime(&freshnessTime));
    return freshnessTime;
}

template <typename D> bool consume_Windows_ApplicationModel_Background_IMaintenanceTrigger<D>::OneShot() const
{
    bool oneShot{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IMaintenanceTrigger)->get_OneShot(&oneShot));
    return oneShot;
}

template <typename D> Windows::ApplicationModel::Background::MaintenanceTrigger consume_Windows_ApplicationModel_Background_IMaintenanceTriggerFactory<D>::Create(uint32_t freshnessTime, bool oneShot) const
{
    Windows::ApplicationModel::Background::MaintenanceTrigger trigger{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IMaintenanceTriggerFactory)->Create(freshnessTime, oneShot, put_abi(trigger)));
    return trigger;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::MediaProcessingTriggerResult> consume_Windows_ApplicationModel_Background_IMediaProcessingTrigger<D>::RequestAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::MediaProcessingTriggerResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IMediaProcessingTrigger)->RequestAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::MediaProcessingTriggerResult> consume_Windows_ApplicationModel_Background_IMediaProcessingTrigger<D>::RequestAsync(Windows::Foundation::Collections::ValueSet const& arguments) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::MediaProcessingTriggerResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IMediaProcessingTrigger)->RequestAsyncWithArguments(get_abi(arguments), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Background_INetworkOperatorNotificationTrigger<D>::NetworkAccountId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::INetworkOperatorNotificationTrigger)->get_NetworkAccountId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Background::NetworkOperatorNotificationTrigger consume_Windows_ApplicationModel_Background_INetworkOperatorNotificationTriggerFactory<D>::Create(param::hstring const& networkAccountId) const
{
    Windows::ApplicationModel::Background::NetworkOperatorNotificationTrigger trigger{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::INetworkOperatorNotificationTriggerFactory)->Create(get_abi(networkAccountId), put_abi(trigger)));
    return trigger;
}

template <typename D> bool consume_Windows_ApplicationModel_Background_IPhoneTrigger<D>::OneShot() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IPhoneTrigger)->get_OneShot(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Calls::Background::PhoneTriggerType consume_Windows_ApplicationModel_Background_IPhoneTrigger<D>::TriggerType() const
{
    Windows::ApplicationModel::Calls::Background::PhoneTriggerType result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IPhoneTrigger)->get_TriggerType(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Background::PhoneTrigger consume_Windows_ApplicationModel_Background_IPhoneTriggerFactory<D>::Create(Windows::ApplicationModel::Calls::Background::PhoneTriggerType const& type, bool oneShot) const
{
    Windows::ApplicationModel::Background::PhoneTrigger result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IPhoneTriggerFactory)->Create(get_abi(type), oneShot, put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Background::PushNotificationTrigger consume_Windows_ApplicationModel_Background_IPushNotificationTriggerFactory<D>::Create(param::hstring const& applicationId) const
{
    Windows::ApplicationModel::Background::PushNotificationTrigger trigger{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IPushNotificationTriggerFactory)->Create(get_abi(applicationId), put_abi(trigger)));
    return trigger;
}

template <typename D> Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation consume_Windows_ApplicationModel_Background_IRfcommConnectionTrigger<D>::InboundConnection() const
{
    Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IRfcommConnectionTrigger)->get_InboundConnection(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::Background::RfcommOutboundConnectionInformation consume_Windows_ApplicationModel_Background_IRfcommConnectionTrigger<D>::OutboundConnection() const
{
    Windows::Devices::Bluetooth::Background::RfcommOutboundConnectionInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IRfcommConnectionTrigger)->get_OutboundConnection(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Background_IRfcommConnectionTrigger<D>::AllowMultipleConnections() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IRfcommConnectionTrigger)->get_AllowMultipleConnections(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Background_IRfcommConnectionTrigger<D>::AllowMultipleConnections(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IRfcommConnectionTrigger)->put_AllowMultipleConnections(value));
}

template <typename D> Windows::Networking::Sockets::SocketProtectionLevel consume_Windows_ApplicationModel_Background_IRfcommConnectionTrigger<D>::ProtectionLevel() const
{
    Windows::Networking::Sockets::SocketProtectionLevel value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IRfcommConnectionTrigger)->get_ProtectionLevel(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Background_IRfcommConnectionTrigger<D>::ProtectionLevel(Windows::Networking::Sockets::SocketProtectionLevel const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IRfcommConnectionTrigger)->put_ProtectionLevel(get_abi(value)));
}

template <typename D> Windows::Networking::HostName consume_Windows_ApplicationModel_Background_IRfcommConnectionTrigger<D>::RemoteHostName() const
{
    Windows::Networking::HostName value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IRfcommConnectionTrigger)->get_RemoteHostName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Background_IRfcommConnectionTrigger<D>::RemoteHostName(Windows::Networking::HostName const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IRfcommConnectionTrigger)->put_RemoteHostName(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Background::SensorDataThresholdTrigger consume_Windows_ApplicationModel_Background_ISensorDataThresholdTriggerFactory<D>::Create(Windows::Devices::Sensors::ISensorDataThreshold const& threshold) const
{
    Windows::ApplicationModel::Background::SensorDataThresholdTrigger trigger{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::ISensorDataThresholdTriggerFactory)->Create(get_abi(threshold), put_abi(trigger)));
    return trigger;
}

template <typename D> Windows::Devices::SmartCards::SmartCardTriggerType consume_Windows_ApplicationModel_Background_ISmartCardTrigger<D>::TriggerType() const
{
    Windows::Devices::SmartCards::SmartCardTriggerType triggerType{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::ISmartCardTrigger)->get_TriggerType(put_abi(triggerType)));
    return triggerType;
}

template <typename D> Windows::ApplicationModel::Background::SmartCardTrigger consume_Windows_ApplicationModel_Background_ISmartCardTriggerFactory<D>::Create(Windows::Devices::SmartCards::SmartCardTriggerType const& triggerType) const
{
    Windows::ApplicationModel::Background::SmartCardTrigger trigger{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::ISmartCardTriggerFactory)->Create(get_abi(triggerType), put_abi(trigger)));
    return trigger;
}

template <typename D> Windows::ApplicationModel::Background::SmsMessageReceivedTrigger consume_Windows_ApplicationModel_Background_ISmsMessageReceivedTriggerFactory<D>::Create(Windows::Devices::Sms::SmsFilterRules const& filterRules) const
{
    Windows::ApplicationModel::Background::SmsMessageReceivedTrigger value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::ISmsMessageReceivedTriggerFactory)->Create(get_abi(filterRules), put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Background_ISocketActivityTrigger<D>::IsWakeFromLowPowerSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::ISocketActivityTrigger)->get_IsWakeFromLowPowerSupported(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Background::StorageLibraryChangeTrackerTrigger consume_Windows_ApplicationModel_Background_IStorageLibraryChangeTrackerTriggerFactory<D>::Create(Windows::Storage::StorageLibraryChangeTracker const& tracker) const
{
    Windows::ApplicationModel::Background::StorageLibraryChangeTrackerTrigger result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IStorageLibraryChangeTrackerTriggerFactory)->Create(get_abi(tracker), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger consume_Windows_ApplicationModel_Background_IStorageLibraryContentChangedTriggerStatics<D>::Create(Windows::Storage::StorageLibrary const& storageLibrary) const
{
    Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IStorageLibraryContentChangedTriggerStatics)->Create(get_abi(storageLibrary), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger consume_Windows_ApplicationModel_Background_IStorageLibraryContentChangedTriggerStatics<D>::CreateFromLibraries(param::iterable<Windows::Storage::StorageLibrary> const& storageLibraries) const
{
    Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IStorageLibraryContentChangedTriggerStatics)->CreateFromLibraries(get_abi(storageLibraries), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Background::SystemConditionType consume_Windows_ApplicationModel_Background_ISystemCondition<D>::ConditionType() const
{
    Windows::ApplicationModel::Background::SystemConditionType conditionType{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::ISystemCondition)->get_ConditionType(put_abi(conditionType)));
    return conditionType;
}

template <typename D> Windows::ApplicationModel::Background::SystemCondition consume_Windows_ApplicationModel_Background_ISystemConditionFactory<D>::Create(Windows::ApplicationModel::Background::SystemConditionType const& conditionType) const
{
    Windows::ApplicationModel::Background::SystemCondition condition{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::ISystemConditionFactory)->Create(get_abi(conditionType), put_abi(condition)));
    return condition;
}

template <typename D> bool consume_Windows_ApplicationModel_Background_ISystemTrigger<D>::OneShot() const
{
    bool oneShot{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::ISystemTrigger)->get_OneShot(&oneShot));
    return oneShot;
}

template <typename D> Windows::ApplicationModel::Background::SystemTriggerType consume_Windows_ApplicationModel_Background_ISystemTrigger<D>::TriggerType() const
{
    Windows::ApplicationModel::Background::SystemTriggerType triggerType{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::ISystemTrigger)->get_TriggerType(put_abi(triggerType)));
    return triggerType;
}

template <typename D> Windows::ApplicationModel::Background::SystemTrigger consume_Windows_ApplicationModel_Background_ISystemTriggerFactory<D>::Create(Windows::ApplicationModel::Background::SystemTriggerType const& triggerType, bool oneShot) const
{
    Windows::ApplicationModel::Background::SystemTrigger trigger{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::ISystemTriggerFactory)->Create(get_abi(triggerType), oneShot, put_abi(trigger)));
    return trigger;
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Background_ITimeTrigger<D>::FreshnessTime() const
{
    uint32_t freshnessTime{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::ITimeTrigger)->get_FreshnessTime(&freshnessTime));
    return freshnessTime;
}

template <typename D> bool consume_Windows_ApplicationModel_Background_ITimeTrigger<D>::OneShot() const
{
    bool oneShot{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::ITimeTrigger)->get_OneShot(&oneShot));
    return oneShot;
}

template <typename D> Windows::ApplicationModel::Background::TimeTrigger consume_Windows_ApplicationModel_Background_ITimeTriggerFactory<D>::Create(uint32_t freshnessTime, bool oneShot) const
{
    Windows::ApplicationModel::Background::TimeTrigger trigger{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::ITimeTriggerFactory)->Create(freshnessTime, oneShot, put_abi(trigger)));
    return trigger;
}

template <typename D> Windows::ApplicationModel::Background::ToastNotificationActionTrigger consume_Windows_ApplicationModel_Background_IToastNotificationActionTriggerFactory<D>::Create(param::hstring const& applicationId) const
{
    Windows::ApplicationModel::Background::ToastNotificationActionTrigger trigger{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IToastNotificationActionTriggerFactory)->Create(get_abi(applicationId), put_abi(trigger)));
    return trigger;
}

template <typename D> Windows::ApplicationModel::Background::ToastNotificationHistoryChangedTrigger consume_Windows_ApplicationModel_Background_IToastNotificationHistoryChangedTriggerFactory<D>::Create(param::hstring const& applicationId) const
{
    Windows::ApplicationModel::Background::ToastNotificationHistoryChangedTrigger trigger{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IToastNotificationHistoryChangedTriggerFactory)->Create(get_abi(applicationId), put_abi(trigger)));
    return trigger;
}

template <typename D> Windows::ApplicationModel::Background::UserNotificationChangedTrigger consume_Windows_ApplicationModel_Background_IUserNotificationChangedTriggerFactory<D>::Create(Windows::UI::Notifications::NotificationKinds const& notificationKinds) const
{
    Windows::ApplicationModel::Background::UserNotificationChangedTrigger trigger{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Background::IUserNotificationChangedTriggerFactory)->Create(get_abi(notificationKinds), put_abi(trigger)));
    return trigger;
}

template <> struct delegate<Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, Windows::ApplicationModel::Background::BackgroundTaskCancellationReason reason) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::ApplicationModel::Background::IBackgroundTaskInstance const*>(&sender), *reinterpret_cast<Windows::ApplicationModel::Background::BackgroundTaskCancellationReason const*>(&reason));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* args) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::ApplicationModel::Background::BackgroundTaskRegistration const*>(&sender), *reinterpret_cast<Windows::ApplicationModel::Background::BackgroundTaskCompletedEventArgs const*>(&args));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* args) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::ApplicationModel::Background::BackgroundTaskRegistration const*>(&sender), *reinterpret_cast<Windows::ApplicationModel::Background::BackgroundTaskProgressEventArgs const*>(&args));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IActivitySensorTrigger> : produce_base<D, Windows::ApplicationModel::Background::IActivitySensorTrigger>
{
    HRESULT __stdcall get_SubscribedActivities(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Devices::Sensors::ActivityType>>(this->shim().SubscribedActivities());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ReportInterval(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ReportInterval());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedActivities(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sensors::ActivityType>>(this->shim().SupportedActivities());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MinimumReportInterval(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MinimumReportInterval());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IActivitySensorTriggerFactory> : produce_base<D, Windows::ApplicationModel::Background::IActivitySensorTriggerFactory>
{
    HRESULT __stdcall Create(uint32_t reportIntervalInMilliseconds, void** activityTrigger) noexcept final
    {
        try
        {
            *activityTrigger = nullptr;
            typename D::abi_guard guard(this->shim());
            *activityTrigger = detach_from<Windows::ApplicationModel::Background::ActivitySensorTrigger>(this->shim().Create(reportIntervalInMilliseconds));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IAlarmApplicationManagerStatics> : produce_base<D, Windows::ApplicationModel::Background::IAlarmApplicationManagerStatics>
{
    HRESULT __stdcall RequestAccessAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::AlarmAccessStatus>>(this->shim().RequestAccessAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetAccessStatus(Windows::ApplicationModel::Background::AlarmAccessStatus* status) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *status = detach_from<Windows::ApplicationModel::Background::AlarmAccessStatus>(this->shim().GetAccessStatus());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IAppBroadcastTrigger> : produce_base<D, Windows::ApplicationModel::Background::IAppBroadcastTrigger>
{
    HRESULT __stdcall put_ProviderInfo(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProviderInfo(*reinterpret_cast<Windows::ApplicationModel::Background::AppBroadcastTriggerProviderInfo const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ProviderInfo(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Background::AppBroadcastTriggerProviderInfo>(this->shim().ProviderInfo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IAppBroadcastTriggerFactory> : produce_base<D, Windows::ApplicationModel::Background::IAppBroadcastTriggerFactory>
{
    HRESULT __stdcall CreateAppBroadcastTrigger(HSTRING providerKey, void** broadcastTrigger) noexcept final
    {
        try
        {
            *broadcastTrigger = nullptr;
            typename D::abi_guard guard(this->shim());
            *broadcastTrigger = detach_from<Windows::ApplicationModel::Background::AppBroadcastTrigger>(this->shim().CreateAppBroadcastTrigger(*reinterpret_cast<hstring const*>(&providerKey)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo> : produce_base<D, Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo>
{
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

    HRESULT __stdcall put_LogoResource(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LogoResource(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LogoResource(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().LogoResource());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_VideoKeyFrameInterval(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoKeyFrameInterval(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoKeyFrameInterval(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().VideoKeyFrameInterval());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MaxVideoBitrate(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxVideoBitrate(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxVideoBitrate(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxVideoBitrate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MaxVideoWidth(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxVideoWidth(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxVideoWidth(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxVideoWidth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MaxVideoHeight(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxVideoHeight(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxVideoHeight(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxVideoHeight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IApplicationTrigger> : produce_base<D, Windows::ApplicationModel::Background::IApplicationTrigger>
{
    HRESULT __stdcall RequestAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::ApplicationTriggerResult>>(this->shim().RequestAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestAsyncWithArguments(void* arguments, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::ApplicationTriggerResult>>(this->shim().RequestAsync(*reinterpret_cast<Windows::Foundation::Collections::ValueSet const*>(&arguments)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IApplicationTriggerDetails> : produce_base<D, Windows::ApplicationModel::Background::IApplicationTriggerDetails>
{
    HRESULT __stdcall get_Arguments(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::ValueSet>(this->shim().Arguments());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IAppointmentStoreNotificationTrigger> : produce_base<D, Windows::ApplicationModel::Background::IAppointmentStoreNotificationTrigger>
{};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IBackgroundCondition> : produce_base<D, Windows::ApplicationModel::Background::IBackgroundCondition>
{};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics> : produce_base<D, Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics>
{
    HRESULT __stdcall RequestAccessAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::BackgroundAccessStatus>>(this->shim().RequestAccessAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestAccessForApplicationAsync(HSTRING applicationId, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::BackgroundAccessStatus>>(this->shim().RequestAccessAsync(*reinterpret_cast<hstring const*>(&applicationId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveAccess() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveAccess();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveAccessForApplication(HSTRING applicationId) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveAccess(*reinterpret_cast<hstring const*>(&applicationId));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetAccessStatus(Windows::ApplicationModel::Background::BackgroundAccessStatus* status) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *status = detach_from<Windows::ApplicationModel::Background::BackgroundAccessStatus>(this->shim().GetAccessStatus());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetAccessStatusForApplication(HSTRING applicationId, Windows::ApplicationModel::Background::BackgroundAccessStatus* status) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *status = detach_from<Windows::ApplicationModel::Background::BackgroundAccessStatus>(this->shim().GetAccessStatus(*reinterpret_cast<hstring const*>(&applicationId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics2> : produce_base<D, Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics2>
{
    HRESULT __stdcall RequestAccessKindAsync(Windows::ApplicationModel::Background::BackgroundAccessRequestKind requestedAccess, HSTRING reason, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestAccessKindAsync(*reinterpret_cast<Windows::ApplicationModel::Background::BackgroundAccessRequestKind const*>(&requestedAccess), *reinterpret_cast<hstring const*>(&reason)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IBackgroundTask> : produce_base<D, Windows::ApplicationModel::Background::IBackgroundTask>
{
    HRESULT __stdcall Run(void* taskInstance) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Run(*reinterpret_cast<Windows::ApplicationModel::Background::IBackgroundTaskInstance const*>(&taskInstance));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IBackgroundTaskBuilder> : produce_base<D, Windows::ApplicationModel::Background::IBackgroundTaskBuilder>
{
    HRESULT __stdcall put_TaskEntryPoint(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TaskEntryPoint(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TaskEntryPoint(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TaskEntryPoint());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetTrigger(void* trigger) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetTrigger(*reinterpret_cast<Windows::ApplicationModel::Background::IBackgroundTrigger const*>(&trigger));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AddCondition(void* condition) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddCondition(*reinterpret_cast<Windows::ApplicationModel::Background::IBackgroundCondition const*>(&condition));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Name(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Name(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

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

    HRESULT __stdcall Register(void** task) noexcept final
    {
        try
        {
            *task = nullptr;
            typename D::abi_guard guard(this->shim());
            *task = detach_from<Windows::ApplicationModel::Background::BackgroundTaskRegistration>(this->shim().Register());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IBackgroundTaskBuilder2> : produce_base<D, Windows::ApplicationModel::Background::IBackgroundTaskBuilder2>
{
    HRESULT __stdcall put_CancelOnConditionLoss(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CancelOnConditionLoss(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CancelOnConditionLoss(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CancelOnConditionLoss());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IBackgroundTaskBuilder3> : produce_base<D, Windows::ApplicationModel::Background::IBackgroundTaskBuilder3>
{
    HRESULT __stdcall put_IsNetworkRequested(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsNetworkRequested(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsNetworkRequested(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsNetworkRequested());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IBackgroundTaskBuilder4> : produce_base<D, Windows::ApplicationModel::Background::IBackgroundTaskBuilder4>
{
    HRESULT __stdcall get_TaskGroup(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup>(this->shim().TaskGroup());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TaskGroup(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TaskGroup(*reinterpret_cast<Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IBackgroundTaskCompletedEventArgs> : produce_base<D, Windows::ApplicationModel::Background::IBackgroundTaskCompletedEventArgs>
{
    HRESULT __stdcall get_InstanceId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().InstanceId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CheckResult() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CheckResult();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IBackgroundTaskDeferral> : produce_base<D, Windows::ApplicationModel::Background::IBackgroundTaskDeferral>
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
struct produce<D, Windows::ApplicationModel::Background::IBackgroundTaskInstance> : produce_base<D, Windows::ApplicationModel::Background::IBackgroundTaskInstance>
{
    HRESULT __stdcall get_InstanceId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().InstanceId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Task(void** task) noexcept final
    {
        try
        {
            *task = nullptr;
            typename D::abi_guard guard(this->shim());
            *task = detach_from<Windows::ApplicationModel::Background::BackgroundTaskRegistration>(this->shim().Task());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Progress(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Progress());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Progress(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Progress(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TriggerDetails(void** triggerDetails) noexcept final
    {
        try
        {
            *triggerDetails = nullptr;
            typename D::abi_guard guard(this->shim());
            *triggerDetails = detach_from<Windows::Foundation::IInspectable>(this->shim().TriggerDetails());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Canceled(void* cancelHandler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().Canceled(*reinterpret_cast<Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler const*>(&cancelHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Canceled(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Canceled(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SuspendedCount(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().SuspendedCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** deferral) noexcept final
    {
        try
        {
            *deferral = nullptr;
            typename D::abi_guard guard(this->shim());
            *deferral = detach_from<Windows::ApplicationModel::Background::BackgroundTaskDeferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IBackgroundTaskInstance2> : produce_base<D, Windows::ApplicationModel::Background::IBackgroundTaskInstance2>
{
    HRESULT __stdcall GetThrottleCount(Windows::ApplicationModel::Background::BackgroundTaskThrottleCounter counter, uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().GetThrottleCount(*reinterpret_cast<Windows::ApplicationModel::Background::BackgroundTaskThrottleCounter const*>(&counter)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IBackgroundTaskInstance4> : produce_base<D, Windows::ApplicationModel::Background::IBackgroundTaskInstance4>
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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IBackgroundTaskProgressEventArgs> : produce_base<D, Windows::ApplicationModel::Background::IBackgroundTaskProgressEventArgs>
{
    HRESULT __stdcall get_InstanceId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().InstanceId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Progress(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Progress());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IBackgroundTaskRegistration> : produce_base<D, Windows::ApplicationModel::Background::IBackgroundTaskRegistration>
{
    HRESULT __stdcall get_TaskId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().TaskId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

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

    HRESULT __stdcall add_Progress(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().Progress(*reinterpret_cast<Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Progress(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Progress(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Completed(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().Completed(*reinterpret_cast<Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Completed(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Completed(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Unregister(bool cancelTask) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Unregister(cancelTask);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IBackgroundTaskRegistration2> : produce_base<D, Windows::ApplicationModel::Background::IBackgroundTaskRegistration2>
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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IBackgroundTaskRegistration3> : produce_base<D, Windows::ApplicationModel::Background::IBackgroundTaskRegistration3>
{
    HRESULT __stdcall get_TaskGroup(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup>(this->shim().TaskGroup());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup> : produce_base<D, Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup>
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

    HRESULT __stdcall add_BackgroundActivated(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().BackgroundActivated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup, Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_BackgroundActivated(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BackgroundActivated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AllTasks(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<GUID, Windows::ApplicationModel::Background::BackgroundTaskRegistration>>(this->shim().AllTasks());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroupFactory> : produce_base<D, Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroupFactory>
{
    HRESULT __stdcall Create(HSTRING id, void** group) noexcept final
    {
        try
        {
            *group = nullptr;
            typename D::abi_guard guard(this->shim());
            *group = detach_from<Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup>(this->shim().Create(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithName(HSTRING id, HSTRING name, void** group) noexcept final
    {
        try
        {
            *group = nullptr;
            typename D::abi_guard guard(this->shim());
            *group = detach_from<Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup>(this->shim().CreateWithName(*reinterpret_cast<hstring const*>(&id), *reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics> : produce_base<D, Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics>
{
    HRESULT __stdcall get_AllTasks(void** tasks) noexcept final
    {
        try
        {
            *tasks = nullptr;
            typename D::abi_guard guard(this->shim());
            *tasks = detach_from<Windows::Foundation::Collections::IMapView<GUID, Windows::ApplicationModel::Background::IBackgroundTaskRegistration>>(this->shim().AllTasks());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics2> : produce_base<D, Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics2>
{
    HRESULT __stdcall get_AllTaskGroups(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup>>(this->shim().AllTaskGroups());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetTaskGroup(HSTRING groupId, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup>(this->shim().GetTaskGroup(*reinterpret_cast<hstring const*>(&groupId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IBackgroundTrigger> : produce_base<D, Windows::ApplicationModel::Background::IBackgroundTrigger>
{};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IBackgroundWorkCostStatics> : produce_base<D, Windows::ApplicationModel::Background::IBackgroundWorkCostStatics>
{
    HRESULT __stdcall get_CurrentBackgroundWorkCost(Windows::ApplicationModel::Background::BackgroundWorkCostValue* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Background::BackgroundWorkCostValue>(this->shim().CurrentBackgroundWorkCost());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger> : produce_base<D, Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger>
{
    HRESULT __stdcall get_Advertisement(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement>(this->shim().Advertisement());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger> : produce_base<D, Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger>
{
    HRESULT __stdcall get_MinSamplingInterval(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().MinSamplingInterval());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxSamplingInterval(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().MaxSamplingInterval());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MinOutOfRangeTimeout(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().MinOutOfRangeTimeout());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxOutOfRangeTimeout(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().MaxOutOfRangeTimeout());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SignalStrengthFilter(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter>(this->shim().SignalStrengthFilter());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SignalStrengthFilter(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SignalStrengthFilter(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AdvertisementFilter(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter>(this->shim().AdvertisementFilter());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AdvertisementFilter(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AdvertisementFilter(*reinterpret_cast<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::ICachedFileUpdaterTrigger> : produce_base<D, Windows::ApplicationModel::Background::ICachedFileUpdaterTrigger>
{};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails> : produce_base<D, Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails>
{
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

    HRESULT __stdcall get_CanRequestUserInput(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanRequestUserInput());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IChatMessageNotificationTrigger> : produce_base<D, Windows::ApplicationModel::Background::IChatMessageNotificationTrigger>
{};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IChatMessageReceivedNotificationTrigger> : produce_base<D, Windows::ApplicationModel::Background::IChatMessageReceivedNotificationTrigger>
{};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::ICommunicationBlockingAppSetAsActiveTrigger> : produce_base<D, Windows::ApplicationModel::Background::ICommunicationBlockingAppSetAsActiveTrigger>
{};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IContactStoreNotificationTrigger> : produce_base<D, Windows::ApplicationModel::Background::IContactStoreNotificationTrigger>
{};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IContentPrefetchTrigger> : produce_base<D, Windows::ApplicationModel::Background::IContentPrefetchTrigger>
{
    HRESULT __stdcall get_WaitInterval(Windows::Foundation::TimeSpan* waitInterval) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *waitInterval = detach_from<Windows::Foundation::TimeSpan>(this->shim().WaitInterval());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IContentPrefetchTriggerFactory> : produce_base<D, Windows::ApplicationModel::Background::IContentPrefetchTriggerFactory>
{
    HRESULT __stdcall Create(Windows::Foundation::TimeSpan waitInterval, void** trigger) noexcept final
    {
        try
        {
            *trigger = nullptr;
            typename D::abi_guard guard(this->shim());
            *trigger = detach_from<Windows::ApplicationModel::Background::ContentPrefetchTrigger>(this->shim().Create(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&waitInterval)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::ICustomSystemEventTrigger> : produce_base<D, Windows::ApplicationModel::Background::ICustomSystemEventTrigger>
{
    HRESULT __stdcall get_TriggerId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TriggerId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Recurrence(Windows::ApplicationModel::Background::CustomSystemEventTriggerRecurrence* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Background::CustomSystemEventTriggerRecurrence>(this->shim().Recurrence());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::ICustomSystemEventTriggerFactory> : produce_base<D, Windows::ApplicationModel::Background::ICustomSystemEventTriggerFactory>
{
    HRESULT __stdcall Create(HSTRING triggerId, Windows::ApplicationModel::Background::CustomSystemEventTriggerRecurrence recurrence, void** trigger) noexcept final
    {
        try
        {
            *trigger = nullptr;
            typename D::abi_guard guard(this->shim());
            *trigger = detach_from<Windows::ApplicationModel::Background::CustomSystemEventTrigger>(this->shim().Create(*reinterpret_cast<hstring const*>(&triggerId), *reinterpret_cast<Windows::ApplicationModel::Background::CustomSystemEventTriggerRecurrence const*>(&recurrence)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger> : produce_base<D, Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CanMaintainConnection(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanMaintainConnection());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaintainConnection(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().MaintainConnection());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MaintainConnection(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaintainConnection(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IDeviceConnectionChangeTriggerStatics> : produce_base<D, Windows::ApplicationModel::Background::IDeviceConnectionChangeTriggerStatics>
{
    HRESULT __stdcall FromIdAsync(HSTRING deviceId, void** deviceChangeTrigger) noexcept final
    {
        try
        {
            *deviceChangeTrigger = nullptr;
            typename D::abi_guard guard(this->shim());
            *deviceChangeTrigger = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger> : produce_base<D, Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger>
{
    HRESULT __stdcall get_TriggerQualifier(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TriggerQualifier());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OneShot(bool* oneShot) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *oneShot = detach_from<bool>(this->shim().OneShot());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTriggerFactory> : produce_base<D, Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTriggerFactory>
{
    HRESULT __stdcall Create(HSTRING triggerQualifier, bool oneShot, void** trigger) noexcept final
    {
        try
        {
            *trigger = nullptr;
            typename D::abi_guard guard(this->shim());
            *trigger = detach_from<Windows::ApplicationModel::Background::DeviceManufacturerNotificationTrigger>(this->shim().Create(*reinterpret_cast<hstring const*>(&triggerQualifier), oneShot));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IDeviceServicingTrigger> : produce_base<D, Windows::ApplicationModel::Background::IDeviceServicingTrigger>
{
    HRESULT __stdcall RequestAsyncSimple(HSTRING deviceId, Windows::Foundation::TimeSpan expectedDuration, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::DeviceTriggerResult>>(this->shim().RequestAsync(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&expectedDuration)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestAsyncWithArguments(HSTRING deviceId, Windows::Foundation::TimeSpan expectedDuration, HSTRING arguments, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::DeviceTriggerResult>>(this->shim().RequestAsync(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&expectedDuration), *reinterpret_cast<hstring const*>(&arguments)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IDeviceUseTrigger> : produce_base<D, Windows::ApplicationModel::Background::IDeviceUseTrigger>
{
    HRESULT __stdcall RequestAsyncSimple(HSTRING deviceId, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::DeviceTriggerResult>>(this->shim().RequestAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestAsyncWithArguments(HSTRING deviceId, HSTRING arguments, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::DeviceTriggerResult>>(this->shim().RequestAsync(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<hstring const*>(&arguments)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IDeviceWatcherTrigger> : produce_base<D, Windows::ApplicationModel::Background::IDeviceWatcherTrigger>
{};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IEmailStoreNotificationTrigger> : produce_base<D, Windows::ApplicationModel::Background::IEmailStoreNotificationTrigger>
{};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger> : produce_base<D, Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger>
{
    HRESULT __stdcall get_Characteristic(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic>(this->shim().Characteristic());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger2> : produce_base<D, Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger2>
{
    HRESULT __stdcall get_EventTriggeringMode(Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode>(this->shim().EventTriggeringMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory> : produce_base<D, Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory>
{
    HRESULT __stdcall Create(void* characteristic, void** gattCharacteristicNotificationTrigger) noexcept final
    {
        try
        {
            *gattCharacteristicNotificationTrigger = nullptr;
            typename D::abi_guard guard(this->shim());
            *gattCharacteristicNotificationTrigger = detach_from<Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger>(this->shim().Create(*reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic const*>(&characteristic)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory2> : produce_base<D, Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory2>
{
    HRESULT __stdcall CreateWithEventTriggeringMode(void* characteristic, Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode eventTriggeringMode, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger>(this->shim().Create(*reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic const*>(&characteristic), *reinterpret_cast<Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode const*>(&eventTriggeringMode)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IGattServiceProviderTrigger> : produce_base<D, Windows::ApplicationModel::Background::IGattServiceProviderTrigger>
{
    HRESULT __stdcall get_TriggerId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TriggerId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Service(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService>(this->shim().Service());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AdvertisingParameters(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AdvertisingParameters(*reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AdvertisingParameters(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters>(this->shim().AdvertisingParameters());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IGattServiceProviderTriggerResult> : produce_base<D, Windows::ApplicationModel::Background::IGattServiceProviderTriggerResult>
{
    HRESULT __stdcall get_Trigger(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Background::GattServiceProviderTrigger>(this->shim().Trigger());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Error(Windows::Devices::Bluetooth::BluetoothError* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::BluetoothError>(this->shim().Error());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IGattServiceProviderTriggerStatics> : produce_base<D, Windows::ApplicationModel::Background::IGattServiceProviderTriggerStatics>
{
    HRESULT __stdcall CreateAsync(HSTRING triggerId, GUID serviceUuid, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::GattServiceProviderTriggerResult>>(this->shim().CreateAsync(*reinterpret_cast<hstring const*>(&triggerId), *reinterpret_cast<GUID const*>(&serviceUuid)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IGeovisitTrigger> : produce_base<D, Windows::ApplicationModel::Background::IGeovisitTrigger>
{
    HRESULT __stdcall get_MonitoringScope(Windows::Devices::Geolocation::VisitMonitoringScope* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::VisitMonitoringScope>(this->shim().MonitoringScope());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MonitoringScope(Windows::Devices::Geolocation::VisitMonitoringScope value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MonitoringScope(*reinterpret_cast<Windows::Devices::Geolocation::VisitMonitoringScope const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::ILocationTrigger> : produce_base<D, Windows::ApplicationModel::Background::ILocationTrigger>
{
    HRESULT __stdcall get_TriggerType(Windows::ApplicationModel::Background::LocationTriggerType* triggerType) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *triggerType = detach_from<Windows::ApplicationModel::Background::LocationTriggerType>(this->shim().TriggerType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::ILocationTriggerFactory> : produce_base<D, Windows::ApplicationModel::Background::ILocationTriggerFactory>
{
    HRESULT __stdcall Create(Windows::ApplicationModel::Background::LocationTriggerType triggerType, void** locationTrigger) noexcept final
    {
        try
        {
            *locationTrigger = nullptr;
            typename D::abi_guard guard(this->shim());
            *locationTrigger = detach_from<Windows::ApplicationModel::Background::LocationTrigger>(this->shim().Create(*reinterpret_cast<Windows::ApplicationModel::Background::LocationTriggerType const*>(&triggerType)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IMaintenanceTrigger> : produce_base<D, Windows::ApplicationModel::Background::IMaintenanceTrigger>
{
    HRESULT __stdcall get_FreshnessTime(uint32_t* freshnessTime) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *freshnessTime = detach_from<uint32_t>(this->shim().FreshnessTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OneShot(bool* oneShot) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *oneShot = detach_from<bool>(this->shim().OneShot());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IMaintenanceTriggerFactory> : produce_base<D, Windows::ApplicationModel::Background::IMaintenanceTriggerFactory>
{
    HRESULT __stdcall Create(uint32_t freshnessTime, bool oneShot, void** trigger) noexcept final
    {
        try
        {
            *trigger = nullptr;
            typename D::abi_guard guard(this->shim());
            *trigger = detach_from<Windows::ApplicationModel::Background::MaintenanceTrigger>(this->shim().Create(freshnessTime, oneShot));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IMediaProcessingTrigger> : produce_base<D, Windows::ApplicationModel::Background::IMediaProcessingTrigger>
{
    HRESULT __stdcall RequestAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::MediaProcessingTriggerResult>>(this->shim().RequestAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestAsyncWithArguments(void* arguments, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::MediaProcessingTriggerResult>>(this->shim().RequestAsync(*reinterpret_cast<Windows::Foundation::Collections::ValueSet const*>(&arguments)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::INetworkOperatorHotspotAuthenticationTrigger> : produce_base<D, Windows::ApplicationModel::Background::INetworkOperatorHotspotAuthenticationTrigger>
{};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::INetworkOperatorNotificationTrigger> : produce_base<D, Windows::ApplicationModel::Background::INetworkOperatorNotificationTrigger>
{
    HRESULT __stdcall get_NetworkAccountId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().NetworkAccountId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::INetworkOperatorNotificationTriggerFactory> : produce_base<D, Windows::ApplicationModel::Background::INetworkOperatorNotificationTriggerFactory>
{
    HRESULT __stdcall Create(HSTRING networkAccountId, void** trigger) noexcept final
    {
        try
        {
            *trigger = nullptr;
            typename D::abi_guard guard(this->shim());
            *trigger = detach_from<Windows::ApplicationModel::Background::NetworkOperatorNotificationTrigger>(this->shim().Create(*reinterpret_cast<hstring const*>(&networkAccountId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IPhoneTrigger> : produce_base<D, Windows::ApplicationModel::Background::IPhoneTrigger>
{
    HRESULT __stdcall get_OneShot(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().OneShot());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TriggerType(Windows::ApplicationModel::Calls::Background::PhoneTriggerType* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Calls::Background::PhoneTriggerType>(this->shim().TriggerType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IPhoneTriggerFactory> : produce_base<D, Windows::ApplicationModel::Background::IPhoneTriggerFactory>
{
    HRESULT __stdcall Create(Windows::ApplicationModel::Calls::Background::PhoneTriggerType type, bool oneShot, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Background::PhoneTrigger>(this->shim().Create(*reinterpret_cast<Windows::ApplicationModel::Calls::Background::PhoneTriggerType const*>(&type), oneShot));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IPushNotificationTriggerFactory> : produce_base<D, Windows::ApplicationModel::Background::IPushNotificationTriggerFactory>
{
    HRESULT __stdcall Create(HSTRING applicationId, void** trigger) noexcept final
    {
        try
        {
            *trigger = nullptr;
            typename D::abi_guard guard(this->shim());
            *trigger = detach_from<Windows::ApplicationModel::Background::PushNotificationTrigger>(this->shim().Create(*reinterpret_cast<hstring const*>(&applicationId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IRcsEndUserMessageAvailableTrigger> : produce_base<D, Windows::ApplicationModel::Background::IRcsEndUserMessageAvailableTrigger>
{};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IRfcommConnectionTrigger> : produce_base<D, Windows::ApplicationModel::Background::IRfcommConnectionTrigger>
{
    HRESULT __stdcall get_InboundConnection(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation>(this->shim().InboundConnection());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OutboundConnection(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Bluetooth::Background::RfcommOutboundConnectionInformation>(this->shim().OutboundConnection());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AllowMultipleConnections(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowMultipleConnections());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AllowMultipleConnections(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowMultipleConnections(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ProtectionLevel(Windows::Networking::Sockets::SocketProtectionLevel* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::SocketProtectionLevel>(this->shim().ProtectionLevel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ProtectionLevel(Windows::Networking::Sockets::SocketProtectionLevel value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProtectionLevel(*reinterpret_cast<Windows::Networking::Sockets::SocketProtectionLevel const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteHostName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::HostName>(this->shim().RemoteHostName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RemoteHostName(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoteHostName(*reinterpret_cast<Windows::Networking::HostName const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::ISecondaryAuthenticationFactorAuthenticationTrigger> : produce_base<D, Windows::ApplicationModel::Background::ISecondaryAuthenticationFactorAuthenticationTrigger>
{};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::ISensorDataThresholdTrigger> : produce_base<D, Windows::ApplicationModel::Background::ISensorDataThresholdTrigger>
{};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::ISensorDataThresholdTriggerFactory> : produce_base<D, Windows::ApplicationModel::Background::ISensorDataThresholdTriggerFactory>
{
    HRESULT __stdcall Create(void* threshold, void** trigger) noexcept final
    {
        try
        {
            *trigger = nullptr;
            typename D::abi_guard guard(this->shim());
            *trigger = detach_from<Windows::ApplicationModel::Background::SensorDataThresholdTrigger>(this->shim().Create(*reinterpret_cast<Windows::Devices::Sensors::ISensorDataThreshold const*>(&threshold)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::ISmartCardTrigger> : produce_base<D, Windows::ApplicationModel::Background::ISmartCardTrigger>
{
    HRESULT __stdcall get_TriggerType(Windows::Devices::SmartCards::SmartCardTriggerType* triggerType) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *triggerType = detach_from<Windows::Devices::SmartCards::SmartCardTriggerType>(this->shim().TriggerType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::ISmartCardTriggerFactory> : produce_base<D, Windows::ApplicationModel::Background::ISmartCardTriggerFactory>
{
    HRESULT __stdcall Create(Windows::Devices::SmartCards::SmartCardTriggerType triggerType, void** trigger) noexcept final
    {
        try
        {
            *trigger = nullptr;
            typename D::abi_guard guard(this->shim());
            *trigger = detach_from<Windows::ApplicationModel::Background::SmartCardTrigger>(this->shim().Create(*reinterpret_cast<Windows::Devices::SmartCards::SmartCardTriggerType const*>(&triggerType)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::ISmsMessageReceivedTriggerFactory> : produce_base<D, Windows::ApplicationModel::Background::ISmsMessageReceivedTriggerFactory>
{
    HRESULT __stdcall Create(void* filterRules, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Background::SmsMessageReceivedTrigger>(this->shim().Create(*reinterpret_cast<Windows::Devices::Sms::SmsFilterRules const*>(&filterRules)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::ISocketActivityTrigger> : produce_base<D, Windows::ApplicationModel::Background::ISocketActivityTrigger>
{
    HRESULT __stdcall get_IsWakeFromLowPowerSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsWakeFromLowPowerSupported());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IStorageLibraryChangeTrackerTriggerFactory> : produce_base<D, Windows::ApplicationModel::Background::IStorageLibraryChangeTrackerTriggerFactory>
{
    HRESULT __stdcall Create(void* tracker, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Background::StorageLibraryChangeTrackerTrigger>(this->shim().Create(*reinterpret_cast<Windows::Storage::StorageLibraryChangeTracker const*>(&tracker)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IStorageLibraryContentChangedTrigger> : produce_base<D, Windows::ApplicationModel::Background::IStorageLibraryContentChangedTrigger>
{};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IStorageLibraryContentChangedTriggerStatics> : produce_base<D, Windows::ApplicationModel::Background::IStorageLibraryContentChangedTriggerStatics>
{
    HRESULT __stdcall Create(void* storageLibrary, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger>(this->shim().Create(*reinterpret_cast<Windows::Storage::StorageLibrary const*>(&storageLibrary)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFromLibraries(void* storageLibraries, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger>(this->shim().CreateFromLibraries(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Storage::StorageLibrary> const*>(&storageLibraries)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::ISystemCondition> : produce_base<D, Windows::ApplicationModel::Background::ISystemCondition>
{
    HRESULT __stdcall get_ConditionType(Windows::ApplicationModel::Background::SystemConditionType* conditionType) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *conditionType = detach_from<Windows::ApplicationModel::Background::SystemConditionType>(this->shim().ConditionType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::ISystemConditionFactory> : produce_base<D, Windows::ApplicationModel::Background::ISystemConditionFactory>
{
    HRESULT __stdcall Create(Windows::ApplicationModel::Background::SystemConditionType conditionType, void** condition) noexcept final
    {
        try
        {
            *condition = nullptr;
            typename D::abi_guard guard(this->shim());
            *condition = detach_from<Windows::ApplicationModel::Background::SystemCondition>(this->shim().Create(*reinterpret_cast<Windows::ApplicationModel::Background::SystemConditionType const*>(&conditionType)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::ISystemTrigger> : produce_base<D, Windows::ApplicationModel::Background::ISystemTrigger>
{
    HRESULT __stdcall get_OneShot(bool* oneShot) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *oneShot = detach_from<bool>(this->shim().OneShot());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TriggerType(Windows::ApplicationModel::Background::SystemTriggerType* triggerType) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *triggerType = detach_from<Windows::ApplicationModel::Background::SystemTriggerType>(this->shim().TriggerType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::ISystemTriggerFactory> : produce_base<D, Windows::ApplicationModel::Background::ISystemTriggerFactory>
{
    HRESULT __stdcall Create(Windows::ApplicationModel::Background::SystemTriggerType triggerType, bool oneShot, void** trigger) noexcept final
    {
        try
        {
            *trigger = nullptr;
            typename D::abi_guard guard(this->shim());
            *trigger = detach_from<Windows::ApplicationModel::Background::SystemTrigger>(this->shim().Create(*reinterpret_cast<Windows::ApplicationModel::Background::SystemTriggerType const*>(&triggerType), oneShot));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::ITimeTrigger> : produce_base<D, Windows::ApplicationModel::Background::ITimeTrigger>
{
    HRESULT __stdcall get_FreshnessTime(uint32_t* freshnessTime) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *freshnessTime = detach_from<uint32_t>(this->shim().FreshnessTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OneShot(bool* oneShot) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *oneShot = detach_from<bool>(this->shim().OneShot());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::ITimeTriggerFactory> : produce_base<D, Windows::ApplicationModel::Background::ITimeTriggerFactory>
{
    HRESULT __stdcall Create(uint32_t freshnessTime, bool oneShot, void** trigger) noexcept final
    {
        try
        {
            *trigger = nullptr;
            typename D::abi_guard guard(this->shim());
            *trigger = detach_from<Windows::ApplicationModel::Background::TimeTrigger>(this->shim().Create(freshnessTime, oneShot));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IToastNotificationActionTriggerFactory> : produce_base<D, Windows::ApplicationModel::Background::IToastNotificationActionTriggerFactory>
{
    HRESULT __stdcall Create(HSTRING applicationId, void** trigger) noexcept final
    {
        try
        {
            *trigger = nullptr;
            typename D::abi_guard guard(this->shim());
            *trigger = detach_from<Windows::ApplicationModel::Background::ToastNotificationActionTrigger>(this->shim().Create(*reinterpret_cast<hstring const*>(&applicationId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IToastNotificationHistoryChangedTriggerFactory> : produce_base<D, Windows::ApplicationModel::Background::IToastNotificationHistoryChangedTriggerFactory>
{
    HRESULT __stdcall Create(HSTRING applicationId, void** trigger) noexcept final
    {
        try
        {
            *trigger = nullptr;
            typename D::abi_guard guard(this->shim());
            *trigger = detach_from<Windows::ApplicationModel::Background::ToastNotificationHistoryChangedTrigger>(this->shim().Create(*reinterpret_cast<hstring const*>(&applicationId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Background::IUserNotificationChangedTriggerFactory> : produce_base<D, Windows::ApplicationModel::Background::IUserNotificationChangedTriggerFactory>
{
    HRESULT __stdcall Create(Windows::UI::Notifications::NotificationKinds notificationKinds, void** trigger) noexcept final
    {
        try
        {
            *trigger = nullptr;
            typename D::abi_guard guard(this->shim());
            *trigger = detach_from<Windows::ApplicationModel::Background::UserNotificationChangedTrigger>(this->shim().Create(*reinterpret_cast<Windows::UI::Notifications::NotificationKinds const*>(&notificationKinds)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Background {

inline ActivitySensorTrigger::ActivitySensorTrigger(uint32_t reportIntervalInMilliseconds) :
    ActivitySensorTrigger(get_activation_factory<ActivitySensorTrigger, Windows::ApplicationModel::Background::IActivitySensorTriggerFactory>().Create(reportIntervalInMilliseconds))
{}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::AlarmAccessStatus> AlarmApplicationManager::RequestAccessAsync()
{
    return get_activation_factory<AlarmApplicationManager, Windows::ApplicationModel::Background::IAlarmApplicationManagerStatics>().RequestAccessAsync();
}

inline Windows::ApplicationModel::Background::AlarmAccessStatus AlarmApplicationManager::GetAccessStatus()
{
    return get_activation_factory<AlarmApplicationManager, Windows::ApplicationModel::Background::IAlarmApplicationManagerStatics>().GetAccessStatus();
}

inline AppBroadcastTrigger::AppBroadcastTrigger(param::hstring const& providerKey) :
    AppBroadcastTrigger(get_activation_factory<AppBroadcastTrigger, Windows::ApplicationModel::Background::IAppBroadcastTriggerFactory>().CreateAppBroadcastTrigger(providerKey))
{}

inline ApplicationTrigger::ApplicationTrigger() :
    ApplicationTrigger(get_activation_factory<ApplicationTrigger>().ActivateInstance<ApplicationTrigger>())
{}

inline AppointmentStoreNotificationTrigger::AppointmentStoreNotificationTrigger() :
    AppointmentStoreNotificationTrigger(get_activation_factory<AppointmentStoreNotificationTrigger>().ActivateInstance<AppointmentStoreNotificationTrigger>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::BackgroundAccessStatus> BackgroundExecutionManager::RequestAccessAsync()
{
    return get_activation_factory<BackgroundExecutionManager, Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics>().RequestAccessAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::BackgroundAccessStatus> BackgroundExecutionManager::RequestAccessAsync(param::hstring const& applicationId)
{
    return get_activation_factory<BackgroundExecutionManager, Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics>().RequestAccessAsync(applicationId);
}

inline void BackgroundExecutionManager::RemoveAccess()
{
    get_activation_factory<BackgroundExecutionManager, Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics>().RemoveAccess();
}

inline void BackgroundExecutionManager::RemoveAccess(param::hstring const& applicationId)
{
    get_activation_factory<BackgroundExecutionManager, Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics>().RemoveAccess(applicationId);
}

inline Windows::ApplicationModel::Background::BackgroundAccessStatus BackgroundExecutionManager::GetAccessStatus()
{
    return get_activation_factory<BackgroundExecutionManager, Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics>().GetAccessStatus();
}

inline Windows::ApplicationModel::Background::BackgroundAccessStatus BackgroundExecutionManager::GetAccessStatus(param::hstring const& applicationId)
{
    return get_activation_factory<BackgroundExecutionManager, Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics>().GetAccessStatus(applicationId);
}

inline Windows::Foundation::IAsyncOperation<bool> BackgroundExecutionManager::RequestAccessKindAsync(Windows::ApplicationModel::Background::BackgroundAccessRequestKind const& requestedAccess, param::hstring const& reason)
{
    return get_activation_factory<BackgroundExecutionManager, Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics2>().RequestAccessKindAsync(requestedAccess, reason);
}

inline BackgroundTaskBuilder::BackgroundTaskBuilder() :
    BackgroundTaskBuilder(get_activation_factory<BackgroundTaskBuilder>().ActivateInstance<BackgroundTaskBuilder>())
{}

inline Windows::Foundation::Collections::IMapView<GUID, Windows::ApplicationModel::Background::IBackgroundTaskRegistration> BackgroundTaskRegistration::AllTasks()
{
    return get_activation_factory<BackgroundTaskRegistration, Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics>().AllTasks();
}

inline Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup> BackgroundTaskRegistration::AllTaskGroups()
{
    return get_activation_factory<BackgroundTaskRegistration, Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics2>().AllTaskGroups();
}

inline Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup BackgroundTaskRegistration::GetTaskGroup(param::hstring const& groupId)
{
    return get_activation_factory<BackgroundTaskRegistration, Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics2>().GetTaskGroup(groupId);
}

inline BackgroundTaskRegistrationGroup::BackgroundTaskRegistrationGroup(param::hstring const& id) :
    BackgroundTaskRegistrationGroup(get_activation_factory<BackgroundTaskRegistrationGroup, Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroupFactory>().Create(id))
{}

inline BackgroundTaskRegistrationGroup::BackgroundTaskRegistrationGroup(param::hstring const& id, param::hstring const& name) :
    BackgroundTaskRegistrationGroup(get_activation_factory<BackgroundTaskRegistrationGroup, Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroupFactory>().CreateWithName(id, name))
{}

inline Windows::ApplicationModel::Background::BackgroundWorkCostValue BackgroundWorkCost::CurrentBackgroundWorkCost()
{
    return get_activation_factory<BackgroundWorkCost, Windows::ApplicationModel::Background::IBackgroundWorkCostStatics>().CurrentBackgroundWorkCost();
}

inline BluetoothLEAdvertisementPublisherTrigger::BluetoothLEAdvertisementPublisherTrigger() :
    BluetoothLEAdvertisementPublisherTrigger(get_activation_factory<BluetoothLEAdvertisementPublisherTrigger>().ActivateInstance<BluetoothLEAdvertisementPublisherTrigger>())
{}

inline BluetoothLEAdvertisementWatcherTrigger::BluetoothLEAdvertisementWatcherTrigger() :
    BluetoothLEAdvertisementWatcherTrigger(get_activation_factory<BluetoothLEAdvertisementWatcherTrigger>().ActivateInstance<BluetoothLEAdvertisementWatcherTrigger>())
{}

inline CachedFileUpdaterTrigger::CachedFileUpdaterTrigger() :
    CachedFileUpdaterTrigger(get_activation_factory<CachedFileUpdaterTrigger>().ActivateInstance<CachedFileUpdaterTrigger>())
{}

inline ChatMessageNotificationTrigger::ChatMessageNotificationTrigger() :
    ChatMessageNotificationTrigger(get_activation_factory<ChatMessageNotificationTrigger>().ActivateInstance<ChatMessageNotificationTrigger>())
{}

inline ChatMessageReceivedNotificationTrigger::ChatMessageReceivedNotificationTrigger() :
    ChatMessageReceivedNotificationTrigger(get_activation_factory<ChatMessageReceivedNotificationTrigger>().ActivateInstance<ChatMessageReceivedNotificationTrigger>())
{}

inline CommunicationBlockingAppSetAsActiveTrigger::CommunicationBlockingAppSetAsActiveTrigger() :
    CommunicationBlockingAppSetAsActiveTrigger(get_activation_factory<CommunicationBlockingAppSetAsActiveTrigger>().ActivateInstance<CommunicationBlockingAppSetAsActiveTrigger>())
{}

inline ContactStoreNotificationTrigger::ContactStoreNotificationTrigger() :
    ContactStoreNotificationTrigger(get_activation_factory<ContactStoreNotificationTrigger>().ActivateInstance<ContactStoreNotificationTrigger>())
{}

inline ContentPrefetchTrigger::ContentPrefetchTrigger() :
    ContentPrefetchTrigger(get_activation_factory<ContentPrefetchTrigger>().ActivateInstance<ContentPrefetchTrigger>())
{}

inline ContentPrefetchTrigger::ContentPrefetchTrigger(Windows::Foundation::TimeSpan const& waitInterval) :
    ContentPrefetchTrigger(get_activation_factory<ContentPrefetchTrigger, Windows::ApplicationModel::Background::IContentPrefetchTriggerFactory>().Create(waitInterval))
{}

inline CustomSystemEventTrigger::CustomSystemEventTrigger(param::hstring const& triggerId, Windows::ApplicationModel::Background::CustomSystemEventTriggerRecurrence const& recurrence) :
    CustomSystemEventTrigger(get_activation_factory<CustomSystemEventTrigger, Windows::ApplicationModel::Background::ICustomSystemEventTriggerFactory>().Create(triggerId, recurrence))
{}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger> DeviceConnectionChangeTrigger::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<DeviceConnectionChangeTrigger, Windows::ApplicationModel::Background::IDeviceConnectionChangeTriggerStatics>().FromIdAsync(deviceId);
}

inline DeviceManufacturerNotificationTrigger::DeviceManufacturerNotificationTrigger(param::hstring const& triggerQualifier, bool oneShot) :
    DeviceManufacturerNotificationTrigger(get_activation_factory<DeviceManufacturerNotificationTrigger, Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTriggerFactory>().Create(triggerQualifier, oneShot))
{}

inline DeviceServicingTrigger::DeviceServicingTrigger() :
    DeviceServicingTrigger(get_activation_factory<DeviceServicingTrigger>().ActivateInstance<DeviceServicingTrigger>())
{}

inline DeviceUseTrigger::DeviceUseTrigger() :
    DeviceUseTrigger(get_activation_factory<DeviceUseTrigger>().ActivateInstance<DeviceUseTrigger>())
{}

inline EmailStoreNotificationTrigger::EmailStoreNotificationTrigger() :
    EmailStoreNotificationTrigger(get_activation_factory<EmailStoreNotificationTrigger>().ActivateInstance<EmailStoreNotificationTrigger>())
{}

inline GattCharacteristicNotificationTrigger::GattCharacteristicNotificationTrigger(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic const& characteristic) :
    GattCharacteristicNotificationTrigger(get_activation_factory<GattCharacteristicNotificationTrigger, Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory>().Create(characteristic))
{}

inline GattCharacteristicNotificationTrigger::GattCharacteristicNotificationTrigger(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic const& characteristic, Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode const& eventTriggeringMode) :
    GattCharacteristicNotificationTrigger(get_activation_factory<GattCharacteristicNotificationTrigger, Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory2>().Create(characteristic, eventTriggeringMode))
{}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Background::GattServiceProviderTriggerResult> GattServiceProviderTrigger::CreateAsync(param::hstring const& triggerId, GUID const& serviceUuid)
{
    return get_activation_factory<GattServiceProviderTrigger, Windows::ApplicationModel::Background::IGattServiceProviderTriggerStatics>().CreateAsync(triggerId, serviceUuid);
}

inline GeovisitTrigger::GeovisitTrigger() :
    GeovisitTrigger(get_activation_factory<GeovisitTrigger>().ActivateInstance<GeovisitTrigger>())
{}

inline LocationTrigger::LocationTrigger(Windows::ApplicationModel::Background::LocationTriggerType const& triggerType) :
    LocationTrigger(get_activation_factory<LocationTrigger, Windows::ApplicationModel::Background::ILocationTriggerFactory>().Create(triggerType))
{}

inline MaintenanceTrigger::MaintenanceTrigger(uint32_t freshnessTime, bool oneShot) :
    MaintenanceTrigger(get_activation_factory<MaintenanceTrigger, Windows::ApplicationModel::Background::IMaintenanceTriggerFactory>().Create(freshnessTime, oneShot))
{}

inline MediaProcessingTrigger::MediaProcessingTrigger() :
    MediaProcessingTrigger(get_activation_factory<MediaProcessingTrigger>().ActivateInstance<MediaProcessingTrigger>())
{}

inline MobileBroadbandDeviceServiceNotificationTrigger::MobileBroadbandDeviceServiceNotificationTrigger() :
    MobileBroadbandDeviceServiceNotificationTrigger(get_activation_factory<MobileBroadbandDeviceServiceNotificationTrigger>().ActivateInstance<MobileBroadbandDeviceServiceNotificationTrigger>())
{}

inline MobileBroadbandPcoDataChangeTrigger::MobileBroadbandPcoDataChangeTrigger() :
    MobileBroadbandPcoDataChangeTrigger(get_activation_factory<MobileBroadbandPcoDataChangeTrigger>().ActivateInstance<MobileBroadbandPcoDataChangeTrigger>())
{}

inline MobileBroadbandPinLockStateChangeTrigger::MobileBroadbandPinLockStateChangeTrigger() :
    MobileBroadbandPinLockStateChangeTrigger(get_activation_factory<MobileBroadbandPinLockStateChangeTrigger>().ActivateInstance<MobileBroadbandPinLockStateChangeTrigger>())
{}

inline MobileBroadbandRadioStateChangeTrigger::MobileBroadbandRadioStateChangeTrigger() :
    MobileBroadbandRadioStateChangeTrigger(get_activation_factory<MobileBroadbandRadioStateChangeTrigger>().ActivateInstance<MobileBroadbandRadioStateChangeTrigger>())
{}

inline MobileBroadbandRegistrationStateChangeTrigger::MobileBroadbandRegistrationStateChangeTrigger() :
    MobileBroadbandRegistrationStateChangeTrigger(get_activation_factory<MobileBroadbandRegistrationStateChangeTrigger>().ActivateInstance<MobileBroadbandRegistrationStateChangeTrigger>())
{}

inline NetworkOperatorDataUsageTrigger::NetworkOperatorDataUsageTrigger() :
    NetworkOperatorDataUsageTrigger(get_activation_factory<NetworkOperatorDataUsageTrigger>().ActivateInstance<NetworkOperatorDataUsageTrigger>())
{}

inline NetworkOperatorHotspotAuthenticationTrigger::NetworkOperatorHotspotAuthenticationTrigger() :
    NetworkOperatorHotspotAuthenticationTrigger(get_activation_factory<NetworkOperatorHotspotAuthenticationTrigger>().ActivateInstance<NetworkOperatorHotspotAuthenticationTrigger>())
{}

inline NetworkOperatorNotificationTrigger::NetworkOperatorNotificationTrigger(param::hstring const& networkAccountId) :
    NetworkOperatorNotificationTrigger(get_activation_factory<NetworkOperatorNotificationTrigger, Windows::ApplicationModel::Background::INetworkOperatorNotificationTriggerFactory>().Create(networkAccountId))
{}

inline PaymentAppCanMakePaymentTrigger::PaymentAppCanMakePaymentTrigger() :
    PaymentAppCanMakePaymentTrigger(get_activation_factory<PaymentAppCanMakePaymentTrigger>().ActivateInstance<PaymentAppCanMakePaymentTrigger>())
{}

inline PhoneTrigger::PhoneTrigger(Windows::ApplicationModel::Calls::Background::PhoneTriggerType const& type, bool oneShot) :
    PhoneTrigger(get_activation_factory<PhoneTrigger, Windows::ApplicationModel::Background::IPhoneTriggerFactory>().Create(type, oneShot))
{}

inline PushNotificationTrigger::PushNotificationTrigger() :
    PushNotificationTrigger(get_activation_factory<PushNotificationTrigger>().ActivateInstance<PushNotificationTrigger>())
{}

inline PushNotificationTrigger::PushNotificationTrigger(param::hstring const& applicationId) :
    PushNotificationTrigger(get_activation_factory<PushNotificationTrigger, Windows::ApplicationModel::Background::IPushNotificationTriggerFactory>().Create(applicationId))
{}

inline RcsEndUserMessageAvailableTrigger::RcsEndUserMessageAvailableTrigger() :
    RcsEndUserMessageAvailableTrigger(get_activation_factory<RcsEndUserMessageAvailableTrigger>().ActivateInstance<RcsEndUserMessageAvailableTrigger>())
{}

inline RfcommConnectionTrigger::RfcommConnectionTrigger() :
    RfcommConnectionTrigger(get_activation_factory<RfcommConnectionTrigger>().ActivateInstance<RfcommConnectionTrigger>())
{}

inline SecondaryAuthenticationFactorAuthenticationTrigger::SecondaryAuthenticationFactorAuthenticationTrigger() :
    SecondaryAuthenticationFactorAuthenticationTrigger(get_activation_factory<SecondaryAuthenticationFactorAuthenticationTrigger>().ActivateInstance<SecondaryAuthenticationFactorAuthenticationTrigger>())
{}

inline SensorDataThresholdTrigger::SensorDataThresholdTrigger(Windows::Devices::Sensors::ISensorDataThreshold const& threshold) :
    SensorDataThresholdTrigger(get_activation_factory<SensorDataThresholdTrigger, Windows::ApplicationModel::Background::ISensorDataThresholdTriggerFactory>().Create(threshold))
{}

inline SmartCardTrigger::SmartCardTrigger(Windows::Devices::SmartCards::SmartCardTriggerType const& triggerType) :
    SmartCardTrigger(get_activation_factory<SmartCardTrigger, Windows::ApplicationModel::Background::ISmartCardTriggerFactory>().Create(triggerType))
{}

inline SmsMessageReceivedTrigger::SmsMessageReceivedTrigger(Windows::Devices::Sms::SmsFilterRules const& filterRules) :
    SmsMessageReceivedTrigger(get_activation_factory<SmsMessageReceivedTrigger, Windows::ApplicationModel::Background::ISmsMessageReceivedTriggerFactory>().Create(filterRules))
{}

inline SocketActivityTrigger::SocketActivityTrigger() :
    SocketActivityTrigger(get_activation_factory<SocketActivityTrigger>().ActivateInstance<SocketActivityTrigger>())
{}

inline StorageLibraryChangeTrackerTrigger::StorageLibraryChangeTrackerTrigger(Windows::Storage::StorageLibraryChangeTracker const& tracker) :
    StorageLibraryChangeTrackerTrigger(get_activation_factory<StorageLibraryChangeTrackerTrigger, Windows::ApplicationModel::Background::IStorageLibraryChangeTrackerTriggerFactory>().Create(tracker))
{}

inline Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger StorageLibraryContentChangedTrigger::Create(Windows::Storage::StorageLibrary const& storageLibrary)
{
    return get_activation_factory<StorageLibraryContentChangedTrigger, Windows::ApplicationModel::Background::IStorageLibraryContentChangedTriggerStatics>().Create(storageLibrary);
}

inline Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger StorageLibraryContentChangedTrigger::CreateFromLibraries(param::iterable<Windows::Storage::StorageLibrary> const& storageLibraries)
{
    return get_activation_factory<StorageLibraryContentChangedTrigger, Windows::ApplicationModel::Background::IStorageLibraryContentChangedTriggerStatics>().CreateFromLibraries(storageLibraries);
}

inline SystemCondition::SystemCondition(Windows::ApplicationModel::Background::SystemConditionType const& conditionType) :
    SystemCondition(get_activation_factory<SystemCondition, Windows::ApplicationModel::Background::ISystemConditionFactory>().Create(conditionType))
{}

inline SystemTrigger::SystemTrigger(Windows::ApplicationModel::Background::SystemTriggerType const& triggerType, bool oneShot) :
    SystemTrigger(get_activation_factory<SystemTrigger, Windows::ApplicationModel::Background::ISystemTriggerFactory>().Create(triggerType, oneShot))
{}

inline TetheringEntitlementCheckTrigger::TetheringEntitlementCheckTrigger() :
    TetheringEntitlementCheckTrigger(get_activation_factory<TetheringEntitlementCheckTrigger>().ActivateInstance<TetheringEntitlementCheckTrigger>())
{}

inline TimeTrigger::TimeTrigger(uint32_t freshnessTime, bool oneShot) :
    TimeTrigger(get_activation_factory<TimeTrigger, Windows::ApplicationModel::Background::ITimeTriggerFactory>().Create(freshnessTime, oneShot))
{}

inline ToastNotificationActionTrigger::ToastNotificationActionTrigger() :
    ToastNotificationActionTrigger(get_activation_factory<ToastNotificationActionTrigger>().ActivateInstance<ToastNotificationActionTrigger>())
{}

inline ToastNotificationActionTrigger::ToastNotificationActionTrigger(param::hstring const& applicationId) :
    ToastNotificationActionTrigger(get_activation_factory<ToastNotificationActionTrigger, Windows::ApplicationModel::Background::IToastNotificationActionTriggerFactory>().Create(applicationId))
{}

inline ToastNotificationHistoryChangedTrigger::ToastNotificationHistoryChangedTrigger() :
    ToastNotificationHistoryChangedTrigger(get_activation_factory<ToastNotificationHistoryChangedTrigger>().ActivateInstance<ToastNotificationHistoryChangedTrigger>())
{}

inline ToastNotificationHistoryChangedTrigger::ToastNotificationHistoryChangedTrigger(param::hstring const& applicationId) :
    ToastNotificationHistoryChangedTrigger(get_activation_factory<ToastNotificationHistoryChangedTrigger, Windows::ApplicationModel::Background::IToastNotificationHistoryChangedTriggerFactory>().Create(applicationId))
{}

inline UserNotificationChangedTrigger::UserNotificationChangedTrigger(Windows::UI::Notifications::NotificationKinds const& notificationKinds) :
    UserNotificationChangedTrigger(get_activation_factory<UserNotificationChangedTrigger, Windows::ApplicationModel::Background::IUserNotificationChangedTriggerFactory>().Create(notificationKinds))
{}

template <typename L> BackgroundTaskCanceledEventHandler::BackgroundTaskCanceledEventHandler(L handler) :
    BackgroundTaskCanceledEventHandler(impl::make_delegate<BackgroundTaskCanceledEventHandler>(std::forward<L>(handler)))
{}

template <typename F> BackgroundTaskCanceledEventHandler::BackgroundTaskCanceledEventHandler(F* handler) :
    BackgroundTaskCanceledEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> BackgroundTaskCanceledEventHandler::BackgroundTaskCanceledEventHandler(O* object, M method) :
    BackgroundTaskCanceledEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void BackgroundTaskCanceledEventHandler::operator()(Windows::ApplicationModel::Background::IBackgroundTaskInstance const& sender, Windows::ApplicationModel::Background::BackgroundTaskCancellationReason const& reason) const
{
    check_hresult((*(impl::abi_t<BackgroundTaskCanceledEventHandler>**)this)->Invoke(get_abi(sender), get_abi(reason)));
}

template <typename L> BackgroundTaskCompletedEventHandler::BackgroundTaskCompletedEventHandler(L handler) :
    BackgroundTaskCompletedEventHandler(impl::make_delegate<BackgroundTaskCompletedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> BackgroundTaskCompletedEventHandler::BackgroundTaskCompletedEventHandler(F* handler) :
    BackgroundTaskCompletedEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> BackgroundTaskCompletedEventHandler::BackgroundTaskCompletedEventHandler(O* object, M method) :
    BackgroundTaskCompletedEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void BackgroundTaskCompletedEventHandler::operator()(Windows::ApplicationModel::Background::BackgroundTaskRegistration const& sender, Windows::ApplicationModel::Background::BackgroundTaskCompletedEventArgs const& args) const
{
    check_hresult((*(impl::abi_t<BackgroundTaskCompletedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(args)));
}

template <typename L> BackgroundTaskProgressEventHandler::BackgroundTaskProgressEventHandler(L handler) :
    BackgroundTaskProgressEventHandler(impl::make_delegate<BackgroundTaskProgressEventHandler>(std::forward<L>(handler)))
{}

template <typename F> BackgroundTaskProgressEventHandler::BackgroundTaskProgressEventHandler(F* handler) :
    BackgroundTaskProgressEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> BackgroundTaskProgressEventHandler::BackgroundTaskProgressEventHandler(O* object, M method) :
    BackgroundTaskProgressEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void BackgroundTaskProgressEventHandler::operator()(Windows::ApplicationModel::Background::BackgroundTaskRegistration const& sender, Windows::ApplicationModel::Background::BackgroundTaskProgressEventArgs const& args) const
{
    check_hresult((*(impl::abi_t<BackgroundTaskProgressEventHandler>**)this)->Invoke(get_abi(sender), get_abi(args)));
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Background::IActivitySensorTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IActivitySensorTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IActivitySensorTriggerFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IActivitySensorTriggerFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IAlarmApplicationManagerStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IAlarmApplicationManagerStatics> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IAppBroadcastTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IAppBroadcastTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IAppBroadcastTriggerFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IAppBroadcastTriggerFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IApplicationTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IApplicationTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IApplicationTriggerDetails> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IApplicationTriggerDetails> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IAppointmentStoreNotificationTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IAppointmentStoreNotificationTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundCondition> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IBackgroundCondition> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics2> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTask> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IBackgroundTask> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder2> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder3> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder3> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder4> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder4> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IBackgroundTaskCompletedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskDeferral> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IBackgroundTaskDeferral> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance2> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance4> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance4> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskProgressEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IBackgroundTaskProgressEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration2> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration3> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration3> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroupFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroupFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics2> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IBackgroundTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundWorkCostStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IBackgroundWorkCostStatics> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::ICachedFileUpdaterTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::ICachedFileUpdaterTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IChatMessageNotificationTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IChatMessageNotificationTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IChatMessageReceivedNotificationTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IChatMessageReceivedNotificationTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::ICommunicationBlockingAppSetAsActiveTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::ICommunicationBlockingAppSetAsActiveTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IContactStoreNotificationTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IContactStoreNotificationTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IContentPrefetchTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IContentPrefetchTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IContentPrefetchTriggerFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IContentPrefetchTriggerFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::ICustomSystemEventTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::ICustomSystemEventTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::ICustomSystemEventTriggerFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::ICustomSystemEventTriggerFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IDeviceConnectionChangeTriggerStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IDeviceConnectionChangeTriggerStatics> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTriggerFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTriggerFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IDeviceServicingTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IDeviceServicingTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IDeviceUseTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IDeviceUseTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IDeviceWatcherTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IDeviceWatcherTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IEmailStoreNotificationTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IEmailStoreNotificationTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger2> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory2> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IGattServiceProviderTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IGattServiceProviderTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IGattServiceProviderTriggerResult> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IGattServiceProviderTriggerResult> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IGattServiceProviderTriggerStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IGattServiceProviderTriggerStatics> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IGeovisitTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IGeovisitTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::ILocationTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::ILocationTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::ILocationTriggerFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::ILocationTriggerFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IMaintenanceTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IMaintenanceTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IMaintenanceTriggerFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IMaintenanceTriggerFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IMediaProcessingTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IMediaProcessingTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::INetworkOperatorHotspotAuthenticationTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::INetworkOperatorHotspotAuthenticationTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::INetworkOperatorNotificationTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::INetworkOperatorNotificationTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::INetworkOperatorNotificationTriggerFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::INetworkOperatorNotificationTriggerFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IPhoneTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IPhoneTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IPhoneTriggerFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IPhoneTriggerFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IPushNotificationTriggerFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IPushNotificationTriggerFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IRcsEndUserMessageAvailableTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IRcsEndUserMessageAvailableTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IRfcommConnectionTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IRfcommConnectionTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::ISecondaryAuthenticationFactorAuthenticationTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::ISecondaryAuthenticationFactorAuthenticationTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::ISensorDataThresholdTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::ISensorDataThresholdTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::ISensorDataThresholdTriggerFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::ISensorDataThresholdTriggerFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::ISmartCardTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::ISmartCardTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::ISmartCardTriggerFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::ISmartCardTriggerFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::ISmsMessageReceivedTriggerFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::ISmsMessageReceivedTriggerFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::ISocketActivityTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::ISocketActivityTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IStorageLibraryChangeTrackerTriggerFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IStorageLibraryChangeTrackerTriggerFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IStorageLibraryContentChangedTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IStorageLibraryContentChangedTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IStorageLibraryContentChangedTriggerStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IStorageLibraryContentChangedTriggerStatics> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::ISystemCondition> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::ISystemCondition> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::ISystemConditionFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::ISystemConditionFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::ISystemTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::ISystemTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::ISystemTriggerFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::ISystemTriggerFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::ITimeTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::ITimeTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::ITimeTriggerFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::ITimeTriggerFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IToastNotificationActionTriggerFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IToastNotificationActionTriggerFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IToastNotificationHistoryChangedTriggerFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IToastNotificationHistoryChangedTriggerFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::IUserNotificationChangedTriggerFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::IUserNotificationChangedTriggerFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::ActivitySensorTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::ActivitySensorTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::AlarmApplicationManager> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::AlarmApplicationManager> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::AppBroadcastTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::AppBroadcastTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::AppBroadcastTriggerProviderInfo> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::AppBroadcastTriggerProviderInfo> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::ApplicationTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::ApplicationTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::ApplicationTriggerDetails> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::ApplicationTriggerDetails> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::AppointmentStoreNotificationTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::AppointmentStoreNotificationTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::BackgroundExecutionManager> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::BackgroundExecutionManager> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::BackgroundTaskBuilder> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::BackgroundTaskBuilder> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::BackgroundTaskCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::BackgroundTaskCompletedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::BackgroundTaskDeferral> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::BackgroundTaskDeferral> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::BackgroundTaskProgressEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::BackgroundTaskProgressEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistration> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistration> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::BackgroundWorkCost> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::BackgroundWorkCost> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::BluetoothLEAdvertisementPublisherTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::BluetoothLEAdvertisementPublisherTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::BluetoothLEAdvertisementWatcherTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::BluetoothLEAdvertisementWatcherTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::CachedFileUpdaterTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::CachedFileUpdaterTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::CachedFileUpdaterTriggerDetails> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::CachedFileUpdaterTriggerDetails> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::ChatMessageNotificationTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::ChatMessageNotificationTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::ChatMessageReceivedNotificationTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::ChatMessageReceivedNotificationTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::CommunicationBlockingAppSetAsActiveTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::CommunicationBlockingAppSetAsActiveTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::ContactStoreNotificationTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::ContactStoreNotificationTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::ContentPrefetchTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::ContentPrefetchTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::CustomSystemEventTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::CustomSystemEventTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::DeviceManufacturerNotificationTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::DeviceManufacturerNotificationTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::DeviceServicingTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::DeviceServicingTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::DeviceUseTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::DeviceUseTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::DeviceWatcherTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::DeviceWatcherTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::EmailStoreNotificationTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::EmailStoreNotificationTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::GattServiceProviderTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::GattServiceProviderTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::GattServiceProviderTriggerResult> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::GattServiceProviderTriggerResult> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::GeovisitTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::GeovisitTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::LocationTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::LocationTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::MaintenanceTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::MaintenanceTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::MediaProcessingTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::MediaProcessingTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::MobileBroadbandDeviceServiceNotificationTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::MobileBroadbandDeviceServiceNotificationTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::MobileBroadbandPcoDataChangeTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::MobileBroadbandPcoDataChangeTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::MobileBroadbandPinLockStateChangeTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::MobileBroadbandPinLockStateChangeTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::MobileBroadbandRadioStateChangeTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::MobileBroadbandRadioStateChangeTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::MobileBroadbandRegistrationStateChangeTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::MobileBroadbandRegistrationStateChangeTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::NetworkOperatorDataUsageTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::NetworkOperatorDataUsageTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::NetworkOperatorHotspotAuthenticationTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::NetworkOperatorHotspotAuthenticationTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::NetworkOperatorNotificationTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::NetworkOperatorNotificationTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::PaymentAppCanMakePaymentTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::PaymentAppCanMakePaymentTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::PhoneTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::PhoneTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::PushNotificationTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::PushNotificationTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::RcsEndUserMessageAvailableTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::RcsEndUserMessageAvailableTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::RfcommConnectionTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::RfcommConnectionTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::SecondaryAuthenticationFactorAuthenticationTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::SecondaryAuthenticationFactorAuthenticationTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::SensorDataThresholdTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::SensorDataThresholdTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::SmartCardTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::SmartCardTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::SmsMessageReceivedTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::SmsMessageReceivedTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::SocketActivityTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::SocketActivityTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::StorageLibraryChangeTrackerTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::StorageLibraryChangeTrackerTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::SystemCondition> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::SystemCondition> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::SystemTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::SystemTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::TetheringEntitlementCheckTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::TetheringEntitlementCheckTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::TimeTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::TimeTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::ToastNotificationActionTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::ToastNotificationActionTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::ToastNotificationHistoryChangedTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::ToastNotificationHistoryChangedTrigger> {};
template<> struct hash<winrt::Windows::ApplicationModel::Background::UserNotificationChangedTrigger> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Background::UserNotificationChangedTrigger> {};

}

WINRT_WARNING_POP
