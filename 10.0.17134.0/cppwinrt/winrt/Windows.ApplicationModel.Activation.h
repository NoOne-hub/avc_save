﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.ApplicationModel.Appointments.AppointmentsProvider.2.h"
#include "winrt/impl/Windows.ApplicationModel.Background.2.h"
#include "winrt/impl/Windows.ApplicationModel.Calls.2.h"
#include "winrt/impl/Windows.ApplicationModel.Contacts.2.h"
#include "winrt/impl/Windows.ApplicationModel.Contacts.Provider.2.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.ShareTarget.2.h"
#include "winrt/impl/Windows.ApplicationModel.Search.2.h"
#include "winrt/impl/Windows.ApplicationModel.UserDataAccounts.Provider.2.h"
#include "winrt/impl/Windows.ApplicationModel.Wallet.2.h"
#include "winrt/impl/Windows.Devices.Enumeration.2.h"
#include "winrt/impl/Windows.Devices.Printers.Extensions.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Media.SpeechRecognition.2.h"
#include "winrt/impl/Windows.Security.Authentication.Web.2.h"
#include "winrt/impl/Windows.Security.Authentication.Web.Provider.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Pickers.Provider.2.h"
#include "winrt/impl/Windows.Storage.Provider.2.h"
#include "winrt/impl/Windows.Storage.Search.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.UI.Notifications.2.h"
#include "winrt/impl/Windows.UI.ViewManagement.2.h"
#include "winrt/impl/Windows.ApplicationModel.Activation.2.h"
#include "winrt/Windows.ApplicationModel.h"

namespace winrt::impl {

template <typename D> Windows::ApplicationModel::Activation::ActivationKind consume_Windows_ApplicationModel_Activation_IActivatedEventArgs<D>::Kind() const
{
    Windows::ApplicationModel::Activation::ActivationKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IActivatedEventArgs)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Activation::ApplicationExecutionState consume_Windows_ApplicationModel_Activation_IActivatedEventArgs<D>::PreviousExecutionState() const
{
    Windows::ApplicationModel::Activation::ApplicationExecutionState value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IActivatedEventArgs)->get_PreviousExecutionState(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Activation::SplashScreen consume_Windows_ApplicationModel_Activation_IActivatedEventArgs<D>::SplashScreen() const
{
    Windows::ApplicationModel::Activation::SplashScreen value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IActivatedEventArgs)->get_SplashScreen(put_abi(value)));
    return value;
}

template <typename D> Windows::System::User consume_Windows_ApplicationModel_Activation_IActivatedEventArgsWithUser<D>::User() const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser)->get_User(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_ApplicationModel_Activation_IApplicationViewActivatedEventArgs<D>::CurrentlyShownApplicationViewId() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs)->get_CurrentlyShownApplicationViewId(&value));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IAppointmentsProviderActivatedEventArgs<D>::Verb() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs)->get_Verb(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentsProvider::AddAppointmentOperation consume_Windows_ApplicationModel_Activation_IAppointmentsProviderAddAppointmentActivatedEventArgs<D>::AddAppointmentOperation() const
{
    Windows::ApplicationModel::Appointments::AppointmentsProvider::AddAppointmentOperation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs)->get_AddAppointmentOperation(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentsProvider::RemoveAppointmentOperation consume_Windows_ApplicationModel_Activation_IAppointmentsProviderRemoveAppointmentActivatedEventArgs<D>::RemoveAppointmentOperation() const
{
    Windows::ApplicationModel::Appointments::AppointmentsProvider::RemoveAppointmentOperation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs)->get_RemoveAppointmentOperation(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentsProvider::ReplaceAppointmentOperation consume_Windows_ApplicationModel_Activation_IAppointmentsProviderReplaceAppointmentActivatedEventArgs<D>::ReplaceAppointmentOperation() const
{
    Windows::ApplicationModel::Appointments::AppointmentsProvider::ReplaceAppointmentOperation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs)->get_ReplaceAppointmentOperation(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_ApplicationModel_Activation_IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs<D>::InstanceStartDate() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs)->get_InstanceStartDate(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs<D>::LocalId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs)->get_LocalId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs<D>::RoamingId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs)->get_RoamingId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_Activation_IAppointmentsProviderShowTimeFrameActivatedEventArgs<D>::TimeToShow() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs)->get_TimeToShow(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_ApplicationModel_Activation_IAppointmentsProviderShowTimeFrameActivatedEventArgs<D>::Duration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Background::IBackgroundTaskInstance consume_Windows_ApplicationModel_Activation_IBackgroundActivatedEventArgs<D>::TaskInstance() const
{
    Windows::ApplicationModel::Background::IBackgroundTaskInstance value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs)->get_TaskInstance(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IBarcodeScannerPreviewActivatedEventArgs<D>::ConnectionId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IBarcodeScannerPreviewActivatedEventArgs)->get_ConnectionId(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Provider::CachedFileUpdaterUI consume_Windows_ApplicationModel_Activation_ICachedFileUpdaterActivatedEventArgs<D>::CachedFileUpdaterUI() const
{
    Windows::Storage::Provider::CachedFileUpdaterUI value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs)->get_CachedFileUpdaterUI(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_ApplicationModel_Activation_ICameraSettingsActivatedEventArgs<D>::VideoDeviceController() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs)->get_VideoDeviceController(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_ApplicationModel_Activation_ICameraSettingsActivatedEventArgs<D>::VideoDeviceExtension() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs)->get_VideoDeviceExtension(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Activation::CommandLineActivationOperation consume_Windows_ApplicationModel_Activation_ICommandLineActivatedEventArgs<D>::Operation() const
{
    Windows::ApplicationModel::Activation::CommandLineActivationOperation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::ICommandLineActivatedEventArgs)->get_Operation(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_ICommandLineActivationOperation<D>::Arguments() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::ICommandLineActivationOperation)->get_Arguments(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_ICommandLineActivationOperation<D>::CurrentDirectoryPath() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::ICommandLineActivationOperation)->get_CurrentDirectoryPath(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Activation_ICommandLineActivationOperation<D>::ExitCode(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::ICommandLineActivationOperation)->put_ExitCode(value));
}

template <typename D> int32_t consume_Windows_ApplicationModel_Activation_ICommandLineActivationOperation<D>::ExitCode() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::ICommandLineActivationOperation)->get_ExitCode(&value));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_ApplicationModel_Activation_ICommandLineActivationOperation<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::ICommandLineActivationOperation)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IContactActivatedEventArgs<D>::Verb() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactActivatedEventArgs)->get_Verb(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IContactCallActivatedEventArgs<D>::ServiceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs)->get_ServiceId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IContactCallActivatedEventArgs<D>::ServiceUserId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs)->get_ServiceUserId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::Contact consume_Windows_ApplicationModel_Activation_IContactCallActivatedEventArgs<D>::Contact() const
{
    Windows::ApplicationModel::Contacts::Contact value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs)->get_Contact(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactAddress consume_Windows_ApplicationModel_Activation_IContactMapActivatedEventArgs<D>::Address() const
{
    Windows::ApplicationModel::Contacts::ContactAddress value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs)->get_Address(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::Contact consume_Windows_ApplicationModel_Activation_IContactMapActivatedEventArgs<D>::Contact() const
{
    Windows::ApplicationModel::Contacts::Contact value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs)->get_Contact(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IContactMessageActivatedEventArgs<D>::ServiceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs)->get_ServiceId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IContactMessageActivatedEventArgs<D>::ServiceUserId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs)->get_ServiceUserId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::Contact consume_Windows_ApplicationModel_Activation_IContactMessageActivatedEventArgs<D>::Contact() const
{
    Windows::ApplicationModel::Contacts::Contact value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs)->get_Contact(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactPanel consume_Windows_ApplicationModel_Activation_IContactPanelActivatedEventArgs<D>::ContactPanel() const
{
    Windows::ApplicationModel::Contacts::ContactPanel value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs)->get_ContactPanel(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::Contact consume_Windows_ApplicationModel_Activation_IContactPanelActivatedEventArgs<D>::Contact() const
{
    Windows::ApplicationModel::Contacts::Contact value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs)->get_Contact(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::Provider::ContactPickerUI consume_Windows_ApplicationModel_Activation_IContactPickerActivatedEventArgs<D>::ContactPickerUI() const
{
    Windows::ApplicationModel::Contacts::Provider::ContactPickerUI value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs)->get_ContactPickerUI(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IContactPostActivatedEventArgs<D>::ServiceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs)->get_ServiceId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IContactPostActivatedEventArgs<D>::ServiceUserId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs)->get_ServiceUserId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::Contact consume_Windows_ApplicationModel_Activation_IContactPostActivatedEventArgs<D>::Contact() const
{
    Windows::ApplicationModel::Contacts::Contact value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs)->get_Contact(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IContactVideoCallActivatedEventArgs<D>::ServiceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs)->get_ServiceId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IContactVideoCallActivatedEventArgs<D>::ServiceUserId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs)->get_ServiceUserId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::Contact consume_Windows_ApplicationModel_Activation_IContactVideoCallActivatedEventArgs<D>::Contact() const
{
    Windows::ApplicationModel::Contacts::Contact value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs)->get_Contact(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IContactsProviderActivatedEventArgs<D>::Verb() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IContactsProviderActivatedEventArgs)->get_Verb(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::ValueSet consume_Windows_ApplicationModel_Activation_IContinuationActivatedEventArgs<D>::ContinuationData() const
{
    Windows::Foundation::Collections::ValueSet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs)->get_ContinuationData(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IDeviceActivatedEventArgs<D>::DeviceInformationId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs)->get_DeviceInformationId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IDeviceActivatedEventArgs<D>::Verb() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs)->get_Verb(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DeviceInformation consume_Windows_ApplicationModel_Activation_IDevicePairingActivatedEventArgs<D>::DeviceInformation() const
{
    Windows::Devices::Enumeration::DeviceInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs)->get_DeviceInformation(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IDialReceiverActivatedEventArgs<D>::AppName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs)->get_AppName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem> consume_Windows_ApplicationModel_Activation_IFileActivatedEventArgs<D>::Files() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IFileActivatedEventArgs)->get_Files(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IFileActivatedEventArgs<D>::Verb() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IFileActivatedEventArgs)->get_Verb(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IFileActivatedEventArgsWithCallerPackageFamilyName<D>::CallerPackageFamilyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName)->get_CallerPackageFamilyName(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Search::StorageFileQueryResult consume_Windows_ApplicationModel_Activation_IFileActivatedEventArgsWithNeighboringFiles<D>::NeighboringFilesQuery() const
{
    Windows::Storage::Search::StorageFileQueryResult value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles)->get_NeighboringFilesQuery(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Pickers::Provider::FileOpenPickerUI consume_Windows_ApplicationModel_Activation_IFileOpenPickerActivatedEventArgs<D>::FileOpenPickerUI() const
{
    Windows::Storage::Pickers::Provider::FileOpenPickerUI value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs)->get_FileOpenPickerUI(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IFileOpenPickerActivatedEventArgs2<D>::CallerPackageFamilyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2)->get_CallerPackageFamilyName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile> consume_Windows_ApplicationModel_Activation_IFileOpenPickerContinuationEventArgs<D>::Files() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs)->get_Files(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Pickers::Provider::FileSavePickerUI consume_Windows_ApplicationModel_Activation_IFileSavePickerActivatedEventArgs<D>::FileSavePickerUI() const
{
    Windows::Storage::Pickers::Provider::FileSavePickerUI value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs)->get_FileSavePickerUI(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IFileSavePickerActivatedEventArgs2<D>::CallerPackageFamilyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2)->get_CallerPackageFamilyName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IFileSavePickerActivatedEventArgs2<D>::EnterpriseId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2)->get_EnterpriseId(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFile consume_Windows_ApplicationModel_Activation_IFileSavePickerContinuationEventArgs<D>::File() const
{
    Windows::Storage::StorageFile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs)->get_File(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder consume_Windows_ApplicationModel_Activation_IFolderPickerContinuationEventArgs<D>::Folder() const
{
    Windows::Storage::StorageFolder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs)->get_Folder(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_ILaunchActivatedEventArgs<D>::Arguments() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs)->get_Arguments(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_ILaunchActivatedEventArgs<D>::TileId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs)->get_TileId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Activation::TileActivatedInfo consume_Windows_ApplicationModel_Activation_ILaunchActivatedEventArgs2<D>::TileActivatedInfo() const
{
    Windows::ApplicationModel::Activation::TileActivatedInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2)->get_TileActivatedInfo(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_ApplicationModel_Activation_ILockScreenActivatedEventArgs<D>::Info() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs)->get_Info(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Calls::LockScreenCallUI consume_Windows_ApplicationModel_Activation_ILockScreenCallActivatedEventArgs<D>::CallUI() const
{
    Windows::ApplicationModel::Calls::LockScreenCallUI value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs)->get_CallUI(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IPickerReturnedActivatedEventArgs<D>::PickerOperationId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs)->get_PickerOperationId(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Activation_IPrelaunchActivatedEventArgs<D>::PrelaunchActivated() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs)->get_PrelaunchActivated(&value));
    return value;
}

template <typename D> Windows::Devices::Printers::Extensions::Print3DWorkflow consume_Windows_ApplicationModel_Activation_IPrint3DWorkflowActivatedEventArgs<D>::Workflow() const
{
    Windows::Devices::Printers::Extensions::Print3DWorkflow value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs)->get_Workflow(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Printers::Extensions::PrintTaskConfiguration consume_Windows_ApplicationModel_Activation_IPrintTaskSettingsActivatedEventArgs<D>::Configuration() const
{
    Windows::Devices::Printers::Extensions::PrintTaskConfiguration value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs)->get_Configuration(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_Activation_IProtocolActivatedEventArgs<D>::Uri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData<D>::CallerPackageFamilyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData)->get_CallerPackageFamilyName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::ValueSet consume_Windows_ApplicationModel_Activation_IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData<D>::Data() const
{
    Windows::Foundation::Collections::ValueSet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData)->get_Data(put_abi(value)));
    return value;
}

template <typename D> Windows::System::ProtocolForResultsOperation consume_Windows_ApplicationModel_Activation_IProtocolForResultsActivatedEventArgs<D>::ProtocolForResultsOperation() const
{
    Windows::System::ProtocolForResultsOperation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs)->get_ProtocolForResultsOperation(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_ApplicationModel_Activation_IRestrictedLaunchActivatedEventArgs<D>::SharedContext() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs)->get_SharedContext(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_ISearchActivatedEventArgs<D>::QueryText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::ISearchActivatedEventArgs)->get_QueryText(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_ISearchActivatedEventArgs<D>::Language() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::ISearchActivatedEventArgs)->get_Language(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails consume_Windows_ApplicationModel_Activation_ISearchActivatedEventArgsWithLinguisticDetails<D>::LinguisticDetails() const
{
    Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails)->get_LinguisticDetails(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation consume_Windows_ApplicationModel_Activation_IShareTargetActivatedEventArgs<D>::ShareOperation() const
{
    Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs)->get_ShareOperation(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_ApplicationModel_Activation_ISplashScreen<D>::ImageLocation() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::ISplashScreen)->get_ImageLocation(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_ApplicationModel_Activation_ISplashScreen<D>::Dismissed(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen, Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::ISplashScreen)->add_Dismissed(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::ApplicationModel::Activation::ISplashScreen> consume_Windows_ApplicationModel_Activation_ISplashScreen<D>::Dismissed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Activation::ISplashScreen>(this, &abi_t<Windows::ApplicationModel::Activation::ISplashScreen>::remove_Dismissed, Dismissed(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Activation_ISplashScreen<D>::Dismissed(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::ISplashScreen)->remove_Dismissed(get_abi(cookie)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IStartupTaskActivatedEventArgs<D>::TaskId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs)->get_TaskId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ShownTileNotification> consume_Windows_ApplicationModel_Activation_ITileActivatedInfo<D>::RecentlyShownNotifications() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ShownTileNotification> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::ITileActivatedInfo)->get_RecentlyShownNotifications(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IToastNotificationActivatedEventArgs<D>::Argument() const
{
    hstring argument{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs)->get_Argument(put_abi(argument)));
    return argument;
}

template <typename D> Windows::Foundation::Collections::ValueSet consume_Windows_ApplicationModel_Activation_IToastNotificationActivatedEventArgs<D>::UserInput() const
{
    Windows::Foundation::Collections::ValueSet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs)->get_UserInput(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation consume_Windows_ApplicationModel_Activation_IUserDataAccountProviderActivatedEventArgs<D>::Operation() const
{
    Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs)->get_Operation(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::ViewManagement::ActivationViewSwitcher consume_Windows_ApplicationModel_Activation_IViewSwitcherProvider<D>::ViewSwitcher() const
{
    Windows::UI::ViewManagement::ActivationViewSwitcher value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IViewSwitcherProvider)->get_ViewSwitcher(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionResult consume_Windows_ApplicationModel_Activation_IVoiceCommandActivatedEventArgs<D>::Result() const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionResult value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs)->get_Result(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IWalletActionActivatedEventArgs<D>::ItemId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs)->get_ItemId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Wallet::WalletActionKind consume_Windows_ApplicationModel_Activation_IWalletActionActivatedEventArgs<D>::ActionKind() const
{
    Windows::ApplicationModel::Wallet::WalletActionKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs)->get_ActionKind(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Activation_IWalletActionActivatedEventArgs<D>::ActionId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs)->get_ActionId(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation consume_Windows_ApplicationModel_Activation_IWebAccountProviderActivatedEventArgs<D>::Operation() const
{
    Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs)->get_Operation(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::WebAuthenticationResult consume_Windows_ApplicationModel_Activation_IWebAuthenticationBrokerContinuationEventArgs<D>::WebAuthenticationResult() const
{
    Windows::Security::Authentication::Web::WebAuthenticationResult result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs)->get_WebAuthenticationResult(put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    HRESULT __stdcall get_Kind(Windows::ApplicationModel::Activation::ActivationKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Activation::ActivationKind>(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PreviousExecutionState(Windows::ApplicationModel::Activation::ApplicationExecutionState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Activation::ApplicationExecutionState>(this->shim().PreviousExecutionState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SplashScreen(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Activation::SplashScreen>(this->shim().SplashScreen());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser> : produce_base<D, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
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
struct produce<D, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs>
{
    HRESULT __stdcall get_CurrentlyShownApplicationViewId(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().CurrentlyShownApplicationViewId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>
{
    HRESULT __stdcall get_Verb(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Verb());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs>
{
    HRESULT __stdcall get_AddAppointmentOperation(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentsProvider::AddAppointmentOperation>(this->shim().AddAppointmentOperation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs>
{
    HRESULT __stdcall get_RemoveAppointmentOperation(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentsProvider::RemoveAppointmentOperation>(this->shim().RemoveAppointmentOperation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs>
{
    HRESULT __stdcall get_ReplaceAppointmentOperation(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentsProvider::ReplaceAppointmentOperation>(this->shim().ReplaceAppointmentOperation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs>
{
    HRESULT __stdcall get_InstanceStartDate(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::DateTime>>(this->shim().InstanceStartDate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LocalId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().LocalId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RoamingId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RoamingId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs>
{
    HRESULT __stdcall get_TimeToShow(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().TimeToShow());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs>
{
    HRESULT __stdcall get_TaskInstance(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Background::IBackgroundTaskInstance>(this->shim().TaskInstance());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IBarcodeScannerPreviewActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IBarcodeScannerPreviewActivatedEventArgs>
{
    HRESULT __stdcall get_ConnectionId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ConnectionId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs>
{
    HRESULT __stdcall get_CachedFileUpdaterUI(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::CachedFileUpdaterUI>(this->shim().CachedFileUpdaterUI());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs>
{
    HRESULT __stdcall get_VideoDeviceController(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().VideoDeviceController());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoDeviceExtension(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().VideoDeviceExtension());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::ICommandLineActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::ICommandLineActivatedEventArgs>
{
    HRESULT __stdcall get_Operation(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Activation::CommandLineActivationOperation>(this->shim().Operation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::ICommandLineActivationOperation> : produce_base<D, Windows::ApplicationModel::Activation::ICommandLineActivationOperation>
{
    HRESULT __stdcall get_Arguments(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Arguments());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentDirectoryPath(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CurrentDirectoryPath());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ExitCode(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExitCode(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ExitCode(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().ExitCode());
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
            *value = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IContactActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactActivatedEventArgs>
{
    HRESULT __stdcall get_Verb(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Verb());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs>
{
    HRESULT __stdcall get_ServiceId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ServiceId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceUserId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ServiceUserId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Contact(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Contacts::Contact>(this->shim().Contact());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs>
{
    HRESULT __stdcall get_Address(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Contacts::ContactAddress>(this->shim().Address());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Contact(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Contacts::Contact>(this->shim().Contact());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs>
{
    HRESULT __stdcall get_ServiceId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ServiceId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceUserId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ServiceUserId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Contact(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Contacts::Contact>(this->shim().Contact());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs>
{
    HRESULT __stdcall get_ContactPanel(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Contacts::ContactPanel>(this->shim().ContactPanel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Contact(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Contacts::Contact>(this->shim().Contact());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs>
{
    HRESULT __stdcall get_ContactPickerUI(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Contacts::Provider::ContactPickerUI>(this->shim().ContactPickerUI());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs>
{
    HRESULT __stdcall get_ServiceId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ServiceId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceUserId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ServiceUserId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Contact(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Contacts::Contact>(this->shim().Contact());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs>
{
    HRESULT __stdcall get_ServiceId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ServiceId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceUserId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ServiceUserId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Contact(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Contacts::Contact>(this->shim().Contact());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IContactsProviderActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactsProviderActivatedEventArgs>
{
    HRESULT __stdcall get_Verb(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Verb());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs>
{
    HRESULT __stdcall get_ContinuationData(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::ValueSet>(this->shim().ContinuationData());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs>
{
    HRESULT __stdcall get_DeviceInformationId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceInformationId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Verb(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Verb());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs>
{
    HRESULT __stdcall get_DeviceInformation(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Enumeration::DeviceInformation>(this->shim().DeviceInformation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs>
{
    HRESULT __stdcall get_AppName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AppName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IFileActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IFileActivatedEventArgs>
{
    HRESULT __stdcall get_Files(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>>(this->shim().Files());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Verb(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Verb());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName> : produce_base<D, Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName>
{
    HRESULT __stdcall get_CallerPackageFamilyName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CallerPackageFamilyName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles> : produce_base<D, Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles>
{
    HRESULT __stdcall get_NeighboringFilesQuery(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Search::StorageFileQueryResult>(this->shim().NeighboringFilesQuery());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs>
{
    HRESULT __stdcall get_FileOpenPickerUI(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Pickers::Provider::FileOpenPickerUI>(this->shim().FileOpenPickerUI());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2> : produce_base<D, Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2>
{
    HRESULT __stdcall get_CallerPackageFamilyName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CallerPackageFamilyName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs>
{
    HRESULT __stdcall get_Files(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>>(this->shim().Files());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs>
{
    HRESULT __stdcall get_FileSavePickerUI(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Pickers::Provider::FileSavePickerUI>(this->shim().FileSavePickerUI());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2> : produce_base<D, Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2>
{
    HRESULT __stdcall get_CallerPackageFamilyName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CallerPackageFamilyName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EnterpriseId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EnterpriseId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs>
{
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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs>
{
    HRESULT __stdcall get_Folder(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::StorageFolder>(this->shim().Folder());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs>
{
    HRESULT __stdcall get_Arguments(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Arguments());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TileId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TileId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2> : produce_base<D, Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>
{
    HRESULT __stdcall get_TileActivatedInfo(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Activation::TileActivatedInfo>(this->shim().TileActivatedInfo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs>
{
    HRESULT __stdcall get_Info(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().Info());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs>
{
    HRESULT __stdcall get_CallUI(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Calls::LockScreenCallUI>(this->shim().CallUI());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs>
{
    HRESULT __stdcall get_PickerOperationId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PickerOperationId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>
{
    HRESULT __stdcall get_PrelaunchActivated(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().PrelaunchActivated());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs>
{
    HRESULT __stdcall get_Workflow(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Printers::Extensions::Print3DWorkflow>(this->shim().Workflow());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs>
{
    HRESULT __stdcall get_Configuration(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Printers::Extensions::PrintTaskConfiguration>(this->shim().Configuration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>
{
    HRESULT __stdcall get_Uri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData> : produce_base<D, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData>
{
    HRESULT __stdcall get_CallerPackageFamilyName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CallerPackageFamilyName());
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
            *value = detach_from<Windows::Foundation::Collections::ValueSet>(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs>
{
    HRESULT __stdcall get_ProtocolForResultsOperation(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::ProtocolForResultsOperation>(this->shim().ProtocolForResultsOperation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs>
{
    HRESULT __stdcall get_SharedContext(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().SharedContext());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::ISearchActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::ISearchActivatedEventArgs>
{
    HRESULT __stdcall get_QueryText(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().QueryText());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Language(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Language());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails> : produce_base<D, Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails>
{
    HRESULT __stdcall get_LinguisticDetails(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails>(this->shim().LinguisticDetails());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs>
{
    HRESULT __stdcall get_ShareOperation(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation>(this->shim().ShareOperation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::ISplashScreen> : produce_base<D, Windows::ApplicationModel::Activation::ISplashScreen>
{
    HRESULT __stdcall get_ImageLocation(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Rect>(this->shim().ImageLocation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Dismissed(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().Dismissed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Dismissed(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Dismissed(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>
{
    HRESULT __stdcall get_TaskId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TaskId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::ITileActivatedInfo> : produce_base<D, Windows::ApplicationModel::Activation::ITileActivatedInfo>
{
    HRESULT __stdcall get_RecentlyShownNotifications(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ShownTileNotification>>(this->shim().RecentlyShownNotifications());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs>
{
    HRESULT __stdcall get_Argument(HSTRING* argument) noexcept final
    {
        try
        {
            *argument = nullptr;
            typename D::abi_guard guard(this->shim());
            *argument = detach_from<hstring>(this->shim().Argument());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UserInput(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::ValueSet>(this->shim().UserInput());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs>
{
    HRESULT __stdcall get_Operation(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation>(this->shim().Operation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IViewSwitcherProvider> : produce_base<D, Windows::ApplicationModel::Activation::IViewSwitcherProvider>
{
    HRESULT __stdcall get_ViewSwitcher(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::ViewManagement::ActivationViewSwitcher>(this->shim().ViewSwitcher());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs>
{
    HRESULT __stdcall get_Result(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SpeechRecognition::SpeechRecognitionResult>(this->shim().Result());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs>
{
    HRESULT __stdcall get_ItemId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ItemId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ActionKind(Windows::ApplicationModel::Wallet::WalletActionKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Wallet::WalletActionKind>(this->shim().ActionKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ActionId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ActionId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs>
{
    HRESULT __stdcall get_Operation(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>(this->shim().Operation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs>
{
    HRESULT __stdcall get_WebAuthenticationResult(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Security::Authentication::Web::WebAuthenticationResult>(this->shim().WebAuthenticationResult());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Activation {

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IBarcodeScannerPreviewActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IBarcodeScannerPreviewActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::ICommandLineActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ICommandLineActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::ICommandLineActivationOperation> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ICommandLineActivationOperation> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IContactActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IContactActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IContactsProviderActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IContactsProviderActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IFileActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IFileActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::ISearchActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ISearchActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::ISplashScreen> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ISplashScreen> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::ITileActivatedInfo> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ITileActivatedInfo> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IViewSwitcherProvider> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IViewSwitcherProvider> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderAddAppointmentActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderAddAppointmentActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderRemoveAppointmentActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderRemoveAppointmentActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderReplaceAppointmentActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderReplaceAppointmentActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderShowAppointmentDetailsActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderShowAppointmentDetailsActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderShowTimeFrameActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderShowTimeFrameActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::BarcodeScannerPreviewActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::BarcodeScannerPreviewActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::CachedFileUpdaterActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::CachedFileUpdaterActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::CameraSettingsActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::CameraSettingsActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::CommandLineActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::CommandLineActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::CommandLineActivationOperation> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::CommandLineActivationOperation> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::ContactCallActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ContactCallActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::ContactMapActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ContactMapActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::ContactMessageActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ContactMessageActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::ContactPanelActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ContactPanelActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::ContactPickerActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ContactPickerActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::ContactPostActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ContactPostActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::ContactVideoCallActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ContactVideoCallActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::DeviceActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::DeviceActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::DevicePairingActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::DevicePairingActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::DialReceiverActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::DialReceiverActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::FileActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::FileActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::FileOpenPickerActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::FileOpenPickerActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::FileOpenPickerContinuationEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::FileOpenPickerContinuationEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::FileSavePickerActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::FileSavePickerActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::FileSavePickerContinuationEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::FileSavePickerContinuationEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::FolderPickerContinuationEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::FolderPickerContinuationEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::LaunchActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::LaunchActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::LockScreenActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::LockScreenActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::LockScreenCallActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::LockScreenCallActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::LockScreenComponentActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::LockScreenComponentActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::PickerReturnedActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::PickerReturnedActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::Print3DWorkflowActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::Print3DWorkflowActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::PrintTaskSettingsActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::PrintTaskSettingsActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::ProtocolActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ProtocolActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::ProtocolForResultsActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ProtocolForResultsActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::RestrictedLaunchActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::RestrictedLaunchActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::SearchActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::SearchActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::ShareTargetActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ShareTargetActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::SplashScreen> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::SplashScreen> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::StartupTaskActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::StartupTaskActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::TileActivatedInfo> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::TileActivatedInfo> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::ToastNotificationActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::ToastNotificationActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::UserDataAccountProviderActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::UserDataAccountProviderActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::VoiceCommandActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::VoiceCommandActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::WalletActionActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::WalletActionActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::WebAccountProviderActivatedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::WebAccountProviderActivatedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Activation::WebAuthenticationBrokerContinuationEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Activation::WebAuthenticationBrokerContinuationEventArgs> {};

}

WINRT_WARNING_POP
