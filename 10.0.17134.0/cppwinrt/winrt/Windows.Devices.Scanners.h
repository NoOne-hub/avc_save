﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Graphics.Printing.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Devices.Scanners.2.h"
#include "winrt/Windows.Devices.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Devices_Scanners_IImageScanner<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScanner)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Scanners::ImageScannerScanSource consume_Windows_Devices_Scanners_IImageScanner<D>::DefaultScanSource() const
{
    Windows::Devices::Scanners::ImageScannerScanSource value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScanner)->get_DefaultScanSource(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Scanners_IImageScanner<D>::IsScanSourceSupported(Windows::Devices::Scanners::ImageScannerScanSource const& value) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScanner)->IsScanSourceSupported(get_abi(value), &result));
    return result;
}

template <typename D> Windows::Devices::Scanners::ImageScannerFlatbedConfiguration consume_Windows_Devices_Scanners_IImageScanner<D>::FlatbedConfiguration() const
{
    Windows::Devices::Scanners::ImageScannerFlatbedConfiguration value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScanner)->get_FlatbedConfiguration(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Scanners::ImageScannerFeederConfiguration consume_Windows_Devices_Scanners_IImageScanner<D>::FeederConfiguration() const
{
    Windows::Devices::Scanners::ImageScannerFeederConfiguration value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScanner)->get_FeederConfiguration(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Scanners::ImageScannerAutoConfiguration consume_Windows_Devices_Scanners_IImageScanner<D>::AutoConfiguration() const
{
    Windows::Devices::Scanners::ImageScannerAutoConfiguration value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScanner)->get_AutoConfiguration(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Scanners_IImageScanner<D>::IsPreviewSupported(Windows::Devices::Scanners::ImageScannerScanSource const& scanSource) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScanner)->IsPreviewSupported(get_abi(scanSource), &result));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Scanners::ImageScannerPreviewResult> consume_Windows_Devices_Scanners_IImageScanner<D>::ScanPreviewToStreamAsync(Windows::Devices::Scanners::ImageScannerScanSource const& scanSource, Windows::Storage::Streams::IRandomAccessStream const& targetStream) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Scanners::ImageScannerPreviewResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScanner)->ScanPreviewToStreamAsync(get_abi(scanSource), get_abi(targetStream), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Devices::Scanners::ImageScannerScanResult, uint32_t> consume_Windows_Devices_Scanners_IImageScanner<D>::ScanFilesToFolderAsync(Windows::Devices::Scanners::ImageScannerScanSource const& scanSource, Windows::Storage::StorageFolder const& storageFolder) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Devices::Scanners::ImageScannerScanResult, uint32_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScanner)->ScanFilesToFolderAsync(get_abi(scanSource), get_abi(storageFolder), put_abi(operation)));
    return operation;
}

template <typename D> bool consume_Windows_Devices_Scanners_IImageScannerFeederConfiguration<D>::CanAutoDetectPageSize() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerFeederConfiguration)->get_CanAutoDetectPageSize(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Scanners_IImageScannerFeederConfiguration<D>::AutoDetectPageSize() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerFeederConfiguration)->get_AutoDetectPageSize(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Scanners_IImageScannerFeederConfiguration<D>::AutoDetectPageSize(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerFeederConfiguration)->put_AutoDetectPageSize(value));
}

template <typename D> Windows::Graphics::Printing::PrintMediaSize consume_Windows_Devices_Scanners_IImageScannerFeederConfiguration<D>::PageSize() const
{
    Windows::Graphics::Printing::PrintMediaSize value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerFeederConfiguration)->get_PageSize(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Scanners_IImageScannerFeederConfiguration<D>::PageSize(Windows::Graphics::Printing::PrintMediaSize const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerFeederConfiguration)->put_PageSize(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing::PrintOrientation consume_Windows_Devices_Scanners_IImageScannerFeederConfiguration<D>::PageOrientation() const
{
    Windows::Graphics::Printing::PrintOrientation value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerFeederConfiguration)->get_PageOrientation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Scanners_IImageScannerFeederConfiguration<D>::PageOrientation(Windows::Graphics::Printing::PrintOrientation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerFeederConfiguration)->put_PageOrientation(get_abi(value)));
}

template <typename D> Windows::Foundation::Size consume_Windows_Devices_Scanners_IImageScannerFeederConfiguration<D>::PageSizeDimensions() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerFeederConfiguration)->get_PageSizeDimensions(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Scanners_IImageScannerFeederConfiguration<D>::IsPageSizeSupported(Windows::Graphics::Printing::PrintMediaSize const& pageSize, Windows::Graphics::Printing::PrintOrientation const& pageOrientation) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerFeederConfiguration)->IsPageSizeSupported(get_abi(pageSize), get_abi(pageOrientation), &result));
    return result;
}

template <typename D> uint32_t consume_Windows_Devices_Scanners_IImageScannerFeederConfiguration<D>::MaxNumberOfPages() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerFeederConfiguration)->get_MaxNumberOfPages(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Scanners_IImageScannerFeederConfiguration<D>::MaxNumberOfPages(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerFeederConfiguration)->put_MaxNumberOfPages(value));
}

template <typename D> bool consume_Windows_Devices_Scanners_IImageScannerFeederConfiguration<D>::CanScanDuplex() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerFeederConfiguration)->get_CanScanDuplex(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Scanners_IImageScannerFeederConfiguration<D>::Duplex() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerFeederConfiguration)->get_Duplex(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Scanners_IImageScannerFeederConfiguration<D>::Duplex(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerFeederConfiguration)->put_Duplex(value));
}

template <typename D> bool consume_Windows_Devices_Scanners_IImageScannerFeederConfiguration<D>::CanScanAhead() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerFeederConfiguration)->get_CanScanAhead(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Scanners_IImageScannerFeederConfiguration<D>::ScanAhead() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerFeederConfiguration)->get_ScanAhead(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Scanners_IImageScannerFeederConfiguration<D>::ScanAhead(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerFeederConfiguration)->put_ScanAhead(value));
}

template <typename D> Windows::Devices::Scanners::ImageScannerFormat consume_Windows_Devices_Scanners_IImageScannerFormatConfiguration<D>::DefaultFormat() const
{
    Windows::Devices::Scanners::ImageScannerFormat value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerFormatConfiguration)->get_DefaultFormat(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Scanners::ImageScannerFormat consume_Windows_Devices_Scanners_IImageScannerFormatConfiguration<D>::Format() const
{
    Windows::Devices::Scanners::ImageScannerFormat value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerFormatConfiguration)->get_Format(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Scanners_IImageScannerFormatConfiguration<D>::Format(Windows::Devices::Scanners::ImageScannerFormat const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerFormatConfiguration)->put_Format(get_abi(value)));
}

template <typename D> bool consume_Windows_Devices_Scanners_IImageScannerFormatConfiguration<D>::IsFormatSupported(Windows::Devices::Scanners::ImageScannerFormat const& value) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerFormatConfiguration)->IsFormatSupported(get_abi(value), &result));
    return result;
}

template <typename D> bool consume_Windows_Devices_Scanners_IImageScannerPreviewResult<D>::Succeeded() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerPreviewResult)->get_Succeeded(&value));
    return value;
}

template <typename D> Windows::Devices::Scanners::ImageScannerFormat consume_Windows_Devices_Scanners_IImageScannerPreviewResult<D>::Format() const
{
    Windows::Devices::Scanners::ImageScannerFormat value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerPreviewResult)->get_Format(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile> consume_Windows_Devices_Scanners_IImageScannerScanResult<D>::ScannedFiles() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerScanResult)->get_ScannedFiles(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration<D>::MinScanArea() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerSourceConfiguration)->get_MinScanArea(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration<D>::MaxScanArea() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerSourceConfiguration)->get_MaxScanArea(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration<D>::SelectedScanRegion() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerSourceConfiguration)->get_SelectedScanRegion(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration<D>::SelectedScanRegion(Windows::Foundation::Rect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerSourceConfiguration)->put_SelectedScanRegion(get_abi(value)));
}

template <typename D> Windows::Devices::Scanners::ImageScannerAutoCroppingMode consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration<D>::AutoCroppingMode() const
{
    Windows::Devices::Scanners::ImageScannerAutoCroppingMode value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerSourceConfiguration)->get_AutoCroppingMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration<D>::AutoCroppingMode(Windows::Devices::Scanners::ImageScannerAutoCroppingMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerSourceConfiguration)->put_AutoCroppingMode(get_abi(value)));
}

template <typename D> bool consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration<D>::IsAutoCroppingModeSupported(Windows::Devices::Scanners::ImageScannerAutoCroppingMode const& value) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerSourceConfiguration)->IsAutoCroppingModeSupported(get_abi(value), &result));
    return result;
}

template <typename D> Windows::Devices::Scanners::ImageScannerResolution consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration<D>::MinResolution() const
{
    Windows::Devices::Scanners::ImageScannerResolution value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerSourceConfiguration)->get_MinResolution(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Scanners::ImageScannerResolution consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration<D>::MaxResolution() const
{
    Windows::Devices::Scanners::ImageScannerResolution value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerSourceConfiguration)->get_MaxResolution(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Scanners::ImageScannerResolution consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration<D>::OpticalResolution() const
{
    Windows::Devices::Scanners::ImageScannerResolution value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerSourceConfiguration)->get_OpticalResolution(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Scanners::ImageScannerResolution consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration<D>::DesiredResolution() const
{
    Windows::Devices::Scanners::ImageScannerResolution value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerSourceConfiguration)->get_DesiredResolution(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration<D>::DesiredResolution(Windows::Devices::Scanners::ImageScannerResolution const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerSourceConfiguration)->put_DesiredResolution(get_abi(value)));
}

template <typename D> Windows::Devices::Scanners::ImageScannerResolution consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration<D>::ActualResolution() const
{
    Windows::Devices::Scanners::ImageScannerResolution value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerSourceConfiguration)->get_ActualResolution(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Scanners::ImageScannerColorMode consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration<D>::DefaultColorMode() const
{
    Windows::Devices::Scanners::ImageScannerColorMode value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerSourceConfiguration)->get_DefaultColorMode(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Scanners::ImageScannerColorMode consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration<D>::ColorMode() const
{
    Windows::Devices::Scanners::ImageScannerColorMode value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerSourceConfiguration)->get_ColorMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration<D>::ColorMode(Windows::Devices::Scanners::ImageScannerColorMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerSourceConfiguration)->put_ColorMode(get_abi(value)));
}

template <typename D> bool consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration<D>::IsColorModeSupported(Windows::Devices::Scanners::ImageScannerColorMode const& value) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerSourceConfiguration)->IsColorModeSupported(get_abi(value), &result));
    return result;
}

template <typename D> int32_t consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration<D>::MinBrightness() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerSourceConfiguration)->get_MinBrightness(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration<D>::MaxBrightness() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerSourceConfiguration)->get_MaxBrightness(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration<D>::BrightnessStep() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerSourceConfiguration)->get_BrightnessStep(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration<D>::DefaultBrightness() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerSourceConfiguration)->get_DefaultBrightness(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration<D>::Brightness() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerSourceConfiguration)->get_Brightness(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration<D>::Brightness(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerSourceConfiguration)->put_Brightness(value));
}

template <typename D> int32_t consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration<D>::MinContrast() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerSourceConfiguration)->get_MinContrast(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration<D>::MaxContrast() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerSourceConfiguration)->get_MaxContrast(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration<D>::ContrastStep() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerSourceConfiguration)->get_ContrastStep(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration<D>::DefaultContrast() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerSourceConfiguration)->get_DefaultContrast(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration<D>::Contrast() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerSourceConfiguration)->get_Contrast(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration<D>::Contrast(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerSourceConfiguration)->put_Contrast(value));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Scanners::ImageScanner> consume_Windows_Devices_Scanners_IImageScannerStatics<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Scanners::ImageScanner> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerStatics)->FromIdAsync(get_abi(deviceId), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> hstring consume_Windows_Devices_Scanners_IImageScannerStatics<D>::GetDeviceSelector() const
{
    hstring selector{};
    check_hresult(WINRT_SHIM(Windows::Devices::Scanners::IImageScannerStatics)->GetDeviceSelector(put_abi(selector)));
    return selector;
}

template <typename D>
struct produce<D, Windows::Devices::Scanners::IImageScanner> : produce_base<D, Windows::Devices::Scanners::IImageScanner>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultScanSource(Windows::Devices::Scanners::ImageScannerScanSource* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Scanners::ImageScannerScanSource>(this->shim().DefaultScanSource());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsScanSourceSupported(Windows::Devices::Scanners::ImageScannerScanSource value, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsScanSourceSupported(*reinterpret_cast<Windows::Devices::Scanners::ImageScannerScanSource const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FlatbedConfiguration(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Scanners::ImageScannerFlatbedConfiguration>(this->shim().FlatbedConfiguration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FeederConfiguration(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Scanners::ImageScannerFeederConfiguration>(this->shim().FeederConfiguration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AutoConfiguration(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Scanners::ImageScannerAutoConfiguration>(this->shim().AutoConfiguration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsPreviewSupported(Windows::Devices::Scanners::ImageScannerScanSource scanSource, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsPreviewSupported(*reinterpret_cast<Windows::Devices::Scanners::ImageScannerScanSource const*>(&scanSource)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ScanPreviewToStreamAsync(Windows::Devices::Scanners::ImageScannerScanSource scanSource, void* targetStream, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Scanners::ImageScannerPreviewResult>>(this->shim().ScanPreviewToStreamAsync(*reinterpret_cast<Windows::Devices::Scanners::ImageScannerScanSource const*>(&scanSource), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&targetStream)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ScanFilesToFolderAsync(Windows::Devices::Scanners::ImageScannerScanSource scanSource, void* storageFolder, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Devices::Scanners::ImageScannerScanResult, uint32_t>>(this->shim().ScanFilesToFolderAsync(*reinterpret_cast<Windows::Devices::Scanners::ImageScannerScanSource const*>(&scanSource), *reinterpret_cast<Windows::Storage::StorageFolder const*>(&storageFolder)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Scanners::IImageScannerFeederConfiguration> : produce_base<D, Windows::Devices::Scanners::IImageScannerFeederConfiguration>
{
    HRESULT __stdcall get_CanAutoDetectPageSize(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanAutoDetectPageSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AutoDetectPageSize(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AutoDetectPageSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AutoDetectPageSize(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutoDetectPageSize(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PageSize(Windows::Graphics::Printing::PrintMediaSize* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintMediaSize>(this->shim().PageSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PageSize(Windows::Graphics::Printing::PrintMediaSize value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PageSize(*reinterpret_cast<Windows::Graphics::Printing::PrintMediaSize const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PageOrientation(Windows::Graphics::Printing::PrintOrientation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintOrientation>(this->shim().PageOrientation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PageOrientation(Windows::Graphics::Printing::PrintOrientation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PageOrientation(*reinterpret_cast<Windows::Graphics::Printing::PrintOrientation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PageSizeDimensions(Windows::Foundation::Size* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Size>(this->shim().PageSizeDimensions());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsPageSizeSupported(Windows::Graphics::Printing::PrintMediaSize pageSize, Windows::Graphics::Printing::PrintOrientation pageOrientation, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsPageSizeSupported(*reinterpret_cast<Windows::Graphics::Printing::PrintMediaSize const*>(&pageSize), *reinterpret_cast<Windows::Graphics::Printing::PrintOrientation const*>(&pageOrientation)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxNumberOfPages(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxNumberOfPages());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MaxNumberOfPages(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxNumberOfPages(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CanScanDuplex(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanScanDuplex());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Duplex(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Duplex());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Duplex(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Duplex(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CanScanAhead(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanScanAhead());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ScanAhead(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ScanAhead());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ScanAhead(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScanAhead(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Scanners::IImageScannerFormatConfiguration> : produce_base<D, Windows::Devices::Scanners::IImageScannerFormatConfiguration>
{
    HRESULT __stdcall get_DefaultFormat(Windows::Devices::Scanners::ImageScannerFormat* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Scanners::ImageScannerFormat>(this->shim().DefaultFormat());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Format(Windows::Devices::Scanners::ImageScannerFormat* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Scanners::ImageScannerFormat>(this->shim().Format());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Format(Windows::Devices::Scanners::ImageScannerFormat value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Format(*reinterpret_cast<Windows::Devices::Scanners::ImageScannerFormat const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsFormatSupported(Windows::Devices::Scanners::ImageScannerFormat value, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsFormatSupported(*reinterpret_cast<Windows::Devices::Scanners::ImageScannerFormat const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Scanners::IImageScannerPreviewResult> : produce_base<D, Windows::Devices::Scanners::IImageScannerPreviewResult>
{
    HRESULT __stdcall get_Succeeded(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Succeeded());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Format(Windows::Devices::Scanners::ImageScannerFormat* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Scanners::ImageScannerFormat>(this->shim().Format());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Scanners::IImageScannerScanResult> : produce_base<D, Windows::Devices::Scanners::IImageScannerScanResult>
{
    HRESULT __stdcall get_ScannedFiles(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>>(this->shim().ScannedFiles());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Scanners::IImageScannerSourceConfiguration> : produce_base<D, Windows::Devices::Scanners::IImageScannerSourceConfiguration>
{
    HRESULT __stdcall get_MinScanArea(Windows::Foundation::Size* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Size>(this->shim().MinScanArea());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxScanArea(Windows::Foundation::Size* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Size>(this->shim().MaxScanArea());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedScanRegion(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Rect>(this->shim().SelectedScanRegion());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedScanRegion(Windows::Foundation::Rect value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectedScanRegion(*reinterpret_cast<Windows::Foundation::Rect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AutoCroppingMode(Windows::Devices::Scanners::ImageScannerAutoCroppingMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Scanners::ImageScannerAutoCroppingMode>(this->shim().AutoCroppingMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AutoCroppingMode(Windows::Devices::Scanners::ImageScannerAutoCroppingMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutoCroppingMode(*reinterpret_cast<Windows::Devices::Scanners::ImageScannerAutoCroppingMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsAutoCroppingModeSupported(Windows::Devices::Scanners::ImageScannerAutoCroppingMode value, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsAutoCroppingModeSupported(*reinterpret_cast<Windows::Devices::Scanners::ImageScannerAutoCroppingMode const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MinResolution(struct struct_Windows_Devices_Scanners_ImageScannerResolution* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Scanners::ImageScannerResolution>(this->shim().MinResolution());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxResolution(struct struct_Windows_Devices_Scanners_ImageScannerResolution* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Scanners::ImageScannerResolution>(this->shim().MaxResolution());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OpticalResolution(struct struct_Windows_Devices_Scanners_ImageScannerResolution* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Scanners::ImageScannerResolution>(this->shim().OpticalResolution());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredResolution(struct struct_Windows_Devices_Scanners_ImageScannerResolution* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Scanners::ImageScannerResolution>(this->shim().DesiredResolution());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredResolution(struct struct_Windows_Devices_Scanners_ImageScannerResolution value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredResolution(*reinterpret_cast<Windows::Devices::Scanners::ImageScannerResolution const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ActualResolution(struct struct_Windows_Devices_Scanners_ImageScannerResolution* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Scanners::ImageScannerResolution>(this->shim().ActualResolution());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultColorMode(Windows::Devices::Scanners::ImageScannerColorMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Scanners::ImageScannerColorMode>(this->shim().DefaultColorMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ColorMode(Windows::Devices::Scanners::ImageScannerColorMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Scanners::ImageScannerColorMode>(this->shim().ColorMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ColorMode(Windows::Devices::Scanners::ImageScannerColorMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ColorMode(*reinterpret_cast<Windows::Devices::Scanners::ImageScannerColorMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsColorModeSupported(Windows::Devices::Scanners::ImageScannerColorMode value, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsColorModeSupported(*reinterpret_cast<Windows::Devices::Scanners::ImageScannerColorMode const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MinBrightness(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().MinBrightness());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxBrightness(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().MaxBrightness());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BrightnessStep(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().BrightnessStep());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultBrightness(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().DefaultBrightness());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Brightness(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Brightness());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Brightness(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Brightness(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MinContrast(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().MinContrast());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxContrast(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().MaxContrast());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ContrastStep(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ContrastStep());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultContrast(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().DefaultContrast());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Contrast(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Contrast());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Contrast(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Contrast(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Scanners::IImageScannerStatics> : produce_base<D, Windows::Devices::Scanners::IImageScannerStatics>
{
    HRESULT __stdcall FromIdAsync(HSTRING deviceId, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Scanners::ImageScanner>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelector(HSTRING* selector) noexcept final
    {
        try
        {
            *selector = nullptr;
            typename D::abi_guard guard(this->shim());
            *selector = detach_from<hstring>(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::Scanners {

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Scanners::ImageScanner> ImageScanner::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<ImageScanner, Windows::Devices::Scanners::IImageScannerStatics>().FromIdAsync(deviceId);
}

inline hstring ImageScanner::GetDeviceSelector()
{
    return get_activation_factory<ImageScanner, Windows::Devices::Scanners::IImageScannerStatics>().GetDeviceSelector();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Scanners::IImageScanner> : winrt::impl::hash_base<winrt::Windows::Devices::Scanners::IImageScanner> {};
template<> struct hash<winrt::Windows::Devices::Scanners::IImageScannerFeederConfiguration> : winrt::impl::hash_base<winrt::Windows::Devices::Scanners::IImageScannerFeederConfiguration> {};
template<> struct hash<winrt::Windows::Devices::Scanners::IImageScannerFormatConfiguration> : winrt::impl::hash_base<winrt::Windows::Devices::Scanners::IImageScannerFormatConfiguration> {};
template<> struct hash<winrt::Windows::Devices::Scanners::IImageScannerPreviewResult> : winrt::impl::hash_base<winrt::Windows::Devices::Scanners::IImageScannerPreviewResult> {};
template<> struct hash<winrt::Windows::Devices::Scanners::IImageScannerScanResult> : winrt::impl::hash_base<winrt::Windows::Devices::Scanners::IImageScannerScanResult> {};
template<> struct hash<winrt::Windows::Devices::Scanners::IImageScannerSourceConfiguration> : winrt::impl::hash_base<winrt::Windows::Devices::Scanners::IImageScannerSourceConfiguration> {};
template<> struct hash<winrt::Windows::Devices::Scanners::IImageScannerStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Scanners::IImageScannerStatics> {};
template<> struct hash<winrt::Windows::Devices::Scanners::ImageScanner> : winrt::impl::hash_base<winrt::Windows::Devices::Scanners::ImageScanner> {};
template<> struct hash<winrt::Windows::Devices::Scanners::ImageScannerAutoConfiguration> : winrt::impl::hash_base<winrt::Windows::Devices::Scanners::ImageScannerAutoConfiguration> {};
template<> struct hash<winrt::Windows::Devices::Scanners::ImageScannerFeederConfiguration> : winrt::impl::hash_base<winrt::Windows::Devices::Scanners::ImageScannerFeederConfiguration> {};
template<> struct hash<winrt::Windows::Devices::Scanners::ImageScannerFlatbedConfiguration> : winrt::impl::hash_base<winrt::Windows::Devices::Scanners::ImageScannerFlatbedConfiguration> {};
template<> struct hash<winrt::Windows::Devices::Scanners::ImageScannerPreviewResult> : winrt::impl::hash_base<winrt::Windows::Devices::Scanners::ImageScannerPreviewResult> {};
template<> struct hash<winrt::Windows::Devices::Scanners::ImageScannerScanResult> : winrt::impl::hash_base<winrt::Windows::Devices::Scanners::ImageScannerScanResult> {};

}

WINRT_WARNING_POP
