﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.ApplicationModel.AppService.2.h"
#include "winrt/impl/Windows.Globalization.2.h"
#include "winrt/impl/Windows.Media.SpeechRecognition.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.ApplicationModel.VoiceCommands.2.h"
#include "winrt/Windows.ApplicationModel.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommand<D>::CommandName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommand)->get_CommandName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::Collections::IVectorView<hstring>> consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommand<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::Collections::IVectorView<hstring>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommand)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionResult consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommand<D>::SpeechRecognitionResult() const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionResult value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommand)->get_SpeechRecognitionResult(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::VoiceCommands::VoiceCommandCompletionReason consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandCompletedEventArgs<D>::Reason() const
{
    Windows::ApplicationModel::VoiceCommands::VoiceCommandCompletionReason value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandCompletedEventArgs)->get_Reason(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandConfirmationResult<D>::Confirmed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandConfirmationResult)->get_Confirmed(&value));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandContentTile<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile)->get_Title(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandContentTile<D>::Title(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile)->put_Title(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandContentTile<D>::TextLine1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile)->get_TextLine1(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandContentTile<D>::TextLine1(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile)->put_TextLine1(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandContentTile<D>::TextLine2() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile)->get_TextLine2(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandContentTile<D>::TextLine2(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile)->put_TextLine2(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandContentTile<D>::TextLine3() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile)->get_TextLine3(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandContentTile<D>::TextLine3(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile)->put_TextLine3(get_abi(value)));
}

template <typename D> Windows::Storage::IStorageFile consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandContentTile<D>::Image() const
{
    Windows::Storage::IStorageFile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile)->get_Image(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandContentTile<D>::Image(Windows::Storage::IStorageFile const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile)->put_Image(get_abi(value)));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandContentTile<D>::AppContext() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile)->get_AppContext(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandContentTile<D>::AppContext(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile)->put_AppContext(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandContentTile<D>::AppLaunchArgument() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile)->get_AppLaunchArgument(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandContentTile<D>::AppLaunchArgument(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile)->put_AppLaunchArgument(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTileType consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandContentTile<D>::ContentTileType() const
{
    Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTileType value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile)->get_ContentTileType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandContentTile<D>::ContentTileType(Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTileType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile)->put_ContentTileType(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandDefinition<D>::Language() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition)->get_Language(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandDefinition<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandDefinition<D>::SetPhraseListAsync(param::hstring const& phraseListName, param::async_iterable<hstring> const& phraseList) const
{
    Windows::Foundation::IAsyncAction updateAction{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition)->SetPhraseListAsync(get_abi(phraseListName), get_abi(phraseList), put_abi(updateAction)));
    return updateAction;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandDefinitionManagerStatics<D>::InstallCommandDefinitionsFromStorageFileAsync(Windows::Storage::StorageFile const& file) const
{
    Windows::Foundation::IAsyncAction installAction{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinitionManagerStatics)->InstallCommandDefinitionsFromStorageFileAsync(get_abi(file), put_abi(installAction)));
    return installAction;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::VoiceCommands::VoiceCommandDefinition> consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandDefinitionManagerStatics<D>::InstalledCommandDefinitions() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::VoiceCommands::VoiceCommandDefinition> voiceCommandDefinitions{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinitionManagerStatics)->get_InstalledCommandDefinitions(put_abi(voiceCommandDefinitions)));
    return voiceCommandDefinitions;
}

template <typename D> Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandDisambiguationResult<D>::SelectedItem() const
{
    Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandDisambiguationResult)->get_SelectedItem(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandResponse<D>::Message() const
{
    Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse)->get_Message(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandResponse<D>::Message(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse)->put_Message(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandResponse<D>::RepeatMessage() const
{
    Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse)->get_RepeatMessage(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandResponse<D>::RepeatMessage(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse)->put_RepeatMessage(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandResponse<D>::AppLaunchArgument() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse)->get_AppLaunchArgument(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandResponse<D>::AppLaunchArgument(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse)->put_AppLaunchArgument(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile> consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandResponse<D>::VoiceCommandContentTiles() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse)->get_VoiceCommandContentTiles(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandResponseStatics<D>::MaxSupportedVoiceCommandContentTiles() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponseStatics)->get_MaxSupportedVoiceCommandContentTiles(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandResponseStatics<D>::CreateResponse(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& userMessage) const
{
    Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse response{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponseStatics)->CreateResponse(get_abi(userMessage), put_abi(response)));
    return response;
}

template <typename D> Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandResponseStatics<D>::CreateResponse(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& message, param::iterable<Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile> const& contentTiles) const
{
    Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse response{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponseStatics)->CreateResponseWithTiles(get_abi(message), get_abi(contentTiles), put_abi(response)));
    return response;
}

template <typename D> Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandResponseStatics<D>::CreateResponseForPrompt(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& message, Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& repeatMessage) const
{
    Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse response{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponseStatics)->CreateResponseForPrompt(get_abi(message), get_abi(repeatMessage), put_abi(response)));
    return response;
}

template <typename D> Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandResponseStatics<D>::CreateResponseForPrompt(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& message, Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& repeatMessage, param::iterable<Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile> const& contentTiles) const
{
    Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse response{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponseStatics)->CreateResponseForPromptWithTiles(get_abi(message), get_abi(repeatMessage), get_abi(contentTiles), put_abi(response)));
    return response;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::VoiceCommands::VoiceCommand> consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandServiceConnection<D>::GetVoiceCommandAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::VoiceCommands::VoiceCommand> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection)->GetVoiceCommandAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::VoiceCommands::VoiceCommandConfirmationResult> consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandServiceConnection<D>::RequestConfirmationAsync(Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse const& response) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::VoiceCommands::VoiceCommandConfirmationResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection)->RequestConfirmationAsync(get_abi(response), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::VoiceCommands::VoiceCommandDisambiguationResult> consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandServiceConnection<D>::RequestDisambiguationAsync(Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse const& response) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::VoiceCommands::VoiceCommandDisambiguationResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection)->RequestDisambiguationAsync(get_abi(response), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandServiceConnection<D>::ReportProgressAsync(Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse const& response) const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection)->ReportProgressAsync(get_abi(response), put_abi(action)));
    return action;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandServiceConnection<D>::ReportSuccessAsync(Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse const& response) const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection)->ReportSuccessAsync(get_abi(response), put_abi(action)));
    return action;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandServiceConnection<D>::ReportFailureAsync(Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse const& response) const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection)->ReportFailureAsync(get_abi(response), put_abi(action)));
    return action;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandServiceConnection<D>::RequestAppLaunchAsync(Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse const& response) const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection)->RequestAppLaunchAsync(get_abi(response), put_abi(action)));
    return action;
}

template <typename D> Windows::Globalization::Language consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandServiceConnection<D>::Language() const
{
    Windows::Globalization::Language language{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection)->get_Language(put_abi(language)));
    return language;
}

template <typename D> event_token consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandServiceConnection<D>::VoiceCommandCompleted(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::VoiceCommands::VoiceCommandServiceConnection, Windows::ApplicationModel::VoiceCommands::VoiceCommandCompletedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection)->add_VoiceCommandCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection> consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandServiceConnection<D>::VoiceCommandCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::VoiceCommands::VoiceCommandServiceConnection, Windows::ApplicationModel::VoiceCommands::VoiceCommandCompletedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection>(this, &abi_t<Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection>::remove_VoiceCommandCompleted, VoiceCommandCompleted(handler));
}

template <typename D> void consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandServiceConnection<D>::VoiceCommandCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection)->remove_VoiceCommandCompleted(get_abi(token)));
}

template <typename D> Windows::ApplicationModel::VoiceCommands::VoiceCommandServiceConnection consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandServiceConnectionStatics<D>::FromAppServiceTriggerDetails(Windows::ApplicationModel::AppService::AppServiceTriggerDetails const& triggerDetails) const
{
    Windows::ApplicationModel::VoiceCommands::VoiceCommandServiceConnection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnectionStatics)->FromAppServiceTriggerDetails(get_abi(triggerDetails), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandUserMessage<D>::DisplayMessage() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage)->get_DisplayMessage(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandUserMessage<D>::DisplayMessage(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage)->put_DisplayMessage(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandUserMessage<D>::SpokenMessage() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage)->get_SpokenMessage(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_VoiceCommands_IVoiceCommandUserMessage<D>::SpokenMessage(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage)->put_SpokenMessage(get_abi(value)));
}

template <typename D>
struct produce<D, Windows::ApplicationModel::VoiceCommands::IVoiceCommand> : produce_base<D, Windows::ApplicationModel::VoiceCommands::IVoiceCommand>
{
    HRESULT __stdcall get_CommandName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CommandName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::Collections::IVectorView<hstring>>>(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SpeechRecognitionResult(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SpeechRecognition::SpeechRecognitionResult>(this->shim().SpeechRecognitionResult());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::VoiceCommands::IVoiceCommandCompletedEventArgs> : produce_base<D, Windows::ApplicationModel::VoiceCommands::IVoiceCommandCompletedEventArgs>
{
    HRESULT __stdcall get_Reason(Windows::ApplicationModel::VoiceCommands::VoiceCommandCompletionReason* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::VoiceCommands::VoiceCommandCompletionReason>(this->shim().Reason());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::VoiceCommands::IVoiceCommandConfirmationResult> : produce_base<D, Windows::ApplicationModel::VoiceCommands::IVoiceCommandConfirmationResult>
{
    HRESULT __stdcall get_Confirmed(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Confirmed());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile> : produce_base<D, Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile>
{
    HRESULT __stdcall get_Title(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Title(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TextLine1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TextLine1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TextLine1(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TextLine1(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TextLine2(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TextLine2());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TextLine2(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TextLine2(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TextLine3(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TextLine3());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TextLine3(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TextLine3(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Image(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::IStorageFile>(this->shim().Image());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Image(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Image(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AppContext(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().AppContext());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AppContext(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppContext(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AppLaunchArgument(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AppLaunchArgument());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AppLaunchArgument(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppLaunchArgument(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTileType(Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTileType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTileType>(this->shim().ContentTileType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ContentTileType(Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTileType value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentTileType(*reinterpret_cast<Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTileType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition> : produce_base<D, Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition>
{
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

    HRESULT __stdcall SetPhraseListAsync(HSTRING phraseListName, void* phraseList, void** updateAction) noexcept final
    {
        try
        {
            *updateAction = nullptr;
            typename D::abi_guard guard(this->shim());
            *updateAction = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SetPhraseListAsync(*reinterpret_cast<hstring const*>(&phraseListName), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&phraseList)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinitionManagerStatics> : produce_base<D, Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinitionManagerStatics>
{
    HRESULT __stdcall InstallCommandDefinitionsFromStorageFileAsync(void* file, void** installAction) noexcept final
    {
        try
        {
            *installAction = nullptr;
            typename D::abi_guard guard(this->shim());
            *installAction = detach_from<Windows::Foundation::IAsyncAction>(this->shim().InstallCommandDefinitionsFromStorageFileAsync(*reinterpret_cast<Windows::Storage::StorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InstalledCommandDefinitions(void** voiceCommandDefinitions) noexcept final
    {
        try
        {
            *voiceCommandDefinitions = nullptr;
            typename D::abi_guard guard(this->shim());
            *voiceCommandDefinitions = detach_from<Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::VoiceCommands::VoiceCommandDefinition>>(this->shim().InstalledCommandDefinitions());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::VoiceCommands::IVoiceCommandDisambiguationResult> : produce_base<D, Windows::ApplicationModel::VoiceCommands::IVoiceCommandDisambiguationResult>
{
    HRESULT __stdcall get_SelectedItem(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile>(this->shim().SelectedItem());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse> : produce_base<D, Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse>
{
    HRESULT __stdcall get_Message(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage>(this->shim().Message());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Message(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Message(*reinterpret_cast<Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RepeatMessage(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage>(this->shim().RepeatMessage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RepeatMessage(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RepeatMessage(*reinterpret_cast<Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AppLaunchArgument(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AppLaunchArgument());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AppLaunchArgument(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppLaunchArgument(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VoiceCommandContentTiles(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile>>(this->shim().VoiceCommandContentTiles());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponseStatics> : produce_base<D, Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponseStatics>
{
    HRESULT __stdcall get_MaxSupportedVoiceCommandContentTiles(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxSupportedVoiceCommandContentTiles());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateResponse(void* userMessage, void** response) noexcept final
    {
        try
        {
            *response = nullptr;
            typename D::abi_guard guard(this->shim());
            *response = detach_from<Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse>(this->shim().CreateResponse(*reinterpret_cast<Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const*>(&userMessage)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateResponseWithTiles(void* message, void* contentTiles, void** response) noexcept final
    {
        try
        {
            *response = nullptr;
            typename D::abi_guard guard(this->shim());
            *response = detach_from<Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse>(this->shim().CreateResponse(*reinterpret_cast<Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const*>(&message), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile> const*>(&contentTiles)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateResponseForPrompt(void* message, void* repeatMessage, void** response) noexcept final
    {
        try
        {
            *response = nullptr;
            typename D::abi_guard guard(this->shim());
            *response = detach_from<Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse>(this->shim().CreateResponseForPrompt(*reinterpret_cast<Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const*>(&message), *reinterpret_cast<Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const*>(&repeatMessage)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateResponseForPromptWithTiles(void* message, void* repeatMessage, void* contentTiles, void** response) noexcept final
    {
        try
        {
            *response = nullptr;
            typename D::abi_guard guard(this->shim());
            *response = detach_from<Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse>(this->shim().CreateResponseForPrompt(*reinterpret_cast<Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const*>(&message), *reinterpret_cast<Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const*>(&repeatMessage), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile> const*>(&contentTiles)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection> : produce_base<D, Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection>
{
    HRESULT __stdcall GetVoiceCommandAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::VoiceCommands::VoiceCommand>>(this->shim().GetVoiceCommandAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestConfirmationAsync(void* response, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::VoiceCommands::VoiceCommandConfirmationResult>>(this->shim().RequestConfirmationAsync(*reinterpret_cast<Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse const*>(&response)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestDisambiguationAsync(void* response, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::VoiceCommands::VoiceCommandDisambiguationResult>>(this->shim().RequestDisambiguationAsync(*reinterpret_cast<Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse const*>(&response)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReportProgressAsync(void* response, void** action) noexcept final
    {
        try
        {
            *action = nullptr;
            typename D::abi_guard guard(this->shim());
            *action = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ReportProgressAsync(*reinterpret_cast<Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse const*>(&response)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReportSuccessAsync(void* response, void** action) noexcept final
    {
        try
        {
            *action = nullptr;
            typename D::abi_guard guard(this->shim());
            *action = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ReportSuccessAsync(*reinterpret_cast<Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse const*>(&response)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReportFailureAsync(void* response, void** action) noexcept final
    {
        try
        {
            *action = nullptr;
            typename D::abi_guard guard(this->shim());
            *action = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ReportFailureAsync(*reinterpret_cast<Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse const*>(&response)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestAppLaunchAsync(void* response, void** action) noexcept final
    {
        try
        {
            *action = nullptr;
            typename D::abi_guard guard(this->shim());
            *action = detach_from<Windows::Foundation::IAsyncAction>(this->shim().RequestAppLaunchAsync(*reinterpret_cast<Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse const*>(&response)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Language(void** language) noexcept final
    {
        try
        {
            *language = nullptr;
            typename D::abi_guard guard(this->shim());
            *language = detach_from<Windows::Globalization::Language>(this->shim().Language());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_VoiceCommandCompleted(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().VoiceCommandCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::VoiceCommands::VoiceCommandServiceConnection, Windows::ApplicationModel::VoiceCommands::VoiceCommandCompletedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_VoiceCommandCompleted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VoiceCommandCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnectionStatics> : produce_base<D, Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnectionStatics>
{
    HRESULT __stdcall FromAppServiceTriggerDetails(void* triggerDetails, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::VoiceCommands::VoiceCommandServiceConnection>(this->shim().FromAppServiceTriggerDetails(*reinterpret_cast<Windows::ApplicationModel::AppService::AppServiceTriggerDetails const*>(&triggerDetails)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage> : produce_base<D, Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage>
{
    HRESULT __stdcall get_DisplayMessage(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayMessage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayMessage(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayMessage(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SpokenMessage(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SpokenMessage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SpokenMessage(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SpokenMessage(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::VoiceCommands {

inline VoiceCommandContentTile::VoiceCommandContentTile() :
    VoiceCommandContentTile(get_activation_factory<VoiceCommandContentTile>().ActivateInstance<VoiceCommandContentTile>())
{}

inline Windows::Foundation::IAsyncAction VoiceCommandDefinitionManager::InstallCommandDefinitionsFromStorageFileAsync(Windows::Storage::StorageFile const& file)
{
    return get_activation_factory<VoiceCommandDefinitionManager, Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinitionManagerStatics>().InstallCommandDefinitionsFromStorageFileAsync(file);
}

inline Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::VoiceCommands::VoiceCommandDefinition> VoiceCommandDefinitionManager::InstalledCommandDefinitions()
{
    return get_activation_factory<VoiceCommandDefinitionManager, Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinitionManagerStatics>().InstalledCommandDefinitions();
}

inline uint32_t VoiceCommandResponse::MaxSupportedVoiceCommandContentTiles()
{
    return get_activation_factory<VoiceCommandResponse, Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponseStatics>().MaxSupportedVoiceCommandContentTiles();
}

inline Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse VoiceCommandResponse::CreateResponse(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& userMessage)
{
    return get_activation_factory<VoiceCommandResponse, Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponseStatics>().CreateResponse(userMessage);
}

inline Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse VoiceCommandResponse::CreateResponse(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& message, param::iterable<Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile> const& contentTiles)
{
    return get_activation_factory<VoiceCommandResponse, Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponseStatics>().CreateResponse(message, contentTiles);
}

inline Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse VoiceCommandResponse::CreateResponseForPrompt(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& message, Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& repeatMessage)
{
    return get_activation_factory<VoiceCommandResponse, Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponseStatics>().CreateResponseForPrompt(message, repeatMessage);
}

inline Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse VoiceCommandResponse::CreateResponseForPrompt(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& message, Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& repeatMessage, param::iterable<Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile> const& contentTiles)
{
    return get_activation_factory<VoiceCommandResponse, Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponseStatics>().CreateResponseForPrompt(message, repeatMessage, contentTiles);
}

inline Windows::ApplicationModel::VoiceCommands::VoiceCommandServiceConnection VoiceCommandServiceConnection::FromAppServiceTriggerDetails(Windows::ApplicationModel::AppService::AppServiceTriggerDetails const& triggerDetails)
{
    return get_activation_factory<VoiceCommandServiceConnection, Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnectionStatics>().FromAppServiceTriggerDetails(triggerDetails);
}

inline VoiceCommandUserMessage::VoiceCommandUserMessage() :
    VoiceCommandUserMessage(get_activation_factory<VoiceCommandUserMessage>().ActivateInstance<VoiceCommandUserMessage>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommand> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommand> {};
template<> struct hash<winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandCompletedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandConfirmationResult> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandConfirmationResult> {};
template<> struct hash<winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile> {};
template<> struct hash<winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition> {};
template<> struct hash<winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinitionManagerStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinitionManagerStatics> {};
template<> struct hash<winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandDisambiguationResult> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandDisambiguationResult> {};
template<> struct hash<winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse> {};
template<> struct hash<winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponseStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponseStatics> {};
template<> struct hash<winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection> {};
template<> struct hash<winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnectionStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnectionStatics> {};
template<> struct hash<winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage> {};
template<> struct hash<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommand> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommand> {};
template<> struct hash<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandCompletedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandConfirmationResult> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandConfirmationResult> {};
template<> struct hash<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile> {};
template<> struct hash<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandDefinition> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandDefinition> {};
template<> struct hash<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandDefinitionManager> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandDefinitionManager> {};
template<> struct hash<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandDisambiguationResult> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandDisambiguationResult> {};
template<> struct hash<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse> {};
template<> struct hash<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandServiceConnection> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandServiceConnection> {};
template<> struct hash<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage> {};

}

WINRT_WARNING_POP
