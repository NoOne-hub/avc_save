﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Devices.Printers.Extensions.2.h"
#include "winrt/Windows.Devices.Printers.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow<D>::DeviceID() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrint3DWorkflow)->get_DeviceID(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow<D>::GetPrintModelPackage() const
{
    Windows::Foundation::IInspectable printModelPackage{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrint3DWorkflow)->GetPrintModelPackage(put_abi(printModelPackage)));
    return printModelPackage;
}

template <typename D> bool consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow<D>::IsPrintReady() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrint3DWorkflow)->get_IsPrintReady(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow<D>::IsPrintReady(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrint3DWorkflow)->put_IsPrintReady(value));
}

template <typename D> event_token consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow<D>::PrintRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrint3DWorkflow)->add_PrintRequested(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Devices::Printers::Extensions::IPrint3DWorkflow> consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow<D>::PrintRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Printers::Extensions::IPrint3DWorkflow>(this, &abi_t<Windows::Devices::Printers::Extensions::IPrint3DWorkflow>::remove_PrintRequested, PrintRequested(eventHandler));
}

template <typename D> void consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow<D>::PrintRequested(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrint3DWorkflow)->remove_PrintRequested(get_abi(eventCookie)));
}

template <typename D> event_token consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow2<D>::PrinterChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrint3DWorkflow2)->add_PrinterChanged(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Devices::Printers::Extensions::IPrint3DWorkflow2> consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow2<D>::PrinterChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>(this, &abi_t<Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>::remove_PrinterChanged, PrinterChanged(eventHandler));
}

template <typename D> void consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow2<D>::PrinterChanged(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrint3DWorkflow2)->remove_PrinterChanged(get_abi(eventCookie)));
}

template <typename D> Windows::Devices::Printers::Extensions::Print3DWorkflowStatus consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrintRequestedEventArgs<D>::Status() const
{
    Windows::Devices::Printers::Extensions::Print3DWorkflowStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs)->get_Status(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrintRequestedEventArgs<D>::SetExtendedStatus(Windows::Devices::Printers::Extensions::Print3DWorkflowDetail const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs)->SetExtendedStatus(get_abi(value)));
}

template <typename D> void consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrintRequestedEventArgs<D>::SetSource(Windows::Foundation::IInspectable const& source) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs)->SetSource(get_abi(source)));
}

template <typename D> void consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrintRequestedEventArgs<D>::SetSourceChanged(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs)->SetSourceChanged(value));
}

template <typename D> hstring consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrinterChangedEventArgs<D>::NewDeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs)->get_NewDeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Devices_Printers_Extensions_IPrintExtensionContextStatic<D>::FromDeviceId(param::hstring const& deviceId) const
{
    Windows::Foundation::IInspectable context{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrintExtensionContextStatic)->FromDeviceId(get_abi(deviceId), put_abi(context)));
    return context;
}

template <typename D> hstring consume_Windows_Devices_Printers_Extensions_IPrintNotificationEventDetails<D>::PrinterName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrintNotificationEventDetails)->get_PrinterName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Printers_Extensions_IPrintNotificationEventDetails<D>::EventData() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrintNotificationEventDetails)->get_EventData(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Printers_Extensions_IPrintNotificationEventDetails<D>::EventData(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrintNotificationEventDetails)->put_EventData(get_abi(value)));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Devices_Printers_Extensions_IPrintTaskConfiguration<D>::PrinterExtensionContext() const
{
    Windows::Foundation::IInspectable context{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrintTaskConfiguration)->get_PrinterExtensionContext(put_abi(context)));
    return context;
}

template <typename D> event_token consume_Windows_Devices_Printers_Extensions_IPrintTaskConfiguration<D>::SaveRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::PrintTaskConfiguration, Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedEventArgs> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrintTaskConfiguration)->add_SaveRequested(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Devices::Printers::Extensions::IPrintTaskConfiguration> consume_Windows_Devices_Printers_Extensions_IPrintTaskConfiguration<D>::SaveRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::PrintTaskConfiguration, Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedEventArgs> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Printers::Extensions::IPrintTaskConfiguration>(this, &abi_t<Windows::Devices::Printers::Extensions::IPrintTaskConfiguration>::remove_SaveRequested, SaveRequested(eventHandler));
}

template <typename D> void consume_Windows_Devices_Printers_Extensions_IPrintTaskConfiguration<D>::SaveRequested(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrintTaskConfiguration)->remove_SaveRequested(get_abi(eventCookie)));
}

template <typename D> void consume_Windows_Devices_Printers_Extensions_IPrintTaskConfigurationSaveRequest<D>::Cancel() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequest)->Cancel());
}

template <typename D> void consume_Windows_Devices_Printers_Extensions_IPrintTaskConfigurationSaveRequest<D>::Save(Windows::Foundation::IInspectable const& printerExtensionContext) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequest)->Save(get_abi(printerExtensionContext)));
}

template <typename D> Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedDeferral consume_Windows_Devices_Printers_Extensions_IPrintTaskConfigurationSaveRequest<D>::GetDeferral() const
{
    Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedDeferral deferral{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequest)->GetDeferral(put_abi(deferral)));
    return deferral;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Printers_Extensions_IPrintTaskConfigurationSaveRequest<D>::Deadline() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequest)->get_Deadline(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Printers_Extensions_IPrintTaskConfigurationSaveRequestedDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedDeferral)->Complete());
}

template <typename D> Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequest consume_Windows_Devices_Printers_Extensions_IPrintTaskConfigurationSaveRequestedEventArgs<D>::Request() const
{
    Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequest context{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedEventArgs)->get_Request(put_abi(context)));
    return context;
}

template <typename D>
struct produce<D, Windows::Devices::Printers::Extensions::IPrint3DWorkflow> : produce_base<D, Windows::Devices::Printers::Extensions::IPrint3DWorkflow>
{
    HRESULT __stdcall get_DeviceID(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceID());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetPrintModelPackage(void** printModelPackage) noexcept final
    {
        try
        {
            *printModelPackage = nullptr;
            typename D::abi_guard guard(this->shim());
            *printModelPackage = detach_from<Windows::Foundation::IInspectable>(this->shim().GetPrintModelPackage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsPrintReady(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPrintReady());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsPrintReady(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsPrintReady(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PrintRequested(void* eventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().PrintRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PrintRequested(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrintRequested(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Printers::Extensions::IPrint3DWorkflow2> : produce_base<D, Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>
{
    HRESULT __stdcall add_PrinterChanged(void* eventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().PrinterChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PrinterChanged(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrinterChanged(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs> : produce_base<D, Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs>
{
    HRESULT __stdcall get_Status(Windows::Devices::Printers::Extensions::Print3DWorkflowStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Printers::Extensions::Print3DWorkflowStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetExtendedStatus(Windows::Devices::Printers::Extensions::Print3DWorkflowDetail value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetExtendedStatus(*reinterpret_cast<Windows::Devices::Printers::Extensions::Print3DWorkflowDetail const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetSource(void* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSource(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetSourceChanged(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSourceChanged(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs> : produce_base<D, Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs>
{
    HRESULT __stdcall get_NewDeviceId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().NewDeviceId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Printers::Extensions::IPrintExtensionContextStatic> : produce_base<D, Windows::Devices::Printers::Extensions::IPrintExtensionContextStatic>
{
    HRESULT __stdcall FromDeviceId(HSTRING deviceId, void** context) noexcept final
    {
        try
        {
            *context = nullptr;
            typename D::abi_guard guard(this->shim());
            *context = detach_from<Windows::Foundation::IInspectable>(this->shim().FromDeviceId(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Printers::Extensions::IPrintNotificationEventDetails> : produce_base<D, Windows::Devices::Printers::Extensions::IPrintNotificationEventDetails>
{
    HRESULT __stdcall get_PrinterName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PrinterName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EventData(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EventData());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_EventData(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EventData(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Printers::Extensions::IPrintTaskConfiguration> : produce_base<D, Windows::Devices::Printers::Extensions::IPrintTaskConfiguration>
{
    HRESULT __stdcall get_PrinterExtensionContext(void** context) noexcept final
    {
        try
        {
            *context = nullptr;
            typename D::abi_guard guard(this->shim());
            *context = detach_from<Windows::Foundation::IInspectable>(this->shim().PrinterExtensionContext());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SaveRequested(void* eventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().SaveRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::PrintTaskConfiguration, Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedEventArgs> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SaveRequested(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SaveRequested(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequest> : produce_base<D, Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequest>
{
    HRESULT __stdcall Cancel() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Cancel();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Save(void* printerExtensionContext) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Save(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&printerExtensionContext));
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
            *deferral = detach_from<Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedDeferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Deadline(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().Deadline());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedDeferral> : produce_base<D, Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedDeferral>
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
struct produce<D, Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedEventArgs> : produce_base<D, Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedEventArgs>
{
    HRESULT __stdcall get_Request(void** context) noexcept final
    {
        try
        {
            *context = nullptr;
            typename D::abi_guard guard(this->shim());
            *context = detach_from<Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequest>(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::Printers::Extensions {

inline Windows::Foundation::IInspectable PrintExtensionContext::FromDeviceId(param::hstring const& deviceId)
{
    return get_activation_factory<PrintExtensionContext, Windows::Devices::Printers::Extensions::IPrintExtensionContextStatic>().FromDeviceId(deviceId);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow> : winrt::impl::hash_base<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow> {};
template<> struct hash<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow2> : winrt::impl::hash_base<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow2> {};
template<> struct hash<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::Printers::Extensions::IPrintExtensionContextStatic> : winrt::impl::hash_base<winrt::Windows::Devices::Printers::Extensions::IPrintExtensionContextStatic> {};
template<> struct hash<winrt::Windows::Devices::Printers::Extensions::IPrintNotificationEventDetails> : winrt::impl::hash_base<winrt::Windows::Devices::Printers::Extensions::IPrintNotificationEventDetails> {};
template<> struct hash<winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfiguration> : winrt::impl::hash_base<winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfiguration> {};
template<> struct hash<winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequest> : winrt::impl::hash_base<winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequest> {};
template<> struct hash<winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedDeferral> : winrt::impl::hash_base<winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedDeferral> {};
template<> struct hash<winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflow> : winrt::impl::hash_base<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflow> {};
template<> struct hash<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::Printers::Extensions::PrintExtensionContext> : winrt::impl::hash_base<winrt::Windows::Devices::Printers::Extensions::PrintExtensionContext> {};
template<> struct hash<winrt::Windows::Devices::Printers::Extensions::PrintNotificationEventDetails> : winrt::impl::hash_base<winrt::Windows::Devices::Printers::Extensions::PrintNotificationEventDetails> {};
template<> struct hash<winrt::Windows::Devices::Printers::Extensions::PrintTaskConfiguration> : winrt::impl::hash_base<winrt::Windows::Devices::Printers::Extensions::PrintTaskConfiguration> {};
template<> struct hash<winrt::Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequest> : winrt::impl::hash_base<winrt::Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequest> {};
template<> struct hash<winrt::Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedDeferral> : winrt::impl::hash_base<winrt::Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedDeferral> {};
template<> struct hash<winrt::Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedEventArgs> {};

}

WINRT_WARNING_POP
