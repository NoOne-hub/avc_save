﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Globalization.Collation.2.h"
#include "winrt/Windows.Globalization.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Globalization_Collation_ICharacterGrouping<D>::First() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::Collation::ICharacterGrouping)->get_First(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_Collation_ICharacterGrouping<D>::Label() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::Collation::ICharacterGrouping)->get_Label(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_Collation_ICharacterGroupings<D>::Lookup(param::hstring const& text) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::Collation::ICharacterGroupings)->Lookup(get_abi(text), put_abi(result)));
    return result;
}

template <typename D> Windows::Globalization::Collation::CharacterGroupings consume_Windows_Globalization_Collation_ICharacterGroupingsFactory<D>::Create(param::hstring const& language) const
{
    Windows::Globalization::Collation::CharacterGroupings result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::Collation::ICharacterGroupingsFactory)->Create(get_abi(language), put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Globalization::Collation::ICharacterGrouping> : produce_base<D, Windows::Globalization::Collation::ICharacterGrouping>
{
    HRESULT __stdcall get_First(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().First());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Label(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Label());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::Collation::ICharacterGroupings> : produce_base<D, Windows::Globalization::Collation::ICharacterGroupings>
{
    HRESULT __stdcall Lookup(HSTRING text, HSTRING* result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().Lookup(*reinterpret_cast<hstring const*>(&text)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::Collation::ICharacterGroupingsFactory> : produce_base<D, Windows::Globalization::Collation::ICharacterGroupingsFactory>
{
    HRESULT __stdcall Create(HSTRING language, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Globalization::Collation::CharacterGroupings>(this->shim().Create(*reinterpret_cast<hstring const*>(&language)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Globalization::Collation {

inline CharacterGroupings::CharacterGroupings() :
    CharacterGroupings(get_activation_factory<CharacterGroupings>().ActivateInstance<CharacterGroupings>())
{}

inline CharacterGroupings::CharacterGroupings(param::hstring const& language) :
    CharacterGroupings(get_activation_factory<CharacterGroupings, Windows::Globalization::Collation::ICharacterGroupingsFactory>().Create(language))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Globalization::Collation::ICharacterGrouping> : winrt::impl::hash_base<winrt::Windows::Globalization::Collation::ICharacterGrouping> {};
template<> struct hash<winrt::Windows::Globalization::Collation::ICharacterGroupings> : winrt::impl::hash_base<winrt::Windows::Globalization::Collation::ICharacterGroupings> {};
template<> struct hash<winrt::Windows::Globalization::Collation::ICharacterGroupingsFactory> : winrt::impl::hash_base<winrt::Windows::Globalization::Collation::ICharacterGroupingsFactory> {};
template<> struct hash<winrt::Windows::Globalization::Collation::CharacterGrouping> : winrt::impl::hash_base<winrt::Windows::Globalization::Collation::CharacterGrouping> {};
template<> struct hash<winrt::Windows::Globalization::Collation::CharacterGroupings> : winrt::impl::hash_base<winrt::Windows::Globalization::Collation::CharacterGroupings> {};

}

WINRT_WARNING_POP
