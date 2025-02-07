﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.ApplicationModel.Payments.2.h"
#include "winrt/impl/Windows.ApplicationModel.Payments.Provider.2.h"
#include "winrt/Windows.ApplicationModel.Payments.h"

namespace winrt::impl {

template <typename D> Windows::ApplicationModel::Payments::PaymentRequest consume_Windows_ApplicationModel_Payments_Provider_IPaymentAppCanMakePaymentTriggerDetails<D>::Request() const
{
    Windows::ApplicationModel::Payments::PaymentRequest result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::Provider::IPaymentAppCanMakePaymentTriggerDetails)->get_Request(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_Provider_IPaymentAppCanMakePaymentTriggerDetails<D>::ReportCanMakePaymentResult(Windows::ApplicationModel::Payments::PaymentCanMakePaymentResult const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::Provider::IPaymentAppCanMakePaymentTriggerDetails)->ReportCanMakePaymentResult(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Payments_Provider_IPaymentAppManager<D>::RegisterAsync(param::async_iterable<hstring> const& supportedPaymentMethodIds) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::Provider::IPaymentAppManager)->RegisterAsync(get_abi(supportedPaymentMethodIds), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Payments_Provider_IPaymentAppManager<D>::UnregisterAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::Provider::IPaymentAppManager)->UnregisterAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::Provider::PaymentAppManager consume_Windows_ApplicationModel_Payments_Provider_IPaymentAppManagerStatics<D>::Current() const
{
    Windows::ApplicationModel::Payments::Provider::PaymentAppManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::Provider::IPaymentAppManagerStatics)->get_Current(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentRequest consume_Windows_ApplicationModel_Payments_Provider_IPaymentTransaction<D>::PaymentRequest() const
{
    Windows::ApplicationModel::Payments::PaymentRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::Provider::IPaymentTransaction)->get_PaymentRequest(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_Provider_IPaymentTransaction<D>::PayerEmail() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::Provider::IPaymentTransaction)->get_PayerEmail(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_Provider_IPaymentTransaction<D>::PayerEmail(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::Provider::IPaymentTransaction)->put_PayerEmail(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_Provider_IPaymentTransaction<D>::PayerName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::Provider::IPaymentTransaction)->get_PayerName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_Provider_IPaymentTransaction<D>::PayerName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::Provider::IPaymentTransaction)->put_PayerName(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_Provider_IPaymentTransaction<D>::PayerPhoneNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::Provider::IPaymentTransaction)->get_PayerPhoneNumber(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_Provider_IPaymentTransaction<D>::PayerPhoneNumber(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::Provider::IPaymentTransaction)->put_PayerPhoneNumber(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestChangedResult> consume_Windows_ApplicationModel_Payments_Provider_IPaymentTransaction<D>::UpdateShippingAddressAsync(Windows::ApplicationModel::Payments::PaymentAddress const& shippingAddress) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestChangedResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::Provider::IPaymentTransaction)->UpdateShippingAddressAsync(get_abi(shippingAddress), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestChangedResult> consume_Windows_ApplicationModel_Payments_Provider_IPaymentTransaction<D>::UpdateSelectedShippingOptionAsync(Windows::ApplicationModel::Payments::PaymentShippingOption const& selectedShippingOption) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestChangedResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::Provider::IPaymentTransaction)->UpdateSelectedShippingOptionAsync(get_abi(selectedShippingOption), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::Provider::PaymentTransactionAcceptResult> consume_Windows_ApplicationModel_Payments_Provider_IPaymentTransaction<D>::AcceptAsync(Windows::ApplicationModel::Payments::PaymentToken const& paymentToken) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::Provider::PaymentTransactionAcceptResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::Provider::IPaymentTransaction)->AcceptAsync(get_abi(paymentToken), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_Provider_IPaymentTransaction<D>::Reject() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::Provider::IPaymentTransaction)->Reject());
}

template <typename D> Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus consume_Windows_ApplicationModel_Payments_Provider_IPaymentTransactionAcceptResult<D>::Status() const
{
    Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::Provider::IPaymentTransactionAcceptResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::Provider::PaymentTransaction> consume_Windows_ApplicationModel_Payments_Provider_IPaymentTransactionStatics<D>::FromIdAsync(param::hstring const& id) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::Provider::PaymentTransaction> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::Provider::IPaymentTransactionStatics)->FromIdAsync(get_abi(id), put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::Provider::IPaymentAppCanMakePaymentTriggerDetails> : produce_base<D, Windows::ApplicationModel::Payments::Provider::IPaymentAppCanMakePaymentTriggerDetails>
{
    HRESULT __stdcall get_Request(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentRequest>(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReportCanMakePaymentResult(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportCanMakePaymentResult(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentCanMakePaymentResult const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::Provider::IPaymentAppManager> : produce_base<D, Windows::ApplicationModel::Payments::Provider::IPaymentAppManager>
{
    HRESULT __stdcall RegisterAsync(void* supportedPaymentMethodIds, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().RegisterAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&supportedPaymentMethodIds)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UnregisterAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().UnregisterAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::Provider::IPaymentAppManagerStatics> : produce_base<D, Windows::ApplicationModel::Payments::Provider::IPaymentAppManagerStatics>
{
    HRESULT __stdcall get_Current(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::Provider::PaymentAppManager>(this->shim().Current());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::Provider::IPaymentTransaction> : produce_base<D, Windows::ApplicationModel::Payments::Provider::IPaymentTransaction>
{
    HRESULT __stdcall get_PaymentRequest(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentRequest>(this->shim().PaymentRequest());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PayerEmail(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PayerEmail());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PayerEmail(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PayerEmail(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PayerName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PayerName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PayerName(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PayerName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PayerPhoneNumber(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PayerPhoneNumber());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PayerPhoneNumber(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PayerPhoneNumber(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UpdateShippingAddressAsync(void* shippingAddress, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestChangedResult>>(this->shim().UpdateShippingAddressAsync(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentAddress const*>(&shippingAddress)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UpdateSelectedShippingOptionAsync(void* selectedShippingOption, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestChangedResult>>(this->shim().UpdateSelectedShippingOptionAsync(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentShippingOption const*>(&selectedShippingOption)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AcceptAsync(void* paymentToken, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::Provider::PaymentTransactionAcceptResult>>(this->shim().AcceptAsync(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentToken const*>(&paymentToken)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Reject() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Reject();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::Provider::IPaymentTransactionAcceptResult> : produce_base<D, Windows::ApplicationModel::Payments::Provider::IPaymentTransactionAcceptResult>
{
    HRESULT __stdcall get_Status(Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::Provider::IPaymentTransactionStatics> : produce_base<D, Windows::ApplicationModel::Payments::Provider::IPaymentTransactionStatics>
{
    HRESULT __stdcall FromIdAsync(HSTRING id, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::Provider::PaymentTransaction>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Payments::Provider {

inline Windows::ApplicationModel::Payments::Provider::PaymentAppManager PaymentAppManager::Current()
{
    return get_activation_factory<PaymentAppManager, Windows::ApplicationModel::Payments::Provider::IPaymentAppManagerStatics>().Current();
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::Provider::PaymentTransaction> PaymentTransaction::FromIdAsync(param::hstring const& id)
{
    return get_activation_factory<PaymentTransaction, Windows::ApplicationModel::Payments::Provider::IPaymentTransactionStatics>().FromIdAsync(id);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Payments::Provider::IPaymentAppCanMakePaymentTriggerDetails> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::Provider::IPaymentAppCanMakePaymentTriggerDetails> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::Provider::IPaymentAppManager> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::Provider::IPaymentAppManager> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::Provider::IPaymentAppManagerStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::Provider::IPaymentAppManagerStatics> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::Provider::IPaymentTransaction> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::Provider::IPaymentTransaction> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::Provider::IPaymentTransactionAcceptResult> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::Provider::IPaymentTransactionAcceptResult> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::Provider::IPaymentTransactionStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::Provider::IPaymentTransactionStatics> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::Provider::PaymentAppCanMakePaymentTriggerDetails> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::Provider::PaymentAppCanMakePaymentTriggerDetails> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::Provider::PaymentAppManager> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::Provider::PaymentAppManager> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::Provider::PaymentTransaction> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::Provider::PaymentTransaction> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::Provider::PaymentTransactionAcceptResult> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::Provider::PaymentTransactionAcceptResult> {};

}

WINRT_WARNING_POP
