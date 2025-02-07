/* Header file automatically generated from windows.devices.bluetooth.background.idl */
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
#ifndef __windows2Edevices2Ebluetooth2Ebackground_h__
#define __windows2Edevices2Ebluetooth2Ebackground_h__
#ifndef __windows2Edevices2Ebluetooth2Ebackground_p_h__
#define __windows2Edevices2Ebluetooth2Ebackground_p_h__


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
#include "Windows.Devices.Bluetooth.h"
#include "Windows.Devices.Bluetooth.Advertisement.h"
#include "Windows.Devices.Bluetooth.GenericAttributeProfile.h"
#include "Windows.Devices.Bluetooth.Rfcomm.h"
#include "Windows.Networking.Sockets.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Background {
                    interface IBluetoothLEAdvertisementPublisherTriggerDetails;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Background */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails ABI::Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Background {
                    interface IBluetoothLEAdvertisementWatcherTriggerDetails;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Background */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails ABI::Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementWatcherTriggerDetails

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Background {
                    interface IGattCharacteristicNotificationTriggerDetails;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Background */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails ABI::Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Background {
                    interface IGattCharacteristicNotificationTriggerDetails2;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Background */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2 ABI::Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails2

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Background {
                    interface IGattServiceProviderConnection;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Background */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection ABI::Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Background {
                    interface IGattServiceProviderConnectionStatics;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Background */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics ABI::Windows::Devices::Bluetooth::Background::IGattServiceProviderConnectionStatics

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Background {
                    interface IGattServiceProviderTriggerDetails;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Background */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails ABI::Windows::Devices::Bluetooth::Background::IGattServiceProviderTriggerDetails

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Background {
                    interface IRfcommConnectionTriggerDetails;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Background */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails ABI::Windows::Devices::Bluetooth::Background::IRfcommConnectionTriggerDetails

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Background {
                    interface IRfcommInboundConnectionInformation;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Background */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation ABI::Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Background {
                    interface IRfcommOutboundConnectionInformation;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Background */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation ABI::Windows::Devices::Bluetooth::Background::IRfcommOutboundConnectionInformation

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Background {
                    class GattServiceProviderConnection;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Background */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_USE
#define DEF___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c0246566-6d14-5ab2-8443-7439a1fc16e2"))
IKeyValuePair<HSTRING,ABI::Windows::Devices::Bluetooth::Background::GattServiceProviderConnection*> : IKeyValuePair_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Background::GattServiceProviderConnection*, ABI::Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Devices.Bluetooth.Background.GattServiceProviderConnection>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,ABI::Windows::Devices::Bluetooth::Background::GattServiceProviderConnection*> __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_t;
#define __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection*>
//#define __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6faf610e-cf1e-50e4-b1cc-f322fcf25036"))
IIterator<__FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Devices.Bluetooth.Background.GattServiceProviderConnection>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection*> __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("eb2cecfb-dd6c-5329-8e17-7fb80a84191f"))
IIterable<__FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Devices.Bluetooth.Background.GattServiceProviderConnection>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection*> __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_USE
#define DEF___FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("94eccb06-19ad-5e4f-953e-12c4aec054e9"))
IMapView<HSTRING,ABI::Windows::Devices::Bluetooth::Background::GattServiceProviderConnection*> : IMapView_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Background::GattServiceProviderConnection*, ABI::Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Windows.Devices.Bluetooth.Background.GattServiceProviderConnection>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,ABI::Windows::Devices::Bluetooth::Background::GattServiceProviderConnection*> __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_t;
#define __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection*>
//#define __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    class BluetoothLEAdvertisementReceivedEventArgs;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    interface IBluetoothLEAdvertisementReceivedEventArgs;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_USE
#define DEF___FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("096edbb8-ecef-5724-be62-240dcff6aca9"))
IIterator<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs*, ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementReceivedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs*> __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_t;
#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs*>
//#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_USE
#define DEF___FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("34f6412f-8314-5205-967c-db357c9a42a7"))
IIterable<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs*, ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementReceivedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs*> __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_t;
#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs*>
//#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_USE
#define DEF___FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8aef9bca-fe7d-5966-9789-fede24cb41c4"))
IVectorView<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs*, ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementReceivedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs*> __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_t;
#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs*>
//#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace GenericAttributeProfile {
                    class GattValueChangedEventArgs;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* GenericAttributeProfile */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace GenericAttributeProfile {
                    interface IGattValueChangedEventArgs;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* GenericAttributeProfile */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_USE
#define DEF___FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("cd20a796-aa22-521d-8e0f-fc6d4a18e287"))
IIterator<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs*, ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Bluetooth.GenericAttributeProfile.GattValueChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs*> __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_t;
#define __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs*>
//#define __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_USE
#define DEF___FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("526a63df-8827-51b9-9e2c-9d65021a79d7"))
IIterable<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs*, ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Bluetooth.GenericAttributeProfile.GattValueChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs*> __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_t;
#define __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs*>
//#define __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_USE
#define DEF___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3f96e85f-ca51-5303-bd1b-acec7773baf6"))
IVectorView<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs*, ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Bluetooth.GenericAttributeProfile.GattValueChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs*> __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_t;
#define __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs*>
//#define __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Advertisement {
                    
                    typedef enum BluetoothLEAdvertisementPublisherStatus : int BluetoothLEAdvertisementPublisherStatus;
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Advertisement */} /* ABI */






namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                class BluetoothDevice;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                interface IBluetoothDevice;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice ABI::Windows::Devices::Bluetooth::IBluetoothDevice

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                
                typedef enum BluetoothError : int BluetoothError;
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                
                typedef enum BluetoothServiceCapabilities : unsigned int BluetoothServiceCapabilities;
                
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                class BluetoothSignalStrengthFilter;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                interface IBluetoothSignalStrengthFilter;
            } /* Windows */
        } /* Devices */
    } /* Bluetooth */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter ABI::Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace GenericAttributeProfile {
                    class GattCharacteristic;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* GenericAttributeProfile */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace GenericAttributeProfile {
                    interface IGattCharacteristic;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* GenericAttributeProfile */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace GenericAttributeProfile {
                    class GattLocalService;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* GenericAttributeProfile */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalService_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalService_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace GenericAttributeProfile {
                    interface IGattLocalService;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* GenericAttributeProfile */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalService ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalService_FWD_DEFINED__







namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Rfcomm {
                    class RfcommServiceId;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Rfcomm */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Rfcomm {
                    interface IRfcommServiceId;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Rfcomm */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId ABI::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId_FWD_DEFINED__









namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                class StreamSocket;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IStreamSocket;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket ABI::Windows::Networking::Sockets::IStreamSocket

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IBuffer;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIBuffer ABI::Windows::Storage::Streams::IBuffer

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Background {
                    
                    typedef enum BluetoothEventTriggeringMode : int BluetoothEventTriggeringMode;
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Background */} /* ABI */











namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Background {
                    class BluetoothLEAdvertisementPublisherTriggerDetails;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Background */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Background {
                    class BluetoothLEAdvertisementWatcherTriggerDetails;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Background */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Background {
                    class GattCharacteristicNotificationTriggerDetails;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Background */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Background {
                    class GattServiceProviderTriggerDetails;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Background */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Background {
                    class RfcommConnectionTriggerDetails;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Background */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Background {
                    class RfcommInboundConnectionInformation;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Background */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Background {
                    class RfcommOutboundConnectionInformation;
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Background */} /* ABI */












/*
 *
 * Struct Windows.Devices.Bluetooth.Background.BluetoothEventTriggeringMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Background {
                    /* [v1_enum, contract] */
                    enum BluetoothEventTriggeringMode : int
                    {
                        BluetoothEventTriggeringMode_Serial = 0,
                        BluetoothEventTriggeringMode_Batch = 1,
                        BluetoothEventTriggeringMode_KeepLatest = 2,
                    };
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Background */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Devices.Bluetooth.Background.IBluetoothLEAdvertisementPublisherTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Background.BluetoothLEAdvertisementPublisherTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Background_IBluetoothLEAdvertisementPublisherTriggerDetails[] = L"Windows.Devices.Bluetooth.Background.IBluetoothLEAdvertisementPublisherTriggerDetails";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Background {
                    /* [object, uuid("610ECA86-3480-41C9-A918-7DDADF207E00"), exclusiveto, contract] */
                    MIDL_INTERFACE("610ECA86-3480-41C9-A918-7DDADF207E00")
                    IBluetoothLEAdvertisementPublisherTriggerDetails : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatus * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Error(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Bluetooth::BluetoothError * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBluetoothLEAdvertisementPublisherTriggerDetails=_uuidof(IBluetoothLEAdvertisementPublisherTriggerDetails);
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Background */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Background.IBluetoothLEAdvertisementWatcherTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Background.BluetoothLEAdvertisementWatcherTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Background_IBluetoothLEAdvertisementWatcherTriggerDetails[] = L"Windows.Devices.Bluetooth.Background.IBluetoothLEAdvertisementWatcherTriggerDetails";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Background {
                    /* [object, uuid("A7DB5AD7-2257-4E69-9784-FEE645C1DCE0"), exclusiveto, contract] */
                    MIDL_INTERFACE("A7DB5AD7-2257-4E69-9784-FEE645C1DCE0")
                    IBluetoothLEAdvertisementWatcherTriggerDetails : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Error(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Bluetooth::BluetoothError * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Advertisements(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SignalStrengthFilter(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBluetoothLEAdvertisementWatcherTriggerDetails=_uuidof(IBluetoothLEAdvertisementWatcherTriggerDetails);
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Background */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Background.IGattCharacteristicNotificationTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Background.GattCharacteristicNotificationTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Background_IGattCharacteristicNotificationTriggerDetails[] = L"Windows.Devices.Bluetooth.Background.IGattCharacteristicNotificationTriggerDetails";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Background {
                    /* [object, uuid("9BA03B18-0FEC-436A-93B1-F46C697532A2"), exclusiveto, contract] */
                    MIDL_INTERFACE("9BA03B18-0FEC-436A-93B1-F46C697532A2")
                    IGattCharacteristicNotificationTriggerDetails : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Characteristic(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGattCharacteristicNotificationTriggerDetails=_uuidof(IGattCharacteristicNotificationTriggerDetails);
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Background */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Background.IGattCharacteristicNotificationTriggerDetails2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Background.GattCharacteristicNotificationTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Background_IGattCharacteristicNotificationTriggerDetails2[] = L"Windows.Devices.Bluetooth.Background.IGattCharacteristicNotificationTriggerDetails2";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Background {
                    /* [object, uuid("727A50DC-949D-454A-B192-983467E3D50F"), exclusiveto, contract] */
                    MIDL_INTERFACE("727A50DC-949D-454A-B192-983467E3D50F")
                    IGattCharacteristicNotificationTriggerDetails2 : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Error(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Bluetooth::BluetoothError * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EventTriggeringMode(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ValueChangedEvents(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGattCharacteristicNotificationTriggerDetails2=_uuidof(IGattCharacteristicNotificationTriggerDetails2);
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Background */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Devices.Bluetooth.Background.IGattServiceProviderConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Background.GattServiceProviderConnection
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Background_IGattServiceProviderConnection[] = L"Windows.Devices.Bluetooth.Background.IGattServiceProviderConnection";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Background {
                    /* [object, uuid("7FA1B9B9-2F13-40B5-9582-8EB78E98EF13"), exclusiveto, contract] */
                    MIDL_INTERFACE("7FA1B9B9-2F13-40B5-9582-8EB78E98EF13")
                    IGattServiceProviderConnection : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TriggerId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Service(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Start(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGattServiceProviderConnection=_uuidof(IGattServiceProviderConnection);
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Background */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Devices.Bluetooth.Background.IGattServiceProviderConnectionStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Background.GattServiceProviderConnection
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Background_IGattServiceProviderConnectionStatics[] = L"Windows.Devices.Bluetooth.Background.IGattServiceProviderConnectionStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Background {
                    /* [object, uuid("3D509F4B-0B0E-4466-B8CD-6EBDDA1FA17D"), exclusiveto, contract] */
                    MIDL_INTERFACE("3D509F4B-0B0E-4466-B8CD-6EBDDA1FA17D")
                    IGattServiceProviderConnectionStatics : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AllServices(
                            /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGattServiceProviderConnectionStatics=_uuidof(IGattServiceProviderConnectionStatics);
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Background */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Devices.Bluetooth.Background.IGattServiceProviderTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Background.GattServiceProviderTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Background_IGattServiceProviderTriggerDetails[] = L"Windows.Devices.Bluetooth.Background.IGattServiceProviderTriggerDetails";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Background {
                    /* [object, uuid("AE8C0625-05FF-4AFB-B16A-DE95F3CF0158"), exclusiveto, contract] */
                    MIDL_INTERFACE("AE8C0625-05FF-4AFB-B16A-DE95F3CF0158")
                    IGattServiceProviderTriggerDetails : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Connection(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGattServiceProviderTriggerDetails=_uuidof(IGattServiceProviderTriggerDetails);
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Background */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Devices.Bluetooth.Background.IRfcommConnectionTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Background.RfcommConnectionTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Background_IRfcommConnectionTriggerDetails[] = L"Windows.Devices.Bluetooth.Background.IRfcommConnectionTriggerDetails";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Background {
                    /* [object, uuid("F922734D-2E3C-4EFC-AB59-FC5CF96F97E3"), exclusiveto, contract] */
                    MIDL_INTERFACE("F922734D-2E3C-4EFC-AB59-FC5CF96F97E3")
                    IRfcommConnectionTriggerDetails : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Socket(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Sockets::IStreamSocket * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Incoming(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemoteDevice(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Bluetooth::IBluetoothDevice * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IRfcommConnectionTriggerDetails=_uuidof(IRfcommConnectionTriggerDetails);
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Background */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Background.IRfcommInboundConnectionInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Background.RfcommInboundConnectionInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Background_IRfcommInboundConnectionInformation[] = L"Windows.Devices.Bluetooth.Background.IRfcommInboundConnectionInformation";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Background {
                    /* [object, uuid("6D3E75A8-5429-4059-92E3-1E8B65528707"), exclusiveto, contract] */
                    MIDL_INTERFACE("6D3E75A8-5429-4059-92E3-1E8B65528707")
                    IRfcommInboundConnectionInformation : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SdpRecord(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SdpRecord(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocalServiceId(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LocalServiceId(
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceCapabilities(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Bluetooth::BluetoothServiceCapabilities * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ServiceCapabilities(
                            /* [in] */ABI::Windows::Devices::Bluetooth::BluetoothServiceCapabilities value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IRfcommInboundConnectionInformation=_uuidof(IRfcommInboundConnectionInformation);
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Background */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Background.IRfcommOutboundConnectionInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Background.RfcommOutboundConnectionInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Background_IRfcommOutboundConnectionInformation[] = L"Windows.Devices.Bluetooth.Background.IRfcommOutboundConnectionInformation";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Bluetooth {
                namespace Background {
                    /* [object, uuid("B091227B-F434-4CB0-99B1-4AB8CEDAEDD7"), exclusiveto, contract] */
                    MIDL_INTERFACE("B091227B-F434-4CB0-99B1-4AB8CEDAEDD7")
                    IRfcommOutboundConnectionInformation : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemoteServiceId(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RemoteServiceId(
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IRfcommOutboundConnectionInformation=_uuidof(IRfcommOutboundConnectionInformation);
                    
                } /* Windows */
            } /* Devices */
        } /* Bluetooth */
    } /* Background */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Background.BluetoothLEAdvertisementPublisherTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Background.IBluetoothLEAdvertisementPublisherTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Background_BluetoothLEAdvertisementPublisherTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Background_BluetoothLEAdvertisementPublisherTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Background_BluetoothLEAdvertisementPublisherTriggerDetails[] = L"Windows.Devices.Bluetooth.Background.BluetoothLEAdvertisementPublisherTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Background.BluetoothLEAdvertisementWatcherTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Background.IBluetoothLEAdvertisementWatcherTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Background_BluetoothLEAdvertisementWatcherTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Background_BluetoothLEAdvertisementWatcherTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Background_BluetoothLEAdvertisementWatcherTriggerDetails[] = L"Windows.Devices.Bluetooth.Background.BluetoothLEAdvertisementWatcherTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Background.GattCharacteristicNotificationTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Background.IGattCharacteristicNotificationTriggerDetails ** Default Interface **
 *    Windows.Devices.Bluetooth.Background.IGattCharacteristicNotificationTriggerDetails2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Background_GattCharacteristicNotificationTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Background_GattCharacteristicNotificationTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Background_GattCharacteristicNotificationTriggerDetails[] = L"Windows.Devices.Bluetooth.Background.GattCharacteristicNotificationTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Background.GattServiceProviderConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Bluetooth.Background.IGattServiceProviderConnectionStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Background.IGattServiceProviderConnection ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Background_GattServiceProviderConnection_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Background_GattServiceProviderConnection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Background_GattServiceProviderConnection[] = L"Windows.Devices.Bluetooth.Background.GattServiceProviderConnection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Devices.Bluetooth.Background.GattServiceProviderTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Background.IGattServiceProviderTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Background_GattServiceProviderTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Background_GattServiceProviderTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Background_GattServiceProviderTriggerDetails[] = L"Windows.Devices.Bluetooth.Background.GattServiceProviderTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Devices.Bluetooth.Background.RfcommConnectionTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Background.IRfcommConnectionTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Background_RfcommConnectionTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Background_RfcommConnectionTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Background_RfcommConnectionTriggerDetails[] = L"Windows.Devices.Bluetooth.Background.RfcommConnectionTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Background.RfcommInboundConnectionInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Background.IRfcommInboundConnectionInformation ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Background_RfcommInboundConnectionInformation_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Background_RfcommInboundConnectionInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Background_RfcommInboundConnectionInformation[] = L"Windows.Devices.Bluetooth.Background.RfcommInboundConnectionInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Background.RfcommOutboundConnectionInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Background.IRfcommOutboundConnectionInformation ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Background_RfcommOutboundConnectionInformation_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Background_RfcommOutboundConnectionInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Background_RfcommOutboundConnectionInformation[] = L"Windows.Devices.Bluetooth.Background.RfcommOutboundConnectionInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2 __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection;

typedef struct __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnectionVtbl;

interface __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnectionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnectionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnectionVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnectionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnectionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnectionVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnectionVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection;

typedef struct __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnectionVtbl;

interface __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnectionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs;

typedef struct __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgsVtbl;

interface __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgsVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs;

typedef  struct __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgsVtbl;

interface __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs;

typedef struct __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgsVtbl;

interface __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgsVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs;

typedef struct __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgsVtbl;

interface __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgsVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs;

typedef  struct __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgsVtbl;

interface __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs;

typedef struct __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgsVtbl;

interface __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgsVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CBluetoothLEAdvertisementPublisherStatus __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CBluetoothLEAdvertisementPublisherStatus;






#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice_FWD_DEFINED__



typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError;


typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothServiceCapabilities __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothServiceCapabilities;

#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalService_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalService_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalService __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalService;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalService_FWD_DEFINED__







#ifndef ____x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId;

#endif // ____x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId_FWD_DEFINED__









#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CBluetoothEventTriggeringMode __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CBluetoothEventTriggeringMode;





























/*
 *
 * Struct Windows.Devices.Bluetooth.Background.BluetoothEventTriggeringMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CBluetoothEventTriggeringMode
{
    BluetoothEventTriggeringMode_Serial = 0,
    BluetoothEventTriggeringMode_Batch = 1,
    BluetoothEventTriggeringMode_KeepLatest = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Devices.Bluetooth.Background.IBluetoothLEAdvertisementPublisherTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Background.BluetoothLEAdvertisementPublisherTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Background_IBluetoothLEAdvertisementPublisherTriggerDetails[] = L"Windows.Devices.Bluetooth.Background.IBluetoothLEAdvertisementPublisherTriggerDetails";
/* [object, uuid("610ECA86-3480-41C9-A918-7DDADF207E00"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CBluetoothLEAdvertisementPublisherStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Error )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetailsVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails_get_Error(This,value) \
    ( (This)->lpVtbl->get_Error(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Background.IBluetoothLEAdvertisementWatcherTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Background.BluetoothLEAdvertisementWatcherTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Background_IBluetoothLEAdvertisementWatcherTriggerDetails[] = L"Windows.Devices.Bluetooth.Background.IBluetoothLEAdvertisementWatcherTriggerDetails";
/* [object, uuid("A7DB5AD7-2257-4E69-9784-FEE645C1DCE0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Error )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Advertisements )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SignalStrengthFilter )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetailsVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails_get_Error(This,value) \
    ( (This)->lpVtbl->get_Error(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails_get_Advertisements(This,value) \
    ( (This)->lpVtbl->get_Advertisements(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails_get_SignalStrengthFilter(This,value) \
    ( (This)->lpVtbl->get_SignalStrengthFilter(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Background.IGattCharacteristicNotificationTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Background.GattCharacteristicNotificationTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Background_IGattCharacteristicNotificationTriggerDetails[] = L"Windows.Devices.Bluetooth.Background.IGattCharacteristicNotificationTriggerDetails";
/* [object, uuid("9BA03B18-0FEC-436A-93B1-F46C697532A2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Characteristic )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetailsVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails_get_Characteristic(This,value) \
    ( (This)->lpVtbl->get_Characteristic(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Background.IGattCharacteristicNotificationTriggerDetails2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Background.GattCharacteristicNotificationTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Background_IGattCharacteristicNotificationTriggerDetails2[] = L"Windows.Devices.Bluetooth.Background.IGattCharacteristicNotificationTriggerDetails2";
/* [object, uuid("727A50DC-949D-454A-B192-983467E3D50F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Error )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EventTriggeringMode )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CBluetoothEventTriggeringMode * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ValueChangedEvents )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2Vtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2_get_Error(This,value) \
    ( (This)->lpVtbl->get_Error(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2_get_EventTriggeringMode(This,value) \
    ( (This)->lpVtbl->get_EventTriggeringMode(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2_get_ValueChangedEvents(This,value) \
    ( (This)->lpVtbl->get_ValueChangedEvents(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Devices.Bluetooth.Background.IGattServiceProviderConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Background.GattServiceProviderConnection
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Background_IGattServiceProviderConnection[] = L"Windows.Devices.Bluetooth.Background.IGattServiceProviderConnection";
/* [object, uuid("7FA1B9B9-2F13-40B5-9582-8EB78E98EF13"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TriggerId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Service )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalService * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection_get_TriggerId(This,value) \
    ( (This)->lpVtbl->get_TriggerId(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection_get_Service(This,value) \
    ( (This)->lpVtbl->get_Service(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection_Start(This) \
    ( (This)->lpVtbl->Start(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Devices.Bluetooth.Background.IGattServiceProviderConnectionStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Background.GattServiceProviderConnection
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Background_IGattServiceProviderConnectionStatics[] = L"Windows.Devices.Bluetooth.Background.IGattServiceProviderConnectionStatics";
/* [object, uuid("3D509F4B-0B0E-4466-B8CD-6EBDDA1FA17D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AllServices )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics_get_AllServices(This,value) \
    ( (This)->lpVtbl->get_AllServices(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Devices.Bluetooth.Background.IGattServiceProviderTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Background.GattServiceProviderTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Background_IGattServiceProviderTriggerDetails[] = L"Windows.Devices.Bluetooth.Background.IGattServiceProviderTriggerDetails";
/* [object, uuid("AE8C0625-05FF-4AFB-B16A-DE95F3CF0158"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Connection )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetailsVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails_get_Connection(This,value) \
    ( (This)->lpVtbl->get_Connection(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Devices.Bluetooth.Background.IRfcommConnectionTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Background.RfcommConnectionTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Background_IRfcommConnectionTriggerDetails[] = L"Windows.Devices.Bluetooth.Background.IRfcommConnectionTriggerDetails";
/* [object, uuid("F922734D-2E3C-4EFC-AB59-FC5CF96F97E3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Socket )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Incoming )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemoteDevice )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetailsVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails_get_Socket(This,value) \
    ( (This)->lpVtbl->get_Socket(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails_get_Incoming(This,value) \
    ( (This)->lpVtbl->get_Incoming(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails_get_RemoteDevice(This,value) \
    ( (This)->lpVtbl->get_RemoteDevice(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Background.IRfcommInboundConnectionInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Background.RfcommInboundConnectionInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Background_IRfcommInboundConnectionInformation[] = L"Windows.Devices.Bluetooth.Background.IRfcommInboundConnectionInformation";
/* [object, uuid("6D3E75A8-5429-4059-92E3-1E8B65528707"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SdpRecord )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SdpRecord )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocalServiceId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LocalServiceId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceCapabilities )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothServiceCapabilities * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ServiceCapabilities )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation * This,
        /* [in] */__x_ABI_CWindows_CDevices_CBluetooth_CBluetoothServiceCapabilities value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformationVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation_get_SdpRecord(This,value) \
    ( (This)->lpVtbl->get_SdpRecord(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation_put_SdpRecord(This,value) \
    ( (This)->lpVtbl->put_SdpRecord(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation_get_LocalServiceId(This,value) \
    ( (This)->lpVtbl->get_LocalServiceId(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation_put_LocalServiceId(This,value) \
    ( (This)->lpVtbl->put_LocalServiceId(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation_get_ServiceCapabilities(This,value) \
    ( (This)->lpVtbl->get_ServiceCapabilities(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation_put_ServiceCapabilities(This,value) \
    ( (This)->lpVtbl->put_ServiceCapabilities(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Bluetooth.Background.IRfcommOutboundConnectionInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Bluetooth.Background.RfcommOutboundConnectionInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Background_IRfcommOutboundConnectionInformation[] = L"Windows.Devices.Bluetooth.Background.IRfcommOutboundConnectionInformation";
/* [object, uuid("B091227B-F434-4CB0-99B1-4AB8CEDAEDD7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemoteServiceId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RemoteServiceId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformationVtbl;

interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation_get_RemoteServiceId(This,value) \
    ( (This)->lpVtbl->get_RemoteServiceId(This,value) )

#define __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation_put_RemoteServiceId(This,value) \
    ( (This)->lpVtbl->put_RemoteServiceId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Background.BluetoothLEAdvertisementPublisherTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Background.IBluetoothLEAdvertisementPublisherTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Background_BluetoothLEAdvertisementPublisherTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Background_BluetoothLEAdvertisementPublisherTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Background_BluetoothLEAdvertisementPublisherTriggerDetails[] = L"Windows.Devices.Bluetooth.Background.BluetoothLEAdvertisementPublisherTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Background.BluetoothLEAdvertisementWatcherTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Background.IBluetoothLEAdvertisementWatcherTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Background_BluetoothLEAdvertisementWatcherTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Background_BluetoothLEAdvertisementWatcherTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Background_BluetoothLEAdvertisementWatcherTriggerDetails[] = L"Windows.Devices.Bluetooth.Background.BluetoothLEAdvertisementWatcherTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Background.GattCharacteristicNotificationTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Background.IGattCharacteristicNotificationTriggerDetails ** Default Interface **
 *    Windows.Devices.Bluetooth.Background.IGattCharacteristicNotificationTriggerDetails2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Background_GattCharacteristicNotificationTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Background_GattCharacteristicNotificationTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Background_GattCharacteristicNotificationTriggerDetails[] = L"Windows.Devices.Bluetooth.Background.GattCharacteristicNotificationTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Background.GattServiceProviderConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Bluetooth.Background.IGattServiceProviderConnectionStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Background.IGattServiceProviderConnection ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Background_GattServiceProviderConnection_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Background_GattServiceProviderConnection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Background_GattServiceProviderConnection[] = L"Windows.Devices.Bluetooth.Background.GattServiceProviderConnection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Devices.Bluetooth.Background.GattServiceProviderTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Background.IGattServiceProviderTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Background_GattServiceProviderTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Background_GattServiceProviderTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Background_GattServiceProviderTriggerDetails[] = L"Windows.Devices.Bluetooth.Background.GattServiceProviderTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Devices.Bluetooth.Background.RfcommConnectionTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Background.IRfcommConnectionTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Background_RfcommConnectionTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Background_RfcommConnectionTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Background_RfcommConnectionTriggerDetails[] = L"Windows.Devices.Bluetooth.Background.RfcommConnectionTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Background.RfcommInboundConnectionInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Background.IRfcommInboundConnectionInformation ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Background_RfcommInboundConnectionInformation_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Background_RfcommInboundConnectionInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Background_RfcommInboundConnectionInformation[] = L"Windows.Devices.Bluetooth.Background.RfcommInboundConnectionInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Bluetooth.Background.RfcommOutboundConnectionInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Bluetooth.Background.IRfcommOutboundConnectionInformation ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Bluetooth_Background_RfcommOutboundConnectionInformation_DEFINED
#define RUNTIMECLASS_Windows_Devices_Bluetooth_Background_RfcommOutboundConnectionInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Background_RfcommOutboundConnectionInformation[] = L"Windows.Devices.Bluetooth.Background.RfcommOutboundConnectionInformation";
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
#endif // __windows2Edevices2Ebluetooth2Ebackground_p_h__

#endif // __windows2Edevices2Ebluetooth2Ebackground_h__
