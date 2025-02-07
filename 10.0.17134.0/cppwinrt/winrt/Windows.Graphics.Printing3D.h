﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.Graphics.Printing3D.2.h"
#include "winrt/Windows.Graphics.h"

namespace winrt::impl {

template <typename D> event_token consume_Windows_Graphics_Printing3D_IPrint3DManager<D>::TaskRequested(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DManager, Windows::Graphics::Printing3D::Print3DTaskRequestedEventArgs> const& eventHandler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DManager)->add_TaskRequested(get_abi(eventHandler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Printing3D::IPrint3DManager> consume_Windows_Graphics_Printing3D_IPrint3DManager<D>::TaskRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DManager, Windows::Graphics::Printing3D::Print3DTaskRequestedEventArgs> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Printing3D::IPrint3DManager>(this, &abi_t<Windows::Graphics::Printing3D::IPrint3DManager>::remove_TaskRequested, TaskRequested(eventHandler));
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrint3DManager<D>::TaskRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DManager)->remove_TaskRequested(get_abi(token)));
}

template <typename D> Windows::Graphics::Printing3D::Print3DManager consume_Windows_Graphics_Printing3D_IPrint3DManagerStatics<D>::GetForCurrentView() const
{
    Windows::Graphics::Printing3D::Print3DManager result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DManagerStatics)->GetForCurrentView(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Graphics_Printing3D_IPrint3DManagerStatics<D>::ShowPrintUIAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DManagerStatics)->ShowPrintUIAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Printing3D::Printing3D3MFPackage consume_Windows_Graphics_Printing3D_IPrint3DTask<D>::Source() const
{
    Windows::Graphics::Printing3D::Printing3D3MFPackage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DTask)->get_Source(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Graphics_Printing3D_IPrint3DTask<D>::Submitting(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Foundation::IInspectable> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DTask)->add_Submitting(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Graphics::Printing3D::IPrint3DTask> consume_Windows_Graphics_Printing3D_IPrint3DTask<D>::Submitting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Foundation::IInspectable> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Printing3D::IPrint3DTask>(this, &abi_t<Windows::Graphics::Printing3D::IPrint3DTask>::remove_Submitting, Submitting(eventHandler));
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrint3DTask<D>::Submitting(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DTask)->remove_Submitting(get_abi(eventCookie)));
}

template <typename D> event_token consume_Windows_Graphics_Printing3D_IPrint3DTask<D>::Completed(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Graphics::Printing3D::Print3DTaskCompletedEventArgs> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DTask)->add_Completed(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Graphics::Printing3D::IPrint3DTask> consume_Windows_Graphics_Printing3D_IPrint3DTask<D>::Completed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Graphics::Printing3D::Print3DTaskCompletedEventArgs> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Printing3D::IPrint3DTask>(this, &abi_t<Windows::Graphics::Printing3D::IPrint3DTask>::remove_Completed, Completed(eventHandler));
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrint3DTask<D>::Completed(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DTask)->remove_Completed(get_abi(eventCookie)));
}

template <typename D> event_token consume_Windows_Graphics_Printing3D_IPrint3DTask<D>::SourceChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Graphics::Printing3D::Print3DTaskSourceChangedEventArgs> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DTask)->add_SourceChanged(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Graphics::Printing3D::IPrint3DTask> consume_Windows_Graphics_Printing3D_IPrint3DTask<D>::SourceChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Graphics::Printing3D::Print3DTaskSourceChangedEventArgs> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Printing3D::IPrint3DTask>(this, &abi_t<Windows::Graphics::Printing3D::IPrint3DTask>::remove_SourceChanged, SourceChanged(eventHandler));
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrint3DTask<D>::SourceChanged(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DTask)->remove_SourceChanged(get_abi(eventCookie)));
}

template <typename D> Windows::Graphics::Printing3D::Print3DTaskCompletion consume_Windows_Graphics_Printing3D_IPrint3DTaskCompletedEventArgs<D>::Completion() const
{
    Windows::Graphics::Printing3D::Print3DTaskCompletion value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs)->get_Completion(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing3D::Print3DTaskDetail consume_Windows_Graphics_Printing3D_IPrint3DTaskCompletedEventArgs<D>::ExtendedStatus() const
{
    Windows::Graphics::Printing3D::Print3DTaskDetail value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs)->get_ExtendedStatus(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing3D::Print3DTask consume_Windows_Graphics_Printing3D_IPrint3DTaskRequest<D>::CreateTask(param::hstring const& title, param::hstring const& printerId, Windows::Graphics::Printing3D::Print3DTaskSourceRequestedHandler const& handler) const
{
    Windows::Graphics::Printing3D::Print3DTask result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DTaskRequest)->CreateTask(get_abi(title), get_abi(printerId), get_abi(handler), put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Printing3D::Print3DTaskRequest consume_Windows_Graphics_Printing3D_IPrint3DTaskRequestedEventArgs<D>::Request() const
{
    Windows::Graphics::Printing3D::Print3DTaskRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DTaskRequestedEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing3D::Printing3D3MFPackage consume_Windows_Graphics_Printing3D_IPrint3DTaskSourceChangedEventArgs<D>::Source() const
{
    Windows::Graphics::Printing3D::Printing3D3MFPackage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DTaskSourceChangedEventArgs)->get_Source(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrint3DTaskSourceRequestedArgs<D>::SetSource(Windows::Graphics::Printing3D::Printing3D3MFPackage const& source) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs)->SetSource(get_abi(source)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackage<D>::SaveAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3D3MFPackage)->SaveAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStream consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackage<D>::PrintTicket() const
{
    Windows::Storage::Streams::IRandomAccessStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3D3MFPackage)->get_PrintTicket(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackage<D>::PrintTicket(Windows::Storage::Streams::IRandomAccessStream const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3D3MFPackage)->put_PrintTicket(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStream consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackage<D>::ModelPart() const
{
    Windows::Storage::Streams::IRandomAccessStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3D3MFPackage)->get_ModelPart(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackage<D>::ModelPart(Windows::Storage::Streams::IRandomAccessStream const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3D3MFPackage)->put_ModelPart(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing3D::Printing3DTextureResource consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackage<D>::Thumbnail() const
{
    Windows::Graphics::Printing3D::Printing3DTextureResource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3D3MFPackage)->get_Thumbnail(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackage<D>::Thumbnail(Windows::Graphics::Printing3D::Printing3DTextureResource const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3D3MFPackage)->put_Thumbnail(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DTextureResource> consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackage<D>::Textures() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DTextureResource> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3D3MFPackage)->get_Textures(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing3D::Printing3DModel> consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackage<D>::LoadModelFromPackageAsync(Windows::Storage::Streams::IRandomAccessStream const& value) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing3D::Printing3DModel> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3D3MFPackage)->LoadModelFromPackageAsync(get_abi(value), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackage<D>::SaveModelToPackageAsync(Windows::Graphics::Printing3D::Printing3DModel const& value) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3D3MFPackage)->SaveModelToPackageAsync(get_abi(value), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Graphics::Printing3D::Printing3DPackageCompression consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackage2<D>::Compression() const
{
    Windows::Graphics::Printing3D::Printing3DPackageCompression value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3D3MFPackage2)->get_Compression(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackage2<D>::Compression(Windows::Graphics::Printing3D::Printing3DPackageCompression const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3D3MFPackage2)->put_Compression(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing3D::Printing3D3MFPackage> consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackageStatics<D>::LoadAsync(Windows::Storage::Streams::IRandomAccessStream const& value) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing3D::Printing3D3MFPackage> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3D3MFPackageStatics)->LoadAsync(get_abi(value), put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterial<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DBaseMaterial)->get_Name(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterial<D>::Name(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DBaseMaterial)->put_Name(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing3D::Printing3DColorMaterial consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterial<D>::Color() const
{
    Windows::Graphics::Printing3D::Printing3DColorMaterial value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DBaseMaterial)->get_Color(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterial<D>::Color(Windows::Graphics::Printing3D::Printing3DColorMaterial const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DBaseMaterial)->put_Color(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DBaseMaterial> consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterialGroup<D>::Bases() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DBaseMaterial> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup)->get_Bases(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterialGroup<D>::MaterialGroupId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup)->get_MaterialGroupId(&value));
    return value;
}

template <typename D> Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterialGroupFactory<D>::Create(uint32_t MaterialGroupId) const
{
    Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroupFactory)->Create(MaterialGroupId, put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterialStatics<D>::Abs() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DBaseMaterialStatics)->get_Abs(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterialStatics<D>::Pla() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DBaseMaterialStatics)->get_Pla(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Printing3D_IPrinting3DColorMaterial<D>::Value() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DColorMaterial)->get_Value(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DColorMaterial<D>::Value(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DColorMaterial)->put_Value(value));
}

template <typename D> Windows::UI::Color consume_Windows_Graphics_Printing3D_IPrinting3DColorMaterial2<D>::Color() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DColorMaterial2)->get_Color(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DColorMaterial2<D>::Color(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DColorMaterial2)->put_Color(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DColorMaterial> consume_Windows_Graphics_Printing3D_IPrinting3DColorMaterialGroup<D>::Colors() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DColorMaterial> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup)->get_Colors(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Printing3D_IPrinting3DColorMaterialGroup<D>::MaterialGroupId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup)->get_MaterialGroupId(&value));
    return value;
}

template <typename D> Windows::Graphics::Printing3D::Printing3DColorMaterialGroup consume_Windows_Graphics_Printing3D_IPrinting3DColorMaterialGroupFactory<D>::Create(uint32_t MaterialGroupId) const
{
    Windows::Graphics::Printing3D::Printing3DColorMaterialGroup result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroupFactory)->Create(MaterialGroupId, put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Printing3D::Printing3DMesh consume_Windows_Graphics_Printing3D_IPrinting3DComponent<D>::Mesh() const
{
    Windows::Graphics::Printing3D::Printing3DMesh value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DComponent)->get_Mesh(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DComponent<D>::Mesh(Windows::Graphics::Printing3D::Printing3DMesh const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DComponent)->put_Mesh(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DComponentWithMatrix> consume_Windows_Graphics_Printing3D_IPrinting3DComponent<D>::Components() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DComponentWithMatrix> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DComponent)->get_Components(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing3D::Printing3DTextureResource consume_Windows_Graphics_Printing3D_IPrinting3DComponent<D>::Thumbnail() const
{
    Windows::Graphics::Printing3D::Printing3DTextureResource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DComponent)->get_Thumbnail(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DComponent<D>::Thumbnail(Windows::Graphics::Printing3D::Printing3DTextureResource const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DComponent)->put_Thumbnail(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing3D::Printing3DObjectType consume_Windows_Graphics_Printing3D_IPrinting3DComponent<D>::Type() const
{
    Windows::Graphics::Printing3D::Printing3DObjectType value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DComponent)->get_Type(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DComponent<D>::Type(Windows::Graphics::Printing3D::Printing3DObjectType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DComponent)->put_Type(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing3D_IPrinting3DComponent<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DComponent)->get_Name(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DComponent<D>::Name(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DComponent)->put_Name(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing3D_IPrinting3DComponent<D>::PartNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DComponent)->get_PartNumber(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DComponent<D>::PartNumber(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DComponent)->put_PartNumber(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing3D::Printing3DComponent consume_Windows_Graphics_Printing3D_IPrinting3DComponentWithMatrix<D>::Component() const
{
    Windows::Graphics::Printing3D::Printing3DComponent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix)->get_Component(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DComponentWithMatrix<D>::Component(Windows::Graphics::Printing3D::Printing3DComponent const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix)->put_Component(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float4x4 consume_Windows_Graphics_Printing3D_IPrinting3DComponentWithMatrix<D>::Matrix() const
{
    Windows::Foundation::Numerics::float4x4 value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix)->get_Matrix(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DComponentWithMatrix<D>::Matrix(Windows::Foundation::Numerics::float4x4 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix)->put_Matrix(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<double> consume_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterial<D>::Values() const
{
    Windows::Foundation::Collections::IVector<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DCompositeMaterial)->get_Values(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DCompositeMaterial> consume_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterialGroup<D>::Composites() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DCompositeMaterial> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup)->get_Composites(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterialGroup<D>::MaterialGroupId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup)->get_MaterialGroupId(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<uint32_t> consume_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterialGroup<D>::MaterialIndices() const
{
    Windows::Foundation::Collections::IVector<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup)->get_MaterialIndices(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup consume_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterialGroup2<D>::BaseMaterialGroup() const
{
    Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup2)->get_BaseMaterialGroup(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterialGroup2<D>::BaseMaterialGroup(Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup2)->put_BaseMaterialGroup(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing3D::Printing3DCompositeMaterialGroup consume_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterialGroupFactory<D>::Create(uint32_t MaterialGroupId) const
{
    Windows::Graphics::Printing3D::Printing3DCompositeMaterialGroup result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroupFactory)->Create(MaterialGroupId, put_abi(result)));
    return result;
}

template <typename D> double consume_Windows_Graphics_Printing3D_IPrinting3DFaceReductionOptions<D>::MaxReductionArea() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions)->get_MaxReductionArea(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DFaceReductionOptions<D>::MaxReductionArea(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions)->put_MaxReductionArea(value));
}

template <typename D> uint32_t consume_Windows_Graphics_Printing3D_IPrinting3DFaceReductionOptions<D>::TargetTriangleCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions)->get_TargetTriangleCount(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DFaceReductionOptions<D>::TargetTriangleCount(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions)->put_TargetTriangleCount(value));
}

template <typename D> double consume_Windows_Graphics_Printing3D_IPrinting3DFaceReductionOptions<D>::MaxEdgeLength() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions)->get_MaxEdgeLength(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DFaceReductionOptions<D>::MaxEdgeLength(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions)->put_MaxEdgeLength(value));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup> consume_Windows_Graphics_Printing3D_IPrinting3DMaterial<D>::BaseGroups() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMaterial)->get_BaseGroups(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DColorMaterialGroup> consume_Windows_Graphics_Printing3D_IPrinting3DMaterial<D>::ColorGroups() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DColorMaterialGroup> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMaterial)->get_ColorGroups(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterialGroup> consume_Windows_Graphics_Printing3D_IPrinting3DMaterial<D>::Texture2CoordGroups() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterialGroup> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMaterial)->get_Texture2CoordGroups(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DCompositeMaterialGroup> consume_Windows_Graphics_Printing3D_IPrinting3DMaterial<D>::CompositeGroups() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DCompositeMaterialGroup> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMaterial)->get_CompositeGroups(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterialGroup> consume_Windows_Graphics_Printing3D_IPrinting3DMaterial<D>::MultiplePropertyGroups() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterialGroup> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMaterial)->get_MultiplePropertyGroups(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::VertexCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->get_VertexCount(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::VertexCount(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->put_VertexCount(value));
}

template <typename D> uint32_t consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::IndexCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->get_IndexCount(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::IndexCount(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->put_IndexCount(value));
}

template <typename D> Windows::Graphics::Printing3D::Printing3DBufferDescription consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::VertexPositionsDescription() const
{
    Windows::Graphics::Printing3D::Printing3DBufferDescription value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->get_VertexPositionsDescription(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::VertexPositionsDescription(Windows::Graphics::Printing3D::Printing3DBufferDescription const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->put_VertexPositionsDescription(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing3D::Printing3DBufferDescription consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::VertexNormalsDescription() const
{
    Windows::Graphics::Printing3D::Printing3DBufferDescription value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->get_VertexNormalsDescription(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::VertexNormalsDescription(Windows::Graphics::Printing3D::Printing3DBufferDescription const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->put_VertexNormalsDescription(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing3D::Printing3DBufferDescription consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::TriangleIndicesDescription() const
{
    Windows::Graphics::Printing3D::Printing3DBufferDescription value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->get_TriangleIndicesDescription(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::TriangleIndicesDescription(Windows::Graphics::Printing3D::Printing3DBufferDescription const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->put_TriangleIndicesDescription(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing3D::Printing3DBufferDescription consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::TriangleMaterialIndicesDescription() const
{
    Windows::Graphics::Printing3D::Printing3DBufferDescription value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->get_TriangleMaterialIndicesDescription(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::TriangleMaterialIndicesDescription(Windows::Graphics::Printing3D::Printing3DBufferDescription const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->put_TriangleMaterialIndicesDescription(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::GetVertexPositions() const
{
    Windows::Storage::Streams::IBuffer buffer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->GetVertexPositions(put_abi(buffer)));
    return buffer;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::CreateVertexPositions(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->CreateVertexPositions(value));
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::GetVertexNormals() const
{
    Windows::Storage::Streams::IBuffer buffer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->GetVertexNormals(put_abi(buffer)));
    return buffer;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::CreateVertexNormals(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->CreateVertexNormals(value));
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::GetTriangleIndices() const
{
    Windows::Storage::Streams::IBuffer buffer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->GetTriangleIndices(put_abi(buffer)));
    return buffer;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::CreateTriangleIndices(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->CreateTriangleIndices(value));
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::GetTriangleMaterialIndices() const
{
    Windows::Storage::Streams::IBuffer buffer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->GetTriangleMaterialIndices(put_abi(buffer)));
    return buffer;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::CreateTriangleMaterialIndices(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->CreateTriangleMaterialIndices(value));
}

template <typename D> Windows::Foundation::Collections::IPropertySet consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::BufferDescriptionSet() const
{
    Windows::Foundation::Collections::IPropertySet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->get_BufferDescriptionSet(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IPropertySet consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::BufferSet() const
{
    Windows::Foundation::Collections::IPropertySet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->get_BufferSet(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing3D::Printing3DMeshVerificationResult> consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>::VerifyAsync(Windows::Graphics::Printing3D::Printing3DMeshVerificationMode const& value) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing3D::Printing3DMeshVerificationResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMesh)->VerifyAsync(get_abi(value), put_abi(operation)));
    return operation;
}

template <typename D> bool consume_Windows_Graphics_Printing3D_IPrinting3DMeshVerificationResult<D>::IsValid() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult)->get_IsValid(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> consume_Windows_Graphics_Printing3D_IPrinting3DMeshVerificationResult<D>::NonmanifoldTriangles() const
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult)->get_NonmanifoldTriangles(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> consume_Windows_Graphics_Printing3D_IPrinting3DMeshVerificationResult<D>::ReversedNormalTriangles() const
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult)->get_ReversedNormalTriangles(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing3D::Printing3DModelUnit consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>::Unit() const
{
    Windows::Graphics::Printing3D::Printing3DModelUnit value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel)->get_Unit(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>::Unit(Windows::Graphics::Printing3D::Printing3DModelUnit const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel)->put_Unit(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DModelTexture> consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>::Textures() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DModelTexture> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel)->get_Textures(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DMesh> consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>::Meshes() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DMesh> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel)->get_Meshes(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DComponent> consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>::Components() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DComponent> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel)->get_Components(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing3D::Printing3DMaterial consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>::Material() const
{
    Windows::Graphics::Printing3D::Printing3DMaterial value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel)->get_Material(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>::Material(Windows::Graphics::Printing3D::Printing3DMaterial const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel)->put_Material(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing3D::Printing3DComponent consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>::Build() const
{
    Windows::Graphics::Printing3D::Printing3DComponent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel)->get_Build(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>::Build(Windows::Graphics::Printing3D::Printing3DComponent const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel)->put_Build(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>::Version() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel)->get_Version(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>::Version(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel)->put_Version(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>::RequiredExtensions() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel)->get_RequiredExtensions(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>::Metadata() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel)->get_Metadata(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>::RepairAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel)->RepairAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Graphics::Printing3D::Printing3DModel consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>::Clone() const
{
    Windows::Graphics::Printing3D::Printing3DModel value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel)->Clone(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Graphics_Printing3D_IPrinting3DModel2<D>::TryPartialRepairAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel2)->TryPartialRepairAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Graphics_Printing3D_IPrinting3DModel2<D>::TryPartialRepairAsync(Windows::Foundation::TimeSpan const& maxWaitTime) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel2)->TryPartialRepairWithTimeAsync(get_abi(maxWaitTime), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<bool, double> consume_Windows_Graphics_Printing3D_IPrinting3DModel2<D>::TryReduceFacesAsync() const
{
    Windows::Foundation::IAsyncOperationWithProgress<bool, double> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel2)->TryReduceFacesAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<bool, double> consume_Windows_Graphics_Printing3D_IPrinting3DModel2<D>::TryReduceFacesAsync(Windows::Graphics::Printing3D::Printing3DFaceReductionOptions const& printing3DFaceReductionOptions) const
{
    Windows::Foundation::IAsyncOperationWithProgress<bool, double> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel2)->TryReduceFacesWithOptionsAsync(get_abi(printing3DFaceReductionOptions), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<bool, double> consume_Windows_Graphics_Printing3D_IPrinting3DModel2<D>::TryReduceFacesAsync(Windows::Graphics::Printing3D::Printing3DFaceReductionOptions const& printing3DFaceReductionOptions, Windows::Foundation::TimeSpan const& maxWait) const
{
    Windows::Foundation::IAsyncOperationWithProgress<bool, double> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel2)->TryReduceFacesWithOptionsAndTimeAsync(get_abi(printing3DFaceReductionOptions), get_abi(maxWait), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<bool, double> consume_Windows_Graphics_Printing3D_IPrinting3DModel2<D>::RepairWithProgressAsync() const
{
    Windows::Foundation::IAsyncOperationWithProgress<bool, double> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModel2)->RepairWithProgressAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Graphics::Printing3D::Printing3DTextureResource consume_Windows_Graphics_Printing3D_IPrinting3DModelTexture<D>::TextureResource() const
{
    Windows::Graphics::Printing3D::Printing3DTextureResource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModelTexture)->get_TextureResource(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DModelTexture<D>::TextureResource(Windows::Graphics::Printing3D::Printing3DTextureResource const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModelTexture)->put_TextureResource(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior consume_Windows_Graphics_Printing3D_IPrinting3DModelTexture<D>::TileStyleU() const
{
    Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModelTexture)->get_TileStyleU(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DModelTexture<D>::TileStyleU(Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModelTexture)->put_TileStyleU(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior consume_Windows_Graphics_Printing3D_IPrinting3DModelTexture<D>::TileStyleV() const
{
    Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModelTexture)->get_TileStyleV(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DModelTexture<D>::TileStyleV(Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DModelTexture)->put_TileStyleV(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<uint32_t> consume_Windows_Graphics_Printing3D_IPrinting3DMultiplePropertyMaterial<D>::MaterialIndices() const
{
    Windows::Foundation::Collections::IVector<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterial)->get_MaterialIndices(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterial> consume_Windows_Graphics_Printing3D_IPrinting3DMultiplePropertyMaterialGroup<D>::MultipleProperties() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterial> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup)->get_MultipleProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<uint32_t> consume_Windows_Graphics_Printing3D_IPrinting3DMultiplePropertyMaterialGroup<D>::MaterialGroupIndices() const
{
    Windows::Foundation::Collections::IVector<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup)->get_MaterialGroupIndices(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Printing3D_IPrinting3DMultiplePropertyMaterialGroup<D>::MaterialGroupId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup)->get_MaterialGroupId(&value));
    return value;
}

template <typename D> Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterialGroup consume_Windows_Graphics_Printing3D_IPrinting3DMultiplePropertyMaterialGroupFactory<D>::Create(uint32_t MaterialGroupId) const
{
    Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterialGroup result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroupFactory)->Create(MaterialGroupId, put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Printing3D::Printing3DModelTexture consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterial<D>::Texture() const
{
    Windows::Graphics::Printing3D::Printing3DModelTexture value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial)->get_Texture(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterial<D>::Texture(Windows::Graphics::Printing3D::Printing3DModelTexture const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial)->put_Texture(get_abi(value)));
}

template <typename D> double consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterial<D>::U() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial)->get_U(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterial<D>::U(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial)->put_U(value));
}

template <typename D> double consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterial<D>::V() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial)->get_V(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterial<D>::V(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial)->put_V(value));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterial> consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterialGroup<D>::Texture2Coords() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterial> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup)->get_Texture2Coords(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterialGroup<D>::MaterialGroupId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup)->get_MaterialGroupId(&value));
    return value;
}

template <typename D> Windows::Graphics::Printing3D::Printing3DModelTexture consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterialGroup2<D>::Texture() const
{
    Windows::Graphics::Printing3D::Printing3DModelTexture value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup2)->get_Texture(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterialGroup2<D>::Texture(Windows::Graphics::Printing3D::Printing3DModelTexture const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup2)->put_Texture(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterialGroup consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterialGroupFactory<D>::Create(uint32_t MaterialGroupId) const
{
    Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterialGroup result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroupFactory)->Create(MaterialGroupId, put_abi(result)));
    return result;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamWithContentType consume_Windows_Graphics_Printing3D_IPrinting3DTextureResource<D>::TextureData() const
{
    Windows::Storage::Streams::IRandomAccessStreamWithContentType value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DTextureResource)->get_TextureData(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DTextureResource<D>::TextureData(Windows::Storage::Streams::IRandomAccessStreamWithContentType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DTextureResource)->put_TextureData(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing3D_IPrinting3DTextureResource<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DTextureResource)->get_Name(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing3D_IPrinting3DTextureResource<D>::Name(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing3D::IPrinting3DTextureResource)->put_Name(get_abi(value)));
}

template <> struct delegate<Windows::Graphics::Printing3D::Print3DTaskSourceRequestedHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Graphics::Printing3D::Print3DTaskSourceRequestedHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Graphics::Printing3D::Print3DTaskSourceRequestedHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* args) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Graphics::Printing3D::Print3DTaskSourceRequestedArgs const*>(&args));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrint3DManager> : produce_base<D, Windows::Graphics::Printing3D::IPrint3DManager>
{
    HRESULT __stdcall add_TaskRequested(void* eventHandler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().TaskRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DManager, Windows::Graphics::Printing3D::Print3DTaskRequestedEventArgs> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_TaskRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TaskRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrint3DManagerStatics> : produce_base<D, Windows::Graphics::Printing3D::IPrint3DManagerStatics>
{
    HRESULT __stdcall GetForCurrentView(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing3D::Print3DManager>(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowPrintUIAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().ShowPrintUIAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrint3DTask> : produce_base<D, Windows::Graphics::Printing3D::IPrint3DTask>
{
    HRESULT __stdcall get_Source(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing3D::Printing3D3MFPackage>(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Submitting(void* eventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().Submitting(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Foundation::IInspectable> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Submitting(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Submitting(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Completed(void* eventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().Completed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Graphics::Printing3D::Print3DTaskCompletedEventArgs> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Completed(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Completed(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SourceChanged(void* eventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().SourceChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Graphics::Printing3D::Print3DTaskSourceChangedEventArgs> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceChanged(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceChanged(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs> : produce_base<D, Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs>
{
    HRESULT __stdcall get_Completion(Windows::Graphics::Printing3D::Print3DTaskCompletion* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing3D::Print3DTaskCompletion>(this->shim().Completion());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedStatus(Windows::Graphics::Printing3D::Print3DTaskDetail* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing3D::Print3DTaskDetail>(this->shim().ExtendedStatus());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrint3DTaskRequest> : produce_base<D, Windows::Graphics::Printing3D::IPrint3DTaskRequest>
{
    HRESULT __stdcall CreateTask(HSTRING title, HSTRING printerId, void* handler, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing3D::Print3DTask>(this->shim().CreateTask(*reinterpret_cast<hstring const*>(&title), *reinterpret_cast<hstring const*>(&printerId), *reinterpret_cast<Windows::Graphics::Printing3D::Print3DTaskSourceRequestedHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrint3DTaskRequestedEventArgs> : produce_base<D, Windows::Graphics::Printing3D::IPrint3DTaskRequestedEventArgs>
{
    HRESULT __stdcall get_Request(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing3D::Print3DTaskRequest>(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrint3DTaskSourceChangedEventArgs> : produce_base<D, Windows::Graphics::Printing3D::IPrint3DTaskSourceChangedEventArgs>
{
    HRESULT __stdcall get_Source(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing3D::Printing3D3MFPackage>(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs> : produce_base<D, Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs>
{
    HRESULT __stdcall SetSource(void* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSource(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3D3MFPackage const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3D3MFPackage> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3D3MFPackage>
{
    HRESULT __stdcall SaveAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream>>(this->shim().SaveAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PrintTicket(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IRandomAccessStream>(this->shim().PrintTicket());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PrintTicket(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrintTicket(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ModelPart(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IRandomAccessStream>(this->shim().ModelPart());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ModelPart(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ModelPart(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnail(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing3D::Printing3DTextureResource>(this->shim().Thumbnail());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Thumbnail(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Thumbnail(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DTextureResource const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Textures(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DTextureResource>>(this->shim().Textures());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall LoadModelFromPackageAsync(void* value, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing3D::Printing3DModel>>(this->shim().LoadModelFromPackageAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SaveModelToPackageAsync(void* value, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SaveModelToPackageAsync(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DModel const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3D3MFPackage2> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3D3MFPackage2>
{
    HRESULT __stdcall get_Compression(Windows::Graphics::Printing3D::Printing3DPackageCompression* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing3D::Printing3DPackageCompression>(this->shim().Compression());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Compression(Windows::Graphics::Printing3D::Printing3DPackageCompression value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Compression(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DPackageCompression const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3D3MFPackageStatics> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3D3MFPackageStatics>
{
    HRESULT __stdcall LoadAsync(void* value, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing3D::Printing3D3MFPackage>>(this->shim().LoadAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DBaseMaterial> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DBaseMaterial>
{
    HRESULT __stdcall get_Name(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Name(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Name(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Color(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing3D::Printing3DColorMaterial>(this->shim().Color());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Color(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Color(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DColorMaterial const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup>
{
    HRESULT __stdcall get_Bases(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DBaseMaterial>>(this->shim().Bases());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaterialGroupId(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaterialGroupId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroupFactory> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroupFactory>
{
    HRESULT __stdcall Create(uint32_t MaterialGroupId, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup>(this->shim().Create(MaterialGroupId));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DBaseMaterialStatics> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DBaseMaterialStatics>
{
    HRESULT __stdcall get_Abs(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Abs());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Pla(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Pla());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DColorMaterial> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DColorMaterial>
{
    HRESULT __stdcall get_Value(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Value(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DColorMaterial2> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DColorMaterial2>
{
    HRESULT __stdcall get_Color(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Color());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Color(struct struct_Windows_UI_Color value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Color(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup>
{
    HRESULT __stdcall get_Colors(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DColorMaterial>>(this->shim().Colors());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaterialGroupId(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaterialGroupId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroupFactory> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroupFactory>
{
    HRESULT __stdcall Create(uint32_t MaterialGroupId, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing3D::Printing3DColorMaterialGroup>(this->shim().Create(MaterialGroupId));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DComponent> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DComponent>
{
    HRESULT __stdcall get_Mesh(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing3D::Printing3DMesh>(this->shim().Mesh());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Mesh(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mesh(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DMesh const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Components(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DComponentWithMatrix>>(this->shim().Components());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnail(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing3D::Printing3DTextureResource>(this->shim().Thumbnail());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Thumbnail(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Thumbnail(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DTextureResource const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Type(Windows::Graphics::Printing3D::Printing3DObjectType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing3D::Printing3DObjectType>(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Type(Windows::Graphics::Printing3D::Printing3DObjectType value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Type(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DObjectType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Name(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Name(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Name(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PartNumber(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PartNumber());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PartNumber(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PartNumber(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix>
{
    HRESULT __stdcall get_Component(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing3D::Printing3DComponent>(this->shim().Component());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Component(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Component(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DComponent const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Matrix(Windows::Foundation::Numerics::float4x4* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float4x4>(this->shim().Matrix());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Matrix(Windows::Foundation::Numerics::float4x4 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Matrix(*reinterpret_cast<Windows::Foundation::Numerics::float4x4 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DCompositeMaterial> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DCompositeMaterial>
{
    HRESULT __stdcall get_Values(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<double>>(this->shim().Values());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup>
{
    HRESULT __stdcall get_Composites(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DCompositeMaterial>>(this->shim().Composites());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaterialGroupId(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaterialGroupId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaterialIndices(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<uint32_t>>(this->shim().MaterialIndices());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup2> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup2>
{
    HRESULT __stdcall get_BaseMaterialGroup(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup>(this->shim().BaseMaterialGroup());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_BaseMaterialGroup(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BaseMaterialGroup(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroupFactory> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroupFactory>
{
    HRESULT __stdcall Create(uint32_t MaterialGroupId, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing3D::Printing3DCompositeMaterialGroup>(this->shim().Create(MaterialGroupId));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions>
{
    HRESULT __stdcall get_MaxReductionArea(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().MaxReductionArea());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MaxReductionArea(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxReductionArea(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TargetTriangleCount(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().TargetTriangleCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TargetTriangleCount(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetTriangleCount(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxEdgeLength(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().MaxEdgeLength());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MaxEdgeLength(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxEdgeLength(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DMaterial> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DMaterial>
{
    HRESULT __stdcall get_BaseGroups(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup>>(this->shim().BaseGroups());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ColorGroups(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DColorMaterialGroup>>(this->shim().ColorGroups());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Texture2CoordGroups(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterialGroup>>(this->shim().Texture2CoordGroups());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CompositeGroups(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DCompositeMaterialGroup>>(this->shim().CompositeGroups());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MultiplePropertyGroups(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterialGroup>>(this->shim().MultiplePropertyGroups());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DMesh> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DMesh>
{
    HRESULT __stdcall get_VertexCount(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().VertexCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_VertexCount(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VertexCount(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IndexCount(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().IndexCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IndexCount(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IndexCount(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VertexPositionsDescription(struct struct_Windows_Graphics_Printing3D_Printing3DBufferDescription* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing3D::Printing3DBufferDescription>(this->shim().VertexPositionsDescription());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_VertexPositionsDescription(struct struct_Windows_Graphics_Printing3D_Printing3DBufferDescription value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VertexPositionsDescription(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DBufferDescription const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VertexNormalsDescription(struct struct_Windows_Graphics_Printing3D_Printing3DBufferDescription* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing3D::Printing3DBufferDescription>(this->shim().VertexNormalsDescription());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_VertexNormalsDescription(struct struct_Windows_Graphics_Printing3D_Printing3DBufferDescription value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VertexNormalsDescription(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DBufferDescription const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TriangleIndicesDescription(struct struct_Windows_Graphics_Printing3D_Printing3DBufferDescription* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing3D::Printing3DBufferDescription>(this->shim().TriangleIndicesDescription());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TriangleIndicesDescription(struct struct_Windows_Graphics_Printing3D_Printing3DBufferDescription value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TriangleIndicesDescription(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DBufferDescription const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TriangleMaterialIndicesDescription(struct struct_Windows_Graphics_Printing3D_Printing3DBufferDescription* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing3D::Printing3DBufferDescription>(this->shim().TriangleMaterialIndicesDescription());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TriangleMaterialIndicesDescription(struct struct_Windows_Graphics_Printing3D_Printing3DBufferDescription value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TriangleMaterialIndicesDescription(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DBufferDescription const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetVertexPositions(void** buffer) noexcept final
    {
        try
        {
            *buffer = nullptr;
            typename D::abi_guard guard(this->shim());
            *buffer = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().GetVertexPositions());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateVertexPositions(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CreateVertexPositions(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetVertexNormals(void** buffer) noexcept final
    {
        try
        {
            *buffer = nullptr;
            typename D::abi_guard guard(this->shim());
            *buffer = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().GetVertexNormals());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateVertexNormals(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CreateVertexNormals(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetTriangleIndices(void** buffer) noexcept final
    {
        try
        {
            *buffer = nullptr;
            typename D::abi_guard guard(this->shim());
            *buffer = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().GetTriangleIndices());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateTriangleIndices(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CreateTriangleIndices(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetTriangleMaterialIndices(void** buffer) noexcept final
    {
        try
        {
            *buffer = nullptr;
            typename D::abi_guard guard(this->shim());
            *buffer = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().GetTriangleMaterialIndices());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateTriangleMaterialIndices(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CreateTriangleMaterialIndices(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BufferDescriptionSet(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IPropertySet>(this->shim().BufferDescriptionSet());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BufferSet(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IPropertySet>(this->shim().BufferSet());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall VerifyAsync(Windows::Graphics::Printing3D::Printing3DMeshVerificationMode value, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing3D::Printing3DMeshVerificationResult>>(this->shim().VerifyAsync(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DMeshVerificationMode const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult>
{
    HRESULT __stdcall get_IsValid(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsValid());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NonmanifoldTriangles(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<uint32_t>>(this->shim().NonmanifoldTriangles());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ReversedNormalTriangles(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<uint32_t>>(this->shim().ReversedNormalTriangles());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DModel> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DModel>
{
    HRESULT __stdcall get_Unit(Windows::Graphics::Printing3D::Printing3DModelUnit* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing3D::Printing3DModelUnit>(this->shim().Unit());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Unit(Windows::Graphics::Printing3D::Printing3DModelUnit value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Unit(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DModelUnit const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Textures(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DModelTexture>>(this->shim().Textures());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Meshes(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DMesh>>(this->shim().Meshes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Components(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DComponent>>(this->shim().Components());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Material(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing3D::Printing3DMaterial>(this->shim().Material());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Material(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Material(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DMaterial const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Build(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing3D::Printing3DComponent>(this->shim().Build());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Build(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Build(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DComponent const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Version(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Version());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Version(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Version(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RequiredExtensions(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().RequiredExtensions());
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
            *value = detach_from<Windows::Foundation::Collections::IMap<hstring, hstring>>(this->shim().Metadata());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RepairAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().RepairAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Clone(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing3D::Printing3DModel>(this->shim().Clone());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DModel2> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DModel2>
{
    HRESULT __stdcall TryPartialRepairAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TryPartialRepairAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryPartialRepairWithTimeAsync(Windows::Foundation::TimeSpan maxWaitTime, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TryPartialRepairAsync(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&maxWaitTime)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryReduceFacesAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<bool, double>>(this->shim().TryReduceFacesAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryReduceFacesWithOptionsAsync(void* printing3DFaceReductionOptions, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<bool, double>>(this->shim().TryReduceFacesAsync(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DFaceReductionOptions const*>(&printing3DFaceReductionOptions)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryReduceFacesWithOptionsAndTimeAsync(void* printing3DFaceReductionOptions, Windows::Foundation::TimeSpan maxWait, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<bool, double>>(this->shim().TryReduceFacesAsync(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DFaceReductionOptions const*>(&printing3DFaceReductionOptions), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&maxWait)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RepairWithProgressAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<bool, double>>(this->shim().RepairWithProgressAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DModelTexture> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DModelTexture>
{
    HRESULT __stdcall get_TextureResource(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing3D::Printing3DTextureResource>(this->shim().TextureResource());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TextureResource(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TextureResource(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DTextureResource const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TileStyleU(Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior>(this->shim().TileStyleU());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TileStyleU(Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TileStyleU(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TileStyleV(Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior>(this->shim().TileStyleV());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TileStyleV(Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TileStyleV(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterial> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterial>
{
    HRESULT __stdcall get_MaterialIndices(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<uint32_t>>(this->shim().MaterialIndices());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup>
{
    HRESULT __stdcall get_MultipleProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterial>>(this->shim().MultipleProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaterialGroupIndices(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<uint32_t>>(this->shim().MaterialGroupIndices());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaterialGroupId(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaterialGroupId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroupFactory> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroupFactory>
{
    HRESULT __stdcall Create(uint32_t MaterialGroupId, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterialGroup>(this->shim().Create(MaterialGroupId));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial>
{
    HRESULT __stdcall get_Texture(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing3D::Printing3DModelTexture>(this->shim().Texture());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Texture(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Texture(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DModelTexture const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_U(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().U());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_U(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().U(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_V(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().V());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_V(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().V(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup>
{
    HRESULT __stdcall get_Texture2Coords(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterial>>(this->shim().Texture2Coords());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaterialGroupId(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaterialGroupId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup2> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup2>
{
    HRESULT __stdcall get_Texture(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing3D::Printing3DModelTexture>(this->shim().Texture());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Texture(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Texture(*reinterpret_cast<Windows::Graphics::Printing3D::Printing3DModelTexture const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroupFactory> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroupFactory>
{
    HRESULT __stdcall Create(uint32_t MaterialGroupId, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterialGroup>(this->shim().Create(MaterialGroupId));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing3D::IPrinting3DTextureResource> : produce_base<D, Windows::Graphics::Printing3D::IPrinting3DTextureResource>
{
    HRESULT __stdcall get_TextureData(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IRandomAccessStreamWithContentType>(this->shim().TextureData());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TextureData(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TextureData(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamWithContentType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Name(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Name(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Name(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Printing3D {

inline Windows::Graphics::Printing3D::Print3DManager Print3DManager::GetForCurrentView()
{
    return get_activation_factory<Print3DManager, Windows::Graphics::Printing3D::IPrint3DManagerStatics>().GetForCurrentView();
}

inline Windows::Foundation::IAsyncOperation<bool> Print3DManager::ShowPrintUIAsync()
{
    return get_activation_factory<Print3DManager, Windows::Graphics::Printing3D::IPrint3DManagerStatics>().ShowPrintUIAsync();
}

inline Printing3D3MFPackage::Printing3D3MFPackage() :
    Printing3D3MFPackage(get_activation_factory<Printing3D3MFPackage>().ActivateInstance<Printing3D3MFPackage>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing3D::Printing3D3MFPackage> Printing3D3MFPackage::LoadAsync(Windows::Storage::Streams::IRandomAccessStream const& value)
{
    return get_activation_factory<Printing3D3MFPackage, Windows::Graphics::Printing3D::IPrinting3D3MFPackageStatics>().LoadAsync(value);
}

inline Printing3DBaseMaterial::Printing3DBaseMaterial() :
    Printing3DBaseMaterial(get_activation_factory<Printing3DBaseMaterial>().ActivateInstance<Printing3DBaseMaterial>())
{}

inline hstring Printing3DBaseMaterial::Abs()
{
    return get_activation_factory<Printing3DBaseMaterial, Windows::Graphics::Printing3D::IPrinting3DBaseMaterialStatics>().Abs();
}

inline hstring Printing3DBaseMaterial::Pla()
{
    return get_activation_factory<Printing3DBaseMaterial, Windows::Graphics::Printing3D::IPrinting3DBaseMaterialStatics>().Pla();
}

inline Printing3DBaseMaterialGroup::Printing3DBaseMaterialGroup(uint32_t MaterialGroupId) :
    Printing3DBaseMaterialGroup(get_activation_factory<Printing3DBaseMaterialGroup, Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroupFactory>().Create(MaterialGroupId))
{}

inline Printing3DColorMaterial::Printing3DColorMaterial() :
    Printing3DColorMaterial(get_activation_factory<Printing3DColorMaterial>().ActivateInstance<Printing3DColorMaterial>())
{}

inline Printing3DColorMaterialGroup::Printing3DColorMaterialGroup(uint32_t MaterialGroupId) :
    Printing3DColorMaterialGroup(get_activation_factory<Printing3DColorMaterialGroup, Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroupFactory>().Create(MaterialGroupId))
{}

inline Printing3DComponent::Printing3DComponent() :
    Printing3DComponent(get_activation_factory<Printing3DComponent>().ActivateInstance<Printing3DComponent>())
{}

inline Printing3DComponentWithMatrix::Printing3DComponentWithMatrix() :
    Printing3DComponentWithMatrix(get_activation_factory<Printing3DComponentWithMatrix>().ActivateInstance<Printing3DComponentWithMatrix>())
{}

inline Printing3DCompositeMaterial::Printing3DCompositeMaterial() :
    Printing3DCompositeMaterial(get_activation_factory<Printing3DCompositeMaterial>().ActivateInstance<Printing3DCompositeMaterial>())
{}

inline Printing3DCompositeMaterialGroup::Printing3DCompositeMaterialGroup(uint32_t MaterialGroupId) :
    Printing3DCompositeMaterialGroup(get_activation_factory<Printing3DCompositeMaterialGroup, Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroupFactory>().Create(MaterialGroupId))
{}

inline Printing3DFaceReductionOptions::Printing3DFaceReductionOptions() :
    Printing3DFaceReductionOptions(get_activation_factory<Printing3DFaceReductionOptions>().ActivateInstance<Printing3DFaceReductionOptions>())
{}

inline Printing3DMaterial::Printing3DMaterial() :
    Printing3DMaterial(get_activation_factory<Printing3DMaterial>().ActivateInstance<Printing3DMaterial>())
{}

inline Printing3DMesh::Printing3DMesh() :
    Printing3DMesh(get_activation_factory<Printing3DMesh>().ActivateInstance<Printing3DMesh>())
{}

inline Printing3DModel::Printing3DModel() :
    Printing3DModel(get_activation_factory<Printing3DModel>().ActivateInstance<Printing3DModel>())
{}

inline Printing3DModelTexture::Printing3DModelTexture() :
    Printing3DModelTexture(get_activation_factory<Printing3DModelTexture>().ActivateInstance<Printing3DModelTexture>())
{}

inline Printing3DMultiplePropertyMaterial::Printing3DMultiplePropertyMaterial() :
    Printing3DMultiplePropertyMaterial(get_activation_factory<Printing3DMultiplePropertyMaterial>().ActivateInstance<Printing3DMultiplePropertyMaterial>())
{}

inline Printing3DMultiplePropertyMaterialGroup::Printing3DMultiplePropertyMaterialGroup(uint32_t MaterialGroupId) :
    Printing3DMultiplePropertyMaterialGroup(get_activation_factory<Printing3DMultiplePropertyMaterialGroup, Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroupFactory>().Create(MaterialGroupId))
{}

inline Printing3DTexture2CoordMaterial::Printing3DTexture2CoordMaterial() :
    Printing3DTexture2CoordMaterial(get_activation_factory<Printing3DTexture2CoordMaterial>().ActivateInstance<Printing3DTexture2CoordMaterial>())
{}

inline Printing3DTexture2CoordMaterialGroup::Printing3DTexture2CoordMaterialGroup(uint32_t MaterialGroupId) :
    Printing3DTexture2CoordMaterialGroup(get_activation_factory<Printing3DTexture2CoordMaterialGroup, Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroupFactory>().Create(MaterialGroupId))
{}

inline Printing3DTextureResource::Printing3DTextureResource() :
    Printing3DTextureResource(get_activation_factory<Printing3DTextureResource>().ActivateInstance<Printing3DTextureResource>())
{}

template <typename L> Print3DTaskSourceRequestedHandler::Print3DTaskSourceRequestedHandler(L handler) :
    Print3DTaskSourceRequestedHandler(impl::make_delegate<Print3DTaskSourceRequestedHandler>(std::forward<L>(handler)))
{}

template <typename F> Print3DTaskSourceRequestedHandler::Print3DTaskSourceRequestedHandler(F* handler) :
    Print3DTaskSourceRequestedHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> Print3DTaskSourceRequestedHandler::Print3DTaskSourceRequestedHandler(O* object, M method) :
    Print3DTaskSourceRequestedHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void Print3DTaskSourceRequestedHandler::operator()(Windows::Graphics::Printing3D::Print3DTaskSourceRequestedArgs const& args) const
{
    check_hresult((*(impl::abi_t<Print3DTaskSourceRequestedHandler>**)this)->Invoke(get_abi(args)));
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrint3DManager> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrint3DManager> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrint3DManagerStatics> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrint3DManagerStatics> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrint3DTask> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrint3DTask> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrint3DTaskRequest> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrint3DTaskRequest> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrint3DTaskRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrint3DTaskRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrint3DTaskSourceChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrint3DTaskSourceChangedEventArgs> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3D3MFPackage> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3D3MFPackage> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3D3MFPackage2> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3D3MFPackage2> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3D3MFPackageStatics> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3D3MFPackageStatics> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DBaseMaterial> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3DBaseMaterial> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroupFactory> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroupFactory> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DBaseMaterialStatics> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3DBaseMaterialStatics> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DColorMaterial> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3DColorMaterial> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DColorMaterial2> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3DColorMaterial2> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroupFactory> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroupFactory> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DComponent> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3DComponent> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DCompositeMaterial> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3DCompositeMaterial> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup2> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup2> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroupFactory> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroupFactory> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DMaterial> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3DMaterial> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DMesh> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3DMesh> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DModel> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3DModel> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DModel2> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3DModel2> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DModelTexture> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3DModelTexture> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterial> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterial> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroupFactory> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroupFactory> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup2> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup2> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroupFactory> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroupFactory> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::IPrinting3DTextureResource> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::IPrinting3DTextureResource> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::Print3DManager> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::Print3DManager> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::Print3DTask> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::Print3DTask> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::Print3DTaskCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::Print3DTaskCompletedEventArgs> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::Print3DTaskRequest> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::Print3DTaskRequest> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::Print3DTaskRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::Print3DTaskRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::Print3DTaskSourceChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::Print3DTaskSourceChangedEventArgs> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::Print3DTaskSourceRequestedArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::Print3DTaskSourceRequestedArgs> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3D3MFPackage> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::Printing3D3MFPackage> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DBaseMaterial> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::Printing3DBaseMaterial> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DColorMaterial> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::Printing3DColorMaterial> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DColorMaterialGroup> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::Printing3DColorMaterialGroup> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DComponent> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::Printing3DComponent> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DComponentWithMatrix> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::Printing3DComponentWithMatrix> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DCompositeMaterial> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::Printing3DCompositeMaterial> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DCompositeMaterialGroup> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::Printing3DCompositeMaterialGroup> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DFaceReductionOptions> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::Printing3DFaceReductionOptions> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DMaterial> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::Printing3DMaterial> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DMesh> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::Printing3DMesh> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DMeshVerificationResult> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::Printing3DMeshVerificationResult> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DModel> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::Printing3DModel> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DModelTexture> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::Printing3DModelTexture> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterial> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterial> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterialGroup> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterialGroup> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterial> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterial> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterialGroup> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterialGroup> {};
template<> struct hash<winrt::Windows::Graphics::Printing3D::Printing3DTextureResource> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing3D::Printing3DTextureResource> {};

}

WINRT_WARNING_POP
