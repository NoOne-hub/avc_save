﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.AI.MachineLearning.Preview.2.h"

namespace winrt::impl {

template <typename D> Windows::Graphics::Imaging::BitmapPixelFormat consume_Windows_AI_MachineLearning_Preview_IImageVariableDescriptorPreview<D>::BitmapPixelFormat() const
{
    Windows::Graphics::Imaging::BitmapPixelFormat value{};
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::IImageVariableDescriptorPreview)->get_BitmapPixelFormat(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_AI_MachineLearning_Preview_IImageVariableDescriptorPreview<D>::Width() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::IImageVariableDescriptorPreview)->get_Width(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_AI_MachineLearning_Preview_IImageVariableDescriptorPreview<D>::Height() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::IImageVariableDescriptorPreview)->get_Height(&value));
    return value;
}

template <typename D> Windows::AI::MachineLearning::Preview::LearningModelDeviceKindPreview consume_Windows_AI_MachineLearning_Preview_IInferencingOptionsPreview<D>::PreferredDeviceKind() const
{
    Windows::AI::MachineLearning::Preview::LearningModelDeviceKindPreview value{};
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::IInferencingOptionsPreview)->get_PreferredDeviceKind(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_AI_MachineLearning_Preview_IInferencingOptionsPreview<D>::PreferredDeviceKind(Windows::AI::MachineLearning::Preview::LearningModelDeviceKindPreview const& value) const
{
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::IInferencingOptionsPreview)->put_PreferredDeviceKind(get_abi(value)));
}

template <typename D> bool consume_Windows_AI_MachineLearning_Preview_IInferencingOptionsPreview<D>::IsTracingEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::IInferencingOptionsPreview)->get_IsTracingEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_AI_MachineLearning_Preview_IInferencingOptionsPreview<D>::IsTracingEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::IInferencingOptionsPreview)->put_IsTracingEnabled(value));
}

template <typename D> int32_t consume_Windows_AI_MachineLearning_Preview_IInferencingOptionsPreview<D>::MaxBatchSize() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::IInferencingOptionsPreview)->get_MaxBatchSize(&value));
    return value;
}

template <typename D> void consume_Windows_AI_MachineLearning_Preview_IInferencingOptionsPreview<D>::MaxBatchSize(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::IInferencingOptionsPreview)->put_MaxBatchSize(value));
}

template <typename D> bool consume_Windows_AI_MachineLearning_Preview_IInferencingOptionsPreview<D>::MinimizeMemoryAllocation() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::IInferencingOptionsPreview)->get_MinimizeMemoryAllocation(&value));
    return value;
}

template <typename D> void consume_Windows_AI_MachineLearning_Preview_IInferencingOptionsPreview<D>::MinimizeMemoryAllocation(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::IInferencingOptionsPreview)->put_MinimizeMemoryAllocation(value));
}

template <typename D> bool consume_Windows_AI_MachineLearning_Preview_IInferencingOptionsPreview<D>::ReclaimMemoryAfterEvaluation() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::IInferencingOptionsPreview)->get_ReclaimMemoryAfterEvaluation(&value));
    return value;
}

template <typename D> void consume_Windows_AI_MachineLearning_Preview_IInferencingOptionsPreview<D>::ReclaimMemoryAfterEvaluation(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::IInferencingOptionsPreview)->put_ReclaimMemoryAfterEvaluation(value));
}

template <typename D> void consume_Windows_AI_MachineLearning_Preview_ILearningModelBindingPreview<D>::Bind(param::hstring const& name, Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelBindingPreview)->Bind(get_abi(name), get_abi(value)));
}

template <typename D> void consume_Windows_AI_MachineLearning_Preview_ILearningModelBindingPreview<D>::Bind(param::hstring const& name, Windows::Foundation::IInspectable const& value, Windows::Foundation::Collections::IPropertySet const& metadata) const
{
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelBindingPreview)->BindWithProperties(get_abi(name), get_abi(value), get_abi(metadata)));
}

template <typename D> void consume_Windows_AI_MachineLearning_Preview_ILearningModelBindingPreview<D>::Clear() const
{
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelBindingPreview)->Clear());
}

template <typename D> Windows::AI::MachineLearning::Preview::LearningModelBindingPreview consume_Windows_AI_MachineLearning_Preview_ILearningModelBindingPreviewFactory<D>::CreateFromModel(Windows::AI::MachineLearning::Preview::LearningModelPreview const& model) const
{
    Windows::AI::MachineLearning::Preview::LearningModelBindingPreview value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelBindingPreviewFactory)->CreateFromModel(get_abi(model), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_AI_MachineLearning_Preview_ILearningModelDescriptionPreview<D>::Author() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelDescriptionPreview)->get_Author(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_AI_MachineLearning_Preview_ILearningModelDescriptionPreview<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelDescriptionPreview)->get_Name(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_AI_MachineLearning_Preview_ILearningModelDescriptionPreview<D>::Domain() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelDescriptionPreview)->get_Domain(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_AI_MachineLearning_Preview_ILearningModelDescriptionPreview<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelDescriptionPreview)->get_Description(put_abi(value)));
    return value;
}

template <typename D> int64_t consume_Windows_AI_MachineLearning_Preview_ILearningModelDescriptionPreview<D>::Version() const
{
    int64_t value{};
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelDescriptionPreview)->get_Version(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, hstring> consume_Windows_AI_MachineLearning_Preview_ILearningModelDescriptionPreview<D>::Metadata() const
{
    Windows::Foundation::Collections::IMapView<hstring, hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelDescriptionPreview)->get_Metadata(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview> consume_Windows_AI_MachineLearning_Preview_ILearningModelDescriptionPreview<D>::InputFeatures() const
{
    Windows::Foundation::Collections::IIterable<Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelDescriptionPreview)->get_InputFeatures(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview> consume_Windows_AI_MachineLearning_Preview_ILearningModelDescriptionPreview<D>::OutputFeatures() const
{
    Windows::Foundation::Collections::IIterable<Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelDescriptionPreview)->get_OutputFeatures(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_AI_MachineLearning_Preview_ILearningModelEvaluationResultPreview<D>::CorrelationId() const
{
    hstring correlationId{};
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelEvaluationResultPreview)->get_CorrelationId(put_abi(correlationId)));
    return correlationId;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_AI_MachineLearning_Preview_ILearningModelEvaluationResultPreview<D>::Outputs() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelEvaluationResultPreview)->get_Outputs(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::AI::MachineLearning::Preview::LearningModelEvaluationResultPreview> consume_Windows_AI_MachineLearning_Preview_ILearningModelPreview<D>::EvaluateAsync(Windows::AI::MachineLearning::Preview::LearningModelBindingPreview const& binding, param::hstring const& correlationId) const
{
    Windows::Foundation::IAsyncOperation<Windows::AI::MachineLearning::Preview::LearningModelEvaluationResultPreview> evalOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelPreview)->EvaluateAsync(get_abi(binding), get_abi(correlationId), put_abi(evalOperation)));
    return evalOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::AI::MachineLearning::Preview::LearningModelEvaluationResultPreview> consume_Windows_AI_MachineLearning_Preview_ILearningModelPreview<D>::EvaluateFeaturesAsync(param::map<hstring, Windows::Foundation::IInspectable> const& features, param::hstring const& correlationId) const
{
    Windows::Foundation::IAsyncOperation<Windows::AI::MachineLearning::Preview::LearningModelEvaluationResultPreview> evalOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelPreview)->EvaluateFeaturesAsync(get_abi(features), get_abi(correlationId), put_abi(evalOperation)));
    return evalOperation;
}

template <typename D> Windows::AI::MachineLearning::Preview::LearningModelDescriptionPreview consume_Windows_AI_MachineLearning_Preview_ILearningModelPreview<D>::Description() const
{
    Windows::AI::MachineLearning::Preview::LearningModelDescriptionPreview returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelPreview)->get_Description(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::AI::MachineLearning::Preview::InferencingOptionsPreview consume_Windows_AI_MachineLearning_Preview_ILearningModelPreview<D>::InferencingOptions() const
{
    Windows::AI::MachineLearning::Preview::InferencingOptionsPreview value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelPreview)->get_InferencingOptions(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_AI_MachineLearning_Preview_ILearningModelPreview<D>::InferencingOptions(Windows::AI::MachineLearning::Preview::InferencingOptionsPreview const& value) const
{
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelPreview)->put_InferencingOptions(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::AI::MachineLearning::Preview::LearningModelPreview> consume_Windows_AI_MachineLearning_Preview_ILearningModelPreviewStatics<D>::LoadModelFromStorageFileAsync(Windows::Storage::IStorageFile const& modelFile) const
{
    Windows::Foundation::IAsyncOperation<Windows::AI::MachineLearning::Preview::LearningModelPreview> modelCreationOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelPreviewStatics)->LoadModelFromStorageFileAsync(get_abi(modelFile), put_abi(modelCreationOperation)));
    return modelCreationOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::AI::MachineLearning::Preview::LearningModelPreview> consume_Windows_AI_MachineLearning_Preview_ILearningModelPreviewStatics<D>::LoadModelFromStreamAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& modelStream) const
{
    Windows::Foundation::IAsyncOperation<Windows::AI::MachineLearning::Preview::LearningModelPreview> modelCreationOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelPreviewStatics)->LoadModelFromStreamAsync(get_abi(modelStream), put_abi(modelCreationOperation)));
    return modelCreationOperation;
}

template <typename D> hstring consume_Windows_AI_MachineLearning_Preview_ILearningModelVariableDescriptorPreview<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview)->get_Name(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_AI_MachineLearning_Preview_ILearningModelVariableDescriptorPreview<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview)->get_Description(put_abi(value)));
    return value;
}

template <typename D> Windows::AI::MachineLearning::Preview::LearningModelFeatureKindPreview consume_Windows_AI_MachineLearning_Preview_ILearningModelVariableDescriptorPreview<D>::ModelFeatureKind() const
{
    Windows::AI::MachineLearning::Preview::LearningModelFeatureKindPreview value{};
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview)->get_ModelFeatureKind(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_AI_MachineLearning_Preview_ILearningModelVariableDescriptorPreview<D>::IsRequired() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview)->get_IsRequired(&value));
    return value;
}

template <typename D> Windows::AI::MachineLearning::Preview::FeatureElementKindPreview consume_Windows_AI_MachineLearning_Preview_IMapVariableDescriptorPreview<D>::KeyKind() const
{
    Windows::AI::MachineLearning::Preview::FeatureElementKindPreview value{};
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::IMapVariableDescriptorPreview)->get_KeyKind(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IIterable<hstring> consume_Windows_AI_MachineLearning_Preview_IMapVariableDescriptorPreview<D>::ValidStringKeys() const
{
    Windows::Foundation::Collections::IIterable<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::IMapVariableDescriptorPreview)->get_ValidStringKeys(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IIterable<int64_t> consume_Windows_AI_MachineLearning_Preview_IMapVariableDescriptorPreview<D>::ValidIntegerKeys() const
{
    Windows::Foundation::Collections::IIterable<int64_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::IMapVariableDescriptorPreview)->get_ValidIntegerKeys(put_abi(value)));
    return value;
}

template <typename D> Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview consume_Windows_AI_MachineLearning_Preview_IMapVariableDescriptorPreview<D>::Fields() const
{
    Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::IMapVariableDescriptorPreview)->get_Fields(put_abi(value)));
    return value;
}

template <typename D> Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview consume_Windows_AI_MachineLearning_Preview_ISequenceVariableDescriptorPreview<D>::ElementType() const
{
    Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::ISequenceVariableDescriptorPreview)->get_ElementType(put_abi(value)));
    return value;
}

template <typename D> Windows::AI::MachineLearning::Preview::FeatureElementKindPreview consume_Windows_AI_MachineLearning_Preview_ITensorVariableDescriptorPreview<D>::DataType() const
{
    Windows::AI::MachineLearning::Preview::FeatureElementKindPreview value{};
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::ITensorVariableDescriptorPreview)->get_DataType(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IIterable<int64_t> consume_Windows_AI_MachineLearning_Preview_ITensorVariableDescriptorPreview<D>::Shape() const
{
    Windows::Foundation::Collections::IIterable<int64_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::AI::MachineLearning::Preview::ITensorVariableDescriptorPreview)->get_Shape(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::AI::MachineLearning::Preview::IImageVariableDescriptorPreview> : produce_base<D, Windows::AI::MachineLearning::Preview::IImageVariableDescriptorPreview>
{
    HRESULT __stdcall get_BitmapPixelFormat(Windows::Graphics::Imaging::BitmapPixelFormat* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapPixelFormat>(this->shim().BitmapPixelFormat());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Width(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Width());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Height(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Height());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::AI::MachineLearning::Preview::IInferencingOptionsPreview> : produce_base<D, Windows::AI::MachineLearning::Preview::IInferencingOptionsPreview>
{
    HRESULT __stdcall get_PreferredDeviceKind(Windows::AI::MachineLearning::Preview::LearningModelDeviceKindPreview* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::AI::MachineLearning::Preview::LearningModelDeviceKindPreview>(this->shim().PreferredDeviceKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PreferredDeviceKind(Windows::AI::MachineLearning::Preview::LearningModelDeviceKindPreview value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PreferredDeviceKind(*reinterpret_cast<Windows::AI::MachineLearning::Preview::LearningModelDeviceKindPreview const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsTracingEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsTracingEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsTracingEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsTracingEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxBatchSize(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().MaxBatchSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MaxBatchSize(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxBatchSize(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MinimizeMemoryAllocation(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().MinimizeMemoryAllocation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MinimizeMemoryAllocation(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MinimizeMemoryAllocation(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ReclaimMemoryAfterEvaluation(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ReclaimMemoryAfterEvaluation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ReclaimMemoryAfterEvaluation(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReclaimMemoryAfterEvaluation(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::AI::MachineLearning::Preview::ILearningModelBindingPreview> : produce_base<D, Windows::AI::MachineLearning::Preview::ILearningModelBindingPreview>
{
    HRESULT __stdcall Bind(HSTRING name, void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Bind(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall BindWithProperties(HSTRING name, void* value, void* metadata) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Bind(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&value), *reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&metadata));
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
struct produce<D, Windows::AI::MachineLearning::Preview::ILearningModelBindingPreviewFactory> : produce_base<D, Windows::AI::MachineLearning::Preview::ILearningModelBindingPreviewFactory>
{
    HRESULT __stdcall CreateFromModel(void* model, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::AI::MachineLearning::Preview::LearningModelBindingPreview>(this->shim().CreateFromModel(*reinterpret_cast<Windows::AI::MachineLearning::Preview::LearningModelPreview const*>(&model)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::AI::MachineLearning::Preview::ILearningModelDescriptionPreview> : produce_base<D, Windows::AI::MachineLearning::Preview::ILearningModelDescriptionPreview>
{
    HRESULT __stdcall get_Author(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Author());
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

    HRESULT __stdcall get_Domain(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Domain());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Version(int64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int64_t>(this->shim().Version());
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

    HRESULT __stdcall get_InputFeatures(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IIterable<Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview>>(this->shim().InputFeatures());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OutputFeatures(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IIterable<Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview>>(this->shim().OutputFeatures());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::AI::MachineLearning::Preview::ILearningModelEvaluationResultPreview> : produce_base<D, Windows::AI::MachineLearning::Preview::ILearningModelEvaluationResultPreview>
{
    HRESULT __stdcall get_CorrelationId(HSTRING* correlationId) noexcept final
    {
        try
        {
            *correlationId = nullptr;
            typename D::abi_guard guard(this->shim());
            *correlationId = detach_from<hstring>(this->shim().CorrelationId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Outputs(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>(this->shim().Outputs());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::AI::MachineLearning::Preview::ILearningModelPreview> : produce_base<D, Windows::AI::MachineLearning::Preview::ILearningModelPreview>
{
    HRESULT __stdcall EvaluateAsync(void* binding, HSTRING correlationId, void** evalOperation) noexcept final
    {
        try
        {
            *evalOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *evalOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::AI::MachineLearning::Preview::LearningModelEvaluationResultPreview>>(this->shim().EvaluateAsync(*reinterpret_cast<Windows::AI::MachineLearning::Preview::LearningModelBindingPreview const*>(&binding), *reinterpret_cast<hstring const*>(&correlationId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall EvaluateFeaturesAsync(void* features, HSTRING correlationId, void** evalOperation) noexcept final
    {
        try
        {
            *evalOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *evalOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::AI::MachineLearning::Preview::LearningModelEvaluationResultPreview>>(this->shim().EvaluateFeaturesAsync(*reinterpret_cast<Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable> const*>(&features), *reinterpret_cast<hstring const*>(&correlationId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Description(void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::AI::MachineLearning::Preview::LearningModelDescriptionPreview>(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InferencingOptions(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::AI::MachineLearning::Preview::InferencingOptionsPreview>(this->shim().InferencingOptions());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_InferencingOptions(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InferencingOptions(*reinterpret_cast<Windows::AI::MachineLearning::Preview::InferencingOptionsPreview const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::AI::MachineLearning::Preview::ILearningModelPreviewStatics> : produce_base<D, Windows::AI::MachineLearning::Preview::ILearningModelPreviewStatics>
{
    HRESULT __stdcall LoadModelFromStorageFileAsync(void* modelFile, void** modelCreationOperation) noexcept final
    {
        try
        {
            *modelCreationOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *modelCreationOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::AI::MachineLearning::Preview::LearningModelPreview>>(this->shim().LoadModelFromStorageFileAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&modelFile)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall LoadModelFromStreamAsync(void* modelStream, void** modelCreationOperation) noexcept final
    {
        try
        {
            *modelCreationOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *modelCreationOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::AI::MachineLearning::Preview::LearningModelPreview>>(this->shim().LoadModelFromStreamAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&modelStream)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview> : produce_base<D, Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview>
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

    HRESULT __stdcall get_Description(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ModelFeatureKind(Windows::AI::MachineLearning::Preview::LearningModelFeatureKindPreview* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::AI::MachineLearning::Preview::LearningModelFeatureKindPreview>(this->shim().ModelFeatureKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsRequired(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsRequired());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::AI::MachineLearning::Preview::IMapVariableDescriptorPreview> : produce_base<D, Windows::AI::MachineLearning::Preview::IMapVariableDescriptorPreview>
{
    HRESULT __stdcall get_KeyKind(Windows::AI::MachineLearning::Preview::FeatureElementKindPreview* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::AI::MachineLearning::Preview::FeatureElementKindPreview>(this->shim().KeyKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ValidStringKeys(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IIterable<hstring>>(this->shim().ValidStringKeys());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ValidIntegerKeys(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IIterable<int64_t>>(this->shim().ValidIntegerKeys());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Fields(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview>(this->shim().Fields());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::AI::MachineLearning::Preview::ISequenceVariableDescriptorPreview> : produce_base<D, Windows::AI::MachineLearning::Preview::ISequenceVariableDescriptorPreview>
{
    HRESULT __stdcall get_ElementType(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview>(this->shim().ElementType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::AI::MachineLearning::Preview::ITensorVariableDescriptorPreview> : produce_base<D, Windows::AI::MachineLearning::Preview::ITensorVariableDescriptorPreview>
{
    HRESULT __stdcall get_DataType(Windows::AI::MachineLearning::Preview::FeatureElementKindPreview* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::AI::MachineLearning::Preview::FeatureElementKindPreview>(this->shim().DataType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Shape(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IIterable<int64_t>>(this->shim().Shape());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::AI::MachineLearning::Preview {

inline LearningModelBindingPreview::LearningModelBindingPreview(Windows::AI::MachineLearning::Preview::LearningModelPreview const& model) :
    LearningModelBindingPreview(get_activation_factory<LearningModelBindingPreview, Windows::AI::MachineLearning::Preview::ILearningModelBindingPreviewFactory>().CreateFromModel(model))
{}

inline Windows::Foundation::IAsyncOperation<Windows::AI::MachineLearning::Preview::LearningModelPreview> LearningModelPreview::LoadModelFromStorageFileAsync(Windows::Storage::IStorageFile const& modelFile)
{
    return get_activation_factory<LearningModelPreview, Windows::AI::MachineLearning::Preview::ILearningModelPreviewStatics>().LoadModelFromStorageFileAsync(modelFile);
}

inline Windows::Foundation::IAsyncOperation<Windows::AI::MachineLearning::Preview::LearningModelPreview> LearningModelPreview::LoadModelFromStreamAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& modelStream)
{
    return get_activation_factory<LearningModelPreview, Windows::AI::MachineLearning::Preview::ILearningModelPreviewStatics>().LoadModelFromStreamAsync(modelStream);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::IImageVariableDescriptorPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::IImageVariableDescriptorPreview> {};
template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::IInferencingOptionsPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::IInferencingOptionsPreview> {};
template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::ILearningModelBindingPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::ILearningModelBindingPreview> {};
template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::ILearningModelBindingPreviewFactory> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::ILearningModelBindingPreviewFactory> {};
template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::ILearningModelDescriptionPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::ILearningModelDescriptionPreview> {};
template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::ILearningModelEvaluationResultPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::ILearningModelEvaluationResultPreview> {};
template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::ILearningModelPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::ILearningModelPreview> {};
template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::ILearningModelPreviewStatics> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::ILearningModelPreviewStatics> {};
template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview> {};
template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::IMapVariableDescriptorPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::IMapVariableDescriptorPreview> {};
template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::ISequenceVariableDescriptorPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::ISequenceVariableDescriptorPreview> {};
template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::ITensorVariableDescriptorPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::ITensorVariableDescriptorPreview> {};
template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::ImageVariableDescriptorPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::ImageVariableDescriptorPreview> {};
template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::InferencingOptionsPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::InferencingOptionsPreview> {};
template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::LearningModelBindingPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::LearningModelBindingPreview> {};
template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::LearningModelDescriptionPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::LearningModelDescriptionPreview> {};
template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::LearningModelEvaluationResultPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::LearningModelEvaluationResultPreview> {};
template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::LearningModelPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::LearningModelPreview> {};
template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::LearningModelVariableDescriptorPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::LearningModelVariableDescriptorPreview> {};
template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::MapVariableDescriptorPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::MapVariableDescriptorPreview> {};
template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::SequenceVariableDescriptorPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::SequenceVariableDescriptorPreview> {};
template<> struct hash<winrt::Windows::AI::MachineLearning::Preview::TensorVariableDescriptorPreview> : winrt::impl::hash_base<winrt::Windows::AI::MachineLearning::Preview::TensorVariableDescriptorPreview> {};

}

WINRT_WARNING_POP
