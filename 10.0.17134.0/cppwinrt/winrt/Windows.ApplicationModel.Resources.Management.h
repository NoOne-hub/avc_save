﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.ApplicationModel.Resources.Management.2.h"
#include "winrt/Windows.ApplicationModel.Resources.h"

namespace winrt::impl {

template <typename D> Windows::ApplicationModel::Resources::Management::IndexedResourceType consume_Windows_ApplicationModel_Resources_Management_IIndexedResourceCandidate<D>::Type() const
{
    Windows::ApplicationModel::Resources::Management::IndexedResourceType value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate)->get_Type(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_Resources_Management_IIndexedResourceCandidate<D>::Uri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, hstring> consume_Windows_ApplicationModel_Resources_Management_IIndexedResourceCandidate<D>::Metadata() const
{
    Windows::Foundation::Collections::IMapView<hstring, hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate)->get_Metadata(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Management::IndexedResourceQualifier> consume_Windows_ApplicationModel_Resources_Management_IIndexedResourceCandidate<D>::Qualifiers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Management::IndexedResourceQualifier> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate)->get_Qualifiers(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Resources_Management_IIndexedResourceCandidate<D>::ValueAsString() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate)->get_ValueAsString(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Resources_Management_IIndexedResourceCandidate<D>::GetQualifierValue(param::hstring const& qualifierName) const
{
    hstring qualifierValue{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate)->GetQualifierValue(get_abi(qualifierName), put_abi(qualifierValue)));
    return qualifierValue;
}

template <typename D> hstring consume_Windows_ApplicationModel_Resources_Management_IIndexedResourceQualifier<D>::QualifierName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier)->get_QualifierName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Resources_Management_IIndexedResourceQualifier<D>::QualifierValue() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier)->get_QualifierValue(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate consume_Windows_ApplicationModel_Resources_Management_IResourceIndexer<D>::IndexFilePath(Windows::Foundation::Uri const& filePath) const
{
    Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate candidate{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Resources::Management::IResourceIndexer)->IndexFilePath(get_abi(filePath), put_abi(candidate)));
    return candidate;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate>> consume_Windows_ApplicationModel_Resources_Management_IResourceIndexer<D>::IndexFileContentsAsync(Windows::Foundation::Uri const& file) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Resources::Management::IResourceIndexer)->IndexFileContentsAsync(get_abi(file), put_abi(operation)));
    return operation;
}

template <typename D> Windows::ApplicationModel::Resources::Management::ResourceIndexer consume_Windows_ApplicationModel_Resources_Management_IResourceIndexerFactory<D>::CreateResourceIndexer(Windows::Foundation::Uri const& projectRoot) const
{
    Windows::ApplicationModel::Resources::Management::ResourceIndexer indexer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory)->CreateResourceIndexer(get_abi(projectRoot), put_abi(indexer)));
    return indexer;
}

template <typename D> Windows::ApplicationModel::Resources::Management::ResourceIndexer consume_Windows_ApplicationModel_Resources_Management_IResourceIndexerFactory2<D>::CreateResourceIndexerWithExtension(Windows::Foundation::Uri const& projectRoot, Windows::Foundation::Uri const& extensionDllPath) const
{
    Windows::ApplicationModel::Resources::Management::ResourceIndexer indexer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory2)->CreateResourceIndexerWithExtension(get_abi(projectRoot), get_abi(extensionDllPath), put_abi(indexer)));
    return indexer;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate> : produce_base<D, Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate>
{
    HRESULT __stdcall get_Type(Windows::ApplicationModel::Resources::Management::IndexedResourceType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Resources::Management::IndexedResourceType>(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

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

    HRESULT __stdcall get_Metadata(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, hstring>>(this->shim().Metadata());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Qualifiers(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Management::IndexedResourceQualifier>>(this->shim().Qualifiers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ValueAsString(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ValueAsString());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetQualifierValue(HSTRING qualifierName, HSTRING* qualifierValue) noexcept final
    {
        try
        {
            *qualifierValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *qualifierValue = detach_from<hstring>(this->shim().GetQualifierValue(*reinterpret_cast<hstring const*>(&qualifierName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier> : produce_base<D, Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier>
{
    HRESULT __stdcall get_QualifierName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().QualifierName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_QualifierValue(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().QualifierValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Resources::Management::IResourceIndexer> : produce_base<D, Windows::ApplicationModel::Resources::Management::IResourceIndexer>
{
    HRESULT __stdcall IndexFilePath(void* filePath, void** candidate) noexcept final
    {
        try
        {
            *candidate = nullptr;
            typename D::abi_guard guard(this->shim());
            *candidate = detach_from<Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate>(this->shim().IndexFilePath(*reinterpret_cast<Windows::Foundation::Uri const*>(&filePath)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IndexFileContentsAsync(void* file, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate>>>(this->shim().IndexFileContentsAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory> : produce_base<D, Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory>
{
    HRESULT __stdcall CreateResourceIndexer(void* projectRoot, void** indexer) noexcept final
    {
        try
        {
            *indexer = nullptr;
            typename D::abi_guard guard(this->shim());
            *indexer = detach_from<Windows::ApplicationModel::Resources::Management::ResourceIndexer>(this->shim().CreateResourceIndexer(*reinterpret_cast<Windows::Foundation::Uri const*>(&projectRoot)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory2> : produce_base<D, Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory2>
{
    HRESULT __stdcall CreateResourceIndexerWithExtension(void* projectRoot, void* extensionDllPath, void** indexer) noexcept final
    {
        try
        {
            *indexer = nullptr;
            typename D::abi_guard guard(this->shim());
            *indexer = detach_from<Windows::ApplicationModel::Resources::Management::ResourceIndexer>(this->shim().CreateResourceIndexerWithExtension(*reinterpret_cast<Windows::Foundation::Uri const*>(&projectRoot), *reinterpret_cast<Windows::Foundation::Uri const*>(&extensionDllPath)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Resources::Management {

inline ResourceIndexer::ResourceIndexer(Windows::Foundation::Uri const& projectRoot) :
    ResourceIndexer(get_activation_factory<ResourceIndexer, Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory>().CreateResourceIndexer(projectRoot))
{}

inline ResourceIndexer::ResourceIndexer(Windows::Foundation::Uri const& projectRoot, Windows::Foundation::Uri const& extensionDllPath) :
    ResourceIndexer(get_activation_factory<ResourceIndexer, Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory2>().CreateResourceIndexerWithExtension(projectRoot, extensionDllPath))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate> {};
template<> struct hash<winrt::Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier> {};
template<> struct hash<winrt::Windows::ApplicationModel::Resources::Management::IResourceIndexer> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Resources::Management::IResourceIndexer> {};
template<> struct hash<winrt::Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory2> {};
template<> struct hash<winrt::Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate> {};
template<> struct hash<winrt::Windows::ApplicationModel::Resources::Management::IndexedResourceQualifier> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Resources::Management::IndexedResourceQualifier> {};
template<> struct hash<winrt::Windows::ApplicationModel::Resources::Management::ResourceIndexer> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Resources::Management::ResourceIndexer> {};

}

WINRT_WARNING_POP
