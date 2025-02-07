﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Media.2.h"
#include "winrt/impl/Windows.Media.Core.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Media.SpeechSynthesis.2.h"
#include "winrt/Windows.Media.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::SpeechSynthesis::VoiceInformation> consume_Windows_Media_SpeechSynthesis_IInstalledVoicesStatic<D>::AllVoices() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::SpeechSynthesis::VoiceInformation> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::IInstalledVoicesStatic)->get_AllVoices(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::SpeechSynthesis::VoiceInformation consume_Windows_Media_SpeechSynthesis_IInstalledVoicesStatic<D>::DefaultVoice() const
{
    Windows::Media::SpeechSynthesis::VoiceInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::IInstalledVoicesStatic)->get_DefaultVoice(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Media_SpeechSynthesis_IInstalledVoicesStatic2<D>::TrySetDefaultVoiceAsync(Windows::Media::SpeechSynthesis::VoiceInformation const& voice) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::IInstalledVoicesStatic2)->TrySetDefaultVoiceAsync(get_abi(voice), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::IMediaMarker> consume_Windows_Media_SpeechSynthesis_ISpeechSynthesisStream<D>::Markers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::IMediaMarker> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::ISpeechSynthesisStream)->get_Markers(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::SpeechSynthesis::SpeechSynthesisStream> consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizer<D>::SynthesizeTextToStreamAsync(param::hstring const& text) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::SpeechSynthesis::SpeechSynthesisStream> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::ISpeechSynthesizer)->SynthesizeTextToStreamAsync(get_abi(text), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::SpeechSynthesis::SpeechSynthesisStream> consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizer<D>::SynthesizeSsmlToStreamAsync(param::hstring const& Ssml) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::SpeechSynthesis::SpeechSynthesisStream> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::ISpeechSynthesizer)->SynthesizeSsmlToStreamAsync(get_abi(Ssml), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizer<D>::Voice(Windows::Media::SpeechSynthesis::VoiceInformation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::ISpeechSynthesizer)->put_Voice(get_abi(value)));
}

template <typename D> Windows::Media::SpeechSynthesis::VoiceInformation consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizer<D>::Voice() const
{
    Windows::Media::SpeechSynthesis::VoiceInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::ISpeechSynthesizer)->get_Voice(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::SpeechSynthesis::SpeechSynthesizerOptions consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizer2<D>::Options() const
{
    Windows::Media::SpeechSynthesis::SpeechSynthesizerOptions value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::ISpeechSynthesizer2)->get_Options(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions<D>::IncludeWordBoundaryMetadata() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions)->get_IncludeWordBoundaryMetadata(&value));
    return value;
}

template <typename D> void consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions<D>::IncludeWordBoundaryMetadata(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions)->put_IncludeWordBoundaryMetadata(value));
}

template <typename D> bool consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions<D>::IncludeSentenceBoundaryMetadata() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions)->get_IncludeSentenceBoundaryMetadata(&value));
    return value;
}

template <typename D> void consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions<D>::IncludeSentenceBoundaryMetadata(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions)->put_IncludeSentenceBoundaryMetadata(value));
}

template <typename D> double consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions2<D>::AudioVolume() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions2)->get_AudioVolume(&value));
    return value;
}

template <typename D> void consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions2<D>::AudioVolume(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions2)->put_AudioVolume(value));
}

template <typename D> double consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions2<D>::SpeakingRate() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions2)->get_SpeakingRate(&value));
    return value;
}

template <typename D> void consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions2<D>::SpeakingRate(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions2)->put_SpeakingRate(value));
}

template <typename D> double consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions2<D>::AudioPitch() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions2)->get_AudioPitch(&value));
    return value;
}

template <typename D> void consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions2<D>::AudioPitch(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions2)->put_AudioPitch(value));
}

template <typename D> Windows::Media::SpeechSynthesis::SpeechAppendedSilence consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions3<D>::AppendedSilence() const
{
    Windows::Media::SpeechSynthesis::SpeechAppendedSilence value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions3)->get_AppendedSilence(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions3<D>::AppendedSilence(Windows::Media::SpeechSynthesis::SpeechAppendedSilence const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions3)->put_AppendedSilence(get_abi(value)));
}

template <typename D> Windows::Media::SpeechSynthesis::SpeechPunctuationSilence consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions3<D>::PunctuationSilence() const
{
    Windows::Media::SpeechSynthesis::SpeechPunctuationSilence value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions3)->get_PunctuationSilence(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions3<D>::PunctuationSilence(Windows::Media::SpeechSynthesis::SpeechPunctuationSilence const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions3)->put_PunctuationSilence(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_SpeechSynthesis_IVoiceInformation<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::IVoiceInformation)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_SpeechSynthesis_IVoiceInformation<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::IVoiceInformation)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_SpeechSynthesis_IVoiceInformation<D>::Language() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::IVoiceInformation)->get_Language(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_SpeechSynthesis_IVoiceInformation<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::IVoiceInformation)->get_Description(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::SpeechSynthesis::VoiceGender consume_Windows_Media_SpeechSynthesis_IVoiceInformation<D>::Gender() const
{
    Windows::Media::SpeechSynthesis::VoiceGender value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::IVoiceInformation)->get_Gender(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Media::SpeechSynthesis::IInstalledVoicesStatic> : produce_base<D, Windows::Media::SpeechSynthesis::IInstalledVoicesStatic>
{
    HRESULT __stdcall get_AllVoices(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::SpeechSynthesis::VoiceInformation>>(this->shim().AllVoices());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultVoice(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SpeechSynthesis::VoiceInformation>(this->shim().DefaultVoice());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechSynthesis::IInstalledVoicesStatic2> : produce_base<D, Windows::Media::SpeechSynthesis::IInstalledVoicesStatic2>
{
    HRESULT __stdcall TrySetDefaultVoiceAsync(void* voice, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TrySetDefaultVoiceAsync(*reinterpret_cast<Windows::Media::SpeechSynthesis::VoiceInformation const*>(&voice)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechSynthesis::ISpeechSynthesisStream> : produce_base<D, Windows::Media::SpeechSynthesis::ISpeechSynthesisStream>
{
    HRESULT __stdcall get_Markers(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::IMediaMarker>>(this->shim().Markers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechSynthesis::ISpeechSynthesizer> : produce_base<D, Windows::Media::SpeechSynthesis::ISpeechSynthesizer>
{
    HRESULT __stdcall SynthesizeTextToStreamAsync(HSTRING text, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::SpeechSynthesis::SpeechSynthesisStream>>(this->shim().SynthesizeTextToStreamAsync(*reinterpret_cast<hstring const*>(&text)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SynthesizeSsmlToStreamAsync(HSTRING Ssml, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::SpeechSynthesis::SpeechSynthesisStream>>(this->shim().SynthesizeSsmlToStreamAsync(*reinterpret_cast<hstring const*>(&Ssml)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Voice(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Voice(*reinterpret_cast<Windows::Media::SpeechSynthesis::VoiceInformation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Voice(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SpeechSynthesis::VoiceInformation>(this->shim().Voice());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechSynthesis::ISpeechSynthesizer2> : produce_base<D, Windows::Media::SpeechSynthesis::ISpeechSynthesizer2>
{
    HRESULT __stdcall get_Options(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SpeechSynthesis::SpeechSynthesizerOptions>(this->shim().Options());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions> : produce_base<D, Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions>
{
    HRESULT __stdcall get_IncludeWordBoundaryMetadata(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IncludeWordBoundaryMetadata());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IncludeWordBoundaryMetadata(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IncludeWordBoundaryMetadata(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IncludeSentenceBoundaryMetadata(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IncludeSentenceBoundaryMetadata());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IncludeSentenceBoundaryMetadata(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IncludeSentenceBoundaryMetadata(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions2> : produce_base<D, Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions2>
{
    HRESULT __stdcall get_AudioVolume(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().AudioVolume());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AudioVolume(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioVolume(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SpeakingRate(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().SpeakingRate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SpeakingRate(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SpeakingRate(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioPitch(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().AudioPitch());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AudioPitch(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioPitch(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions3> : produce_base<D, Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions3>
{
    HRESULT __stdcall get_AppendedSilence(Windows::Media::SpeechSynthesis::SpeechAppendedSilence* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SpeechSynthesis::SpeechAppendedSilence>(this->shim().AppendedSilence());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AppendedSilence(Windows::Media::SpeechSynthesis::SpeechAppendedSilence value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppendedSilence(*reinterpret_cast<Windows::Media::SpeechSynthesis::SpeechAppendedSilence const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PunctuationSilence(Windows::Media::SpeechSynthesis::SpeechPunctuationSilence* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SpeechSynthesis::SpeechPunctuationSilence>(this->shim().PunctuationSilence());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PunctuationSilence(Windows::Media::SpeechSynthesis::SpeechPunctuationSilence value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PunctuationSilence(*reinterpret_cast<Windows::Media::SpeechSynthesis::SpeechPunctuationSilence const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechSynthesis::IVoiceInformation> : produce_base<D, Windows::Media::SpeechSynthesis::IVoiceInformation>
{
    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Id(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Language(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Language());
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

    HRESULT __stdcall get_Gender(Windows::Media::SpeechSynthesis::VoiceGender* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SpeechSynthesis::VoiceGender>(this->shim().Gender());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Media::SpeechSynthesis {

inline SpeechSynthesizer::SpeechSynthesizer() :
    SpeechSynthesizer(get_activation_factory<SpeechSynthesizer>().ActivateInstance<SpeechSynthesizer>())
{}

inline Windows::Foundation::Collections::IVectorView<Windows::Media::SpeechSynthesis::VoiceInformation> SpeechSynthesizer::AllVoices()
{
    return get_activation_factory<SpeechSynthesizer, Windows::Media::SpeechSynthesis::IInstalledVoicesStatic>().AllVoices();
}

inline Windows::Media::SpeechSynthesis::VoiceInformation SpeechSynthesizer::DefaultVoice()
{
    return get_activation_factory<SpeechSynthesizer, Windows::Media::SpeechSynthesis::IInstalledVoicesStatic>().DefaultVoice();
}

inline Windows::Foundation::IAsyncOperation<bool> SpeechSynthesizer::TrySetDefaultVoiceAsync(Windows::Media::SpeechSynthesis::VoiceInformation const& voice)
{
    return get_activation_factory<SpeechSynthesizer, Windows::Media::SpeechSynthesis::IInstalledVoicesStatic2>().TrySetDefaultVoiceAsync(voice);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::SpeechSynthesis::IInstalledVoicesStatic> : winrt::impl::hash_base<winrt::Windows::Media::SpeechSynthesis::IInstalledVoicesStatic> {};
template<> struct hash<winrt::Windows::Media::SpeechSynthesis::IInstalledVoicesStatic2> : winrt::impl::hash_base<winrt::Windows::Media::SpeechSynthesis::IInstalledVoicesStatic2> {};
template<> struct hash<winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesisStream> : winrt::impl::hash_base<winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesisStream> {};
template<> struct hash<winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesizer> : winrt::impl::hash_base<winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesizer> {};
template<> struct hash<winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesizer2> : winrt::impl::hash_base<winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesizer2> {};
template<> struct hash<winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions> : winrt::impl::hash_base<winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions> {};
template<> struct hash<winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions2> : winrt::impl::hash_base<winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions2> {};
template<> struct hash<winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions3> : winrt::impl::hash_base<winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions3> {};
template<> struct hash<winrt::Windows::Media::SpeechSynthesis::IVoiceInformation> : winrt::impl::hash_base<winrt::Windows::Media::SpeechSynthesis::IVoiceInformation> {};
template<> struct hash<winrt::Windows::Media::SpeechSynthesis::SpeechSynthesisStream> : winrt::impl::hash_base<winrt::Windows::Media::SpeechSynthesis::SpeechSynthesisStream> {};
template<> struct hash<winrt::Windows::Media::SpeechSynthesis::SpeechSynthesizer> : winrt::impl::hash_base<winrt::Windows::Media::SpeechSynthesis::SpeechSynthesizer> {};
template<> struct hash<winrt::Windows::Media::SpeechSynthesis::SpeechSynthesizerOptions> : winrt::impl::hash_base<winrt::Windows::Media::SpeechSynthesis::SpeechSynthesizerOptions> {};
template<> struct hash<winrt::Windows::Media::SpeechSynthesis::VoiceInformation> : winrt::impl::hash_base<winrt::Windows::Media::SpeechSynthesis::VoiceInformation> {};

}

WINRT_WARNING_POP
