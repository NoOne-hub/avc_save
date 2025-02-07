﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.Metadata.2.h"
#include "winrt/Windows.Foundation.h"

namespace winrt::impl {

template <typename D> bool consume_Windows_Foundation_Metadata_IApiInformationStatics<D>::IsTypePresent(param::hstring const& typeName) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Metadata::IApiInformationStatics)->IsTypePresent(get_abi(typeName), &result));
    return result;
}

template <typename D> bool consume_Windows_Foundation_Metadata_IApiInformationStatics<D>::IsMethodPresent(param::hstring const& typeName, param::hstring const& methodName) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Metadata::IApiInformationStatics)->IsMethodPresent(get_abi(typeName), get_abi(methodName), &result));
    return result;
}

template <typename D> bool consume_Windows_Foundation_Metadata_IApiInformationStatics<D>::IsMethodPresent(param::hstring const& typeName, param::hstring const& methodName, uint32_t inputParameterCount) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Metadata::IApiInformationStatics)->IsMethodPresentWithArity(get_abi(typeName), get_abi(methodName), inputParameterCount, &result));
    return result;
}

template <typename D> bool consume_Windows_Foundation_Metadata_IApiInformationStatics<D>::IsEventPresent(param::hstring const& typeName, param::hstring const& eventName) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Metadata::IApiInformationStatics)->IsEventPresent(get_abi(typeName), get_abi(eventName), &result));
    return result;
}

template <typename D> bool consume_Windows_Foundation_Metadata_IApiInformationStatics<D>::IsPropertyPresent(param::hstring const& typeName, param::hstring const& propertyName) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Metadata::IApiInformationStatics)->IsPropertyPresent(get_abi(typeName), get_abi(propertyName), &result));
    return result;
}

template <typename D> bool consume_Windows_Foundation_Metadata_IApiInformationStatics<D>::IsReadOnlyPropertyPresent(param::hstring const& typeName, param::hstring const& propertyName) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Metadata::IApiInformationStatics)->IsReadOnlyPropertyPresent(get_abi(typeName), get_abi(propertyName), &result));
    return result;
}

template <typename D> bool consume_Windows_Foundation_Metadata_IApiInformationStatics<D>::IsWriteablePropertyPresent(param::hstring const& typeName, param::hstring const& propertyName) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Metadata::IApiInformationStatics)->IsWriteablePropertyPresent(get_abi(typeName), get_abi(propertyName), &result));
    return result;
}

template <typename D> bool consume_Windows_Foundation_Metadata_IApiInformationStatics<D>::IsEnumNamedValuePresent(param::hstring const& enumTypeName, param::hstring const& valueName) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Metadata::IApiInformationStatics)->IsEnumNamedValuePresent(get_abi(enumTypeName), get_abi(valueName), &result));
    return result;
}

template <typename D> bool consume_Windows_Foundation_Metadata_IApiInformationStatics<D>::IsApiContractPresent(param::hstring const& contractName, uint16_t majorVersion) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Metadata::IApiInformationStatics)->IsApiContractPresentByMajor(get_abi(contractName), majorVersion, &result));
    return result;
}

template <typename D> bool consume_Windows_Foundation_Metadata_IApiInformationStatics<D>::IsApiContractPresent(param::hstring const& contractName, uint16_t majorVersion, uint16_t minorVersion) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Metadata::IApiInformationStatics)->IsApiContractPresentByMajorAndMinor(get_abi(contractName), majorVersion, minorVersion, &result));
    return result;
}

template <typename D>
struct produce<D, Windows::Foundation::Metadata::IApiInformationStatics> : produce_base<D, Windows::Foundation::Metadata::IApiInformationStatics>
{
    HRESULT __stdcall IsTypePresent(HSTRING typeName, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsTypePresent(*reinterpret_cast<hstring const*>(&typeName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsMethodPresent(HSTRING typeName, HSTRING methodName, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsMethodPresent(*reinterpret_cast<hstring const*>(&typeName), *reinterpret_cast<hstring const*>(&methodName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsMethodPresentWithArity(HSTRING typeName, HSTRING methodName, uint32_t inputParameterCount, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsMethodPresent(*reinterpret_cast<hstring const*>(&typeName), *reinterpret_cast<hstring const*>(&methodName), inputParameterCount));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsEventPresent(HSTRING typeName, HSTRING eventName, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsEventPresent(*reinterpret_cast<hstring const*>(&typeName), *reinterpret_cast<hstring const*>(&eventName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsPropertyPresent(HSTRING typeName, HSTRING propertyName, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsPropertyPresent(*reinterpret_cast<hstring const*>(&typeName), *reinterpret_cast<hstring const*>(&propertyName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsReadOnlyPropertyPresent(HSTRING typeName, HSTRING propertyName, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsReadOnlyPropertyPresent(*reinterpret_cast<hstring const*>(&typeName), *reinterpret_cast<hstring const*>(&propertyName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsWriteablePropertyPresent(HSTRING typeName, HSTRING propertyName, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsWriteablePropertyPresent(*reinterpret_cast<hstring const*>(&typeName), *reinterpret_cast<hstring const*>(&propertyName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsEnumNamedValuePresent(HSTRING enumTypeName, HSTRING valueName, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsEnumNamedValuePresent(*reinterpret_cast<hstring const*>(&enumTypeName), *reinterpret_cast<hstring const*>(&valueName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsApiContractPresentByMajor(HSTRING contractName, uint16_t majorVersion, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsApiContractPresent(*reinterpret_cast<hstring const*>(&contractName), majorVersion));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsApiContractPresentByMajorAndMinor(HSTRING contractName, uint16_t majorVersion, uint16_t minorVersion, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsApiContractPresent(*reinterpret_cast<hstring const*>(&contractName), majorVersion, minorVersion));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Foundation::Metadata {

inline bool ApiInformation::IsTypePresent(param::hstring const& typeName)
{
    return get_activation_factory<ApiInformation, Windows::Foundation::Metadata::IApiInformationStatics>().IsTypePresent(typeName);
}

inline bool ApiInformation::IsMethodPresent(param::hstring const& typeName, param::hstring const& methodName)
{
    return get_activation_factory<ApiInformation, Windows::Foundation::Metadata::IApiInformationStatics>().IsMethodPresent(typeName, methodName);
}

inline bool ApiInformation::IsMethodPresent(param::hstring const& typeName, param::hstring const& methodName, uint32_t inputParameterCount)
{
    return get_activation_factory<ApiInformation, Windows::Foundation::Metadata::IApiInformationStatics>().IsMethodPresent(typeName, methodName, inputParameterCount);
}

inline bool ApiInformation::IsEventPresent(param::hstring const& typeName, param::hstring const& eventName)
{
    return get_activation_factory<ApiInformation, Windows::Foundation::Metadata::IApiInformationStatics>().IsEventPresent(typeName, eventName);
}

inline bool ApiInformation::IsPropertyPresent(param::hstring const& typeName, param::hstring const& propertyName)
{
    return get_activation_factory<ApiInformation, Windows::Foundation::Metadata::IApiInformationStatics>().IsPropertyPresent(typeName, propertyName);
}

inline bool ApiInformation::IsReadOnlyPropertyPresent(param::hstring const& typeName, param::hstring const& propertyName)
{
    return get_activation_factory<ApiInformation, Windows::Foundation::Metadata::IApiInformationStatics>().IsReadOnlyPropertyPresent(typeName, propertyName);
}

inline bool ApiInformation::IsWriteablePropertyPresent(param::hstring const& typeName, param::hstring const& propertyName)
{
    return get_activation_factory<ApiInformation, Windows::Foundation::Metadata::IApiInformationStatics>().IsWriteablePropertyPresent(typeName, propertyName);
}

inline bool ApiInformation::IsEnumNamedValuePresent(param::hstring const& enumTypeName, param::hstring const& valueName)
{
    return get_activation_factory<ApiInformation, Windows::Foundation::Metadata::IApiInformationStatics>().IsEnumNamedValuePresent(enumTypeName, valueName);
}

inline bool ApiInformation::IsApiContractPresent(param::hstring const& contractName, uint16_t majorVersion)
{
    return get_activation_factory<ApiInformation, Windows::Foundation::Metadata::IApiInformationStatics>().IsApiContractPresent(contractName, majorVersion);
}

inline bool ApiInformation::IsApiContractPresent(param::hstring const& contractName, uint16_t majorVersion, uint16_t minorVersion)
{
    return get_activation_factory<ApiInformation, Windows::Foundation::Metadata::IApiInformationStatics>().IsApiContractPresent(contractName, majorVersion, minorVersion);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Foundation::Metadata::IApiInformationStatics> : winrt::impl::hash_base<winrt::Windows::Foundation::Metadata::IApiInformationStatics> {};
template<> struct hash<winrt::Windows::Foundation::Metadata::ApiInformation> : winrt::impl::hash_base<winrt::Windows::Foundation::Metadata::ApiInformation> {};

}

WINRT_WARNING_POP
