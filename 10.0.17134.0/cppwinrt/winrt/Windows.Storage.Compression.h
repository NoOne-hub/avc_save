﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Storage.Compression.2.h"
#include "winrt/Windows.Storage.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Storage_Compression_ICompressor<D>::FinishAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Compression::ICompressor)->FinishAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Storage::Streams::IOutputStream consume_Windows_Storage_Compression_ICompressor<D>::DetachStream() const
{
    Windows::Storage::Streams::IOutputStream stream{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Compression::ICompressor)->DetachStream(put_abi(stream)));
    return stream;
}

template <typename D> Windows::Storage::Compression::Compressor consume_Windows_Storage_Compression_ICompressorFactory<D>::CreateCompressor(Windows::Storage::Streams::IOutputStream const& underlyingStream) const
{
    Windows::Storage::Compression::Compressor createdCompressor{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Compression::ICompressorFactory)->CreateCompressor(get_abi(underlyingStream), put_abi(createdCompressor)));
    return createdCompressor;
}

template <typename D> Windows::Storage::Compression::Compressor consume_Windows_Storage_Compression_ICompressorFactory<D>::CreateCompressorEx(Windows::Storage::Streams::IOutputStream const& underlyingStream, Windows::Storage::Compression::CompressAlgorithm const& algorithm, uint32_t blockSize) const
{
    Windows::Storage::Compression::Compressor createdCompressor{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Compression::ICompressorFactory)->CreateCompressorEx(get_abi(underlyingStream), get_abi(algorithm), blockSize, put_abi(createdCompressor)));
    return createdCompressor;
}

template <typename D> Windows::Storage::Streams::IInputStream consume_Windows_Storage_Compression_IDecompressor<D>::DetachStream() const
{
    Windows::Storage::Streams::IInputStream stream{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Compression::IDecompressor)->DetachStream(put_abi(stream)));
    return stream;
}

template <typename D> Windows::Storage::Compression::Decompressor consume_Windows_Storage_Compression_IDecompressorFactory<D>::CreateDecompressor(Windows::Storage::Streams::IInputStream const& underlyingStream) const
{
    Windows::Storage::Compression::Decompressor createdDecompressor{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Compression::IDecompressorFactory)->CreateDecompressor(get_abi(underlyingStream), put_abi(createdDecompressor)));
    return createdDecompressor;
}

template <typename D>
struct produce<D, Windows::Storage::Compression::ICompressor> : produce_base<D, Windows::Storage::Compression::ICompressor>
{
    HRESULT __stdcall FinishAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().FinishAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall DetachStream(void** stream) noexcept final
    {
        try
        {
            *stream = nullptr;
            typename D::abi_guard guard(this->shim());
            *stream = detach_from<Windows::Storage::Streams::IOutputStream>(this->shim().DetachStream());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Compression::ICompressorFactory> : produce_base<D, Windows::Storage::Compression::ICompressorFactory>
{
    HRESULT __stdcall CreateCompressor(void* underlyingStream, void** createdCompressor) noexcept final
    {
        try
        {
            *createdCompressor = nullptr;
            typename D::abi_guard guard(this->shim());
            *createdCompressor = detach_from<Windows::Storage::Compression::Compressor>(this->shim().CreateCompressor(*reinterpret_cast<Windows::Storage::Streams::IOutputStream const*>(&underlyingStream)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateCompressorEx(void* underlyingStream, Windows::Storage::Compression::CompressAlgorithm algorithm, uint32_t blockSize, void** createdCompressor) noexcept final
    {
        try
        {
            *createdCompressor = nullptr;
            typename D::abi_guard guard(this->shim());
            *createdCompressor = detach_from<Windows::Storage::Compression::Compressor>(this->shim().CreateCompressorEx(*reinterpret_cast<Windows::Storage::Streams::IOutputStream const*>(&underlyingStream), *reinterpret_cast<Windows::Storage::Compression::CompressAlgorithm const*>(&algorithm), blockSize));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Compression::IDecompressor> : produce_base<D, Windows::Storage::Compression::IDecompressor>
{
    HRESULT __stdcall DetachStream(void** stream) noexcept final
    {
        try
        {
            *stream = nullptr;
            typename D::abi_guard guard(this->shim());
            *stream = detach_from<Windows::Storage::Streams::IInputStream>(this->shim().DetachStream());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Compression::IDecompressorFactory> : produce_base<D, Windows::Storage::Compression::IDecompressorFactory>
{
    HRESULT __stdcall CreateDecompressor(void* underlyingStream, void** createdDecompressor) noexcept final
    {
        try
        {
            *createdDecompressor = nullptr;
            typename D::abi_guard guard(this->shim());
            *createdDecompressor = detach_from<Windows::Storage::Compression::Decompressor>(this->shim().CreateDecompressor(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&underlyingStream)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Storage::Compression {

inline Compressor::Compressor(Windows::Storage::Streams::IOutputStream const& underlyingStream) :
    Compressor(get_activation_factory<Compressor, Windows::Storage::Compression::ICompressorFactory>().CreateCompressor(underlyingStream))
{}

inline Compressor::Compressor(Windows::Storage::Streams::IOutputStream const& underlyingStream, Windows::Storage::Compression::CompressAlgorithm const& algorithm, uint32_t blockSize) :
    Compressor(get_activation_factory<Compressor, Windows::Storage::Compression::ICompressorFactory>().CreateCompressorEx(underlyingStream, algorithm, blockSize))
{}

inline Decompressor::Decompressor(Windows::Storage::Streams::IInputStream const& underlyingStream) :
    Decompressor(get_activation_factory<Decompressor, Windows::Storage::Compression::IDecompressorFactory>().CreateDecompressor(underlyingStream))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Storage::Compression::ICompressor> : winrt::impl::hash_base<winrt::Windows::Storage::Compression::ICompressor> {};
template<> struct hash<winrt::Windows::Storage::Compression::ICompressorFactory> : winrt::impl::hash_base<winrt::Windows::Storage::Compression::ICompressorFactory> {};
template<> struct hash<winrt::Windows::Storage::Compression::IDecompressor> : winrt::impl::hash_base<winrt::Windows::Storage::Compression::IDecompressor> {};
template<> struct hash<winrt::Windows::Storage::Compression::IDecompressorFactory> : winrt::impl::hash_base<winrt::Windows::Storage::Compression::IDecompressorFactory> {};
template<> struct hash<winrt::Windows::Storage::Compression::Compressor> : winrt::impl::hash_base<winrt::Windows::Storage::Compression::Compressor> {};
template<> struct hash<winrt::Windows::Storage::Compression::Decompressor> : winrt::impl::hash_base<winrt::Windows::Storage::Compression::Decompressor> {};

}

WINRT_WARNING_POP
