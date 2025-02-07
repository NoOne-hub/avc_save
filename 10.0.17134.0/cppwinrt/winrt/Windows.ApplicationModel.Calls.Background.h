﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.ApplicationModel.Calls.Background.2.h"
#include "winrt/Windows.ApplicationModel.Calls.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_ApplicationModel_Calls_Background_IPhoneCallBlockedTriggerDetails<D>::PhoneNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails)->get_PhoneNumber(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_ApplicationModel_Calls_Background_IPhoneCallBlockedTriggerDetails<D>::LineId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails)->get_LineId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Calls::Background::PhoneCallBlockedReason consume_Windows_ApplicationModel_Calls_Background_IPhoneCallBlockedTriggerDetails<D>::CallBlockedReason() const
{
    Windows::ApplicationModel::Calls::Background::PhoneCallBlockedReason value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails)->get_CallBlockedReason(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_ApplicationModel_Calls_Background_IPhoneCallOriginDataRequestTriggerDetails<D>::RequestId() const
{
    GUID result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails)->get_RequestId(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Calls_Background_IPhoneCallOriginDataRequestTriggerDetails<D>::PhoneNumber() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails)->get_PhoneNumber(put_abi(result)));
    return result;
}

template <typename D> GUID consume_Windows_ApplicationModel_Calls_Background_IPhoneLineChangedTriggerDetails<D>::LineId() const
{
    GUID result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails)->get_LineId(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Calls::Background::PhoneLineChangeKind consume_Windows_ApplicationModel_Calls_Background_IPhoneLineChangedTriggerDetails<D>::ChangeType() const
{
    Windows::ApplicationModel::Calls::Background::PhoneLineChangeKind result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails)->get_ChangeType(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_ApplicationModel_Calls_Background_IPhoneLineChangedTriggerDetails<D>::HasLinePropertyChanged(Windows::ApplicationModel::Calls::Background::PhoneLineProperties const& lineProperty) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails)->HasLinePropertyChanged(get_abi(lineProperty), &result));
    return result;
}

template <typename D> GUID consume_Windows_ApplicationModel_Calls_Background_IPhoneNewVoicemailMessageTriggerDetails<D>::LineId() const
{
    GUID result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails)->get_LineId(put_abi(result)));
    return result;
}

template <typename D> int32_t consume_Windows_ApplicationModel_Calls_Background_IPhoneNewVoicemailMessageTriggerDetails<D>::VoicemailCount() const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails)->get_VoicemailCount(&result));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Calls_Background_IPhoneNewVoicemailMessageTriggerDetails<D>::OperatorMessage() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails)->get_OperatorMessage(put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails> : produce_base<D, Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails>
{
    HRESULT __stdcall get_PhoneNumber(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PhoneNumber());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LineId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().LineId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CallBlockedReason(Windows::ApplicationModel::Calls::Background::PhoneCallBlockedReason* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Calls::Background::PhoneCallBlockedReason>(this->shim().CallBlockedReason());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails> : produce_base<D, Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails>
{
    HRESULT __stdcall get_RequestId(GUID* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<GUID>(this->shim().RequestId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PhoneNumber(HSTRING* result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().PhoneNumber());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails> : produce_base<D, Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails>
{
    HRESULT __stdcall get_LineId(GUID* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<GUID>(this->shim().LineId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ChangeType(Windows::ApplicationModel::Calls::Background::PhoneLineChangeKind* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Calls::Background::PhoneLineChangeKind>(this->shim().ChangeType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall HasLinePropertyChanged(Windows::ApplicationModel::Calls::Background::PhoneLineProperties lineProperty, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().HasLinePropertyChanged(*reinterpret_cast<Windows::ApplicationModel::Calls::Background::PhoneLineProperties const*>(&lineProperty)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails> : produce_base<D, Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails>
{
    HRESULT __stdcall get_LineId(GUID* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<GUID>(this->shim().LineId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VoicemailCount(int32_t* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().VoicemailCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OperatorMessage(HSTRING* result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().OperatorMessage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Calls::Background {

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails> {};
template<> struct hash<winrt::Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails> {};
template<> struct hash<winrt::Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails> {};
template<> struct hash<winrt::Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails> {};
template<> struct hash<winrt::Windows::ApplicationModel::Calls::Background::PhoneCallBlockedTriggerDetails> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Calls::Background::PhoneCallBlockedTriggerDetails> {};
template<> struct hash<winrt::Windows::ApplicationModel::Calls::Background::PhoneCallOriginDataRequestTriggerDetails> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Calls::Background::PhoneCallOriginDataRequestTriggerDetails> {};
template<> struct hash<winrt::Windows::ApplicationModel::Calls::Background::PhoneLineChangedTriggerDetails> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Calls::Background::PhoneLineChangedTriggerDetails> {};
template<> struct hash<winrt::Windows::ApplicationModel::Calls::Background::PhoneNewVoicemailMessageTriggerDetails> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Calls::Background::PhoneNewVoicemailMessageTriggerDetails> {};

}

WINRT_WARNING_POP
