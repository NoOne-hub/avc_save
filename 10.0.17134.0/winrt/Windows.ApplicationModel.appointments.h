/* Header file automatically generated from windows.applicationmodel.appointments.idl */
/*
 * File built with Microsoft(R) MIDLRT Compiler Engine Version 10.00.0215 
 */

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <Windows.h>
#include <Ole2.h>
#endif /*COM_NO_WINDOWS_H*/
#ifndef __windows2Eapplicationmodel2Eappointments_h__
#define __windows2Eapplicationmodel2Eappointments_h__
#ifndef __windows2Eapplicationmodel2Eappointments_p_h__
#define __windows2Eapplicationmodel2Eappointments_p_h__


#pragma once

//
// Deprecated attribute support
//

#pragma push_macro("DEPRECATED")
#undef DEPRECATED

#if !defined(DISABLE_WINRT_DEPRECATION)
#if defined(__cplusplus)
#if __cplusplus >= 201402
#define DEPRECATED(x) [[deprecated(x)]]
#define DEPRECATEDENUMERATOR(x) [[deprecated(x)]]
#elif defined(_MSC_VER)
#if _MSC_VER >= 1900
#define DEPRECATED(x) [[deprecated(x)]]
#define DEPRECATEDENUMERATOR(x) [[deprecated(x)]]
#else
#define DEPRECATED(x) __declspec(deprecated(x))
#define DEPRECATEDENUMERATOR(x)
#endif // _MSC_VER >= 1900
#else // Not Standard C++ or MSVC, ignore the construct.
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif  // C++ deprecation
#else // C - disable deprecation
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif
#else // Deprecation is disabled
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif  /* DEPRECATED */

// Disable Deprecation for this header, MIDL verifies that cross-type access is acceptable
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#else
#pragma warning(push)
#pragma warning(disable: 4996)
#endif

#pragma push_macro("MIDL_CONST_ID")
#undef MIDL_CONST_ID
#define MIDL_CONST_ID const __declspec(selectany)


//  API Contract Inclusion Definitions
#if !defined(SPECIFIC_API_CONTRACT_DEFINITIONS)
#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_COMMUNICATIONBLOCKING_COMMUNICATIONBLOCKINGCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_COMMUNICATIONBLOCKING_COMMUNICATIONBLOCKINGCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_COMMUNICATIONBLOCKING_COMMUNICATIONBLOCKINGCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION)
#define WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION)
#define WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION)
#define WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION)
#define WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0x60000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#if !defined(WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION)
#define WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION)

#if !defined(WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION)
#define WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION)
#define WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION)
#define WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION)
#define WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION)
#define WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)
#define WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)
#define WINDOWS_PHONE_PHONECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)
#define WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)

#if !defined(WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION)
#define WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION)

#if !defined(WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION)
#define WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION)

#if !defined(WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION)
#define WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION)

#if !defined(WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION)
#define WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION)

#if !defined(WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION)
#define WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION)

#if !defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)
#define WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "inspectable.h"
#include "asyncinfo.h"
#include "EventToken.h"
#include "WindowsContracts.h"
#include "Windows.Foundation.h"
#include "Windows.System.h"
#include "Windows.UI.h"
#include "Windows.UI.Popups.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointment;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment ABI::Windows::ApplicationModel::Appointments::IAppointment

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointment2;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 ABI::Windows::ApplicationModel::Appointments::IAppointment2

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointment3;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3 ABI::Windows::ApplicationModel::Appointments::IAppointment3

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointmentCalendar;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendar

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointmentCalendar2;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendar2

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointmentCalendar3;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3 ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendar3

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointmentCalendarSyncManager;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointmentCalendarSyncManager2;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2 ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointmentConflictResult;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult ABI::Windows::ApplicationModel::Appointments::IAppointmentConflictResult

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointmentException;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException ABI::Windows::ApplicationModel::Appointments::IAppointmentException

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointmentInvitee;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee ABI::Windows::ApplicationModel::Appointments::IAppointmentInvitee

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointmentManagerForUser;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser ABI::Windows::ApplicationModel::Appointments::IAppointmentManagerForUser

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointmentManagerStatics;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics ABI::Windows::ApplicationModel::Appointments::IAppointmentManagerStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointmentManagerStatics2;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2 ABI::Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointmentManagerStatics3;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3 ABI::Windows::ApplicationModel::Appointments::IAppointmentManagerStatics3

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointmentParticipant;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant ABI::Windows::ApplicationModel::Appointments::IAppointmentParticipant

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointmentPropertiesStatics;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics ABI::Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointmentPropertiesStatics2;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2 ABI::Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointmentRecurrence;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence ABI::Windows::ApplicationModel::Appointments::IAppointmentRecurrence

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointmentRecurrence2;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2 ABI::Windows::ApplicationModel::Appointments::IAppointmentRecurrence2

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointmentRecurrence3;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3 ABI::Windows::ApplicationModel::Appointments::IAppointmentRecurrence3

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointmentStore;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore ABI::Windows::ApplicationModel::Appointments::IAppointmentStore

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointmentStore2;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2 ABI::Windows::ApplicationModel::Appointments::IAppointmentStore2

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointmentStore3;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3 ABI::Windows::ApplicationModel::Appointments::IAppointmentStore3

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointmentStoreChange;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChange

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointmentStoreChange2;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2 ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChange2

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointmentStoreChangeReader;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointmentStoreChangeTracker;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointmentStoreChangeTracker2;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2 ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker2

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointmentStoreChangedDeferral;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointmentStoreChangedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointmentStoreNotificationTriggerDetails;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IFindAppointmentsOptions;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions ABI::Windows::ApplicationModel::Appointments::IFindAppointmentsOptions

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                class Appointment;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("386a5922-49fc-53b6-8bed-4c9ff9fe6e01"))
IIterator<ABI::Windows::ApplicationModel::Appointments::Appointment*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::Appointment*, ABI::Windows::ApplicationModel::Appointments::IAppointment*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.Appointments.Appointment>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::Appointments::Appointment*> __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment_t;
#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Appointments::IAppointment*>
//#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Appointments::IAppointment*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b9802bba-ff53-5d37-8cd7-e56162f12156"))
IIterable<ABI::Windows::ApplicationModel::Appointments::Appointment*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::Appointment*, ABI::Windows::ApplicationModel::Appointments::IAppointment*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.Appointments.Appointment>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::Appointments::Appointment*> __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment_t;
#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Appointments::IAppointment*>
//#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Appointments::IAppointment*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                class AppointmentCalendar;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f40a879d-b6b7-5f92-beb1-6a8e7ce54120"))
IIterator<ABI::Windows::ApplicationModel::Appointments::AppointmentCalendar*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::AppointmentCalendar*, ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendar*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.Appointments.AppointmentCalendar>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::Appointments::AppointmentCalendar*> __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_t;
#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendar*>
//#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendar*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d3fb010b-b692-5130-9d16-2cfdabcb6dec"))
IIterable<ABI::Windows::ApplicationModel::Appointments::AppointmentCalendar*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::AppointmentCalendar*, ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendar*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.Appointments.AppointmentCalendar>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::Appointments::AppointmentCalendar*> __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_t;
#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendar*>
//#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendar*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                class AppointmentException;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e58c63db-d9d5-5fa5-8790-29846de54fa4"))
IIterator<ABI::Windows::ApplicationModel::Appointments::AppointmentException*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::AppointmentException*, ABI::Windows::ApplicationModel::Appointments::IAppointmentException*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.Appointments.AppointmentException>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::Appointments::AppointmentException*> __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException_t;
#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Appointments::IAppointmentException*>
//#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Appointments::IAppointmentException*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("caac41d6-6c65-5fd8-b783-eb9d9a4272b8"))
IIterable<ABI::Windows::ApplicationModel::Appointments::AppointmentException*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::AppointmentException*, ABI::Windows::ApplicationModel::Appointments::IAppointmentException*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.Appointments.AppointmentException>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::Appointments::AppointmentException*> __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException_t;
#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Appointments::IAppointmentException*>
//#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Appointments::IAppointmentException*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                class AppointmentInvitee;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("57e35198-1b41-54da-adaf-50ef1e93fded"))
IIterator<ABI::Windows::ApplicationModel::Appointments::AppointmentInvitee*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::AppointmentInvitee*, ABI::Windows::ApplicationModel::Appointments::IAppointmentInvitee*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.Appointments.AppointmentInvitee>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::Appointments::AppointmentInvitee*> __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_t;
#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Appointments::IAppointmentInvitee*>
//#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Appointments::IAppointmentInvitee*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("fb9718a9-f059-52b0-a904-1a65e4281e40"))
IIterable<ABI::Windows::ApplicationModel::Appointments::AppointmentInvitee*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::AppointmentInvitee*, ABI::Windows::ApplicationModel::Appointments::IAppointmentInvitee*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.Appointments.AppointmentInvitee>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::Appointments::AppointmentInvitee*> __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_t;
#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Appointments::IAppointmentInvitee*>
//#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Appointments::IAppointmentInvitee*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                class AppointmentStoreChange;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("16a427bf-e5b0-5662-9279-caa8ed8481a6"))
IIterator<ABI::Windows::ApplicationModel::Appointments::AppointmentStoreChange*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::AppointmentStoreChange*, ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChange*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.Appointments.AppointmentStoreChange>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::Appointments::AppointmentStoreChange*> __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_t;
#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChange*>
//#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChange*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("7b657ca2-e02e-5026-a032-9905e49682fd"))
IIterable<ABI::Windows::ApplicationModel::Appointments::AppointmentStoreChange*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::AppointmentStoreChange*, ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChange*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.Appointments.AppointmentStoreChange>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::Appointments::AppointmentStoreChange*> __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_t;
#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChange*>
//#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChange*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("61021758-9e37-5a86-a832-aab31f32692b"))
IVectorView<ABI::Windows::ApplicationModel::Appointments::Appointment*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::Appointment*, ABI::Windows::ApplicationModel::Appointments::IAppointment*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Appointments.Appointment>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::Appointments::Appointment*> __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_t;
#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Appointments::IAppointment*>
//#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Appointments::IAppointment*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("774512d3-a564-5f8d-b104-3ec8f2a1104f"))
IVectorView<ABI::Windows::ApplicationModel::Appointments::AppointmentCalendar*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::AppointmentCalendar*, ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendar*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Appointments.AppointmentCalendar>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::Appointments::AppointmentCalendar*> __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_t;
#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendar*>
//#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendar*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e5030866-08d8-56be-a21b-c5bf80d70360"))
IVectorView<ABI::Windows::ApplicationModel::Appointments::AppointmentException*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::AppointmentException*, ABI::Windows::ApplicationModel::Appointments::IAppointmentException*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Appointments.AppointmentException>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::Appointments::AppointmentException*> __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_t;
#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Appointments::IAppointmentException*>
//#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Appointments::IAppointmentException*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ba2f633a-5182-5eda-8e2e-a66e55b320ce"))
IVectorView<ABI::Windows::ApplicationModel::Appointments::AppointmentInvitee*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::AppointmentInvitee*, ABI::Windows::ApplicationModel::Appointments::IAppointmentInvitee*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Appointments.AppointmentInvitee>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::Appointments::AppointmentInvitee*> __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_t;
#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Appointments::IAppointmentInvitee*>
//#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Appointments::IAppointmentInvitee*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4f9dd4e5-c3ae-5269-aff5-fe35cd50c3bb"))
IVectorView<ABI::Windows::ApplicationModel::Appointments::AppointmentStoreChange*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::AppointmentStoreChange*, ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChange*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Appointments.AppointmentStoreChange>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::Appointments::AppointmentStoreChange*> __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_t;
#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChange*>
//#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChange*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_USE
#define DEF___FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("70f4b32e-f91e-55bb-9a92-0246da734bb0"))
IVector<ABI::Windows::ApplicationModel::Appointments::AppointmentInvitee*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::AppointmentInvitee*, ABI::Windows::ApplicationModel::Appointments::IAppointmentInvitee*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.ApplicationModel.Appointments.AppointmentInvitee>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::ApplicationModel::Appointments::AppointmentInvitee*> __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_t;
#define __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee ABI::Windows::Foundation::Collections::IVector<ABI::Windows::ApplicationModel::Appointments::IAppointmentInvitee*>
//#define __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::ApplicationModel::Appointments::IAppointmentInvitee*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b640ed04-9331-5b28-9247-0146bcf5b72a"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Appointments::Appointment*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::Appointment*, ABI::Windows::ApplicationModel::Appointments::IAppointment*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.Appointments.Appointment>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Appointments::Appointment*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Appointments::IAppointment*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Appointments::IAppointment*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0c5732f8-5bb9-5bb3-93e5-b87e43e0cd6a"))
IAsyncOperation<ABI::Windows::ApplicationModel::Appointments::Appointment*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::Appointment*, ABI::Windows::ApplicationModel::Appointments::IAppointment*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.Appointments.Appointment>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::ApplicationModel::Appointments::Appointment*> __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Appointments::IAppointment*>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Appointments::IAppointment*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6d9cb651-5af6-51b0-9cd3-45dd51f17949"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Appointments::AppointmentCalendar*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::AppointmentCalendar*, ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendar*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.Appointments.AppointmentCalendar>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Appointments::AppointmentCalendar*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendar*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendar*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6bb17a95-918e-5ad0-bbc2-bcc5fa1ff936"))
IAsyncOperation<ABI::Windows::ApplicationModel::Appointments::AppointmentCalendar*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::AppointmentCalendar*, ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendar*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.Appointments.AppointmentCalendar>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::ApplicationModel::Appointments::AppointmentCalendar*> __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendar*>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendar*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                class AppointmentConflictResult;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("82fb40fe-05b1-523c-9b53-b3dd759c9f75"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Appointments::AppointmentConflictResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::AppointmentConflictResult*, ABI::Windows::ApplicationModel::Appointments::IAppointmentConflictResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.Appointments.AppointmentConflictResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Appointments::AppointmentConflictResult*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Appointments::IAppointmentConflictResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Appointments::IAppointmentConflictResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b376080f-e5b2-5ae2-9901-86cf77ba5d00"))
IAsyncOperation<ABI::Windows::ApplicationModel::Appointments::AppointmentConflictResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::AppointmentConflictResult*, ABI::Windows::ApplicationModel::Appointments::IAppointmentConflictResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.Appointments.AppointmentConflictResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::ApplicationModel::Appointments::AppointmentConflictResult*> __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Appointments::IAppointmentConflictResult*>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Appointments::IAppointmentConflictResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                class AppointmentStore;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("bccf6d2a-ab72-5f23-b7d5-4c2c9bd45b79"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Appointments::AppointmentStore*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::AppointmentStore*, ABI::Windows::ApplicationModel::Appointments::IAppointmentStore*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.Appointments.AppointmentStore>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Appointments::AppointmentStore*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Appointments::IAppointmentStore*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Appointments::IAppointmentStore*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("63798415-4d1f-5fc7-8729-79a282bceca4"))
IAsyncOperation<ABI::Windows::ApplicationModel::Appointments::AppointmentStore*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::AppointmentStore*, ABI::Windows::ApplicationModel::Appointments::IAppointmentStore*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.Appointments.AppointmentStore>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::ApplicationModel::Appointments::AppointmentStore*> __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Appointments::IAppointmentStore*>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Appointments::IAppointmentStore*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f626345f-7bfc-5418-9f47-f1d86306e06b"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Appointments.Appointment>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Appointments::IAppointment*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Appointments::IAppointment*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a6bb6962-e2c1-5da2-9938-15ef82cbd1cc"))
IAsyncOperation<__FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Appointments.Appointment>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment*> __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Appointments::IAppointment*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Appointments::IAppointment*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f478469b-9777-553d-beab-1bb5eee1ca8b"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Appointments.AppointmentCalendar>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendar*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendar*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d26021ac-99b4-5c40-b0d2-d6835d2e9202"))
IAsyncOperation<__FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Appointments.AppointmentCalendar>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar*> __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendar*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendar*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("60e2023c-c2a9-5d3c-86b1-cd221c308a5e"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Appointments.AppointmentException>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Appointments::IAppointmentException*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Appointments::IAppointmentException*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("87e171ac-53fe-50ea-beb3-0589993ac984"))
IAsyncOperation<__FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Appointments.AppointmentException>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException*> __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Appointments::IAppointmentException*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Appointments::IAppointmentException*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3fe84fc8-da80-5fab-8b46-3720f7646345"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Appointments.AppointmentStoreChange>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChange*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChange*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d54944b9-b72e-50bc-a64a-19396e0d1bcc"))
IAsyncOperation<__FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Appointments.AppointmentStoreChange>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange*> __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChange*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChange*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                class AppointmentCalendarSyncManager;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("bd1308de-6d2e-5541-b254-bdb61839bac1"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager*, ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Appointments.AppointmentCalendarSyncManager, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager*,IInspectable*> __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                class AppointmentStoreChangedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9e628351-c639-5cef-ab1d-8beae9d75d52"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::AppointmentStore*,ABI::Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::AppointmentStore*, ABI::Windows::ApplicationModel::Appointments::IAppointmentStore*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs*, ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Appointments.AppointmentStore, Windows.ApplicationModel.Appointments.AppointmentStoreChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::AppointmentStore*,ABI::Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::IAppointmentStore*,ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::IAppointmentStore*,ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Foundation {
            struct TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CFoundation__CTimeSpan_USE
#define DEF___FIReference_1_Windows__CFoundation__CTimeSpan_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("604d0c4c-91de-5c2a-935f-362f13eaf800"))
IReference<struct ABI::Windows::Foundation::TimeSpan> : IReference_impl<struct ABI::Windows::Foundation::TimeSpan> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Foundation.TimeSpan>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::Foundation::TimeSpan> __FIReference_1_Windows__CFoundation__CTimeSpan_t;
#define __FIReference_1_Windows__CFoundation__CTimeSpan ABI::Windows::Foundation::__FIReference_1_Windows__CFoundation__CTimeSpan_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CFoundation__CTimeSpan ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::TimeSpan>
//#define __FIReference_1_Windows__CFoundation__CTimeSpan_t ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::TimeSpan>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CFoundation__CTimeSpan_USE */



namespace ABI {
    namespace Windows {
        namespace Foundation {
            struct DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CFoundation__CDateTime_USE
#define DEF___FIReference_1_Windows__CFoundation__CDateTime_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5541d8a7-497c-5aa4-86fc-7713adbf2a2c"))
IReference<struct ABI::Windows::Foundation::DateTime> : IReference_impl<struct ABI::Windows::Foundation::DateTime> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Foundation.DateTime>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::Foundation::DateTime> __FIReference_1_Windows__CFoundation__CDateTime_t;
#define __FIReference_1_Windows__CFoundation__CDateTime ABI::Windows::Foundation::__FIReference_1_Windows__CFoundation__CDateTime_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CFoundation__CDateTime ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::DateTime>
//#define __FIReference_1_Windows__CFoundation__CDateTime_t ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::DateTime>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CFoundation__CDateTime_USE */




#ifndef DEF___FIAsyncOperationCompletedHandler_1_boolean_USE
#define DEF___FIAsyncOperationCompletedHandler_1_boolean_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c1d3d1a2-ae17-5a5f-b5a2-bdcc8844889a"))
IAsyncOperationCompletedHandler<bool> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<bool, boolean>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Boolean>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<bool> __FIAsyncOperationCompletedHandler_1_boolean_t;
#define __FIAsyncOperationCompletedHandler_1_boolean ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_boolean_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_boolean ABI::Windows::Foundation::IAsyncOperationCompletedHandler<boolean>
//#define __FIAsyncOperationCompletedHandler_1_boolean_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<boolean>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_boolean_USE */




#ifndef DEF___FIAsyncOperation_1_boolean_USE
#define DEF___FIAsyncOperation_1_boolean_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cdb5efb3-5788-509d-9be1-71ccb8a3362a"))
IAsyncOperation<bool> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<bool, boolean>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Boolean>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<bool> __FIAsyncOperation_1_boolean_t;
#define __FIAsyncOperation_1_boolean ABI::Windows::Foundation::__FIAsyncOperation_1_boolean_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_boolean ABI::Windows::Foundation::IAsyncOperation<boolean>
//#define __FIAsyncOperation_1_boolean_t ABI::Windows::Foundation::IAsyncOperation<boolean>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_boolean_USE */




#ifndef DEF___FIIterator_1_HSTRING_USE
#define DEF___FIIterator_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236"))
IIterator<HSTRING> : IIterator_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<HSTRING> __FIIterator_1_HSTRING_t;
#define __FIIterator_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterator_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_HSTRING ABI::Windows::Foundation::Collections::IIterator<HSTRING>
//#define __FIIterator_1_HSTRING_t ABI::Windows::Foundation::Collections::IIterator<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_HSTRING_USE */




#ifndef DEF___FIIterable_1_HSTRING_USE
#define DEF___FIIterable_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e"))
IIterable<HSTRING> : IIterable_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<HSTRING> __FIIterable_1_HSTRING_t;
#define __FIIterable_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterable_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_HSTRING ABI::Windows::Foundation::Collections::IIterable<HSTRING>
//#define __FIIterable_1_HSTRING_t ABI::Windows::Foundation::Collections::IIterable<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_HSTRING_USE */




#ifndef DEF___FIVectorView_1_HSTRING_USE
#define DEF___FIVectorView_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e"))
IVectorView<HSTRING> : IVectorView_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<HSTRING> __FIVectorView_1_HSTRING_t;
#define __FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::__FIVectorView_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::IVectorView<HSTRING>
//#define __FIVectorView_1_HSTRING_t ABI::Windows::Foundation::Collections::IVectorView<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_HSTRING_USE */




#ifndef DEF___FIAsyncOperationCompletedHandler_1_HSTRING_USE
#define DEF___FIAsyncOperationCompletedHandler_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b79a741f-7fb5-50ae-9e99-911201ec3d41"))
IAsyncOperationCompletedHandler<HSTRING> : IAsyncOperationCompletedHandler_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<HSTRING> __FIAsyncOperationCompletedHandler_1_HSTRING_t;
#define __FIAsyncOperationCompletedHandler_1_HSTRING ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_HSTRING ABI::Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING>
//#define __FIAsyncOperationCompletedHandler_1_HSTRING_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_HSTRING_USE */




#ifndef DEF___FIAsyncOperation_1_HSTRING_USE
#define DEF___FIAsyncOperation_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3e1fe603-f897-5263-b328-0806426b8a79"))
IAsyncOperation<HSTRING> : IAsyncOperation_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<HSTRING> __FIAsyncOperation_1_HSTRING_t;
#define __FIAsyncOperation_1_HSTRING ABI::Windows::Foundation::__FIAsyncOperation_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_HSTRING ABI::Windows::Foundation::IAsyncOperation<HSTRING>
//#define __FIAsyncOperation_1_HSTRING_t ABI::Windows::Foundation::IAsyncOperation<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_HSTRING_USE */




#ifndef DEF___FIVector_1_HSTRING_USE
#define DEF___FIVector_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("98b9acc1-4b56-532e-ac73-03d5291cca90"))
IVector<HSTRING> : IVector_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<HSTRING> __FIVector_1_HSTRING_t;
#define __FIVector_1_HSTRING ABI::Windows::Foundation::Collections::__FIVector_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_HSTRING ABI::Windows::Foundation::Collections::IVector<HSTRING>
//#define __FIVector_1_HSTRING_t ABI::Windows::Foundation::Collections::IVector<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_HSTRING_USE */




#ifndef DEF___FIReference_1_UINT32_USE
#define DEF___FIReference_1_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("513ef3af-e784-5325-a91e-97c2b8111cf3"))
IReference<UINT32> : IReference_impl<UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<UINT32> __FIReference_1_UINT32_t;
#define __FIReference_1_UINT32 ABI::Windows::Foundation::__FIReference_1_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_UINT32 ABI::Windows::Foundation::IReference<UINT32>
//#define __FIReference_1_UINT32_t ABI::Windows::Foundation::IReference<UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_UINT32_USE */





#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7c7899be-5f2e-5bf3-ade5-ad98b772c7cd"))
IAsyncOperationCompletedHandler<__FIVectorView_1_HSTRING*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_HSTRING*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<HSTRING>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_USE */





#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_HSTRING_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2f92b529-119b-575a-a419-3904b4e41af2"))
IAsyncOperation<__FIVectorView_1_HSTRING*> : IAsyncOperation_impl<__FIVectorView_1_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_HSTRING*> __FIAsyncOperation_1___FIVectorView_1_HSTRING_t;
#define __FIAsyncOperation_1___FIVectorView_1_HSTRING ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_HSTRING ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<HSTRING>*>
//#define __FIAsyncOperation_1___FIVectorView_1_HSTRING_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_HSTRING_USE */





namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IAsyncAction;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIAsyncAction ABI::Windows::Foundation::IAsyncAction

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Rect Rect;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct TimeSpan TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Foundation {
            class Uri;
        } /* Windows */
    } /* Foundation */} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IUriRuntimeClass;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIUriRuntimeClass ABI::Windows::Foundation::IUriRuntimeClass

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__




namespace ABI {
    namespace Windows {
        namespace System {
            class User;
        } /* Windows */
    } /* System */} /* ABI */

#ifndef ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            interface IUser;
        } /* Windows */
    } /* System */} /* ABI */
#define __x_ABI_CWindows_CSystem_CIUser ABI::Windows::System::IUser

#endif // ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__




namespace ABI {
    namespace Windows {
        namespace UI {
            
            typedef struct Color Color;
            
        } /* Windows */
    } /* UI */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Popups {
                
                typedef enum Placement : int Placement;
                
            } /* Windows */
        } /* UI */
    } /* Popups */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                
                typedef enum AppointmentBusyStatus : int AppointmentBusyStatus;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                
                typedef enum AppointmentCalendarOtherAppReadAccess : int AppointmentCalendarOtherAppReadAccess;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                
                typedef enum AppointmentCalendarOtherAppWriteAccess : int AppointmentCalendarOtherAppWriteAccess;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                
                typedef enum AppointmentCalendarSyncStatus : int AppointmentCalendarSyncStatus;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                
                typedef enum AppointmentConflictType : int AppointmentConflictType;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                
                typedef enum AppointmentDaysOfWeek : unsigned int AppointmentDaysOfWeek;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                
                typedef enum AppointmentDetailsKind : int AppointmentDetailsKind;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                
                typedef enum AppointmentParticipantResponse : int AppointmentParticipantResponse;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                
                typedef enum AppointmentParticipantRole : int AppointmentParticipantRole;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                
                typedef enum AppointmentRecurrenceUnit : int AppointmentRecurrenceUnit;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                
                typedef enum AppointmentSensitivity : int AppointmentSensitivity;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                
                typedef enum AppointmentStoreAccessType : int AppointmentStoreAccessType;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                
                typedef enum AppointmentStoreChangeType : int AppointmentStoreChangeType;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                
                typedef enum AppointmentSummaryCardView : int AppointmentSummaryCardView;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                
                typedef enum AppointmentWeekOfMonth : int AppointmentWeekOfMonth;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                
                typedef enum FindAppointmentCalendarsOptions : unsigned int FindAppointmentCalendarsOptions;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                
                typedef enum RecurrenceType : int RecurrenceType;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */









































namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                class AppointmentManagerForUser;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                class AppointmentOrganizer;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                class AppointmentRecurrence;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                class AppointmentStoreChangeReader;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                class AppointmentStoreChangeTracker;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                class AppointmentStoreChangedDeferral;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                class AppointmentStoreNotificationTriggerDetails;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                class FindAppointmentsOptions;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */










/*
 *
 * Struct Windows.ApplicationModel.Appointments.AppointmentBusyStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [v1_enum, contract] */
                enum AppointmentBusyStatus : int
                {
                    AppointmentBusyStatus_Busy = 0,
                    AppointmentBusyStatus_Tentative = 1,
                    AppointmentBusyStatus_Free = 2,
                    AppointmentBusyStatus_OutOfOffice = 3,
                    AppointmentBusyStatus_WorkingElsewhere = 4,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.AppointmentCalendarOtherAppReadAccess
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [v1_enum, contract] */
                enum AppointmentCalendarOtherAppReadAccess : int
                {
                    AppointmentCalendarOtherAppReadAccess_SystemOnly = 0,
                    AppointmentCalendarOtherAppReadAccess_Limited = 1,
                    AppointmentCalendarOtherAppReadAccess_Full = 2,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    AppointmentCalendarOtherAppReadAccess_None = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.AppointmentCalendarOtherAppWriteAccess
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [v1_enum, contract] */
                enum AppointmentCalendarOtherAppWriteAccess : int
                {
                    AppointmentCalendarOtherAppWriteAccess_None = 0,
                    AppointmentCalendarOtherAppWriteAccess_SystemOnly = 1,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    AppointmentCalendarOtherAppWriteAccess_Limited = 2,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.AppointmentCalendarSyncStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [v1_enum, contract] */
                enum AppointmentCalendarSyncStatus : int
                {
                    AppointmentCalendarSyncStatus_Idle = 0,
                    AppointmentCalendarSyncStatus_Syncing = 1,
                    AppointmentCalendarSyncStatus_UpToDate = 2,
                    AppointmentCalendarSyncStatus_AuthenticationError = 3,
                    AppointmentCalendarSyncStatus_PolicyError = 4,
                    AppointmentCalendarSyncStatus_UnknownError = 5,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
                    
                    AppointmentCalendarSyncStatus_ManualAccountRemovalRequired = 6,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
                    
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.AppointmentConflictType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [v1_enum, contract] */
                enum AppointmentConflictType : int
                {
                    AppointmentConflictType_None = 0,
                    AppointmentConflictType_Adjacent = 1,
                    AppointmentConflictType_Overlap = 2,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.AppointmentDaysOfWeek
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [v1_enum, flags, contract] */
                enum AppointmentDaysOfWeek : unsigned int
                {
                    AppointmentDaysOfWeek_None = 0,
                    AppointmentDaysOfWeek_Sunday = 0x1,
                    AppointmentDaysOfWeek_Monday = 0x2,
                    AppointmentDaysOfWeek_Tuesday = 0x4,
                    AppointmentDaysOfWeek_Wednesday = 0x8,
                    AppointmentDaysOfWeek_Thursday = 0x10,
                    AppointmentDaysOfWeek_Friday = 0x20,
                    AppointmentDaysOfWeek_Saturday = 0x40,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(AppointmentDaysOfWeek)
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.AppointmentDetailsKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [v1_enum, contract] */
                enum AppointmentDetailsKind : int
                {
                    AppointmentDetailsKind_PlainText = 0,
                    AppointmentDetailsKind_Html = 1,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.AppointmentParticipantResponse
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [v1_enum, contract] */
                enum AppointmentParticipantResponse : int
                {
                    AppointmentParticipantResponse_None = 0,
                    AppointmentParticipantResponse_Tentative = 1,
                    AppointmentParticipantResponse_Accepted = 2,
                    AppointmentParticipantResponse_Declined = 3,
                    AppointmentParticipantResponse_Unknown = 4,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.AppointmentParticipantRole
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [v1_enum, contract] */
                enum AppointmentParticipantRole : int
                {
                    AppointmentParticipantRole_RequiredAttendee = 0,
                    AppointmentParticipantRole_OptionalAttendee = 1,
                    AppointmentParticipantRole_Resource = 2,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.AppointmentRecurrenceUnit
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [v1_enum, contract] */
                enum AppointmentRecurrenceUnit : int
                {
                    AppointmentRecurrenceUnit_Daily = 0,
                    AppointmentRecurrenceUnit_Weekly = 1,
                    AppointmentRecurrenceUnit_Monthly = 2,
                    AppointmentRecurrenceUnit_MonthlyOnDay = 3,
                    AppointmentRecurrenceUnit_Yearly = 4,
                    AppointmentRecurrenceUnit_YearlyOnDay = 5,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.AppointmentSensitivity
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [v1_enum, contract] */
                enum AppointmentSensitivity : int
                {
                    AppointmentSensitivity_Public = 0,
                    AppointmentSensitivity_Private = 1,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.AppointmentStoreAccessType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [v1_enum, contract] */
                enum AppointmentStoreAccessType : int
                {
                    AppointmentStoreAccessType_AppCalendarsReadWrite = 0,
                    AppointmentStoreAccessType_AllCalendarsReadOnly = 1,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    AppointmentStoreAccessType_AllCalendarsReadWrite = 2,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.AppointmentStoreChangeType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [v1_enum, contract] */
                enum AppointmentStoreChangeType : int
                {
                    AppointmentStoreChangeType_AppointmentCreated = 0,
                    AppointmentStoreChangeType_AppointmentModified = 1,
                    AppointmentStoreChangeType_AppointmentDeleted = 2,
                    AppointmentStoreChangeType_ChangeTrackingLost = 3,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    AppointmentStoreChangeType_CalendarCreated = 4,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    AppointmentStoreChangeType_CalendarModified = 5,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    AppointmentStoreChangeType_CalendarDeleted = 6,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.AppointmentSummaryCardView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [v1_enum, contract] */
                enum AppointmentSummaryCardView : int
                {
                    AppointmentSummaryCardView_System = 0,
                    AppointmentSummaryCardView_App = 1,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.AppointmentWeekOfMonth
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [v1_enum, contract] */
                enum AppointmentWeekOfMonth : int
                {
                    AppointmentWeekOfMonth_First = 0,
                    AppointmentWeekOfMonth_Second = 1,
                    AppointmentWeekOfMonth_Third = 2,
                    AppointmentWeekOfMonth_Fourth = 3,
                    AppointmentWeekOfMonth_Last = 4,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.FindAppointmentCalendarsOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [v1_enum, flags, contract] */
                enum FindAppointmentCalendarsOptions : unsigned int
                {
                    FindAppointmentCalendarsOptions_None = 0,
                    FindAppointmentCalendarsOptions_IncludeHidden = 0x1,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(FindAppointmentCalendarsOptions)
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.RecurrenceType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [v1_enum, contract] */
                enum RecurrenceType : int
                {
                    RecurrenceType_Master = 0,
                    RecurrenceType_Instance = 1,
                    RecurrenceType_ExceptionInstance = 2,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.Appointment
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointment[] = L"Windows.ApplicationModel.Appointments.IAppointment";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("DD002F2F-2BDD-4076-90A3-22C275312965"), exclusiveto, contract] */
                MIDL_INTERFACE("DD002F2F-2BDD-4076-90A3-22C275312965")
                IAppointment : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StartTime(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_StartTime(
                        /* [in] */ABI::Windows::Foundation::DateTime value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Duration(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Duration(
                        /* [in] */ABI::Windows::Foundation::TimeSpan value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Location(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Location(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Subject(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Subject(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Details(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Details(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Reminder(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Reminder(
                        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Organizer(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Appointments::IAppointmentParticipant * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Organizer(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IAppointmentParticipant * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Invitees(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Recurrence(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Appointments::IAppointmentRecurrence * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Recurrence(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IAppointmentRecurrence * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BusyStatus(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Appointments::AppointmentBusyStatus * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BusyStatus(
                        /* [in] */ABI::Windows::ApplicationModel::Appointments::AppointmentBusyStatus value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AllDay(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AllDay(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Sensitivity(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Appointments::AppointmentSensitivity * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Sensitivity(
                        /* [in] */ABI::Windows::ApplicationModel::Appointments::AppointmentSensitivity value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Uri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Uri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointment=_uuidof(IAppointment);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointment2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.Appointment
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Appointments.IAppointment
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointment2[] = L"Windows.ApplicationModel.Appointments.IAppointment2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("5E85983C-540F-3452-9B5C-0DD7AD4C65A2"), exclusiveto, contract] */
                MIDL_INTERFACE("5E85983C-540F-3452-9B5C-0DD7AD4C65A2")
                IAppointment2 : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocalId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CalendarId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RoamingId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RoamingId(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OriginalStartTime(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsResponseRequested(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsResponseRequested(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AllowNewTimeProposal(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AllowNewTimeProposal(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OnlineMeetingLink(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_OnlineMeetingLink(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReplyTime(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ReplyTime(
                        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UserResponse(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Appointments::AppointmentParticipantResponse * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_UserResponse(
                        /* [in] */ABI::Windows::ApplicationModel::Appointments::AppointmentParticipantResponse value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasInvitees(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsCanceledMeeting(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsCanceledMeeting(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsOrganizedByUser(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsOrganizedByUser(
                        /* [in] */boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointment2=_uuidof(IAppointment2);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointment3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.Appointment
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Appointments.IAppointment2
 *     Windows.ApplicationModel.Appointments.IAppointment
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointment3[] = L"Windows.ApplicationModel.Appointments.IAppointment3";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("BFCC45A9-8961-4991-934B-C48768E5A96C"), exclusiveto, contract] */
                MIDL_INTERFACE("BFCC45A9-8961-4991-934B-C48768E5A96C")
                IAppointment3 : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ChangeNumber(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemoteChangeNumber(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RemoteChangeNumber(
                        /* [in] */UINT64 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DetailsKind(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Appointments::AppointmentDetailsKind * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DetailsKind(
                        /* [in] */ABI::Windows::ApplicationModel::Appointments::AppointmentDetailsKind value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointment3=_uuidof(IAppointment3);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentCalendar
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentCalendar
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentCalendar[] = L"Windows.ApplicationModel.Appointments.IAppointmentCalendar";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("5273819D-8339-3D4F-A02F-64084452BB5D"), exclusiveto, contract] */
                MIDL_INTERFACE("5273819D-8339-3D4F-A02F-64084452BB5D")
                IAppointmentCalendar : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayColor(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DisplayName(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocalId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsHidden(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OtherAppReadAccess(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_OtherAppReadAccess(
                        /* [in] */ABI::Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OtherAppWriteAccess(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_OtherAppWriteAccess(
                        /* [in] */ABI::Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SourceDisplayName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SummaryCardView(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Appointments::AppointmentSummaryCardView * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SummaryCardView(
                        /* [in] */ABI::Windows::ApplicationModel::Appointments::AppointmentSummaryCardView value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindAppointmentsAsync(
                        /* [in] */ABI::Windows::Foundation::DateTime rangeStart,
                        /* [in] */ABI::Windows::Foundation::TimeSpan rangeLength,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindAppointmentsAsyncWithOptions(
                        /* [in] */ABI::Windows::Foundation::DateTime rangeStart,
                        /* [in] */ABI::Windows::Foundation::TimeSpan rangeLength,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IFindAppointmentsOptions * options,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FindExceptionsFromMasterAsync(
                        /* [in] */__RPC__in HSTRING masterLocalId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindAllInstancesAsync(
                        /* [in] */__RPC__in HSTRING masterLocalId,
                        /* [in] */ABI::Windows::Foundation::DateTime rangeStart,
                        /* [in] */ABI::Windows::Foundation::TimeSpan rangeLength,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindAllInstancesAsyncWithOptions(
                        /* [in] */__RPC__in HSTRING masterLocalId,
                        /* [in] */ABI::Windows::Foundation::DateTime rangeStart,
                        /* [in] */ABI::Windows::Foundation::TimeSpan rangeLength,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IFindAppointmentsOptions * pOptions,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetAppointmentAsync(
                        /* [in] */__RPC__in HSTRING localId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetAppointmentInstanceAsync(
                        /* [in] */__RPC__in HSTRING localId,
                        /* [in] */ABI::Windows::Foundation::DateTime instanceStartTime,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindUnexpandedAppointmentsAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindUnexpandedAppointmentsAsyncWithOptions(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IFindAppointmentsOptions * options,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DeleteAsync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncAction
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SaveAsync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncAction
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DeleteAppointmentAsync(
                        /* [in] */__RPC__in HSTRING localId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncAction
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DeleteAppointmentInstanceAsync(
                        /* [in] */__RPC__in HSTRING localId,
                        /* [in] */ABI::Windows::Foundation::DateTime instanceStartTime,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncAction
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SaveAppointmentAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * pAppointment,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncAction
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentCalendar=_uuidof(IAppointmentCalendar);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentCalendar2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentCalendar
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Appointments.IAppointmentCalendar
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentCalendar2[] = L"Windows.ApplicationModel.Appointments.IAppointmentCalendar2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("18E7E422-2467-4E1C-A459-D8A29303D092"), exclusiveto, contract] */
                MIDL_INTERFACE("18E7E422-2467-4E1C-A459-D8A29303D092")
                IAppointmentCalendar2 : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SyncManager(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemoteId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RemoteId(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DisplayColor(
                        /* [in] */ABI::Windows::UI::Color value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsHidden(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UserDataAccountId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanCreateOrUpdateAppointments(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CanCreateOrUpdateAppointments(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanCancelMeetings(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CanCancelMeetings(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanForwardMeetings(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CanForwardMeetings(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanProposeNewTimeForMeetings(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CanProposeNewTimeForMeetings(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanUpdateMeetingResponses(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CanUpdateMeetingResponses(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanNotifyInvitees(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CanNotifyInvitees(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MustNofityInvitees(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MustNofityInvitees(
                        /* [in] */boolean value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TryCreateOrUpdateAppointmentAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * appointment,
                        /* [in] */boolean notifyInvitees,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TryCancelMeetingAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * meeting,
                        /* [in] */__RPC__in HSTRING subject,
                        /* [in] */__RPC__in HSTRING comment,
                        /* [in] */boolean notifyInvitees,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TryForwardMeetingAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * meeting,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * invitees,
                        /* [in] */__RPC__in HSTRING subject,
                        /* [in] */__RPC__in HSTRING forwardHeader,
                        /* [in] */__RPC__in HSTRING comment,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TryProposeNewTimeForMeetingAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * meeting,
                        /* [in] */ABI::Windows::Foundation::DateTime newStartTime,
                        /* [in] */ABI::Windows::Foundation::TimeSpan newDuration,
                        /* [in] */__RPC__in HSTRING subject,
                        /* [in] */__RPC__in HSTRING comment,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TryUpdateMeetingResponseAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * meeting,
                        /* [in] */ABI::Windows::ApplicationModel::Appointments::AppointmentParticipantResponse response,
                        /* [in] */__RPC__in HSTRING subject,
                        /* [in] */__RPC__in HSTRING comment,
                        /* [in] */boolean sendUpdate,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentCalendar2=_uuidof(IAppointmentCalendar2);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentCalendar3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentCalendar
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentCalendar3[] = L"Windows.ApplicationModel.Appointments.IAppointmentCalendar3";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("EB23D22B-A685-42AE-8495-B3119ADB4167"), exclusiveto, contract] */
                MIDL_INTERFACE("EB23D22B-A685-42AE-8495-B3119ADB4167")
                IAppointmentCalendar3 : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE RegisterSyncManagerAsync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentCalendar3=_uuidof(IAppointmentCalendar3);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentCalendarSyncManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentCalendarSyncManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager[] = L"Windows.ApplicationModel.Appointments.IAppointmentCalendarSyncManager";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("2B21B3A0-4AFF-4392-BC5F-5645FFCFFB17"), exclusiveto, contract] */
                MIDL_INTERFACE("2B21B3A0-4AFF-4392-BC5F-5645FFCFFB17")
                IAppointmentCalendarSyncManager : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LastSuccessfulSyncTime(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LastAttemptedSyncTime(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SyncAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_SyncStatusChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_SyncStatusChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentCalendarSyncManager=_uuidof(IAppointmentCalendarSyncManager);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentCalendarSyncManager2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentCalendarSyncManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager2[] = L"Windows.ApplicationModel.Appointments.IAppointmentCalendarSyncManager2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("647528AD-0D29-4C7C-AAA7-BF996805537C"), exclusiveto, contract] */
                MIDL_INTERFACE("647528AD-0D29-4C7C-AAA7-BF996805537C")
                IAppointmentCalendarSyncManager2 : public IInspectable
                {
                public:
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Status(
                        /* [in] */ABI::Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LastSuccessfulSyncTime(
                        /* [in] */ABI::Windows::Foundation::DateTime value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LastAttemptedSyncTime(
                        /* [in] */ABI::Windows::Foundation::DateTime value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentCalendarSyncManager2=_uuidof(IAppointmentCalendarSyncManager2);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentConflictResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentConflictResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentConflictResult[] = L"Windows.ApplicationModel.Appointments.IAppointmentConflictResult";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("D5CDF0BE-2F2F-3B7D-AF0A-A7E20F3A46E3"), exclusiveto, contract] */
                MIDL_INTERFACE("D5CDF0BE-2F2F-3B7D-AF0A-A7E20F3A46E3")
                IAppointmentConflictResult : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Appointments::AppointmentConflictType * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Date(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentConflictResult=_uuidof(IAppointmentConflictResult);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentException
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentException
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentException[] = L"Windows.ApplicationModel.Appointments.IAppointmentException";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("A2076767-16F6-4BCE-9F5A-8600B8019FCB"), exclusiveto, contract] */
                MIDL_INTERFACE("A2076767-16F6-4BCE-9F5A-8600B8019FCB")
                IAppointmentException : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Appointment(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExceptionProperties(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsDeleted(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentException=_uuidof(IAppointmentException);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentInvitee
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentInvitee
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Appointments.IAppointmentParticipant
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentInvitee[] = L"Windows.ApplicationModel.Appointments.IAppointmentInvitee";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("13BF0796-9842-495B-B0E7-EF8F79C0701D"), exclusiveto, contract] */
                MIDL_INTERFACE("13BF0796-9842-495B-B0E7-EF8F79C0701D")
                IAppointmentInvitee : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Role(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Appointments::AppointmentParticipantRole * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Role(
                        /* [in] */ABI::Windows::ApplicationModel::Appointments::AppointmentParticipantRole value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Response(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Appointments::AppointmentParticipantResponse * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Response(
                        /* [in] */ABI::Windows::ApplicationModel::Appointments::AppointmentParticipantResponse value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentInvitee=_uuidof(IAppointmentInvitee);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentManagerForUser
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentManagerForUser
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser[] = L"Windows.ApplicationModel.Appointments.IAppointmentManagerForUser";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("70261423-73CC-4660-B318-B01365302A03"), exclusiveto, contract] */
                MIDL_INTERFACE("70261423-73CC-4660-B318-B01365302A03")
                IAppointmentManagerForUser : public IInspectable
                {
                public:
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowAddAppointmentAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * appointment,
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowAddAppointmentWithPlacementAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * appointment,
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [in] */ABI::Windows::UI::Popups::Placement preferredPlacement,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowReplaceAppointmentAsync(
                        /* [in] */__RPC__in HSTRING appointmentId,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * appointment,
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowReplaceAppointmentWithPlacementAsync(
                        /* [in] */__RPC__in HSTRING appointmentId,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * appointment,
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [in] */ABI::Windows::UI::Popups::Placement preferredPlacement,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowReplaceAppointmentWithPlacementAndDateAsync(
                        /* [in] */__RPC__in HSTRING appointmentId,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * appointment,
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [in] */ABI::Windows::UI::Popups::Placement preferredPlacement,
                        /* [in] */ABI::Windows::Foundation::DateTime instanceStartDate,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowRemoveAppointmentAsync(
                        /* [in] */__RPC__in HSTRING appointmentId,
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowRemoveAppointmentWithPlacementAsync(
                        /* [in] */__RPC__in HSTRING appointmentId,
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [in] */ABI::Windows::UI::Popups::Placement preferredPlacement,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowRemoveAppointmentWithPlacementAndDateAsync(
                        /* [in] */__RPC__in HSTRING appointmentId,
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [in] */ABI::Windows::UI::Popups::Placement preferredPlacement,
                        /* [in] */ABI::Windows::Foundation::DateTime instanceStartDate,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ShowTimeFrameAsync(
                        /* [in] */ABI::Windows::Foundation::DateTime timeToShow,
                        /* [in] */ABI::Windows::Foundation::TimeSpan duration,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowAppointmentDetailsAsync(
                        /* [in] */__RPC__in HSTRING appointmentId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowAppointmentDetailsWithDateAsync(
                        /* [in] */__RPC__in HSTRING appointmentId,
                        /* [in] */ABI::Windows::Foundation::DateTime instanceStartDate,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ShowEditNewAppointmentAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * appointment,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RequestStoreAsync(
                        /* [in] */ABI::Windows::ApplicationModel::Appointments::AppointmentStoreAccessType options,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * * result
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_User(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::IUser * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentManagerForUser=_uuidof(IAppointmentManagerForUser);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics[] = L"Windows.ApplicationModel.Appointments.IAppointmentManagerStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("3A30FA01-5C40-499D-B33F-A43050F74FC4"), exclusiveto, contract] */
                MIDL_INTERFACE("3A30FA01-5C40-499D-B33F-A43050F74FC4")
                IAppointmentManagerStatics : public IInspectable
                {
                public:
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowAddAppointmentAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * appointment,
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowAddAppointmentWithPlacementAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * appointment,
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [in] */ABI::Windows::UI::Popups::Placement preferredPlacement,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowReplaceAppointmentAsync(
                        /* [in] */__RPC__in HSTRING appointmentId,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * appointment,
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowReplaceAppointmentWithPlacementAsync(
                        /* [in] */__RPC__in HSTRING appointmentId,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * appointment,
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [in] */ABI::Windows::UI::Popups::Placement preferredPlacement,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowReplaceAppointmentWithPlacementAndDateAsync(
                        /* [in] */__RPC__in HSTRING appointmentId,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * appointment,
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [in] */ABI::Windows::UI::Popups::Placement preferredPlacement,
                        /* [in] */ABI::Windows::Foundation::DateTime instanceStartDate,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowRemoveAppointmentAsync(
                        /* [in] */__RPC__in HSTRING appointmentId,
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowRemoveAppointmentWithPlacementAsync(
                        /* [in] */__RPC__in HSTRING appointmentId,
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [in] */ABI::Windows::UI::Popups::Placement preferredPlacement,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowRemoveAppointmentWithPlacementAndDateAsync(
                        /* [in] */__RPC__in HSTRING appointmentId,
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [in] */ABI::Windows::UI::Popups::Placement preferredPlacement,
                        /* [in] */ABI::Windows::Foundation::DateTime instanceStartDate,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ShowTimeFrameAsync(
                        /* [in] */ABI::Windows::Foundation::DateTime timeToShow,
                        /* [in] */ABI::Windows::Foundation::TimeSpan duration,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncAction
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentManagerStatics=_uuidof(IAppointmentManagerStatics);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentManagerStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics2[] = L"Windows.ApplicationModel.Appointments.IAppointmentManagerStatics2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("0A81F60D-D04F-4034-AF72-A36573B45FF0"), exclusiveto, contract] */
                MIDL_INTERFACE("0A81F60D-D04F-4034-AF72-A36573B45FF0")
                IAppointmentManagerStatics2 : public IInspectable
                {
                public:
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowAppointmentDetailsAsync(
                        /* [in] */__RPC__in HSTRING appointmentId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncAction
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowAppointmentDetailsWithDateAsync(
                        /* [in] */__RPC__in HSTRING appointmentId,
                        /* [in] */ABI::Windows::Foundation::DateTime instanceStartDate,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncAction
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ShowEditNewAppointmentAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * appointment,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RequestStoreAsync(
                        /* [in] */ABI::Windows::ApplicationModel::Appointments::AppointmentStoreAccessType options,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentManagerStatics2=_uuidof(IAppointmentManagerStatics2);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentManagerStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics3[] = L"Windows.ApplicationModel.Appointments.IAppointmentManagerStatics3";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("2F9AE09C-B34C-4DC7-A35D-CAFD88AE3EC6"), exclusiveto, contract] */
                MIDL_INTERFACE("2F9AE09C-B34C-4DC7-A35D-CAFD88AE3EC6")
                IAppointmentManagerStatics3 : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE GetForUser(
                        /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Appointments::IAppointmentManagerForUser * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentManagerStatics3=_uuidof(IAppointmentManagerStatics3);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentParticipant
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentParticipant[] = L"Windows.ApplicationModel.Appointments.IAppointmentParticipant";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("615E2902-9718-467B-83FB-B293A19121DE"), contract] */
                MIDL_INTERFACE("615E2902-9718-467B-83FB-B293A19121DE")
                IAppointmentParticipant : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DisplayName(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Address(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Address(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentParticipant=_uuidof(IAppointmentParticipant);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentPropertiesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics[] = L"Windows.ApplicationModel.Appointments.IAppointmentPropertiesStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("25141FE9-68AE-3AAE-855F-BC4441CAA234"), exclusiveto, contract] */
                MIDL_INTERFACE("25141FE9-68AE-3AAE-855F-BC4441CAA234")
                IAppointmentPropertiesStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Subject(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Location(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StartTime(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Duration(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Reminder(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BusyStatus(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Sensitivity(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OriginalStartTime(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsResponseRequested(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AllowNewTimeProposal(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AllDay(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Details(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OnlineMeetingLink(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReplyTime(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Organizer(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UserResponse(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasInvitees(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsCanceledMeeting(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsOrganizedByUser(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Recurrence(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Uri(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Invitees(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DefaultProperties(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentPropertiesStatics=_uuidof(IAppointmentPropertiesStatics);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentPropertiesStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentProperties
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Appointments.IAppointmentPropertiesStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics2[] = L"Windows.ApplicationModel.Appointments.IAppointmentPropertiesStatics2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("DFFC434B-B017-45DD-8AF5-D163D10801BB"), exclusiveto, contract] */
                MIDL_INTERFACE("DFFC434B-B017-45DD-8AF5-D163D10801BB")
                IAppointmentPropertiesStatics2 : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ChangeNumber(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemoteChangeNumber(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DetailsKind(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentPropertiesStatics2=_uuidof(IAppointmentPropertiesStatics2);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentRecurrence
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentRecurrence
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentRecurrence[] = L"Windows.ApplicationModel.Appointments.IAppointmentRecurrence";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("D87B3E83-15A6-487B-B959-0C361E60E954"), exclusiveto, contract] */
                MIDL_INTERFACE("D87B3E83-15A6-487B-B959-0C361E60E954")
                IAppointmentRecurrence : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Unit(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Unit(
                        /* [in] */ABI::Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Occurrences(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Occurrences(
                        /* [in] */__RPC__in_opt __FIReference_1_UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Until(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Until(
                        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Interval(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Interval(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DaysOfWeek(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DaysOfWeek(
                        /* [in] */ABI::Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WeekOfMonth(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_WeekOfMonth(
                        /* [in] */ABI::Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Month(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Month(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Day(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Day(
                        /* [in] */UINT32 value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentRecurrence=_uuidof(IAppointmentRecurrence);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentRecurrence2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentRecurrence
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Appointments.IAppointmentRecurrence
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentRecurrence2[] = L"Windows.ApplicationModel.Appointments.IAppointmentRecurrence2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("3DF3A2E0-05A7-4F50-9F86-B03F9436254D"), exclusiveto, contract] */
                MIDL_INTERFACE("3DF3A2E0-05A7-4F50-9F86-B03F9436254D")
                IAppointmentRecurrence2 : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RecurrenceType(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Appointments::RecurrenceType * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TimeZone(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TimeZone(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentRecurrence2=_uuidof(IAppointmentRecurrence2);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentRecurrence3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentRecurrence
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Appointments.IAppointmentRecurrence2
 *     Windows.ApplicationModel.Appointments.IAppointmentRecurrence
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentRecurrence3[] = L"Windows.ApplicationModel.Appointments.IAppointmentRecurrence3";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("89FF96D9-DA4D-4A17-8DD2-1CEBC2B5FF9D"), exclusiveto, contract] */
                MIDL_INTERFACE("89FF96D9-DA4D-4A17-8DD2-1CEBC2B5FF9D")
                IAppointmentRecurrence3 : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CalendarIdentifier(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentRecurrence3=_uuidof(IAppointmentRecurrence3);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentStore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentStore
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStore[] = L"Windows.ApplicationModel.Appointments.IAppointmentStore";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("A461918C-7A47-4D96-96C9-15CD8A05A735"), exclusiveto, contract] */
                MIDL_INTERFACE("A461918C-7A47-4D96-96C9-15CD8A05A735")
                IAppointmentStore : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ChangeTracker(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateAppointmentCalendarAsync(
                        /* [in] */__RPC__in HSTRING name,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetAppointmentCalendarAsync(
                        /* [in] */__RPC__in HSTRING calendarId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetAppointmentAsync(
                        /* [in] */__RPC__in HSTRING localId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetAppointmentInstanceAsync(
                        /* [in] */__RPC__in HSTRING localId,
                        /* [in] */ABI::Windows::Foundation::DateTime instanceStartTime,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindAppointmentCalendarsAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindAppointmentCalendarsAsyncWithOptions(
                        /* [in] */ABI::Windows::ApplicationModel::Appointments::FindAppointmentCalendarsOptions options,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindAppointmentsAsync(
                        /* [in] */ABI::Windows::Foundation::DateTime rangeStart,
                        /* [in] */ABI::Windows::Foundation::TimeSpan rangeLength,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindAppointmentsAsyncWithOptions(
                        /* [in] */ABI::Windows::Foundation::DateTime rangeStart,
                        /* [in] */ABI::Windows::Foundation::TimeSpan rangeLength,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IFindAppointmentsOptions * options,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindConflictAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * appointment,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindConflictAsyncWithInstanceStart(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * appointment,
                        /* [in] */ABI::Windows::Foundation::DateTime instanceStartTime,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE MoveAppointmentAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * appointment,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendar * destinationCalendar,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncAction
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ShowAddAppointmentAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * appointment,
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowReplaceAppointmentAsync(
                        /* [in] */__RPC__in HSTRING localId,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * appointment,
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowReplaceAppointmentWithPlacementAndDateAsync(
                        /* [in] */__RPC__in HSTRING localId,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * appointment,
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [in] */ABI::Windows::UI::Popups::Placement preferredPlacement,
                        /* [in] */ABI::Windows::Foundation::DateTime instanceStartDate,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowRemoveAppointmentAsync(
                        /* [in] */__RPC__in HSTRING localId,
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowRemoveAppointmentWithPlacementAndDateAsync(
                        /* [in] */__RPC__in HSTRING localId,
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [in] */ABI::Windows::UI::Popups::Placement preferredPlacement,
                        /* [in] */ABI::Windows::Foundation::DateTime instanceStartDate,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowAppointmentDetailsAsync(
                        /* [in] */__RPC__in HSTRING localId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncAction
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowAppointmentDetailsWithDateAsync(
                        /* [in] */__RPC__in HSTRING localId,
                        /* [in] */ABI::Windows::Foundation::DateTime instanceStartDate,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncAction
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ShowEditNewAppointmentAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * appointment,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FindLocalIdsFromRoamingIdAsync(
                        /* [in] */__RPC__in HSTRING roamingId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_HSTRING * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentStore=_uuidof(IAppointmentStore);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentStore2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentStore
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Appointments.IAppointmentStore
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStore2[] = L"Windows.ApplicationModel.Appointments.IAppointmentStore2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("25C48C20-1C41-424F-8084-67C1CFE0A854"), exclusiveto, contract] */
                MIDL_INTERFACE("25C48C20-1C41-424F-8084-67C1CFE0A854")
                IAppointmentStore2 : public IInspectable
                {
                public:
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_StoreChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs * pHandler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * pToken
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_StoreChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateAppointmentCalendarInAccountAsync(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */__RPC__in HSTRING userDataAccountId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentStore2=_uuidof(IAppointmentStore2);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentStore3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentStore
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStore3[] = L"Windows.ApplicationModel.Appointments.IAppointmentStore3";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("4251940B-B078-470A-9A40-C2E01761F72F"), exclusiveto, contract] */
                MIDL_INTERFACE("4251940B-B078-470A-9A40-C2E01761F72F")
                IAppointmentStore3 : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE GetChangeTracker(
                        /* [in] */__RPC__in HSTRING identity,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentStore3=_uuidof(IAppointmentStore3);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentStoreChange
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentStoreChange
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStoreChange[] = L"Windows.ApplicationModel.Appointments.IAppointmentStoreChange";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("A5A6E035-0A33-3654-8463-B543E90C3B79"), exclusiveto, contract] */
                MIDL_INTERFACE("A5A6E035-0A33-3654-8463-B543E90C3B79")
                IAppointmentStoreChange : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Appointment(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ChangeType(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Appointments::AppointmentStoreChangeType * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentStoreChange=_uuidof(IAppointmentStoreChange);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentStoreChange2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentStoreChange
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Appointments.IAppointmentStoreChange
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStoreChange2[] = L"Windows.ApplicationModel.Appointments.IAppointmentStoreChange2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("B37D0DCE-5211-4402-A608-A96FE70B8EE2"), exclusiveto, contract] */
                MIDL_INTERFACE("B37D0DCE-5211-4402-A608-A96FE70B8EE2")
                IAppointmentStoreChange2 : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppointmentCalendar(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendar * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentStoreChange2=_uuidof(IAppointmentStoreChange2);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentStoreChangeReader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentStoreChangeReader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeReader[] = L"Windows.ApplicationModel.Appointments.IAppointmentStoreChangeReader";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("8B2409F1-65F3-42A0-961D-4C209BF30370"), exclusiveto, contract] */
                MIDL_INTERFACE("8B2409F1-65F3-42A0-961D-4C209BF30370")
                IAppointmentStoreChangeReader : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE ReadBatchAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE AcceptChanges(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE AcceptChangesThrough(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChange * lastChangeToAccept
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentStoreChangeReader=_uuidof(IAppointmentStoreChangeReader);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentStoreChangeTracker
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentStoreChangeTracker
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeTracker[] = L"Windows.ApplicationModel.Appointments.IAppointmentStoreChangeTracker";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("1B25F4B1-8ECE-4F17-93C8-E6412458FD5C"), exclusiveto, contract] */
                MIDL_INTERFACE("1B25F4B1-8ECE-4F17-93C8-E6412458FD5C")
                IAppointmentStoreChangeTracker : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE GetChangeReader(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Enable(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Reset(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentStoreChangeTracker=_uuidof(IAppointmentStoreChangeTracker);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentStoreChangeTracker2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentStoreChangeTracker
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeTracker2[] = L"Windows.ApplicationModel.Appointments.IAppointmentStoreChangeTracker2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("B66AAF45-9542-4CF7-8550-EB370E0C08D3"), exclusiveto, contract] */
                MIDL_INTERFACE("B66AAF45-9542-4CF7-8550-EB370E0C08D3")
                IAppointmentStoreChangeTracker2 : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsTracking(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentStoreChangeTracker2=_uuidof(IAppointmentStoreChangeTracker2);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentStoreChangedDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentStoreChangedDeferral
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStoreChangedDeferral[] = L"Windows.ApplicationModel.Appointments.IAppointmentStoreChangedDeferral";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("4CB82026-FEDB-4BC3-9662-95A9BEFDF4DF"), exclusiveto, contract] */
                MIDL_INTERFACE("4CB82026-FEDB-4BC3-9662-95A9BEFDF4DF")
                IAppointmentStoreChangedDeferral : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Complete(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentStoreChangedDeferral=_uuidof(IAppointmentStoreChangedDeferral);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentStoreChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentStoreChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStoreChangedEventArgs[] = L"Windows.ApplicationModel.Appointments.IAppointmentStoreChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("2285F8B9-0791-417E-BFEA-CC6D41636C8C"), exclusiveto, contract] */
                MIDL_INTERFACE("2285F8B9-0791-417E-BFEA-CC6D41636C8C")
                IAppointmentStoreChangedEventArgs : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentStoreChangedEventArgs=_uuidof(IAppointmentStoreChangedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentStoreNotificationTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentStoreNotificationTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStoreNotificationTriggerDetails[] = L"Windows.ApplicationModel.Appointments.IAppointmentStoreNotificationTriggerDetails";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("9B33CB11-C301-421E-AFEF-047ECFA76ADB"), exclusiveto, contract] */
                MIDL_INTERFACE("9B33CB11-C301-421E-AFEF-047ECFA76ADB")
                IAppointmentStoreNotificationTriggerDetails : public IInspectable
                {
                public:
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppointmentStoreNotificationTriggerDetails=_uuidof(IAppointmentStoreNotificationTriggerDetails);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IFindAppointmentsOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.FindAppointmentsOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IFindAppointmentsOptions[] = L"Windows.ApplicationModel.Appointments.IFindAppointmentsOptions";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                /* [object, uuid("55F7DC55-9942-3086-82B5-2CB29F64D5F5"), exclusiveto, contract] */
                MIDL_INTERFACE("55F7DC55-9942-3086-82B5-2CB29F64D5F5")
                IFindAppointmentsOptions : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CalendarIds(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FetchProperties(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IncludeHidden(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IncludeHidden(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxCount(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MaxCount(
                        /* [in] */UINT32 value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFindAppointmentsOptions=_uuidof(IFindAppointmentsOptions);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.Appointment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointment ** Default Interface **
 *    Windows.ApplicationModel.Appointments.IAppointment2
 *    Windows.ApplicationModel.Appointments.IAppointment3
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_Appointment_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_Appointment_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_Appointment[] = L"Windows.ApplicationModel.Appointments.Appointment";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentCalendar
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointmentCalendar ** Default Interface **
 *    Windows.ApplicationModel.Appointments.IAppointmentCalendar2
 *    Windows.ApplicationModel.Appointments.IAppointmentCalendar3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentCalendar_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentCalendar_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentCalendar[] = L"Windows.ApplicationModel.Appointments.AppointmentCalendar";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentCalendarSyncManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointmentCalendarSyncManager ** Default Interface **
 *    Windows.ApplicationModel.Appointments.IAppointmentCalendarSyncManager2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentCalendarSyncManager_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentCalendarSyncManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentCalendarSyncManager[] = L"Windows.ApplicationModel.Appointments.AppointmentCalendarSyncManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentConflictResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointmentConflictResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentConflictResult_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentConflictResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentConflictResult[] = L"Windows.ApplicationModel.Appointments.AppointmentConflictResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentException
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointmentException ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentException_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentException_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentException[] = L"Windows.ApplicationModel.Appointments.AppointmentException";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentInvitee
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointmentInvitee ** Default Interface **
 *    Windows.ApplicationModel.Appointments.IAppointmentParticipant
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentInvitee_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentInvitee_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentInvitee[] = L"Windows.ApplicationModel.Appointments.AppointmentInvitee";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Appointments.IAppointmentManagerStatics3 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Appointments.IAppointmentManagerStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Appointments.IAppointmentManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentManager_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentManager[] = L"Windows.ApplicationModel.Appointments.AppointmentManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentManagerForUser
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointmentManagerForUser ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentManagerForUser_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentManagerForUser_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentManagerForUser[] = L"Windows.ApplicationModel.Appointments.AppointmentManagerForUser";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentOrganizer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointmentParticipant ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentOrganizer_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentOrganizer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentOrganizer[] = L"Windows.ApplicationModel.Appointments.AppointmentOrganizer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Appointments.IAppointmentPropertiesStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Appointments.IAppointmentPropertiesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentProperties_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentProperties[] = L"Windows.ApplicationModel.Appointments.AppointmentProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentRecurrence
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointmentRecurrence ** Default Interface **
 *    Windows.ApplicationModel.Appointments.IAppointmentRecurrence2
 *    Windows.ApplicationModel.Appointments.IAppointmentRecurrence3
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentRecurrence_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentRecurrence_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentRecurrence[] = L"Windows.ApplicationModel.Appointments.AppointmentRecurrence";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentStore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointmentStore ** Default Interface **
 *    Windows.ApplicationModel.Appointments.IAppointmentStore2
 *    Windows.ApplicationModel.Appointments.IAppointmentStore3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentStore_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentStore_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentStore[] = L"Windows.ApplicationModel.Appointments.AppointmentStore";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentStoreChange
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointmentStoreChange ** Default Interface **
 *    Windows.ApplicationModel.Appointments.IAppointmentStoreChange2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentStoreChange_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentStoreChange_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentStoreChange[] = L"Windows.ApplicationModel.Appointments.AppointmentStoreChange";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentStoreChangeReader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointmentStoreChangeReader ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentStoreChangeReader_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentStoreChangeReader_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentStoreChangeReader[] = L"Windows.ApplicationModel.Appointments.AppointmentStoreChangeReader";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentStoreChangeTracker
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointmentStoreChangeTracker ** Default Interface **
 *    Windows.ApplicationModel.Appointments.IAppointmentStoreChangeTracker2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentStoreChangeTracker_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentStoreChangeTracker_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentStoreChangeTracker[] = L"Windows.ApplicationModel.Appointments.AppointmentStoreChangeTracker";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentStoreChangedDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointmentStoreChangedDeferral ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentStoreChangedDeferral_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentStoreChangedDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentStoreChangedDeferral[] = L"Windows.ApplicationModel.Appointments.AppointmentStoreChangedDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentStoreChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointmentStoreChangedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentStoreChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentStoreChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentStoreChangedEventArgs[] = L"Windows.ApplicationModel.Appointments.AppointmentStoreChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentStoreNotificationTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointmentStoreNotificationTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentStoreNotificationTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentStoreNotificationTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentStoreNotificationTriggerDetails[] = L"Windows.ApplicationModel.Appointments.AppointmentStoreNotificationTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.FindAppointmentsOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IFindAppointmentsOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_FindAppointmentsOptions_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_FindAppointmentsOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_FindAppointmentsOptions[] = L"Windows.ApplicationModel.Appointments.FindAppointmentsOptions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3 __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3 __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2 __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2 __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3 __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2 __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2 __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3 __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2 __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3 __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2 __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2 __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment;

typedef struct __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;

typedef struct __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException;

typedef struct __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentExceptionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentExceptionVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentExceptionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentExceptionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentExceptionVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentExceptionVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee;

typedef struct __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange;

typedef struct __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangeVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangeVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangeVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentExceptionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentExceptionVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentExceptionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangeVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee;

typedef struct __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * *value);

    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl;

interface __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResultVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentExceptionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentExceptionVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentExceptionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentExceptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentExceptionVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentExceptionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangeVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangeVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

struct __x_ABI_CWindows_CFoundation_CTimeSpan;

#if !defined(____FIReference_1_Windows__CFoundation__CTimeSpan_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CFoundation__CTimeSpan_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CFoundation__CTimeSpan __FIReference_1_Windows__CFoundation__CTimeSpan;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CTimeSpan;

typedef struct __FIReference_1_Windows__CFoundation__CTimeSpanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CFoundation_CTimeSpan *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CTimeSpanVtbl;

interface __FIReference_1_Windows__CFoundation__CTimeSpan
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CTimeSpanVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CFoundation__CTimeSpan_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CFoundation__CTimeSpan_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CFoundation__CTimeSpan_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CFoundation__CTimeSpan_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CFoundation__CTimeSpan_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CFoundation__CTimeSpan_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CFoundation__CTimeSpan_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CFoundation__CTimeSpan_INTERFACE_DEFINED__


struct __x_ABI_CWindows_CFoundation_CDateTime;

#if !defined(____FIReference_1_Windows__CFoundation__CDateTime_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CFoundation__CDateTime_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CFoundation__CDateTime __FIReference_1_Windows__CFoundation__CDateTime;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CDateTime;

typedef struct __FIReference_1_Windows__CFoundation__CDateTimeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CFoundation_CDateTime *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CDateTimeVtbl;

interface __FIReference_1_Windows__CFoundation__CDateTime
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CDateTimeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CFoundation__CDateTime_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CFoundation__CDateTime_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CFoundation__CDateTime_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CFoundation__CDateTime_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CFoundation__CDateTime_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CFoundation__CDateTime_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CFoundation__CDateTime_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CFoundation__CDateTime_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperationCompletedHandler_1_boolean_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_boolean_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_boolean __FIAsyncOperationCompletedHandler_1_boolean;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_boolean;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;

typedef struct __FIAsyncOperationCompletedHandler_1_booleanVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_boolean *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_booleanVtbl;

interface __FIAsyncOperationCompletedHandler_1_boolean
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_booleanVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_boolean_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_boolean_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_boolean_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_boolean_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_boolean_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperation_1_boolean_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_boolean_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_boolean;

typedef struct __FIAsyncOperation_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_boolean * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_boolean * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_boolean * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_boolean *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_boolean **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [retval][out] */ __RPC__out boolean *results);
    END_INTERFACE
} __FIAsyncOperation_1_booleanVtbl;

interface __FIAsyncOperation_1_boolean
{
    CONST_VTBL struct __FIAsyncOperation_1_booleanVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_boolean_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_boolean_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_boolean_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_boolean_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_boolean_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_boolean_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_boolean_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_boolean_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_boolean_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_boolean_INTERFACE_DEFINED__


#if !defined(____FIIterator_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterator_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterator_1_HSTRING __FIIterator_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_HSTRING;

typedef struct __FIIterator_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out HSTRING *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_HSTRING * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_HSTRINGVtbl;

interface __FIIterator_1_HSTRING
{
    CONST_VTBL struct __FIIterator_1_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_HSTRING_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_HSTRING_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_HSTRING_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_HSTRING_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIIterable_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterable_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterable_1_HSTRING __FIIterable_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_HSTRING;

typedef  struct __FIIterable_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_HSTRING * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_HSTRING **first);

    END_INTERFACE
} __FIIterable_1_HSTRINGVtbl;

interface __FIIterable_1_HSTRING
{
    CONST_VTBL struct __FIIterable_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_HSTRING_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIVectorView_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIVectorView_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_HSTRING __FIVectorView_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_HSTRING;

typedef struct __FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_HSTRING * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_HSTRING * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_HSTRING * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_HSTRING * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out HSTRING *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_HSTRING * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_HSTRING * This,
            /* [in] */ HSTRING item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_HSTRING * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_HSTRINGVtbl;

interface __FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIVectorView_1_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_HSTRING_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_HSTRING_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_HSTRING_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperationCompletedHandler_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_HSTRING __FIAsyncOperationCompletedHandler_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_HSTRING;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;

typedef struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_HSTRING *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl;

interface __FIAsyncOperationCompletedHandler_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_HSTRING_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperation_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_HSTRING;

typedef struct __FIAsyncOperation_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_HSTRING *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [retval][out] */ __RPC__out HSTRING *results);
    END_INTERFACE
} __FIAsyncOperation_1_HSTRINGVtbl;

interface __FIAsyncOperation_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_HSTRING_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_HSTRING_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_HSTRING_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIVector_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIVector_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIVector_1_HSTRING __FIVector_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_HSTRING;

typedef struct __FIVector_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_HSTRING * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt HSTRING *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_HSTRING * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_HSTRING **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ __RPC__in HSTRING item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in HSTRING item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in HSTRING item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_HSTRING * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_HSTRING * This, /* [in] */ __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) HSTRING *value);

    END_INTERFACE
} __FIVector_1_HSTRINGVtbl;

interface __FIVector_1_HSTRING
{
    CONST_VTBL struct __FIVector_1_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_HSTRING_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_HSTRING_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_HSTRING_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_HSTRING_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_HSTRING_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_HSTRING_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_HSTRING_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_HSTRING_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_HSTRING_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_HSTRING_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_HSTRING_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIReference_1_UINT32_INTERFACE_DEFINED__)
#define ____FIReference_1_UINT32_INTERFACE_DEFINED__

typedef interface __FIReference_1_UINT32 __FIReference_1_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_UINT32;

typedef struct __FIReference_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_UINT32 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_UINT32 * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_UINT32 * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_UINT32 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_UINT32 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_UINT32 * This, /* [retval][out] */ __RPC__out int *value);
    END_INTERFACE
} __FIReference_1_UINT32Vtbl;

interface __FIReference_1_UINT32
{
    CONST_VTBL struct __FIReference_1_UINT32Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_UINT32_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_UINT32_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_UINT32_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_UINT32_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_UINT32_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_HSTRING __FIAsyncOperation_1___FIVectorView_1_HSTRING;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_HSTRING *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRINGVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1___FIVectorView_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_HSTRING __FIAsyncOperation_1___FIVectorView_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_HSTRING;

typedef struct __FIAsyncOperation_1___FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, /* [retval][out] */ __RPC__out __FIVectorView_1_HSTRING * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_HSTRINGVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_HSTRING_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_HSTRING_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_HSTRING_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_HSTRING_INTERFACE_DEFINED__




typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;


typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;


#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;

#endif // ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__





typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;




typedef enum __x_ABI_CWindows_CUI_CPopups_CPlacement __x_ABI_CWindows_CUI_CPopups_CPlacement;





typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentBusyStatus __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentBusyStatus;


typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentCalendarOtherAppReadAccess __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentCalendarOtherAppReadAccess;


typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentCalendarOtherAppWriteAccess __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentCalendarOtherAppWriteAccess;


typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentCalendarSyncStatus __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentCalendarSyncStatus;


typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentConflictType __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentConflictType;


typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentDaysOfWeek __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentDaysOfWeek;


typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentDetailsKind __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentDetailsKind;


typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantResponse __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantResponse;


typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantRole __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantRole;


typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentRecurrenceUnit __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentRecurrenceUnit;


typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentSensitivity __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentSensitivity;


typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentStoreAccessType __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentStoreAccessType;


typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentStoreChangeType __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentStoreChangeType;


typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentSummaryCardView __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentSummaryCardView;


typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentWeekOfMonth __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentWeekOfMonth;


typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CFindAppointmentCalendarsOptions __x_ABI_CWindows_CApplicationModel_CAppointments_CFindAppointmentCalendarsOptions;


typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CRecurrenceType __x_ABI_CWindows_CApplicationModel_CAppointments_CRecurrenceType;





























































/*
 *
 * Struct Windows.ApplicationModel.Appointments.AppointmentBusyStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentBusyStatus
{
    AppointmentBusyStatus_Busy = 0,
    AppointmentBusyStatus_Tentative = 1,
    AppointmentBusyStatus_Free = 2,
    AppointmentBusyStatus_OutOfOffice = 3,
    AppointmentBusyStatus_WorkingElsewhere = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.AppointmentCalendarOtherAppReadAccess
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentCalendarOtherAppReadAccess
{
    AppointmentCalendarOtherAppReadAccess_SystemOnly = 0,
    AppointmentCalendarOtherAppReadAccess_Limited = 1,
    AppointmentCalendarOtherAppReadAccess_Full = 2,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    AppointmentCalendarOtherAppReadAccess_None = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.AppointmentCalendarOtherAppWriteAccess
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentCalendarOtherAppWriteAccess
{
    AppointmentCalendarOtherAppWriteAccess_None = 0,
    AppointmentCalendarOtherAppWriteAccess_SystemOnly = 1,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    AppointmentCalendarOtherAppWriteAccess_Limited = 2,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.AppointmentCalendarSyncStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentCalendarSyncStatus
{
    AppointmentCalendarSyncStatus_Idle = 0,
    AppointmentCalendarSyncStatus_Syncing = 1,
    AppointmentCalendarSyncStatus_UpToDate = 2,
    AppointmentCalendarSyncStatus_AuthenticationError = 3,
    AppointmentCalendarSyncStatus_PolicyError = 4,
    AppointmentCalendarSyncStatus_UnknownError = 5,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
    
    AppointmentCalendarSyncStatus_ManualAccountRemovalRequired = 6,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.AppointmentConflictType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentConflictType
{
    AppointmentConflictType_None = 0,
    AppointmentConflictType_Adjacent = 1,
    AppointmentConflictType_Overlap = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.AppointmentDaysOfWeek
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentDaysOfWeek
{
    AppointmentDaysOfWeek_None = 0,
    AppointmentDaysOfWeek_Sunday = 0x1,
    AppointmentDaysOfWeek_Monday = 0x2,
    AppointmentDaysOfWeek_Tuesday = 0x4,
    AppointmentDaysOfWeek_Wednesday = 0x8,
    AppointmentDaysOfWeek_Thursday = 0x10,
    AppointmentDaysOfWeek_Friday = 0x20,
    AppointmentDaysOfWeek_Saturday = 0x40,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.AppointmentDetailsKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentDetailsKind
{
    AppointmentDetailsKind_PlainText = 0,
    AppointmentDetailsKind_Html = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.AppointmentParticipantResponse
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantResponse
{
    AppointmentParticipantResponse_None = 0,
    AppointmentParticipantResponse_Tentative = 1,
    AppointmentParticipantResponse_Accepted = 2,
    AppointmentParticipantResponse_Declined = 3,
    AppointmentParticipantResponse_Unknown = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.AppointmentParticipantRole
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantRole
{
    AppointmentParticipantRole_RequiredAttendee = 0,
    AppointmentParticipantRole_OptionalAttendee = 1,
    AppointmentParticipantRole_Resource = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.AppointmentRecurrenceUnit
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentRecurrenceUnit
{
    AppointmentRecurrenceUnit_Daily = 0,
    AppointmentRecurrenceUnit_Weekly = 1,
    AppointmentRecurrenceUnit_Monthly = 2,
    AppointmentRecurrenceUnit_MonthlyOnDay = 3,
    AppointmentRecurrenceUnit_Yearly = 4,
    AppointmentRecurrenceUnit_YearlyOnDay = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.AppointmentSensitivity
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentSensitivity
{
    AppointmentSensitivity_Public = 0,
    AppointmentSensitivity_Private = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.AppointmentStoreAccessType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentStoreAccessType
{
    AppointmentStoreAccessType_AppCalendarsReadWrite = 0,
    AppointmentStoreAccessType_AllCalendarsReadOnly = 1,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    AppointmentStoreAccessType_AllCalendarsReadWrite = 2,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.AppointmentStoreChangeType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentStoreChangeType
{
    AppointmentStoreChangeType_AppointmentCreated = 0,
    AppointmentStoreChangeType_AppointmentModified = 1,
    AppointmentStoreChangeType_AppointmentDeleted = 2,
    AppointmentStoreChangeType_ChangeTrackingLost = 3,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    AppointmentStoreChangeType_CalendarCreated = 4,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    AppointmentStoreChangeType_CalendarModified = 5,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    AppointmentStoreChangeType_CalendarDeleted = 6,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.AppointmentSummaryCardView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentSummaryCardView
{
    AppointmentSummaryCardView_System = 0,
    AppointmentSummaryCardView_App = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.AppointmentWeekOfMonth
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentWeekOfMonth
{
    AppointmentWeekOfMonth_First = 0,
    AppointmentWeekOfMonth_Second = 1,
    AppointmentWeekOfMonth_Third = 2,
    AppointmentWeekOfMonth_Fourth = 3,
    AppointmentWeekOfMonth_Last = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.FindAppointmentCalendarsOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CFindAppointmentCalendarsOptions
{
    FindAppointmentCalendarsOptions_None = 0,
    FindAppointmentCalendarsOptions_IncludeHidden = 0x1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Appointments.RecurrenceType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CRecurrenceType
{
    RecurrenceType_Master = 0,
    RecurrenceType_Instance = 1,
    RecurrenceType_ExceptionInstance = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.Appointment
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointment[] = L"Windows.ApplicationModel.Appointments.IAppointment";
/* [object, uuid("DD002F2F-2BDD-4076-90A3-22C275312965"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_StartTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Duration )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Location )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Location )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Subject )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Subject )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Details )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Details )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Reminder )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Reminder )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Organizer )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Organizer )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Invitees )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Recurrence )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Recurrence )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BusyStatus )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentBusyStatus * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BusyStatus )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentBusyStatus value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AllDay )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AllDay )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Sensitivity )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentSensitivity * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Sensitivity )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentSensitivity value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Uri )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_get_StartTime(This,value) \
    ( (This)->lpVtbl->get_StartTime(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_put_StartTime(This,value) \
    ( (This)->lpVtbl->put_StartTime(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_get_Duration(This,value) \
    ( (This)->lpVtbl->get_Duration(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_put_Duration(This,value) \
    ( (This)->lpVtbl->put_Duration(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_get_Location(This,value) \
    ( (This)->lpVtbl->get_Location(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_put_Location(This,value) \
    ( (This)->lpVtbl->put_Location(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_get_Subject(This,value) \
    ( (This)->lpVtbl->get_Subject(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_put_Subject(This,value) \
    ( (This)->lpVtbl->put_Subject(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_get_Details(This,value) \
    ( (This)->lpVtbl->get_Details(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_put_Details(This,value) \
    ( (This)->lpVtbl->put_Details(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_get_Reminder(This,value) \
    ( (This)->lpVtbl->get_Reminder(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_put_Reminder(This,value) \
    ( (This)->lpVtbl->put_Reminder(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_get_Organizer(This,value) \
    ( (This)->lpVtbl->get_Organizer(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_put_Organizer(This,value) \
    ( (This)->lpVtbl->put_Organizer(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_get_Invitees(This,value) \
    ( (This)->lpVtbl->get_Invitees(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_get_Recurrence(This,value) \
    ( (This)->lpVtbl->get_Recurrence(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_put_Recurrence(This,value) \
    ( (This)->lpVtbl->put_Recurrence(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_get_BusyStatus(This,value) \
    ( (This)->lpVtbl->get_BusyStatus(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_put_BusyStatus(This,value) \
    ( (This)->lpVtbl->put_BusyStatus(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_get_AllDay(This,value) \
    ( (This)->lpVtbl->get_AllDay(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_put_AllDay(This,value) \
    ( (This)->lpVtbl->put_AllDay(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_get_Sensitivity(This,value) \
    ( (This)->lpVtbl->get_Sensitivity(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_put_Sensitivity(This,value) \
    ( (This)->lpVtbl->put_Sensitivity(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_get_Uri(This,value) \
    ( (This)->lpVtbl->get_Uri(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_put_Uri(This,value) \
    ( (This)->lpVtbl->put_Uri(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointment2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.Appointment
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Appointments.IAppointment
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointment2[] = L"Windows.ApplicationModel.Appointments.IAppointment2";
/* [object, uuid("5E85983C-540F-3452-9B5C-0DD7AD4C65A2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocalId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CalendarId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RoamingId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RoamingId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OriginalStartTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsResponseRequested )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsResponseRequested )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AllowNewTimeProposal )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AllowNewTimeProposal )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OnlineMeetingLink )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_OnlineMeetingLink )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReplyTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ReplyTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UserResponse )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantResponse * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_UserResponse )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantResponse value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasInvitees )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsCanceledMeeting )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsCanceledMeeting )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsOrganizedByUser )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsOrganizedByUser )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_get_LocalId(This,value) \
    ( (This)->lpVtbl->get_LocalId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_get_CalendarId(This,value) \
    ( (This)->lpVtbl->get_CalendarId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_get_RoamingId(This,value) \
    ( (This)->lpVtbl->get_RoamingId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_put_RoamingId(This,value) \
    ( (This)->lpVtbl->put_RoamingId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_get_OriginalStartTime(This,value) \
    ( (This)->lpVtbl->get_OriginalStartTime(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_get_IsResponseRequested(This,value) \
    ( (This)->lpVtbl->get_IsResponseRequested(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_put_IsResponseRequested(This,value) \
    ( (This)->lpVtbl->put_IsResponseRequested(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_get_AllowNewTimeProposal(This,value) \
    ( (This)->lpVtbl->get_AllowNewTimeProposal(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_put_AllowNewTimeProposal(This,value) \
    ( (This)->lpVtbl->put_AllowNewTimeProposal(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_get_OnlineMeetingLink(This,value) \
    ( (This)->lpVtbl->get_OnlineMeetingLink(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_put_OnlineMeetingLink(This,value) \
    ( (This)->lpVtbl->put_OnlineMeetingLink(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_get_ReplyTime(This,value) \
    ( (This)->lpVtbl->get_ReplyTime(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_put_ReplyTime(This,value) \
    ( (This)->lpVtbl->put_ReplyTime(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_get_UserResponse(This,value) \
    ( (This)->lpVtbl->get_UserResponse(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_put_UserResponse(This,value) \
    ( (This)->lpVtbl->put_UserResponse(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_get_HasInvitees(This,value) \
    ( (This)->lpVtbl->get_HasInvitees(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_get_IsCanceledMeeting(This,value) \
    ( (This)->lpVtbl->get_IsCanceledMeeting(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_put_IsCanceledMeeting(This,value) \
    ( (This)->lpVtbl->put_IsCanceledMeeting(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_get_IsOrganizedByUser(This,value) \
    ( (This)->lpVtbl->get_IsOrganizedByUser(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_put_IsOrganizedByUser(This,value) \
    ( (This)->lpVtbl->put_IsOrganizedByUser(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointment3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.Appointment
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Appointments.IAppointment2
 *     Windows.ApplicationModel.Appointments.IAppointment
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointment3[] = L"Windows.ApplicationModel.Appointments.IAppointment3";
/* [object, uuid("BFCC45A9-8961-4991-934B-C48768E5A96C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ChangeNumber )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3 * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemoteChangeNumber )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3 * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RemoteChangeNumber )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3 * This,
        /* [in] */UINT64 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DetailsKind )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentDetailsKind * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DetailsKind )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3 * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentDetailsKind value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3_get_ChangeNumber(This,value) \
    ( (This)->lpVtbl->get_ChangeNumber(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3_get_RemoteChangeNumber(This,value) \
    ( (This)->lpVtbl->get_RemoteChangeNumber(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3_put_RemoteChangeNumber(This,value) \
    ( (This)->lpVtbl->put_RemoteChangeNumber(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3_get_DetailsKind(This,value) \
    ( (This)->lpVtbl->get_DetailsKind(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3_put_DetailsKind(This,value) \
    ( (This)->lpVtbl->put_DetailsKind(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentCalendar
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentCalendar
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentCalendar[] = L"Windows.ApplicationModel.Appointments.IAppointmentCalendar";
/* [object, uuid("5273819D-8339-3D4F-A02F-64084452BB5D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayColor )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocalId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsHidden )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OtherAppReadAccess )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentCalendarOtherAppReadAccess * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_OtherAppReadAccess )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentCalendarOtherAppReadAccess value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OtherAppWriteAccess )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentCalendarOtherAppWriteAccess * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_OtherAppWriteAccess )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentCalendarOtherAppWriteAccess value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SourceDisplayName )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SummaryCardView )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentSummaryCardView * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SummaryCardView )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentSummaryCardView value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindAppointmentsAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime rangeStart,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan rangeLength,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindAppointmentsAsyncWithOptions )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime rangeStart,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan rangeLength,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * options,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * * result
        );
    HRESULT ( STDMETHODCALLTYPE *FindExceptionsFromMasterAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
        /* [in] */__RPC__in HSTRING masterLocalId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindAllInstancesAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
        /* [in] */__RPC__in HSTRING masterLocalId,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime rangeStart,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan rangeLength,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindAllInstancesAsyncWithOptions )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
        /* [in] */__RPC__in HSTRING masterLocalId,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime rangeStart,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan rangeLength,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * pOptions,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
        /* [in] */__RPC__in HSTRING localId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetAppointmentInstanceAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
        /* [in] */__RPC__in HSTRING localId,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime instanceStartTime,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindUnexpandedAppointmentsAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindUnexpandedAppointmentsAsyncWithOptions )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * options,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * * result
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    HRESULT ( STDMETHODCALLTYPE *SaveAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
        /* [in] */__RPC__in HSTRING localId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteAppointmentInstanceAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
        /* [in] */__RPC__in HSTRING localId,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime instanceStartTime,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    HRESULT ( STDMETHODCALLTYPE *SaveAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * pAppointment,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_get_DisplayColor(This,value) \
    ( (This)->lpVtbl->get_DisplayColor(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_put_DisplayName(This,value) \
    ( (This)->lpVtbl->put_DisplayName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_get_LocalId(This,value) \
    ( (This)->lpVtbl->get_LocalId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_get_IsHidden(This,value) \
    ( (This)->lpVtbl->get_IsHidden(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_get_OtherAppReadAccess(This,value) \
    ( (This)->lpVtbl->get_OtherAppReadAccess(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_put_OtherAppReadAccess(This,value) \
    ( (This)->lpVtbl->put_OtherAppReadAccess(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_get_OtherAppWriteAccess(This,value) \
    ( (This)->lpVtbl->get_OtherAppWriteAccess(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_put_OtherAppWriteAccess(This,value) \
    ( (This)->lpVtbl->put_OtherAppWriteAccess(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_get_SourceDisplayName(This,value) \
    ( (This)->lpVtbl->get_SourceDisplayName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_get_SummaryCardView(This,value) \
    ( (This)->lpVtbl->get_SummaryCardView(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_put_SummaryCardView(This,value) \
    ( (This)->lpVtbl->put_SummaryCardView(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_FindAppointmentsAsync(This,rangeStart,rangeLength,result) \
    ( (This)->lpVtbl->FindAppointmentsAsync(This,rangeStart,rangeLength,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_FindAppointmentsAsyncWithOptions(This,rangeStart,rangeLength,options,result) \
    ( (This)->lpVtbl->FindAppointmentsAsyncWithOptions(This,rangeStart,rangeLength,options,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_FindExceptionsFromMasterAsync(This,masterLocalId,value) \
    ( (This)->lpVtbl->FindExceptionsFromMasterAsync(This,masterLocalId,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_FindAllInstancesAsync(This,masterLocalId,rangeStart,rangeLength,value) \
    ( (This)->lpVtbl->FindAllInstancesAsync(This,masterLocalId,rangeStart,rangeLength,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_FindAllInstancesAsyncWithOptions(This,masterLocalId,rangeStart,rangeLength,pOptions,value) \
    ( (This)->lpVtbl->FindAllInstancesAsyncWithOptions(This,masterLocalId,rangeStart,rangeLength,pOptions,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_GetAppointmentAsync(This,localId,result) \
    ( (This)->lpVtbl->GetAppointmentAsync(This,localId,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_GetAppointmentInstanceAsync(This,localId,instanceStartTime,result) \
    ( (This)->lpVtbl->GetAppointmentInstanceAsync(This,localId,instanceStartTime,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_FindUnexpandedAppointmentsAsync(This,result) \
    ( (This)->lpVtbl->FindUnexpandedAppointmentsAsync(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_FindUnexpandedAppointmentsAsyncWithOptions(This,options,result) \
    ( (This)->lpVtbl->FindUnexpandedAppointmentsAsyncWithOptions(This,options,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_DeleteAsync(This,asyncAction) \
    ( (This)->lpVtbl->DeleteAsync(This,asyncAction) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_SaveAsync(This,asyncAction) \
    ( (This)->lpVtbl->SaveAsync(This,asyncAction) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_DeleteAppointmentAsync(This,localId,asyncAction) \
    ( (This)->lpVtbl->DeleteAppointmentAsync(This,localId,asyncAction) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_DeleteAppointmentInstanceAsync(This,localId,instanceStartTime,asyncAction) \
    ( (This)->lpVtbl->DeleteAppointmentInstanceAsync(This,localId,instanceStartTime,asyncAction) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_SaveAppointmentAsync(This,pAppointment,asyncAction) \
    ( (This)->lpVtbl->SaveAppointmentAsync(This,pAppointment,asyncAction) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentCalendar2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentCalendar
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Appointments.IAppointmentCalendar
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentCalendar2[] = L"Windows.ApplicationModel.Appointments.IAppointmentCalendar2";
/* [object, uuid("18E7E422-2467-4E1C-A459-D8A29303D092"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SyncManager )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemoteId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RemoteId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DisplayColor )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsHidden )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UserDataAccountId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanCreateOrUpdateAppointments )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CanCreateOrUpdateAppointments )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanCancelMeetings )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CanCancelMeetings )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanForwardMeetings )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CanForwardMeetings )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanProposeNewTimeForMeetings )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CanProposeNewTimeForMeetings )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanUpdateMeetingResponses )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CanUpdateMeetingResponses )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanNotifyInvitees )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CanNotifyInvitees )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MustNofityInvitees )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MustNofityInvitees )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
        /* [in] */boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *TryCreateOrUpdateAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
        /* [in] */boolean notifyInvitees,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryCancelMeetingAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * meeting,
        /* [in] */__RPC__in HSTRING subject,
        /* [in] */__RPC__in HSTRING comment,
        /* [in] */boolean notifyInvitees,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryForwardMeetingAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * meeting,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * invitees,
        /* [in] */__RPC__in HSTRING subject,
        /* [in] */__RPC__in HSTRING forwardHeader,
        /* [in] */__RPC__in HSTRING comment,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryProposeNewTimeForMeetingAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * meeting,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime newStartTime,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan newDuration,
        /* [in] */__RPC__in HSTRING subject,
        /* [in] */__RPC__in HSTRING comment,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryUpdateMeetingResponseAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * meeting,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantResponse response,
        /* [in] */__RPC__in HSTRING subject,
        /* [in] */__RPC__in HSTRING comment,
        /* [in] */boolean sendUpdate,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_get_SyncManager(This,value) \
    ( (This)->lpVtbl->get_SyncManager(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_get_RemoteId(This,value) \
    ( (This)->lpVtbl->get_RemoteId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_put_RemoteId(This,value) \
    ( (This)->lpVtbl->put_RemoteId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_put_DisplayColor(This,value) \
    ( (This)->lpVtbl->put_DisplayColor(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_put_IsHidden(This,value) \
    ( (This)->lpVtbl->put_IsHidden(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_get_UserDataAccountId(This,value) \
    ( (This)->lpVtbl->get_UserDataAccountId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_get_CanCreateOrUpdateAppointments(This,value) \
    ( (This)->lpVtbl->get_CanCreateOrUpdateAppointments(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_put_CanCreateOrUpdateAppointments(This,value) \
    ( (This)->lpVtbl->put_CanCreateOrUpdateAppointments(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_get_CanCancelMeetings(This,value) \
    ( (This)->lpVtbl->get_CanCancelMeetings(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_put_CanCancelMeetings(This,value) \
    ( (This)->lpVtbl->put_CanCancelMeetings(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_get_CanForwardMeetings(This,value) \
    ( (This)->lpVtbl->get_CanForwardMeetings(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_put_CanForwardMeetings(This,value) \
    ( (This)->lpVtbl->put_CanForwardMeetings(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_get_CanProposeNewTimeForMeetings(This,value) \
    ( (This)->lpVtbl->get_CanProposeNewTimeForMeetings(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_put_CanProposeNewTimeForMeetings(This,value) \
    ( (This)->lpVtbl->put_CanProposeNewTimeForMeetings(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_get_CanUpdateMeetingResponses(This,value) \
    ( (This)->lpVtbl->get_CanUpdateMeetingResponses(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_put_CanUpdateMeetingResponses(This,value) \
    ( (This)->lpVtbl->put_CanUpdateMeetingResponses(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_get_CanNotifyInvitees(This,value) \
    ( (This)->lpVtbl->get_CanNotifyInvitees(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_put_CanNotifyInvitees(This,value) \
    ( (This)->lpVtbl->put_CanNotifyInvitees(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_get_MustNofityInvitees(This,value) \
    ( (This)->lpVtbl->get_MustNofityInvitees(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_put_MustNofityInvitees(This,value) \
    ( (This)->lpVtbl->put_MustNofityInvitees(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_TryCreateOrUpdateAppointmentAsync(This,appointment,notifyInvitees,result) \
    ( (This)->lpVtbl->TryCreateOrUpdateAppointmentAsync(This,appointment,notifyInvitees,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_TryCancelMeetingAsync(This,meeting,subject,comment,notifyInvitees,result) \
    ( (This)->lpVtbl->TryCancelMeetingAsync(This,meeting,subject,comment,notifyInvitees,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_TryForwardMeetingAsync(This,meeting,invitees,subject,forwardHeader,comment,result) \
    ( (This)->lpVtbl->TryForwardMeetingAsync(This,meeting,invitees,subject,forwardHeader,comment,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_TryProposeNewTimeForMeetingAsync(This,meeting,newStartTime,newDuration,subject,comment,result) \
    ( (This)->lpVtbl->TryProposeNewTimeForMeetingAsync(This,meeting,newStartTime,newDuration,subject,comment,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_TryUpdateMeetingResponseAsync(This,meeting,response,subject,comment,sendUpdate,result) \
    ( (This)->lpVtbl->TryUpdateMeetingResponseAsync(This,meeting,response,subject,comment,sendUpdate,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentCalendar3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentCalendar
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentCalendar3[] = L"Windows.ApplicationModel.Appointments.IAppointmentCalendar3";
/* [object, uuid("EB23D22B-A685-42AE-8495-B3119ADB4167"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RegisterSyncManagerAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3_RegisterSyncManagerAsync(This,result) \
    ( (This)->lpVtbl->RegisterSyncManagerAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentCalendarSyncManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentCalendarSyncManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager[] = L"Windows.ApplicationModel.Appointments.IAppointmentCalendarSyncManager";
/* [object, uuid("2B21B3A0-4AFF-4392-BC5F-5645FFCFFB17"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentCalendarSyncStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LastSuccessfulSyncTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LastAttemptedSyncTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    HRESULT ( STDMETHODCALLTYPE *SyncAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_SyncStatusChanged )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_SyncStatusChanged )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManagerVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager_get_LastSuccessfulSyncTime(This,value) \
    ( (This)->lpVtbl->get_LastSuccessfulSyncTime(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager_get_LastAttemptedSyncTime(This,value) \
    ( (This)->lpVtbl->get_LastAttemptedSyncTime(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager_SyncAsync(This,result) \
    ( (This)->lpVtbl->SyncAsync(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager_add_SyncStatusChanged(This,handler,token) \
    ( (This)->lpVtbl->add_SyncStatusChanged(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager_remove_SyncStatusChanged(This,token) \
    ( (This)->lpVtbl->remove_SyncStatusChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentCalendarSyncManager2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentCalendarSyncManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager2[] = L"Windows.ApplicationModel.Appointments.IAppointmentCalendarSyncManager2";
/* [object, uuid("647528AD-0D29-4C7C-AAA7-BF996805537C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Status )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2 * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentCalendarSyncStatus value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LastSuccessfulSyncTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2 * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LastAttemptedSyncTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2 * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2_put_Status(This,value) \
    ( (This)->lpVtbl->put_Status(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2_put_LastSuccessfulSyncTime(This,value) \
    ( (This)->lpVtbl->put_LastSuccessfulSyncTime(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2_put_LastAttemptedSyncTime(This,value) \
    ( (This)->lpVtbl->put_LastAttemptedSyncTime(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentConflictResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentConflictResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentConflictResult[] = L"Windows.ApplicationModel.Appointments.IAppointmentConflictResult";
/* [object, uuid("D5CDF0BE-2F2F-3B7D-AF0A-A7E20F3A46E3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentConflictType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Date )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResultVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult_get_Date(This,value) \
    ( (This)->lpVtbl->get_Date(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentException
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentException
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentException[] = L"Windows.ApplicationModel.Appointments.IAppointmentException";
/* [object, uuid("A2076767-16F6-4BCE-9F5A-8600B8019FCB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentExceptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Appointment )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExceptionProperties )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsDeleted )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentExceptionVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentExceptionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException_get_Appointment(This,value) \
    ( (This)->lpVtbl->get_Appointment(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException_get_ExceptionProperties(This,value) \
    ( (This)->lpVtbl->get_ExceptionProperties(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException_get_IsDeleted(This,value) \
    ( (This)->lpVtbl->get_IsDeleted(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentInvitee
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentInvitee
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Appointments.IAppointmentParticipant
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentInvitee[] = L"Windows.ApplicationModel.Appointments.IAppointmentInvitee";
/* [object, uuid("13BF0796-9842-495B-B0E7-EF8F79C0701D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInviteeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Role )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantRole * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Role )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantRole value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Response )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantResponse * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Response )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantResponse value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInviteeVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInviteeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee_get_Role(This,value) \
    ( (This)->lpVtbl->get_Role(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee_put_Role(This,value) \
    ( (This)->lpVtbl->put_Role(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee_get_Response(This,value) \
    ( (This)->lpVtbl->get_Response(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee_put_Response(This,value) \
    ( (This)->lpVtbl->put_Response(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentManagerForUser
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentManagerForUser
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser[] = L"Windows.ApplicationModel.Appointments.IAppointmentManagerForUser";
/* [object, uuid("70261423-73CC-4660-B318-B01365302A03"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUserVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowAddAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowAddAppointmentWithPlacementAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [in] */__x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowReplaceAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
        /* [in] */__RPC__in HSTRING appointmentId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowReplaceAppointmentWithPlacementAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
        /* [in] */__RPC__in HSTRING appointmentId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [in] */__x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowReplaceAppointmentWithPlacementAndDateAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
        /* [in] */__RPC__in HSTRING appointmentId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [in] */__x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime instanceStartDate,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowRemoveAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
        /* [in] */__RPC__in HSTRING appointmentId,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowRemoveAppointmentWithPlacementAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
        /* [in] */__RPC__in HSTRING appointmentId,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [in] */__x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowRemoveAppointmentWithPlacementAndDateAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
        /* [in] */__RPC__in HSTRING appointmentId,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [in] */__x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime instanceStartDate,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ShowTimeFrameAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime timeToShow,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan duration,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowAppointmentDetailsAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
        /* [in] */__RPC__in HSTRING appointmentId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowAppointmentDetailsWithDateAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
        /* [in] */__RPC__in HSTRING appointmentId,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime instanceStartDate,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ShowEditNewAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RequestStoreAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentStoreAccessType options,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUserVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUserVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_ShowAddAppointmentAsync(This,appointment,selection,result) \
    ( (This)->lpVtbl->ShowAddAppointmentAsync(This,appointment,selection,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_ShowAddAppointmentWithPlacementAsync(This,appointment,selection,preferredPlacement,result) \
    ( (This)->lpVtbl->ShowAddAppointmentWithPlacementAsync(This,appointment,selection,preferredPlacement,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_ShowReplaceAppointmentAsync(This,appointmentId,appointment,selection,result) \
    ( (This)->lpVtbl->ShowReplaceAppointmentAsync(This,appointmentId,appointment,selection,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_ShowReplaceAppointmentWithPlacementAsync(This,appointmentId,appointment,selection,preferredPlacement,result) \
    ( (This)->lpVtbl->ShowReplaceAppointmentWithPlacementAsync(This,appointmentId,appointment,selection,preferredPlacement,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_ShowReplaceAppointmentWithPlacementAndDateAsync(This,appointmentId,appointment,selection,preferredPlacement,instanceStartDate,result) \
    ( (This)->lpVtbl->ShowReplaceAppointmentWithPlacementAndDateAsync(This,appointmentId,appointment,selection,preferredPlacement,instanceStartDate,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_ShowRemoveAppointmentAsync(This,appointmentId,selection,result) \
    ( (This)->lpVtbl->ShowRemoveAppointmentAsync(This,appointmentId,selection,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_ShowRemoveAppointmentWithPlacementAsync(This,appointmentId,selection,preferredPlacement,result) \
    ( (This)->lpVtbl->ShowRemoveAppointmentWithPlacementAsync(This,appointmentId,selection,preferredPlacement,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_ShowRemoveAppointmentWithPlacementAndDateAsync(This,appointmentId,selection,preferredPlacement,instanceStartDate,result) \
    ( (This)->lpVtbl->ShowRemoveAppointmentWithPlacementAndDateAsync(This,appointmentId,selection,preferredPlacement,instanceStartDate,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_ShowTimeFrameAsync(This,timeToShow,duration,result) \
    ( (This)->lpVtbl->ShowTimeFrameAsync(This,timeToShow,duration,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_ShowAppointmentDetailsAsync(This,appointmentId,result) \
    ( (This)->lpVtbl->ShowAppointmentDetailsAsync(This,appointmentId,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_ShowAppointmentDetailsWithDateAsync(This,appointmentId,instanceStartDate,result) \
    ( (This)->lpVtbl->ShowAppointmentDetailsWithDateAsync(This,appointmentId,instanceStartDate,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_ShowEditNewAppointmentAsync(This,appointment,result) \
    ( (This)->lpVtbl->ShowEditNewAppointmentAsync(This,appointment,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_RequestStoreAsync(This,options,result) \
    ( (This)->lpVtbl->RequestStoreAsync(This,options,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_get_User(This,value) \
    ( (This)->lpVtbl->get_User(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics[] = L"Windows.ApplicationModel.Appointments.IAppointmentManagerStatics";
/* [object, uuid("3A30FA01-5C40-499D-B33F-A43050F74FC4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowAddAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowAddAppointmentWithPlacementAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [in] */__x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowReplaceAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics * This,
        /* [in] */__RPC__in HSTRING appointmentId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowReplaceAppointmentWithPlacementAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics * This,
        /* [in] */__RPC__in HSTRING appointmentId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [in] */__x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowReplaceAppointmentWithPlacementAndDateAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics * This,
        /* [in] */__RPC__in HSTRING appointmentId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [in] */__x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime instanceStartDate,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowRemoveAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics * This,
        /* [in] */__RPC__in HSTRING appointmentId,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowRemoveAppointmentWithPlacementAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics * This,
        /* [in] */__RPC__in HSTRING appointmentId,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [in] */__x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowRemoveAppointmentWithPlacementAndDateAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics * This,
        /* [in] */__RPC__in HSTRING appointmentId,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [in] */__x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime instanceStartDate,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ShowTimeFrameAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime timeToShow,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan duration,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics_ShowAddAppointmentAsync(This,appointment,selection,operation) \
    ( (This)->lpVtbl->ShowAddAppointmentAsync(This,appointment,selection,operation) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics_ShowAddAppointmentWithPlacementAsync(This,appointment,selection,preferredPlacement,operation) \
    ( (This)->lpVtbl->ShowAddAppointmentWithPlacementAsync(This,appointment,selection,preferredPlacement,operation) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics_ShowReplaceAppointmentAsync(This,appointmentId,appointment,selection,operation) \
    ( (This)->lpVtbl->ShowReplaceAppointmentAsync(This,appointmentId,appointment,selection,operation) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics_ShowReplaceAppointmentWithPlacementAsync(This,appointmentId,appointment,selection,preferredPlacement,operation) \
    ( (This)->lpVtbl->ShowReplaceAppointmentWithPlacementAsync(This,appointmentId,appointment,selection,preferredPlacement,operation) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics_ShowReplaceAppointmentWithPlacementAndDateAsync(This,appointmentId,appointment,selection,preferredPlacement,instanceStartDate,operation) \
    ( (This)->lpVtbl->ShowReplaceAppointmentWithPlacementAndDateAsync(This,appointmentId,appointment,selection,preferredPlacement,instanceStartDate,operation) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics_ShowRemoveAppointmentAsync(This,appointmentId,selection,operation) \
    ( (This)->lpVtbl->ShowRemoveAppointmentAsync(This,appointmentId,selection,operation) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics_ShowRemoveAppointmentWithPlacementAsync(This,appointmentId,selection,preferredPlacement,operation) \
    ( (This)->lpVtbl->ShowRemoveAppointmentWithPlacementAsync(This,appointmentId,selection,preferredPlacement,operation) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics_ShowRemoveAppointmentWithPlacementAndDateAsync(This,appointmentId,selection,preferredPlacement,instanceStartDate,operation) \
    ( (This)->lpVtbl->ShowRemoveAppointmentWithPlacementAndDateAsync(This,appointmentId,selection,preferredPlacement,instanceStartDate,operation) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics_ShowTimeFrameAsync(This,timeToShow,duration,asyncAction) \
    ( (This)->lpVtbl->ShowTimeFrameAsync(This,timeToShow,duration,asyncAction) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentManagerStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics2[] = L"Windows.ApplicationModel.Appointments.IAppointmentManagerStatics2";
/* [object, uuid("0A81F60D-D04F-4034-AF72-A36573B45FF0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowAppointmentDetailsAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2 * This,
        /* [in] */__RPC__in HSTRING appointmentId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowAppointmentDetailsWithDateAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2 * This,
        /* [in] */__RPC__in HSTRING appointmentId,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime instanceStartDate,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    HRESULT ( STDMETHODCALLTYPE *ShowEditNewAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestStoreAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2 * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentStoreAccessType options,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2_ShowAppointmentDetailsAsync(This,appointmentId,asyncAction) \
    ( (This)->lpVtbl->ShowAppointmentDetailsAsync(This,appointmentId,asyncAction) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2_ShowAppointmentDetailsWithDateAsync(This,appointmentId,instanceStartDate,asyncAction) \
    ( (This)->lpVtbl->ShowAppointmentDetailsWithDateAsync(This,appointmentId,instanceStartDate,asyncAction) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2_ShowEditNewAppointmentAsync(This,appointment,operation) \
    ( (This)->lpVtbl->ShowEditNewAppointmentAsync(This,appointment,operation) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2_RequestStoreAsync(This,options,operation) \
    ( (This)->lpVtbl->RequestStoreAsync(This,options,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentManagerStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics3[] = L"Windows.ApplicationModel.Appointments.IAppointmentManagerStatics3";
/* [object, uuid("2F9AE09C-B34C-4DC7-A35D-CAFD88AE3EC6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3_GetForUser(This,user,result) \
    ( (This)->lpVtbl->GetForUser(This,user,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentParticipant
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentParticipant[] = L"Windows.ApplicationModel.Appointments.IAppointmentParticipant";
/* [object, uuid("615E2902-9718-467B-83FB-B293A19121DE"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipantVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Address )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Address )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipantVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipantVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant_put_DisplayName(This,value) \
    ( (This)->lpVtbl->put_DisplayName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant_get_Address(This,value) \
    ( (This)->lpVtbl->get_Address(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant_put_Address(This,value) \
    ( (This)->lpVtbl->put_Address(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentPropertiesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics[] = L"Windows.ApplicationModel.Appointments.IAppointmentPropertiesStatics";
/* [object, uuid("25141FE9-68AE-3AAE-855F-BC4441CAA234"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Subject )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Location )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Reminder )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BusyStatus )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Sensitivity )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OriginalStartTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsResponseRequested )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AllowNewTimeProposal )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AllDay )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Details )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OnlineMeetingLink )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReplyTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Organizer )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UserResponse )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasInvitees )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsCanceledMeeting )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsOrganizedByUser )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Recurrence )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Invitees )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DefaultProperties )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_get_Subject(This,value) \
    ( (This)->lpVtbl->get_Subject(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_get_Location(This,value) \
    ( (This)->lpVtbl->get_Location(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_get_StartTime(This,value) \
    ( (This)->lpVtbl->get_StartTime(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_get_Duration(This,value) \
    ( (This)->lpVtbl->get_Duration(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_get_Reminder(This,value) \
    ( (This)->lpVtbl->get_Reminder(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_get_BusyStatus(This,value) \
    ( (This)->lpVtbl->get_BusyStatus(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_get_Sensitivity(This,value) \
    ( (This)->lpVtbl->get_Sensitivity(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_get_OriginalStartTime(This,value) \
    ( (This)->lpVtbl->get_OriginalStartTime(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_get_IsResponseRequested(This,value) \
    ( (This)->lpVtbl->get_IsResponseRequested(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_get_AllowNewTimeProposal(This,value) \
    ( (This)->lpVtbl->get_AllowNewTimeProposal(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_get_AllDay(This,value) \
    ( (This)->lpVtbl->get_AllDay(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_get_Details(This,value) \
    ( (This)->lpVtbl->get_Details(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_get_OnlineMeetingLink(This,value) \
    ( (This)->lpVtbl->get_OnlineMeetingLink(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_get_ReplyTime(This,value) \
    ( (This)->lpVtbl->get_ReplyTime(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_get_Organizer(This,value) \
    ( (This)->lpVtbl->get_Organizer(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_get_UserResponse(This,value) \
    ( (This)->lpVtbl->get_UserResponse(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_get_HasInvitees(This,value) \
    ( (This)->lpVtbl->get_HasInvitees(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_get_IsCanceledMeeting(This,value) \
    ( (This)->lpVtbl->get_IsCanceledMeeting(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_get_IsOrganizedByUser(This,value) \
    ( (This)->lpVtbl->get_IsOrganizedByUser(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_get_Recurrence(This,value) \
    ( (This)->lpVtbl->get_Recurrence(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_get_Uri(This,value) \
    ( (This)->lpVtbl->get_Uri(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_get_Invitees(This,value) \
    ( (This)->lpVtbl->get_Invitees(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_get_DefaultProperties(This,value) \
    ( (This)->lpVtbl->get_DefaultProperties(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentPropertiesStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentProperties
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Appointments.IAppointmentPropertiesStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics2[] = L"Windows.ApplicationModel.Appointments.IAppointmentPropertiesStatics2";
/* [object, uuid("DFFC434B-B017-45DD-8AF5-D163D10801BB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ChangeNumber )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemoteChangeNumber )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DetailsKind )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2_get_ChangeNumber(This,value) \
    ( (This)->lpVtbl->get_ChangeNumber(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2_get_RemoteChangeNumber(This,value) \
    ( (This)->lpVtbl->get_RemoteChangeNumber(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2_get_DetailsKind(This,value) \
    ( (This)->lpVtbl->get_DetailsKind(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentRecurrence
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentRecurrence
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentRecurrence[] = L"Windows.ApplicationModel.Appointments.IAppointmentRecurrence";
/* [object, uuid("D87B3E83-15A6-487B-B959-0C361E60E954"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Unit )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentRecurrenceUnit * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Unit )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentRecurrenceUnit value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Occurrences )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Occurrences )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
        /* [in] */__RPC__in_opt __FIReference_1_UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Until )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Until )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Interval )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Interval )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DaysOfWeek )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentDaysOfWeek * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DaysOfWeek )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentDaysOfWeek value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WeekOfMonth )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentWeekOfMonth * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_WeekOfMonth )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentWeekOfMonth value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Month )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Month )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Day )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Day )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
        /* [in] */UINT32 value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrenceVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_get_Unit(This,value) \
    ( (This)->lpVtbl->get_Unit(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_put_Unit(This,value) \
    ( (This)->lpVtbl->put_Unit(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_get_Occurrences(This,value) \
    ( (This)->lpVtbl->get_Occurrences(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_put_Occurrences(This,value) \
    ( (This)->lpVtbl->put_Occurrences(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_get_Until(This,value) \
    ( (This)->lpVtbl->get_Until(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_put_Until(This,value) \
    ( (This)->lpVtbl->put_Until(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_get_Interval(This,value) \
    ( (This)->lpVtbl->get_Interval(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_put_Interval(This,value) \
    ( (This)->lpVtbl->put_Interval(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_get_DaysOfWeek(This,value) \
    ( (This)->lpVtbl->get_DaysOfWeek(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_put_DaysOfWeek(This,value) \
    ( (This)->lpVtbl->put_DaysOfWeek(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_get_WeekOfMonth(This,value) \
    ( (This)->lpVtbl->get_WeekOfMonth(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_put_WeekOfMonth(This,value) \
    ( (This)->lpVtbl->put_WeekOfMonth(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_get_Month(This,value) \
    ( (This)->lpVtbl->get_Month(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_put_Month(This,value) \
    ( (This)->lpVtbl->put_Month(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_get_Day(This,value) \
    ( (This)->lpVtbl->get_Day(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_put_Day(This,value) \
    ( (This)->lpVtbl->put_Day(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentRecurrence2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentRecurrence
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Appointments.IAppointmentRecurrence
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentRecurrence2[] = L"Windows.ApplicationModel.Appointments.IAppointmentRecurrence2";
/* [object, uuid("3DF3A2E0-05A7-4F50-9F86-B03F9436254D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RecurrenceType )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CRecurrenceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TimeZone )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TimeZone )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2 * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2_get_RecurrenceType(This,value) \
    ( (This)->lpVtbl->get_RecurrenceType(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2_get_TimeZone(This,value) \
    ( (This)->lpVtbl->get_TimeZone(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2_put_TimeZone(This,value) \
    ( (This)->lpVtbl->put_TimeZone(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentRecurrence3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentRecurrence
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Appointments.IAppointmentRecurrence2
 *     Windows.ApplicationModel.Appointments.IAppointmentRecurrence
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentRecurrence3[] = L"Windows.ApplicationModel.Appointments.IAppointmentRecurrence3";
/* [object, uuid("89FF96D9-DA4D-4A17-8DD2-1CEBC2B5FF9D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CalendarIdentifier )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3_get_CalendarIdentifier(This,value) \
    ( (This)->lpVtbl->get_CalendarIdentifier(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentStore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentStore
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStore[] = L"Windows.ApplicationModel.Appointments.IAppointmentStore";
/* [object, uuid("A461918C-7A47-4D96-96C9-15CD8A05A735"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ChangeTracker )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateAppointmentCalendarAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetAppointmentCalendarAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
        /* [in] */__RPC__in HSTRING calendarId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
        /* [in] */__RPC__in HSTRING localId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetAppointmentInstanceAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
        /* [in] */__RPC__in HSTRING localId,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime instanceStartTime,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindAppointmentCalendarsAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindAppointmentCalendarsAsyncWithOptions )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CAppointments_CFindAppointmentCalendarsOptions options,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindAppointmentsAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime rangeStart,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan rangeLength,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindAppointmentsAsyncWithOptions )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime rangeStart,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan rangeLength,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * options,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindConflictAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindConflictAsyncWithInstanceStart )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime instanceStartTime,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *MoveAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * destinationCalendar,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    HRESULT ( STDMETHODCALLTYPE *ShowAddAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowReplaceAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
        /* [in] */__RPC__in HSTRING localId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowReplaceAppointmentWithPlacementAndDateAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
        /* [in] */__RPC__in HSTRING localId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [in] */__x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime instanceStartDate,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowRemoveAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
        /* [in] */__RPC__in HSTRING localId,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowRemoveAppointmentWithPlacementAndDateAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
        /* [in] */__RPC__in HSTRING localId,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [in] */__x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime instanceStartDate,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowAppointmentDetailsAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
        /* [in] */__RPC__in HSTRING localId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowAppointmentDetailsWithDateAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
        /* [in] */__RPC__in HSTRING localId,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime instanceStartDate,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    HRESULT ( STDMETHODCALLTYPE *ShowEditNewAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FindLocalIdsFromRoamingIdAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
        /* [in] */__RPC__in HSTRING roamingId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_HSTRING * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_get_ChangeTracker(This,value) \
    ( (This)->lpVtbl->get_ChangeTracker(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_CreateAppointmentCalendarAsync(This,name,operation) \
    ( (This)->lpVtbl->CreateAppointmentCalendarAsync(This,name,operation) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_GetAppointmentCalendarAsync(This,calendarId,result) \
    ( (This)->lpVtbl->GetAppointmentCalendarAsync(This,calendarId,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_GetAppointmentAsync(This,localId,result) \
    ( (This)->lpVtbl->GetAppointmentAsync(This,localId,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_GetAppointmentInstanceAsync(This,localId,instanceStartTime,result) \
    ( (This)->lpVtbl->GetAppointmentInstanceAsync(This,localId,instanceStartTime,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_FindAppointmentCalendarsAsync(This,result) \
    ( (This)->lpVtbl->FindAppointmentCalendarsAsync(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_FindAppointmentCalendarsAsyncWithOptions(This,options,result) \
    ( (This)->lpVtbl->FindAppointmentCalendarsAsyncWithOptions(This,options,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_FindAppointmentsAsync(This,rangeStart,rangeLength,result) \
    ( (This)->lpVtbl->FindAppointmentsAsync(This,rangeStart,rangeLength,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_FindAppointmentsAsyncWithOptions(This,rangeStart,rangeLength,options,result) \
    ( (This)->lpVtbl->FindAppointmentsAsyncWithOptions(This,rangeStart,rangeLength,options,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_FindConflictAsync(This,appointment,result) \
    ( (This)->lpVtbl->FindConflictAsync(This,appointment,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_FindConflictAsyncWithInstanceStart(This,appointment,instanceStartTime,result) \
    ( (This)->lpVtbl->FindConflictAsyncWithInstanceStart(This,appointment,instanceStartTime,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_MoveAppointmentAsync(This,appointment,destinationCalendar,asyncAction) \
    ( (This)->lpVtbl->MoveAppointmentAsync(This,appointment,destinationCalendar,asyncAction) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_ShowAddAppointmentAsync(This,appointment,selection,operation) \
    ( (This)->lpVtbl->ShowAddAppointmentAsync(This,appointment,selection,operation) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_ShowReplaceAppointmentAsync(This,localId,appointment,selection,operation) \
    ( (This)->lpVtbl->ShowReplaceAppointmentAsync(This,localId,appointment,selection,operation) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_ShowReplaceAppointmentWithPlacementAndDateAsync(This,localId,appointment,selection,preferredPlacement,instanceStartDate,operation) \
    ( (This)->lpVtbl->ShowReplaceAppointmentWithPlacementAndDateAsync(This,localId,appointment,selection,preferredPlacement,instanceStartDate,operation) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_ShowRemoveAppointmentAsync(This,localId,selection,operation) \
    ( (This)->lpVtbl->ShowRemoveAppointmentAsync(This,localId,selection,operation) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_ShowRemoveAppointmentWithPlacementAndDateAsync(This,localId,selection,preferredPlacement,instanceStartDate,operation) \
    ( (This)->lpVtbl->ShowRemoveAppointmentWithPlacementAndDateAsync(This,localId,selection,preferredPlacement,instanceStartDate,operation) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_ShowAppointmentDetailsAsync(This,localId,asyncAction) \
    ( (This)->lpVtbl->ShowAppointmentDetailsAsync(This,localId,asyncAction) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_ShowAppointmentDetailsWithDateAsync(This,localId,instanceStartDate,asyncAction) \
    ( (This)->lpVtbl->ShowAppointmentDetailsWithDateAsync(This,localId,instanceStartDate,asyncAction) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_ShowEditNewAppointmentAsync(This,appointment,operation) \
    ( (This)->lpVtbl->ShowEditNewAppointmentAsync(This,appointment,operation) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_FindLocalIdsFromRoamingIdAsync(This,roamingId,operation) \
    ( (This)->lpVtbl->FindLocalIdsFromRoamingIdAsync(This,roamingId,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentStore2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentStore
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Appointments.IAppointmentStore
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStore2[] = L"Windows.ApplicationModel.Appointments.IAppointmentStore2";
/* [object, uuid("25C48C20-1C41-424F-8084-67C1CFE0A854"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_StoreChanged )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs * pHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * pToken
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_StoreChanged )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateAppointmentCalendarInAccountAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2 * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in HSTRING userDataAccountId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2_add_StoreChanged(This,pHandler,pToken) \
    ( (This)->lpVtbl->add_StoreChanged(This,pHandler,pToken) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2_remove_StoreChanged(This,token) \
    ( (This)->lpVtbl->remove_StoreChanged(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2_CreateAppointmentCalendarInAccountAsync(This,name,userDataAccountId,operation) \
    ( (This)->lpVtbl->CreateAppointmentCalendarInAccountAsync(This,name,userDataAccountId,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentStore3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentStore
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStore3[] = L"Windows.ApplicationModel.Appointments.IAppointmentStore3";
/* [object, uuid("4251940B-B078-470A-9A40-C2E01761F72F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetChangeTracker )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3 * This,
        /* [in] */__RPC__in HSTRING identity,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3_GetChangeTracker(This,identity,result) \
    ( (This)->lpVtbl->GetChangeTracker(This,identity,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentStoreChange
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentStoreChange
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStoreChange[] = L"Windows.ApplicationModel.Appointments.IAppointmentStoreChange";
/* [object, uuid("A5A6E035-0A33-3654-8463-B543E90C3B79"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Appointment )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ChangeType )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentStoreChangeType * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange_get_Appointment(This,value) \
    ( (This)->lpVtbl->get_Appointment(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange_get_ChangeType(This,value) \
    ( (This)->lpVtbl->get_ChangeType(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentStoreChange2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentStoreChange
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Appointments.IAppointmentStoreChange
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStoreChange2[] = L"Windows.ApplicationModel.Appointments.IAppointmentStoreChange2";
/* [object, uuid("B37D0DCE-5211-4402-A608-A96FE70B8EE2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppointmentCalendar )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2_get_AppointmentCalendar(This,value) \
    ( (This)->lpVtbl->get_AppointmentCalendar(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentStoreChangeReader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentStoreChangeReader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeReader[] = L"Windows.ApplicationModel.Appointments.IAppointmentStoreChangeReader";
/* [object, uuid("8B2409F1-65F3-42A0-961D-4C209BF30370"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ReadBatchAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * * result
        );
    HRESULT ( STDMETHODCALLTYPE *AcceptChanges )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader * This
        );
    HRESULT ( STDMETHODCALLTYPE *AcceptChangesThrough )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange * lastChangeToAccept
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReaderVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReaderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader_ReadBatchAsync(This,result) \
    ( (This)->lpVtbl->ReadBatchAsync(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader_AcceptChanges(This) \
    ( (This)->lpVtbl->AcceptChanges(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader_AcceptChangesThrough(This,lastChangeToAccept) \
    ( (This)->lpVtbl->AcceptChangesThrough(This,lastChangeToAccept) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentStoreChangeTracker
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentStoreChangeTracker
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeTracker[] = L"Windows.ApplicationModel.Appointments.IAppointmentStoreChangeTracker";
/* [object, uuid("1B25F4B1-8ECE-4F17-93C8-E6412458FD5C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTrackerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetChangeReader )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Enable )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker * This
        );
    HRESULT ( STDMETHODCALLTYPE *Reset )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTrackerVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTrackerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker_GetChangeReader(This,value) \
    ( (This)->lpVtbl->GetChangeReader(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker_Enable(This) \
    ( (This)->lpVtbl->Enable(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker_Reset(This) \
    ( (This)->lpVtbl->Reset(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentStoreChangeTracker2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentStoreChangeTracker
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeTracker2[] = L"Windows.ApplicationModel.Appointments.IAppointmentStoreChangeTracker2";
/* [object, uuid("B66AAF45-9542-4CF7-8550-EB370E0C08D3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsTracking )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2_get_IsTracking(This,value) \
    ( (This)->lpVtbl->get_IsTracking(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentStoreChangedDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentStoreChangedDeferral
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStoreChangedDeferral[] = L"Windows.ApplicationModel.Appointments.IAppointmentStoreChangedDeferral";
/* [object, uuid("4CB82026-FEDB-4BC3-9662-95A9BEFDF4DF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferralVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferralVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral_Complete(This) \
    ( (This)->lpVtbl->Complete(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentStoreChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentStoreChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStoreChangedEventArgs[] = L"Windows.ApplicationModel.Appointments.IAppointmentStoreChangedEventArgs";
/* [object, uuid("2285F8B9-0791-417E-BFEA-CC6D41636C8C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs_GetDeferral(This,result) \
    ( (This)->lpVtbl->GetDeferral(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IAppointmentStoreNotificationTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentStoreNotificationTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStoreNotificationTriggerDetails[] = L"Windows.ApplicationModel.Appointments.IAppointmentStoreNotificationTriggerDetails";
/* [object, uuid("9B33CB11-C301-421E-AFEF-047ECFA76ADB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetailsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.IFindAppointmentsOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.FindAppointmentsOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IFindAppointmentsOptions[] = L"Windows.ApplicationModel.Appointments.IFindAppointmentsOptions";
/* [object, uuid("55F7DC55-9942-3086-82B5-2CB29F64D5F5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CalendarIds )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FetchProperties )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IncludeHidden )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IncludeHidden )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxCount )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MaxCount )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * This,
        /* [in] */UINT32 value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptionsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptionsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions_get_CalendarIds(This,value) \
    ( (This)->lpVtbl->get_CalendarIds(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions_get_FetchProperties(This,value) \
    ( (This)->lpVtbl->get_FetchProperties(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions_get_IncludeHidden(This,value) \
    ( (This)->lpVtbl->get_IncludeHidden(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions_put_IncludeHidden(This,value) \
    ( (This)->lpVtbl->put_IncludeHidden(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions_get_MaxCount(This,value) \
    ( (This)->lpVtbl->get_MaxCount(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions_put_MaxCount(This,value) \
    ( (This)->lpVtbl->put_MaxCount(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.Appointment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointment ** Default Interface **
 *    Windows.ApplicationModel.Appointments.IAppointment2
 *    Windows.ApplicationModel.Appointments.IAppointment3
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_Appointment_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_Appointment_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_Appointment[] = L"Windows.ApplicationModel.Appointments.Appointment";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentCalendar
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointmentCalendar ** Default Interface **
 *    Windows.ApplicationModel.Appointments.IAppointmentCalendar2
 *    Windows.ApplicationModel.Appointments.IAppointmentCalendar3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentCalendar_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentCalendar_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentCalendar[] = L"Windows.ApplicationModel.Appointments.AppointmentCalendar";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentCalendarSyncManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointmentCalendarSyncManager ** Default Interface **
 *    Windows.ApplicationModel.Appointments.IAppointmentCalendarSyncManager2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentCalendarSyncManager_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentCalendarSyncManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentCalendarSyncManager[] = L"Windows.ApplicationModel.Appointments.AppointmentCalendarSyncManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentConflictResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointmentConflictResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentConflictResult_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentConflictResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentConflictResult[] = L"Windows.ApplicationModel.Appointments.AppointmentConflictResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentException
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointmentException ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentException_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentException_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentException[] = L"Windows.ApplicationModel.Appointments.AppointmentException";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentInvitee
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointmentInvitee ** Default Interface **
 *    Windows.ApplicationModel.Appointments.IAppointmentParticipant
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentInvitee_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentInvitee_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentInvitee[] = L"Windows.ApplicationModel.Appointments.AppointmentInvitee";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Appointments.IAppointmentManagerStatics3 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Appointments.IAppointmentManagerStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Appointments.IAppointmentManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentManager_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentManager[] = L"Windows.ApplicationModel.Appointments.AppointmentManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentManagerForUser
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointmentManagerForUser ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentManagerForUser_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentManagerForUser_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentManagerForUser[] = L"Windows.ApplicationModel.Appointments.AppointmentManagerForUser";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentOrganizer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointmentParticipant ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentOrganizer_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentOrganizer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentOrganizer[] = L"Windows.ApplicationModel.Appointments.AppointmentOrganizer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Appointments.IAppointmentPropertiesStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Appointments.IAppointmentPropertiesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentProperties_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentProperties[] = L"Windows.ApplicationModel.Appointments.AppointmentProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentRecurrence
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointmentRecurrence ** Default Interface **
 *    Windows.ApplicationModel.Appointments.IAppointmentRecurrence2
 *    Windows.ApplicationModel.Appointments.IAppointmentRecurrence3
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentRecurrence_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentRecurrence_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentRecurrence[] = L"Windows.ApplicationModel.Appointments.AppointmentRecurrence";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentStore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointmentStore ** Default Interface **
 *    Windows.ApplicationModel.Appointments.IAppointmentStore2
 *    Windows.ApplicationModel.Appointments.IAppointmentStore3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentStore_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentStore_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentStore[] = L"Windows.ApplicationModel.Appointments.AppointmentStore";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentStoreChange
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointmentStoreChange ** Default Interface **
 *    Windows.ApplicationModel.Appointments.IAppointmentStoreChange2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentStoreChange_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentStoreChange_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentStoreChange[] = L"Windows.ApplicationModel.Appointments.AppointmentStoreChange";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentStoreChangeReader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointmentStoreChangeReader ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentStoreChangeReader_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentStoreChangeReader_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentStoreChangeReader[] = L"Windows.ApplicationModel.Appointments.AppointmentStoreChangeReader";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentStoreChangeTracker
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointmentStoreChangeTracker ** Default Interface **
 *    Windows.ApplicationModel.Appointments.IAppointmentStoreChangeTracker2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentStoreChangeTracker_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentStoreChangeTracker_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentStoreChangeTracker[] = L"Windows.ApplicationModel.Appointments.AppointmentStoreChangeTracker";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentStoreChangedDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointmentStoreChangedDeferral ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentStoreChangedDeferral_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentStoreChangedDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentStoreChangedDeferral[] = L"Windows.ApplicationModel.Appointments.AppointmentStoreChangedDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentStoreChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointmentStoreChangedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentStoreChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentStoreChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentStoreChangedEventArgs[] = L"Windows.ApplicationModel.Appointments.AppointmentStoreChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentStoreNotificationTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IAppointmentStoreNotificationTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentStoreNotificationTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentStoreNotificationTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentStoreNotificationTriggerDetails[] = L"Windows.ApplicationModel.Appointments.AppointmentStoreNotificationTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.FindAppointmentsOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.IFindAppointmentsOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_FindAppointmentsOptions_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_FindAppointmentsOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_FindAppointmentsOptions[] = L"Windows.ApplicationModel.Appointments.FindAppointmentsOptions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eapplicationmodel2Eappointments_p_h__

#endif // __windows2Eapplicationmodel2Eappointments_h__
