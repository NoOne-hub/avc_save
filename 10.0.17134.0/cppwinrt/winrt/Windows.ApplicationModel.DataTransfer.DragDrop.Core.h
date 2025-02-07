﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.2.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.DragDrop.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.DragDrop.Core.2.h"
#include "winrt/Windows.ApplicationModel.DataTransfer.DragDrop.h"

namespace winrt::impl {

template <typename D> event_token consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManager<D>::TargetRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager, Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs> const& value) const
{
    event_token returnValue{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager)->add_TargetRequested(get_abi(value), put_abi(returnValue)));
    return returnValue;
}

template <typename D> event_revoker<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager> consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManager<D>::TargetRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager, Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager>(this, &abi_t<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager>::remove_TargetRequested, TargetRequested(value));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManager<D>::TargetRequested(event_token const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager)->remove_TargetRequested(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManager<D>::AreConcurrentOperationsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager)->get_AreConcurrentOperationsEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManager<D>::AreConcurrentOperationsEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager)->put_AreConcurrentOperationsEnabled(value));
}

template <typename D> Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManagerStatics<D>::GetForCurrentView() const
{
    Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManagerStatics)->GetForCurrentView(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageView consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragInfo<D>::Data() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageView value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo)->get_Data(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DragDrop::DragDropModifiers consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragInfo<D>::Modifiers() const
{
    Windows::ApplicationModel::DataTransfer::DragDrop::DragDropModifiers value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo)->get_Modifiers(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragInfo<D>::Position() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageOperation consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragInfo2<D>::AllowedOperations() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageOperation value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2)->get_AllowedOperations(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackage consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation<D>::Data() const
{
    Windows::ApplicationModel::DataTransfer::DataPackage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation)->get_Data(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation<D>::SetPointerId(uint32_t pointerId) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation)->SetPointerId(pointerId));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation<D>::SetDragUIContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation)->SetDragUIContentFromSoftwareBitmap(get_abi(softwareBitmap)));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation<D>::SetDragUIContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap, Windows::Foundation::Point const& anchorPoint) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation)->SetDragUIContentFromSoftwareBitmapWithAnchorPoint(get_abi(softwareBitmap), get_abi(anchorPoint)));
}

template <typename D> Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation<D>::DragUIContentMode() const
{
    Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation)->get_DragUIContentMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation<D>::DragUIContentMode(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation)->put_DragUIContentMode(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation> consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation<D>::StartAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation)->StartAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageOperation consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation2<D>::AllowedOperations() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageOperation value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2)->get_AllowedOperations(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation2<D>::AllowedOperations(Windows::ApplicationModel::DataTransfer::DataPackageOperation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2)->put_AllowedOperations(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride<D>::SetContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride)->SetContentFromSoftwareBitmap(get_abi(softwareBitmap)));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride<D>::SetContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap, Windows::Foundation::Point const& anchorPoint) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride)->SetContentFromSoftwareBitmapWithAnchorPoint(get_abi(softwareBitmap), get_abi(anchorPoint)));
}

template <typename D> bool consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride<D>::IsContentVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride)->get_IsContentVisible(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride<D>::IsContentVisible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride)->put_IsContentVisible(value));
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride<D>::Caption() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride)->get_Caption(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride<D>::Caption(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride)->put_Caption(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride<D>::IsCaptionVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride)->get_IsCaptionVisible(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride<D>::IsCaptionVisible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride)->put_IsCaptionVisible(value));
}

template <typename D> bool consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride<D>::IsGlyphVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride)->get_IsGlyphVisible(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride<D>::IsGlyphVisible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride)->put_IsGlyphVisible(value));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride<D>::Clear() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride)->Clear());
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation> consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDropOperationTarget<D>::EnterAsync(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo const& dragInfo, Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride const& dragUIOverride) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget)->EnterAsync(get_abi(dragInfo), get_abi(dragUIOverride), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation> consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDropOperationTarget<D>::OverAsync(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo const& dragInfo, Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride const& dragUIOverride) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget)->OverAsync(get_abi(dragInfo), get_abi(dragUIOverride), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDropOperationTarget<D>::LeaveAsync(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo const& dragInfo) const
{
    Windows::Foundation::IAsyncAction returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget)->LeaveAsync(get_abi(dragInfo), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation> consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDropOperationTarget<D>::DropAsync(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo const& dragInfo) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget)->DropAsync(get_abi(dragInfo), put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDropOperationTargetRequestedEventArgs<D>::SetTarget(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget const& target) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs)->SetTarget(get_abi(target)));
}

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager> : produce_base<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager>
{
    HRESULT __stdcall add_TargetRequested(void* value, event_token* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<event_token>(this->shim().TargetRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager, Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_TargetRequested(event_token value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetRequested(*reinterpret_cast<event_token const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AreConcurrentOperationsEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AreConcurrentOperationsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AreConcurrentOperationsEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AreConcurrentOperationsEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManagerStatics> : produce_base<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManagerStatics>
{
    HRESULT __stdcall GetForCurrentView(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager>(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo> : produce_base<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo>
{
    HRESULT __stdcall get_Data(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DataPackageView>(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Modifiers(Windows::ApplicationModel::DataTransfer::DragDrop::DragDropModifiers* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DragDrop::DragDropModifiers>(this->shim().Modifiers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Position(Windows::Foundation::Point* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2> : produce_base<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2>
{
    HRESULT __stdcall get_AllowedOperations(Windows::ApplicationModel::DataTransfer::DataPackageOperation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DataPackageOperation>(this->shim().AllowedOperations());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation> : produce_base<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation>
{
    HRESULT __stdcall get_Data(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DataPackage>(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetPointerId(uint32_t pointerId) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPointerId(pointerId);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetDragUIContentFromSoftwareBitmap(void* softwareBitmap) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDragUIContentFromSoftwareBitmap(*reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&softwareBitmap));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetDragUIContentFromSoftwareBitmapWithAnchorPoint(void* softwareBitmap, Windows::Foundation::Point anchorPoint) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDragUIContentFromSoftwareBitmap(*reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&softwareBitmap), *reinterpret_cast<Windows::Foundation::Point const*>(&anchorPoint));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DragUIContentMode(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode>(this->shim().DragUIContentMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DragUIContentMode(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DragUIContentMode(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartAsync(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation>>(this->shim().StartAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2> : produce_base<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2>
{
    HRESULT __stdcall get_AllowedOperations(Windows::ApplicationModel::DataTransfer::DataPackageOperation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DataPackageOperation>(this->shim().AllowedOperations());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AllowedOperations(Windows::ApplicationModel::DataTransfer::DataPackageOperation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowedOperations(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::DataPackageOperation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride> : produce_base<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride>
{
    HRESULT __stdcall SetContentFromSoftwareBitmap(void* softwareBitmap) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetContentFromSoftwareBitmap(*reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&softwareBitmap));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetContentFromSoftwareBitmapWithAnchorPoint(void* softwareBitmap, Windows::Foundation::Point anchorPoint) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetContentFromSoftwareBitmap(*reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&softwareBitmap), *reinterpret_cast<Windows::Foundation::Point const*>(&anchorPoint));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsContentVisible(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsContentVisible());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsContentVisible(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsContentVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Caption(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Caption());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Caption(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Caption(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsCaptionVisible(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCaptionVisible());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsCaptionVisible(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsCaptionVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsGlyphVisible(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsGlyphVisible());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsGlyphVisible(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsGlyphVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Clear() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Clear();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget> : produce_base<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget>
{
    HRESULT __stdcall EnterAsync(void* dragInfo, void* dragUIOverride, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation>>(this->shim().EnterAsync(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo const*>(&dragInfo), *reinterpret_cast<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride const*>(&dragUIOverride)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OverAsync(void* dragInfo, void* dragUIOverride, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation>>(this->shim().OverAsync(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo const*>(&dragInfo), *reinterpret_cast<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride const*>(&dragUIOverride)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall LeaveAsync(void* dragInfo, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::IAsyncAction>(this->shim().LeaveAsync(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo const*>(&dragInfo)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall DropAsync(void* dragInfo, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation>>(this->shim().DropAsync(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo const*>(&dragInfo)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs> : produce_base<D, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs>
{
    HRESULT __stdcall SetTarget(void* target) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetTarget(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget const*>(&target));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core {

inline Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager CoreDragDropManager::GetForCurrentView()
{
    return get_activation_factory<CoreDragDropManager, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManagerStatics>().GetForCurrentView();
}

inline CoreDragOperation::CoreDragOperation() :
    CoreDragOperation(get_activation_factory<CoreDragOperation>().ActivateInstance<CoreDragOperation>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManagerStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManagerStatics> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragOperation> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragOperation> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs> {};

}

WINRT_WARNING_POP
