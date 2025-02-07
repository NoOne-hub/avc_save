﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Devices.Enumeration.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.2.h"
#include "winrt/impl/Windows.Media.2.h"
#include "winrt/impl/Windows.Media.Audio.2.h"
#include "winrt/impl/Windows.Media.Casting.2.h"
#include "winrt/impl/Windows.Media.Core.2.h"
#include "winrt/impl/Windows.Media.MediaProperties.2.h"
#include "winrt/impl/Windows.Media.Protection.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.Composition.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Media.Playback.2.h"
#include "winrt/Windows.Media.h"

namespace winrt::impl {

template <typename D> Windows::Media::Playback::MediaPlayer consume_Windows_Media_Playback_IBackgroundMediaPlayerStatics<D>::Current() const
{
    Windows::Media::Playback::MediaPlayer player{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IBackgroundMediaPlayerStatics)->get_Current(put_abi(player)));
    return player;
}

template <typename D> event_token consume_Windows_Media_Playback_IBackgroundMediaPlayerStatics<D>::MessageReceivedFromBackground(Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IBackgroundMediaPlayerStatics)->add_MessageReceivedFromBackground(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IBackgroundMediaPlayerStatics> consume_Windows_Media_Playback_IBackgroundMediaPlayerStatics<D>::MessageReceivedFromBackground(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IBackgroundMediaPlayerStatics>(this, &abi_t<Windows::Media::Playback::IBackgroundMediaPlayerStatics>::remove_MessageReceivedFromBackground, MessageReceivedFromBackground(value));
}

template <typename D> void consume_Windows_Media_Playback_IBackgroundMediaPlayerStatics<D>::MessageReceivedFromBackground(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IBackgroundMediaPlayerStatics)->remove_MessageReceivedFromBackground(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IBackgroundMediaPlayerStatics<D>::MessageReceivedFromForeground(Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IBackgroundMediaPlayerStatics)->add_MessageReceivedFromForeground(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IBackgroundMediaPlayerStatics> consume_Windows_Media_Playback_IBackgroundMediaPlayerStatics<D>::MessageReceivedFromForeground(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IBackgroundMediaPlayerStatics>(this, &abi_t<Windows::Media::Playback::IBackgroundMediaPlayerStatics>::remove_MessageReceivedFromForeground, MessageReceivedFromForeground(value));
}

template <typename D> void consume_Windows_Media_Playback_IBackgroundMediaPlayerStatics<D>::MessageReceivedFromForeground(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IBackgroundMediaPlayerStatics)->remove_MessageReceivedFromForeground(get_abi(token)));
}

template <typename D> void consume_Windows_Media_Playback_IBackgroundMediaPlayerStatics<D>::SendMessageToBackground(Windows::Foundation::Collections::ValueSet const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IBackgroundMediaPlayerStatics)->SendMessageToBackground(get_abi(value)));
}

template <typename D> void consume_Windows_Media_Playback_IBackgroundMediaPlayerStatics<D>::SendMessageToForeground(Windows::Foundation::Collections::ValueSet const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IBackgroundMediaPlayerStatics)->SendMessageToForeground(get_abi(value)));
}

template <typename D> bool consume_Windows_Media_Playback_IBackgroundMediaPlayerStatics<D>::IsMediaPlaying() const
{
    bool isMediaPlaying{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IBackgroundMediaPlayerStatics)->IsMediaPlaying(&isMediaPlaying));
    return isMediaPlaying;
}

template <typename D> void consume_Windows_Media_Playback_IBackgroundMediaPlayerStatics<D>::Shutdown() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IBackgroundMediaPlayerStatics)->Shutdown());
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem consume_Windows_Media_Playback_ICurrentMediaPlaybackItemChangedEventArgs<D>::NewItem() const
{
    Windows::Media::Playback::MediaPlaybackItem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs)->get_NewItem(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem consume_Windows_Media_Playback_ICurrentMediaPlaybackItemChangedEventArgs<D>::OldItem() const
{
    Windows::Media::Playback::MediaPlaybackItem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs)->get_OldItem(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItemChangedReason consume_Windows_Media_Playback_ICurrentMediaPlaybackItemChangedEventArgs2<D>::Reason() const
{
    Windows::Media::Playback::MediaPlaybackItemChangedReason value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs2)->get_Reason(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackList consume_Windows_Media_Playback_IMediaBreak<D>::PlaybackList() const
{
    Windows::Media::Playback::MediaPlaybackList value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreak)->get_PlaybackList(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_Playback_IMediaBreak<D>::PresentationPosition() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreak)->get_PresentationPosition(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaBreakInsertionMethod consume_Windows_Media_Playback_IMediaBreak<D>::InsertionMethod() const
{
    Windows::Media::Playback::MediaBreakInsertionMethod value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreak)->get_InsertionMethod(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::ValueSet consume_Windows_Media_Playback_IMediaBreak<D>::CustomProperties() const
{
    Windows::Foundation::Collections::ValueSet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreak)->get_CustomProperties(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Playback_IMediaBreak<D>::CanStart() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreak)->get_CanStart(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaBreak<D>::CanStart(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreak)->put_CanStart(value));
}

template <typename D> Windows::Media::Playback::MediaBreak consume_Windows_Media_Playback_IMediaBreakEndedEventArgs<D>::MediaBreak() const
{
    Windows::Media::Playback::MediaBreak value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreakEndedEventArgs)->get_MediaBreak(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaBreak consume_Windows_Media_Playback_IMediaBreakFactory<D>::Create(Windows::Media::Playback::MediaBreakInsertionMethod const& insertionMethod) const
{
    Windows::Media::Playback::MediaBreak result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreakFactory)->Create(get_abi(insertionMethod), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Playback::MediaBreak consume_Windows_Media_Playback_IMediaBreakFactory<D>::CreateWithPresentationPosition(Windows::Media::Playback::MediaBreakInsertionMethod const& insertionMethod, Windows::Foundation::TimeSpan const& presentationPosition) const
{
    Windows::Media::Playback::MediaBreak result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreakFactory)->CreateWithPresentationPosition(get_abi(insertionMethod), get_abi(presentationPosition), put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaBreakManager<D>::BreaksSeekedOver(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakSeekedOverEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreakManager)->add_BreaksSeekedOver(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaBreakManager> consume_Windows_Media_Playback_IMediaBreakManager<D>::BreaksSeekedOver(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakSeekedOverEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaBreakManager>(this, &abi_t<Windows::Media::Playback::IMediaBreakManager>::remove_BreaksSeekedOver, BreaksSeekedOver(handler));
}

template <typename D> void consume_Windows_Media_Playback_IMediaBreakManager<D>::BreaksSeekedOver(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreakManager)->remove_BreaksSeekedOver(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaBreakManager<D>::BreakStarted(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakStartedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreakManager)->add_BreakStarted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaBreakManager> consume_Windows_Media_Playback_IMediaBreakManager<D>::BreakStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakStartedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaBreakManager>(this, &abi_t<Windows::Media::Playback::IMediaBreakManager>::remove_BreakStarted, BreakStarted(handler));
}

template <typename D> void consume_Windows_Media_Playback_IMediaBreakManager<D>::BreakStarted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreakManager)->remove_BreakStarted(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaBreakManager<D>::BreakEnded(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakEndedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreakManager)->add_BreakEnded(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaBreakManager> consume_Windows_Media_Playback_IMediaBreakManager<D>::BreakEnded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakEndedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaBreakManager>(this, &abi_t<Windows::Media::Playback::IMediaBreakManager>::remove_BreakEnded, BreakEnded(handler));
}

template <typename D> void consume_Windows_Media_Playback_IMediaBreakManager<D>::BreakEnded(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreakManager)->remove_BreakEnded(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaBreakManager<D>::BreakSkipped(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakSkippedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreakManager)->add_BreakSkipped(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaBreakManager> consume_Windows_Media_Playback_IMediaBreakManager<D>::BreakSkipped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakSkippedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaBreakManager>(this, &abi_t<Windows::Media::Playback::IMediaBreakManager>::remove_BreakSkipped, BreakSkipped(handler));
}

template <typename D> void consume_Windows_Media_Playback_IMediaBreakManager<D>::BreakSkipped(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreakManager)->remove_BreakSkipped(get_abi(token)));
}

template <typename D> Windows::Media::Playback::MediaBreak consume_Windows_Media_Playback_IMediaBreakManager<D>::CurrentBreak() const
{
    Windows::Media::Playback::MediaBreak value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreakManager)->get_CurrentBreak(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackSession consume_Windows_Media_Playback_IMediaBreakManager<D>::PlaybackSession() const
{
    Windows::Media::Playback::MediaPlaybackSession value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreakManager)->get_PlaybackSession(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaBreakManager<D>::PlayBreak(Windows::Media::Playback::MediaBreak const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreakManager)->PlayBreak(get_abi(value)));
}

template <typename D> void consume_Windows_Media_Playback_IMediaBreakManager<D>::SkipCurrentBreak() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreakManager)->SkipCurrentBreak());
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaBreakSchedule<D>::ScheduleChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakSchedule, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreakSchedule)->add_ScheduleChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaBreakSchedule> consume_Windows_Media_Playback_IMediaBreakSchedule<D>::ScheduleChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakSchedule, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaBreakSchedule>(this, &abi_t<Windows::Media::Playback::IMediaBreakSchedule>::remove_ScheduleChanged, ScheduleChanged(handler));
}

template <typename D> void consume_Windows_Media_Playback_IMediaBreakSchedule<D>::ScheduleChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreakSchedule)->remove_ScheduleChanged(get_abi(token)));
}

template <typename D> void consume_Windows_Media_Playback_IMediaBreakSchedule<D>::InsertMidrollBreak(Windows::Media::Playback::MediaBreak const& mediaBreak) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreakSchedule)->InsertMidrollBreak(get_abi(mediaBreak)));
}

template <typename D> void consume_Windows_Media_Playback_IMediaBreakSchedule<D>::RemoveMidrollBreak(Windows::Media::Playback::MediaBreak const& mediaBreak) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreakSchedule)->RemoveMidrollBreak(get_abi(mediaBreak)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Playback::MediaBreak> consume_Windows_Media_Playback_IMediaBreakSchedule<D>::MidrollBreaks() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Playback::MediaBreak> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreakSchedule)->get_MidrollBreaks(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaBreakSchedule<D>::PrerollBreak(Windows::Media::Playback::MediaBreak const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreakSchedule)->put_PrerollBreak(get_abi(value)));
}

template <typename D> Windows::Media::Playback::MediaBreak consume_Windows_Media_Playback_IMediaBreakSchedule<D>::PrerollBreak() const
{
    Windows::Media::Playback::MediaBreak value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreakSchedule)->get_PrerollBreak(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaBreakSchedule<D>::PostrollBreak(Windows::Media::Playback::MediaBreak const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreakSchedule)->put_PostrollBreak(get_abi(value)));
}

template <typename D> Windows::Media::Playback::MediaBreak consume_Windows_Media_Playback_IMediaBreakSchedule<D>::PostrollBreak() const
{
    Windows::Media::Playback::MediaBreak value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreakSchedule)->get_PostrollBreak(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem consume_Windows_Media_Playback_IMediaBreakSchedule<D>::PlaybackItem() const
{
    Windows::Media::Playback::MediaPlaybackItem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreakSchedule)->get_PlaybackItem(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Playback::MediaBreak> consume_Windows_Media_Playback_IMediaBreakSeekedOverEventArgs<D>::SeekedOverBreaks() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Playback::MediaBreak> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreakSeekedOverEventArgs)->get_SeekedOverBreaks(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Playback_IMediaBreakSeekedOverEventArgs<D>::OldPosition() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreakSeekedOverEventArgs)->get_OldPosition(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Playback_IMediaBreakSeekedOverEventArgs<D>::NewPosition() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreakSeekedOverEventArgs)->get_NewPosition(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaBreak consume_Windows_Media_Playback_IMediaBreakSkippedEventArgs<D>::MediaBreak() const
{
    Windows::Media::Playback::MediaBreak value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreakSkippedEventArgs)->get_MediaBreak(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaBreak consume_Windows_Media_Playback_IMediaBreakStartedEventArgs<D>::MediaBreak() const
{
    Windows::Media::Playback::MediaBreak value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaBreakStartedEventArgs)->get_MediaBreak(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem consume_Windows_Media_Playback_IMediaEnginePlaybackSource<D>::CurrentItem() const
{
    Windows::Media::Playback::MediaPlaybackItem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaEnginePlaybackSource)->get_CurrentItem(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaEnginePlaybackSource<D>::SetPlaybackSource(Windows::Media::Playback::IMediaPlaybackSource const& source) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaEnginePlaybackSource)->SetPlaybackSource(get_abi(source)));
}

template <typename D> Windows::Media::MediaPlaybackType consume_Windows_Media_Playback_IMediaItemDisplayProperties<D>::Type() const
{
    Windows::Media::MediaPlaybackType value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaItemDisplayProperties)->get_Type(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaItemDisplayProperties<D>::Type(Windows::Media::MediaPlaybackType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaItemDisplayProperties)->put_Type(get_abi(value)));
}

template <typename D> Windows::Media::MusicDisplayProperties consume_Windows_Media_Playback_IMediaItemDisplayProperties<D>::MusicProperties() const
{
    Windows::Media::MusicDisplayProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaItemDisplayProperties)->get_MusicProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::VideoDisplayProperties consume_Windows_Media_Playback_IMediaItemDisplayProperties<D>::VideoProperties() const
{
    Windows::Media::VideoDisplayProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaItemDisplayProperties)->get_VideoProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::RandomAccessStreamReference consume_Windows_Media_Playback_IMediaItemDisplayProperties<D>::Thumbnail() const
{
    Windows::Storage::Streams::RandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaItemDisplayProperties)->get_Thumbnail(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaItemDisplayProperties<D>::Thumbnail(Windows::Storage::Streams::RandomAccessStreamReference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaItemDisplayProperties)->put_Thumbnail(get_abi(value)));
}

template <typename D> void consume_Windows_Media_Playback_IMediaItemDisplayProperties<D>::ClearAll() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaItemDisplayProperties)->ClearAll());
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::IsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->get_IsEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::IsEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->put_IsEnabled(value));
}

template <typename D> Windows::Media::Playback::MediaPlayer consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::MediaPlayer() const
{
    Windows::Media::Playback::MediaPlayer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->get_MediaPlayer(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::PlayBehavior() const
{
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->get_PlayBehavior(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::PauseBehavior() const
{
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->get_PauseBehavior(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::NextBehavior() const
{
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->get_NextBehavior(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::PreviousBehavior() const
{
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->get_PreviousBehavior(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::FastForwardBehavior() const
{
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->get_FastForwardBehavior(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::RewindBehavior() const
{
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->get_RewindBehavior(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::ShuffleBehavior() const
{
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->get_ShuffleBehavior(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::AutoRepeatModeBehavior() const
{
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->get_AutoRepeatModeBehavior(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::PositionBehavior() const
{
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->get_PositionBehavior(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::RateBehavior() const
{
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->get_RateBehavior(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::PlayReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPlayReceivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->add_PlayReceived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackCommandManager> consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::PlayReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPlayReceivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackCommandManager>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackCommandManager>::remove_PlayReceived, PlayReceived(handler));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::PlayReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->remove_PlayReceived(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::PauseReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPauseReceivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->add_PauseReceived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackCommandManager> consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::PauseReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPauseReceivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackCommandManager>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackCommandManager>::remove_PauseReceived, PauseReceived(handler));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::PauseReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->remove_PauseReceived(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::NextReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerNextReceivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->add_NextReceived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackCommandManager> consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::NextReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerNextReceivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackCommandManager>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackCommandManager>::remove_NextReceived, NextReceived(handler));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::NextReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->remove_NextReceived(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::PreviousReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPreviousReceivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->add_PreviousReceived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackCommandManager> consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::PreviousReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPreviousReceivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackCommandManager>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackCommandManager>::remove_PreviousReceived, PreviousReceived(handler));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::PreviousReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->remove_PreviousReceived(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::FastForwardReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerFastForwardReceivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->add_FastForwardReceived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackCommandManager> consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::FastForwardReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerFastForwardReceivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackCommandManager>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackCommandManager>::remove_FastForwardReceived, FastForwardReceived(handler));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::FastForwardReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->remove_FastForwardReceived(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::RewindReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerRewindReceivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->add_RewindReceived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackCommandManager> consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::RewindReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerRewindReceivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackCommandManager>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackCommandManager>::remove_RewindReceived, RewindReceived(handler));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::RewindReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->remove_RewindReceived(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::ShuffleReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerShuffleReceivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->add_ShuffleReceived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackCommandManager> consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::ShuffleReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerShuffleReceivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackCommandManager>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackCommandManager>::remove_ShuffleReceived, ShuffleReceived(handler));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::ShuffleReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->remove_ShuffleReceived(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::AutoRepeatModeReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->add_AutoRepeatModeReceived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackCommandManager> consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::AutoRepeatModeReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackCommandManager>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackCommandManager>::remove_AutoRepeatModeReceived, AutoRepeatModeReceived(handler));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::AutoRepeatModeReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->remove_AutoRepeatModeReceived(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::PositionReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPositionReceivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->add_PositionReceived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackCommandManager> consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::PositionReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPositionReceivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackCommandManager>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackCommandManager>::remove_PositionReceived, PositionReceived(handler));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::PositionReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->remove_PositionReceived(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::RateReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerRateReceivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->add_RateReceived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackCommandManager> consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::RateReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerRateReceivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackCommandManager>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackCommandManager>::remove_RateReceived, RateReceived(handler));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackCommandManager<D>::RateReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManager)->remove_RateReceived(get_abi(token)));
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs)->put_Handled(value));
}

template <typename D> Windows::Media::MediaPlaybackAutoRepeatMode consume_Windows_Media_Playback_IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs<D>::AutoRepeatMode() const
{
    Windows::Media::MediaPlaybackAutoRepeatMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs)->get_AutoRepeatMode(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Media_Playback_IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackCommandManager consume_Windows_Media_Playback_IMediaPlaybackCommandManagerCommandBehavior<D>::CommandManager() const
{
    Windows::Media::Playback::MediaPlaybackCommandManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior)->get_CommandManager(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlaybackCommandManagerCommandBehavior<D>::IsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior)->get_IsEnabled(&value));
    return value;
}

template <typename D> Windows::Media::Playback::MediaCommandEnablingRule consume_Windows_Media_Playback_IMediaPlaybackCommandManagerCommandBehavior<D>::EnablingRule() const
{
    Windows::Media::Playback::MediaCommandEnablingRule value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior)->get_EnablingRule(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackCommandManagerCommandBehavior<D>::EnablingRule(Windows::Media::Playback::MediaCommandEnablingRule const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior)->put_EnablingRule(get_abi(value)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackCommandManagerCommandBehavior<D>::IsEnabledChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior)->add_IsEnabledChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior> consume_Windows_Media_Playback_IMediaPlaybackCommandManagerCommandBehavior<D>::IsEnabledChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior>::remove_IsEnabledChanged, IsEnabledChanged(handler));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackCommandManagerCommandBehavior<D>::IsEnabledChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior)->remove_IsEnabledChanged(get_abi(token)));
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlaybackCommandManagerFastForwardReceivedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerFastForwardReceivedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackCommandManagerFastForwardReceivedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerFastForwardReceivedEventArgs)->put_Handled(value));
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Media_Playback_IMediaPlaybackCommandManagerFastForwardReceivedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerFastForwardReceivedEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlaybackCommandManagerNextReceivedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerNextReceivedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackCommandManagerNextReceivedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerNextReceivedEventArgs)->put_Handled(value));
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Media_Playback_IMediaPlaybackCommandManagerNextReceivedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerNextReceivedEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlaybackCommandManagerPauseReceivedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerPauseReceivedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackCommandManagerPauseReceivedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerPauseReceivedEventArgs)->put_Handled(value));
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Media_Playback_IMediaPlaybackCommandManagerPauseReceivedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerPauseReceivedEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlaybackCommandManagerPlayReceivedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerPlayReceivedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackCommandManagerPlayReceivedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerPlayReceivedEventArgs)->put_Handled(value));
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Media_Playback_IMediaPlaybackCommandManagerPlayReceivedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerPlayReceivedEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlaybackCommandManagerPositionReceivedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerPositionReceivedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackCommandManagerPositionReceivedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerPositionReceivedEventArgs)->put_Handled(value));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Playback_IMediaPlaybackCommandManagerPositionReceivedEventArgs<D>::Position() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerPositionReceivedEventArgs)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Media_Playback_IMediaPlaybackCommandManagerPositionReceivedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerPositionReceivedEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlaybackCommandManagerPreviousReceivedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerPreviousReceivedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackCommandManagerPreviousReceivedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerPreviousReceivedEventArgs)->put_Handled(value));
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Media_Playback_IMediaPlaybackCommandManagerPreviousReceivedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerPreviousReceivedEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlaybackCommandManagerRateReceivedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerRateReceivedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackCommandManagerRateReceivedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerRateReceivedEventArgs)->put_Handled(value));
}

template <typename D> double consume_Windows_Media_Playback_IMediaPlaybackCommandManagerRateReceivedEventArgs<D>::PlaybackRate() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerRateReceivedEventArgs)->get_PlaybackRate(&value));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Media_Playback_IMediaPlaybackCommandManagerRateReceivedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerRateReceivedEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlaybackCommandManagerRewindReceivedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerRewindReceivedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackCommandManagerRewindReceivedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerRewindReceivedEventArgs)->put_Handled(value));
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Media_Playback_IMediaPlaybackCommandManagerRewindReceivedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerRewindReceivedEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlaybackCommandManagerShuffleReceivedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerShuffleReceivedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackCommandManagerShuffleReceivedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerShuffleReceivedEventArgs)->put_Handled(value));
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlaybackCommandManagerShuffleReceivedEventArgs<D>::IsShuffleRequested() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerShuffleReceivedEventArgs)->get_IsShuffleRequested(&value));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Media_Playback_IMediaPlaybackCommandManagerShuffleReceivedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackCommandManagerShuffleReceivedEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackItem<D>::AudioTracksChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItem)->add_AudioTracksChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackItem> consume_Windows_Media_Playback_IMediaPlaybackItem<D>::AudioTracksChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackItem>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackItem>::remove_AudioTracksChanged, AudioTracksChanged(handler));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackItem<D>::AudioTracksChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItem)->remove_AudioTracksChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackItem<D>::VideoTracksChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItem)->add_VideoTracksChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackItem> consume_Windows_Media_Playback_IMediaPlaybackItem<D>::VideoTracksChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackItem>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackItem>::remove_VideoTracksChanged, VideoTracksChanged(handler));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackItem<D>::VideoTracksChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItem)->remove_VideoTracksChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackItem<D>::TimedMetadataTracksChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItem)->add_TimedMetadataTracksChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackItem> consume_Windows_Media_Playback_IMediaPlaybackItem<D>::TimedMetadataTracksChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackItem>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackItem>::remove_TimedMetadataTracksChanged, TimedMetadataTracksChanged(handler));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackItem<D>::TimedMetadataTracksChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItem)->remove_TimedMetadataTracksChanged(get_abi(token)));
}

template <typename D> Windows::Media::Core::MediaSource consume_Windows_Media_Playback_IMediaPlaybackItem<D>::Source() const
{
    Windows::Media::Core::MediaSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItem)->get_Source(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackAudioTrackList consume_Windows_Media_Playback_IMediaPlaybackItem<D>::AudioTracks() const
{
    Windows::Media::Playback::MediaPlaybackAudioTrackList value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItem)->get_AudioTracks(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackVideoTrackList consume_Windows_Media_Playback_IMediaPlaybackItem<D>::VideoTracks() const
{
    Windows::Media::Playback::MediaPlaybackVideoTrackList value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItem)->get_VideoTracks(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList consume_Windows_Media_Playback_IMediaPlaybackItem<D>::TimedMetadataTracks() const
{
    Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItem)->get_TimedMetadataTracks(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaBreakSchedule consume_Windows_Media_Playback_IMediaPlaybackItem2<D>::BreakSchedule() const
{
    Windows::Media::Playback::MediaBreakSchedule value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItem2)->get_BreakSchedule(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Playback_IMediaPlaybackItem2<D>::StartTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItem2)->get_StartTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_Playback_IMediaPlaybackItem2<D>::DurationLimit() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItem2)->get_DurationLimit(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlaybackItem2<D>::CanSkip() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItem2)->get_CanSkip(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackItem2<D>::CanSkip(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItem2)->put_CanSkip(value));
}

template <typename D> Windows::Media::Playback::MediaItemDisplayProperties consume_Windows_Media_Playback_IMediaPlaybackItem2<D>::GetDisplayProperties() const
{
    Windows::Media::Playback::MediaItemDisplayProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItem2)->GetDisplayProperties(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackItem2<D>::ApplyDisplayProperties(Windows::Media::Playback::MediaItemDisplayProperties const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItem2)->ApplyDisplayProperties(get_abi(value)));
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlaybackItem3<D>::IsDisabledInPlaybackList() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItem3)->get_IsDisabledInPlaybackList(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackItem3<D>::IsDisabledInPlaybackList(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItem3)->put_IsDisabledInPlaybackList(value));
}

template <typename D> double consume_Windows_Media_Playback_IMediaPlaybackItem3<D>::TotalDownloadProgress() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItem3)->get_TotalDownloadProgress(&value));
    return value;
}

template <typename D> Windows::Media::Playback::AutoLoadedDisplayPropertyKind consume_Windows_Media_Playback_IMediaPlaybackItem3<D>::AutoLoadedDisplayProperties() const
{
    Windows::Media::Playback::AutoLoadedDisplayPropertyKind value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItem3)->get_AutoLoadedDisplayProperties(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackItem3<D>::AutoLoadedDisplayProperties(Windows::Media::Playback::AutoLoadedDisplayPropertyKind const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItem3)->put_AutoLoadedDisplayProperties(get_abi(value)));
}

template <typename D> Windows::Media::Playback::MediaPlaybackItemErrorCode consume_Windows_Media_Playback_IMediaPlaybackItemError<D>::ErrorCode() const
{
    Windows::Media::Playback::MediaPlaybackItemErrorCode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItemError)->get_ErrorCode(put_abi(value)));
    return value;
}

template <typename D> HRESULT consume_Windows_Media_Playback_IMediaPlaybackItemError<D>::ExtendedError() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItemError)->get_ExtendedError(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem consume_Windows_Media_Playback_IMediaPlaybackItemFactory<D>::Create(Windows::Media::Core::MediaSource const& source) const
{
    Windows::Media::Playback::MediaPlaybackItem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItemFactory)->Create(get_abi(source), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem consume_Windows_Media_Playback_IMediaPlaybackItemFactory2<D>::CreateWithStartTime(Windows::Media::Core::MediaSource const& source, Windows::Foundation::TimeSpan const& startTime) const
{
    Windows::Media::Playback::MediaPlaybackItem result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItemFactory2)->CreateWithStartTime(get_abi(source), get_abi(startTime), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem consume_Windows_Media_Playback_IMediaPlaybackItemFactory2<D>::CreateWithStartTimeAndDurationLimit(Windows::Media::Core::MediaSource const& source, Windows::Foundation::TimeSpan const& startTime, Windows::Foundation::TimeSpan const& durationLimit) const
{
    Windows::Media::Playback::MediaPlaybackItem result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItemFactory2)->CreateWithStartTimeAndDurationLimit(get_abi(source), get_abi(startTime), get_abi(durationLimit), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem consume_Windows_Media_Playback_IMediaPlaybackItemFailedEventArgs<D>::Item() const
{
    Windows::Media::Playback::MediaPlaybackItem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItemFailedEventArgs)->get_Item(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItemError consume_Windows_Media_Playback_IMediaPlaybackItemFailedEventArgs<D>::Error() const
{
    Windows::Media::Playback::MediaPlaybackItemError value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItemFailedEventArgs)->get_Error(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem consume_Windows_Media_Playback_IMediaPlaybackItemOpenedEventArgs<D>::Item() const
{
    Windows::Media::Playback::MediaPlaybackItem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItemOpenedEventArgs)->get_Item(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem consume_Windows_Media_Playback_IMediaPlaybackItemStatics<D>::FindFromMediaSource(Windows::Media::Core::MediaSource const& source) const
{
    Windows::Media::Playback::MediaPlaybackItem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackItemStatics)->FindFromMediaSource(get_abi(source), put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackList<D>::ItemFailed(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::MediaPlaybackItemFailedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackList)->add_ItemFailed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackList> consume_Windows_Media_Playback_IMediaPlaybackList<D>::ItemFailed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::MediaPlaybackItemFailedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackList>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackList>::remove_ItemFailed, ItemFailed(handler));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackList<D>::ItemFailed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackList)->remove_ItemFailed(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackList<D>::CurrentItemChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::CurrentMediaPlaybackItemChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackList)->add_CurrentItemChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackList> consume_Windows_Media_Playback_IMediaPlaybackList<D>::CurrentItemChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::CurrentMediaPlaybackItemChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackList>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackList>::remove_CurrentItemChanged, CurrentItemChanged(handler));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackList<D>::CurrentItemChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackList)->remove_CurrentItemChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackList<D>::ItemOpened(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::MediaPlaybackItemOpenedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackList)->add_ItemOpened(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackList> consume_Windows_Media_Playback_IMediaPlaybackList<D>::ItemOpened(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::MediaPlaybackItemOpenedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackList>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackList>::remove_ItemOpened, ItemOpened(handler));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackList<D>::ItemOpened(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackList)->remove_ItemOpened(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IObservableVector<Windows::Media::Playback::MediaPlaybackItem> consume_Windows_Media_Playback_IMediaPlaybackList<D>::Items() const
{
    Windows::Foundation::Collections::IObservableVector<Windows::Media::Playback::MediaPlaybackItem> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackList)->get_Items(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlaybackList<D>::AutoRepeatEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackList)->get_AutoRepeatEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackList<D>::AutoRepeatEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackList)->put_AutoRepeatEnabled(value));
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlaybackList<D>::ShuffleEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackList)->get_ShuffleEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackList<D>::ShuffleEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackList)->put_ShuffleEnabled(value));
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem consume_Windows_Media_Playback_IMediaPlaybackList<D>::CurrentItem() const
{
    Windows::Media::Playback::MediaPlaybackItem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackList)->get_CurrentItem(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Playback_IMediaPlaybackList<D>::CurrentItemIndex() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackList)->get_CurrentItemIndex(&value));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem consume_Windows_Media_Playback_IMediaPlaybackList<D>::MoveNext() const
{
    Windows::Media::Playback::MediaPlaybackItem item{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackList)->MoveNext(put_abi(item)));
    return item;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem consume_Windows_Media_Playback_IMediaPlaybackList<D>::MovePrevious() const
{
    Windows::Media::Playback::MediaPlaybackItem item{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackList)->MovePrevious(put_abi(item)));
    return item;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem consume_Windows_Media_Playback_IMediaPlaybackList<D>::MoveTo(uint32_t itemIndex) const
{
    Windows::Media::Playback::MediaPlaybackItem item{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackList)->MoveTo(itemIndex, put_abi(item)));
    return item;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_Playback_IMediaPlaybackList2<D>::MaxPrefetchTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackList2)->get_MaxPrefetchTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackList2<D>::MaxPrefetchTime(optional<Windows::Foundation::TimeSpan> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackList2)->put_MaxPrefetchTime(get_abi(value)));
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem consume_Windows_Media_Playback_IMediaPlaybackList2<D>::StartingItem() const
{
    Windows::Media::Playback::MediaPlaybackItem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackList2)->get_StartingItem(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackList2<D>::StartingItem(Windows::Media::Playback::MediaPlaybackItem const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackList2)->put_StartingItem(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Playback::MediaPlaybackItem> consume_Windows_Media_Playback_IMediaPlaybackList2<D>::ShuffledItems() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Playback::MediaPlaybackItem> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackList2)->get_ShuffledItems(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackList2<D>::SetShuffledItems(param::iterable<Windows::Media::Playback::MediaPlaybackItem> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackList2)->SetShuffledItems(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Media_Playback_IMediaPlaybackList3<D>::MaxPlayedItemsToKeepOpen() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackList3)->get_MaxPlayedItemsToKeepOpen(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackList3<D>::MaxPlayedItemsToKeepOpen(optional<uint32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackList3)->put_MaxPlayedItemsToKeepOpen(get_abi(value)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackSession<D>::PlaybackStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->add_PlaybackStateChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackSession> consume_Windows_Media_Playback_IMediaPlaybackSession<D>::PlaybackStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackSession>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackSession>::remove_PlaybackStateChanged, PlaybackStateChanged(value));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackSession<D>::PlaybackStateChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->remove_PlaybackStateChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackSession<D>::PlaybackRateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->add_PlaybackRateChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackSession> consume_Windows_Media_Playback_IMediaPlaybackSession<D>::PlaybackRateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackSession>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackSession>::remove_PlaybackRateChanged, PlaybackRateChanged(value));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackSession<D>::PlaybackRateChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->remove_PlaybackRateChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackSession<D>::SeekCompleted(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->add_SeekCompleted(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackSession> consume_Windows_Media_Playback_IMediaPlaybackSession<D>::SeekCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackSession>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackSession>::remove_SeekCompleted, SeekCompleted(value));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackSession<D>::SeekCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->remove_SeekCompleted(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackSession<D>::BufferingStarted(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->add_BufferingStarted(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackSession> consume_Windows_Media_Playback_IMediaPlaybackSession<D>::BufferingStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackSession>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackSession>::remove_BufferingStarted, BufferingStarted(value));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackSession<D>::BufferingStarted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->remove_BufferingStarted(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackSession<D>::BufferingEnded(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->add_BufferingEnded(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackSession> consume_Windows_Media_Playback_IMediaPlaybackSession<D>::BufferingEnded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackSession>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackSession>::remove_BufferingEnded, BufferingEnded(value));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackSession<D>::BufferingEnded(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->remove_BufferingEnded(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackSession<D>::BufferingProgressChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->add_BufferingProgressChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackSession> consume_Windows_Media_Playback_IMediaPlaybackSession<D>::BufferingProgressChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackSession>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackSession>::remove_BufferingProgressChanged, BufferingProgressChanged(value));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackSession<D>::BufferingProgressChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->remove_BufferingProgressChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackSession<D>::DownloadProgressChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->add_DownloadProgressChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackSession> consume_Windows_Media_Playback_IMediaPlaybackSession<D>::DownloadProgressChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackSession>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackSession>::remove_DownloadProgressChanged, DownloadProgressChanged(value));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackSession<D>::DownloadProgressChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->remove_DownloadProgressChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackSession<D>::NaturalDurationChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->add_NaturalDurationChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackSession> consume_Windows_Media_Playback_IMediaPlaybackSession<D>::NaturalDurationChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackSession>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackSession>::remove_NaturalDurationChanged, NaturalDurationChanged(value));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackSession<D>::NaturalDurationChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->remove_NaturalDurationChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackSession<D>::PositionChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->add_PositionChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackSession> consume_Windows_Media_Playback_IMediaPlaybackSession<D>::PositionChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackSession>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackSession>::remove_PositionChanged, PositionChanged(value));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackSession<D>::PositionChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->remove_PositionChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackSession<D>::NaturalVideoSizeChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->add_NaturalVideoSizeChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackSession> consume_Windows_Media_Playback_IMediaPlaybackSession<D>::NaturalVideoSizeChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackSession>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackSession>::remove_NaturalVideoSizeChanged, NaturalVideoSizeChanged(value));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackSession<D>::NaturalVideoSizeChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->remove_NaturalVideoSizeChanged(get_abi(token)));
}

template <typename D> Windows::Media::Playback::MediaPlayer consume_Windows_Media_Playback_IMediaPlaybackSession<D>::MediaPlayer() const
{
    Windows::Media::Playback::MediaPlayer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->get_MediaPlayer(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Playback_IMediaPlaybackSession<D>::NaturalDuration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->get_NaturalDuration(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Playback_IMediaPlaybackSession<D>::Position() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->get_Position(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackSession<D>::Position(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->put_Position(get_abi(value)));
}

template <typename D> Windows::Media::Playback::MediaPlaybackState consume_Windows_Media_Playback_IMediaPlaybackSession<D>::PlaybackState() const
{
    Windows::Media::Playback::MediaPlaybackState value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->get_PlaybackState(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlaybackSession<D>::CanSeek() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->get_CanSeek(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlaybackSession<D>::CanPause() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->get_CanPause(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlaybackSession<D>::IsProtected() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->get_IsProtected(&value));
    return value;
}

template <typename D> double consume_Windows_Media_Playback_IMediaPlaybackSession<D>::PlaybackRate() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->get_PlaybackRate(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackSession<D>::PlaybackRate(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->put_PlaybackRate(value));
}

template <typename D> double consume_Windows_Media_Playback_IMediaPlaybackSession<D>::BufferingProgress() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->get_BufferingProgress(&value));
    return value;
}

template <typename D> double consume_Windows_Media_Playback_IMediaPlaybackSession<D>::DownloadProgress() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->get_DownloadProgress(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Playback_IMediaPlaybackSession<D>::NaturalVideoHeight() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->get_NaturalVideoHeight(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Playback_IMediaPlaybackSession<D>::NaturalVideoWidth() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->get_NaturalVideoWidth(&value));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_Media_Playback_IMediaPlaybackSession<D>::NormalizedSourceRect() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->get_NormalizedSourceRect(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackSession<D>::NormalizedSourceRect(Windows::Foundation::Rect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->put_NormalizedSourceRect(get_abi(value)));
}

template <typename D> Windows::Media::MediaProperties::StereoscopicVideoPackingMode consume_Windows_Media_Playback_IMediaPlaybackSession<D>::StereoscopicVideoPackingMode() const
{
    Windows::Media::MediaProperties::StereoscopicVideoPackingMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->get_StereoscopicVideoPackingMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackSession<D>::StereoscopicVideoPackingMode(Windows::Media::MediaProperties::StereoscopicVideoPackingMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession)->put_StereoscopicVideoPackingMode(get_abi(value)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackSession2<D>::BufferedRangesChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession2)->add_BufferedRangesChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackSession2> consume_Windows_Media_Playback_IMediaPlaybackSession2<D>::BufferedRangesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackSession2>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackSession2>::remove_BufferedRangesChanged, BufferedRangesChanged(value));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackSession2<D>::BufferedRangesChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession2)->remove_BufferedRangesChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackSession2<D>::PlayedRangesChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession2)->add_PlayedRangesChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackSession2> consume_Windows_Media_Playback_IMediaPlaybackSession2<D>::PlayedRangesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackSession2>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackSession2>::remove_PlayedRangesChanged, PlayedRangesChanged(value));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackSession2<D>::PlayedRangesChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession2)->remove_PlayedRangesChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackSession2<D>::SeekableRangesChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession2)->add_SeekableRangesChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackSession2> consume_Windows_Media_Playback_IMediaPlaybackSession2<D>::SeekableRangesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackSession2>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackSession2>::remove_SeekableRangesChanged, SeekableRangesChanged(value));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackSession2<D>::SeekableRangesChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession2)->remove_SeekableRangesChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackSession2<D>::SupportedPlaybackRatesChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession2)->add_SupportedPlaybackRatesChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackSession2> consume_Windows_Media_Playback_IMediaPlaybackSession2<D>::SupportedPlaybackRatesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackSession2>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackSession2>::remove_SupportedPlaybackRatesChanged, SupportedPlaybackRatesChanged(value));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackSession2<D>::SupportedPlaybackRatesChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession2)->remove_SupportedPlaybackRatesChanged(get_abi(token)));
}

template <typename D> Windows::Media::Playback::MediaPlaybackSphericalVideoProjection consume_Windows_Media_Playback_IMediaPlaybackSession2<D>::SphericalVideoProjection() const
{
    Windows::Media::Playback::MediaPlaybackSphericalVideoProjection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession2)->get_SphericalVideoProjection(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlaybackSession2<D>::IsMirroring() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession2)->get_IsMirroring(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackSession2<D>::IsMirroring(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession2)->put_IsMirroring(value));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::MediaTimeRange> consume_Windows_Media_Playback_IMediaPlaybackSession2<D>::GetBufferedRanges() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::MediaTimeRange> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession2)->GetBufferedRanges(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::MediaTimeRange> consume_Windows_Media_Playback_IMediaPlaybackSession2<D>::GetPlayedRanges() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::MediaTimeRange> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession2)->GetPlayedRanges(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::MediaTimeRange> consume_Windows_Media_Playback_IMediaPlaybackSession2<D>::GetSeekableRanges() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::MediaTimeRange> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession2)->GetSeekableRanges(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlaybackSession2<D>::IsSupportedPlaybackRateRange(double rate1, double rate2) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession2)->IsSupportedPlaybackRateRange(rate1, rate2, &value));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaRotation consume_Windows_Media_Playback_IMediaPlaybackSession3<D>::PlaybackRotation() const
{
    Windows::Media::MediaProperties::MediaRotation value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession3)->get_PlaybackRotation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackSession3<D>::PlaybackRotation(Windows::Media::MediaProperties::MediaRotation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession3)->put_PlaybackRotation(get_abi(value)));
}

template <typename D> Windows::Media::Playback::MediaPlaybackSessionOutputDegradationPolicyState consume_Windows_Media_Playback_IMediaPlaybackSession3<D>::GetOutputDegradationPolicyState() const
{
    Windows::Media::Playback::MediaPlaybackSessionOutputDegradationPolicyState value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSession3)->GetOutputDegradationPolicyState(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlaybackSessionBufferingStartedEventArgs<D>::IsPlaybackInterruption() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSessionBufferingStartedEventArgs)->get_IsPlaybackInterruption(&value));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackSessionVideoConstrictionReason consume_Windows_Media_Playback_IMediaPlaybackSessionOutputDegradationPolicyState<D>::VideoConstrictionReason() const
{
    Windows::Media::Playback::MediaPlaybackSessionVideoConstrictionReason value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSessionOutputDegradationPolicyState)->get_VideoConstrictionReason(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlaybackSphericalVideoProjection<D>::IsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSphericalVideoProjection)->get_IsEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackSphericalVideoProjection<D>::IsEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSphericalVideoProjection)->put_IsEnabled(value));
}

template <typename D> Windows::Media::MediaProperties::SphericalVideoFrameFormat consume_Windows_Media_Playback_IMediaPlaybackSphericalVideoProjection<D>::FrameFormat() const
{
    Windows::Media::MediaProperties::SphericalVideoFrameFormat value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSphericalVideoProjection)->get_FrameFormat(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackSphericalVideoProjection<D>::FrameFormat(Windows::Media::MediaProperties::SphericalVideoFrameFormat const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSphericalVideoProjection)->put_FrameFormat(get_abi(value)));
}

template <typename D> double consume_Windows_Media_Playback_IMediaPlaybackSphericalVideoProjection<D>::HorizontalFieldOfViewInDegrees() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSphericalVideoProjection)->get_HorizontalFieldOfViewInDegrees(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackSphericalVideoProjection<D>::HorizontalFieldOfViewInDegrees(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSphericalVideoProjection)->put_HorizontalFieldOfViewInDegrees(value));
}

template <typename D> Windows::Foundation::Numerics::quaternion consume_Windows_Media_Playback_IMediaPlaybackSphericalVideoProjection<D>::ViewOrientation() const
{
    Windows::Foundation::Numerics::quaternion value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSphericalVideoProjection)->get_ViewOrientation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackSphericalVideoProjection<D>::ViewOrientation(Windows::Foundation::Numerics::quaternion const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSphericalVideoProjection)->put_ViewOrientation(get_abi(value)));
}

template <typename D> Windows::Media::Playback::SphericalVideoProjectionMode consume_Windows_Media_Playback_IMediaPlaybackSphericalVideoProjection<D>::ProjectionMode() const
{
    Windows::Media::Playback::SphericalVideoProjectionMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSphericalVideoProjection)->get_ProjectionMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackSphericalVideoProjection<D>::ProjectionMode(Windows::Media::Playback::SphericalVideoProjectionMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackSphericalVideoProjection)->put_ProjectionMode(get_abi(value)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlaybackTimedMetadataTrackList<D>::PresentationModeChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList, Windows::Media::Playback::TimedMetadataPresentationModeChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackTimedMetadataTrackList)->add_PresentationModeChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlaybackTimedMetadataTrackList> consume_Windows_Media_Playback_IMediaPlaybackTimedMetadataTrackList<D>::PresentationModeChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList, Windows::Media::Playback::TimedMetadataPresentationModeChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlaybackTimedMetadataTrackList>(this, &abi_t<Windows::Media::Playback::IMediaPlaybackTimedMetadataTrackList>::remove_PresentationModeChanged, PresentationModeChanged(handler));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackTimedMetadataTrackList<D>::PresentationModeChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackTimedMetadataTrackList)->remove_PresentationModeChanged(get_abi(token)));
}

template <typename D> Windows::Media::Playback::TimedMetadataTrackPresentationMode consume_Windows_Media_Playback_IMediaPlaybackTimedMetadataTrackList<D>::GetPresentationMode(uint32_t index) const
{
    Windows::Media::Playback::TimedMetadataTrackPresentationMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackTimedMetadataTrackList)->GetPresentationMode(index, put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlaybackTimedMetadataTrackList<D>::SetPresentationMode(uint32_t index, Windows::Media::Playback::TimedMetadataTrackPresentationMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlaybackTimedMetadataTrackList)->SetPresentationMode(index, get_abi(value)));
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlayer<D>::AutoPlay() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->get_AutoPlay(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer<D>::AutoPlay(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->put_AutoPlay(value));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Playback_IMediaPlayer<D>::NaturalDuration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->get_NaturalDuration(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Playback_IMediaPlayer<D>::Position() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->get_Position(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer<D>::Position(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->put_Position(get_abi(value)));
}

template <typename D> double consume_Windows_Media_Playback_IMediaPlayer<D>::BufferingProgress() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->get_BufferingProgress(&value));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlayerState consume_Windows_Media_Playback_IMediaPlayer<D>::CurrentState() const
{
    Windows::Media::Playback::MediaPlayerState value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->get_CurrentState(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlayer<D>::CanSeek() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->get_CanSeek(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlayer<D>::CanPause() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->get_CanPause(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlayer<D>::IsLoopingEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->get_IsLoopingEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer<D>::IsLoopingEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->put_IsLoopingEnabled(value));
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlayer<D>::IsProtected() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->get_IsProtected(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlayer<D>::IsMuted() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->get_IsMuted(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer<D>::IsMuted(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->put_IsMuted(value));
}

template <typename D> double consume_Windows_Media_Playback_IMediaPlayer<D>::PlaybackRate() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->get_PlaybackRate(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer<D>::PlaybackRate(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->put_PlaybackRate(value));
}

template <typename D> double consume_Windows_Media_Playback_IMediaPlayer<D>::Volume() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->get_Volume(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer<D>::Volume(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->put_Volume(value));
}

template <typename D> Windows::Media::Playback::PlaybackMediaMarkerSequence consume_Windows_Media_Playback_IMediaPlayer<D>::PlaybackMediaMarkers() const
{
    Windows::Media::Playback::PlaybackMediaMarkerSequence value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->get_PlaybackMediaMarkers(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlayer<D>::MediaOpened(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->add_MediaOpened(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlayer> consume_Windows_Media_Playback_IMediaPlayer<D>::MediaOpened(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlayer>(this, &abi_t<Windows::Media::Playback::IMediaPlayer>::remove_MediaOpened, MediaOpened(value));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer<D>::MediaOpened(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->remove_MediaOpened(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlayer<D>::MediaEnded(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->add_MediaEnded(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlayer> consume_Windows_Media_Playback_IMediaPlayer<D>::MediaEnded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlayer>(this, &abi_t<Windows::Media::Playback::IMediaPlayer>::remove_MediaEnded, MediaEnded(value));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer<D>::MediaEnded(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->remove_MediaEnded(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlayer<D>::MediaFailed(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::MediaPlayerFailedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->add_MediaFailed(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlayer> consume_Windows_Media_Playback_IMediaPlayer<D>::MediaFailed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::MediaPlayerFailedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlayer>(this, &abi_t<Windows::Media::Playback::IMediaPlayer>::remove_MediaFailed, MediaFailed(value));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer<D>::MediaFailed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->remove_MediaFailed(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlayer<D>::CurrentStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->add_CurrentStateChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlayer> consume_Windows_Media_Playback_IMediaPlayer<D>::CurrentStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlayer>(this, &abi_t<Windows::Media::Playback::IMediaPlayer>::remove_CurrentStateChanged, CurrentStateChanged(value));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer<D>::CurrentStateChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->remove_CurrentStateChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlayer<D>::PlaybackMediaMarkerReached(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::PlaybackMediaMarkerReachedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->add_PlaybackMediaMarkerReached(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlayer> consume_Windows_Media_Playback_IMediaPlayer<D>::PlaybackMediaMarkerReached(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::PlaybackMediaMarkerReachedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlayer>(this, &abi_t<Windows::Media::Playback::IMediaPlayer>::remove_PlaybackMediaMarkerReached, PlaybackMediaMarkerReached(value));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer<D>::PlaybackMediaMarkerReached(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->remove_PlaybackMediaMarkerReached(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlayer<D>::MediaPlayerRateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::MediaPlayerRateChangedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->add_MediaPlayerRateChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlayer> consume_Windows_Media_Playback_IMediaPlayer<D>::MediaPlayerRateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::MediaPlayerRateChangedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlayer>(this, &abi_t<Windows::Media::Playback::IMediaPlayer>::remove_MediaPlayerRateChanged, MediaPlayerRateChanged(value));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer<D>::MediaPlayerRateChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->remove_MediaPlayerRateChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlayer<D>::VolumeChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->add_VolumeChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlayer> consume_Windows_Media_Playback_IMediaPlayer<D>::VolumeChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlayer>(this, &abi_t<Windows::Media::Playback::IMediaPlayer>::remove_VolumeChanged, VolumeChanged(value));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer<D>::VolumeChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->remove_VolumeChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlayer<D>::SeekCompleted(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->add_SeekCompleted(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlayer> consume_Windows_Media_Playback_IMediaPlayer<D>::SeekCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlayer>(this, &abi_t<Windows::Media::Playback::IMediaPlayer>::remove_SeekCompleted, SeekCompleted(value));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer<D>::SeekCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->remove_SeekCompleted(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlayer<D>::BufferingStarted(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->add_BufferingStarted(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlayer> consume_Windows_Media_Playback_IMediaPlayer<D>::BufferingStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlayer>(this, &abi_t<Windows::Media::Playback::IMediaPlayer>::remove_BufferingStarted, BufferingStarted(value));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer<D>::BufferingStarted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->remove_BufferingStarted(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlayer<D>::BufferingEnded(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->add_BufferingEnded(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlayer> consume_Windows_Media_Playback_IMediaPlayer<D>::BufferingEnded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlayer>(this, &abi_t<Windows::Media::Playback::IMediaPlayer>::remove_BufferingEnded, BufferingEnded(value));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer<D>::BufferingEnded(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->remove_BufferingEnded(get_abi(token)));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer<D>::Play() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->Play());
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer<D>::Pause() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->Pause());
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer<D>::SetUriSource(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer)->SetUriSource(get_abi(value)));
}

template <typename D> Windows::Media::SystemMediaTransportControls consume_Windows_Media_Playback_IMediaPlayer2<D>::SystemMediaTransportControls() const
{
    Windows::Media::SystemMediaTransportControls value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer2)->get_SystemMediaTransportControls(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlayerAudioCategory consume_Windows_Media_Playback_IMediaPlayer2<D>::AudioCategory() const
{
    Windows::Media::Playback::MediaPlayerAudioCategory value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer2)->get_AudioCategory(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer2<D>::AudioCategory(Windows::Media::Playback::MediaPlayerAudioCategory const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer2)->put_AudioCategory(get_abi(value)));
}

template <typename D> Windows::Media::Playback::MediaPlayerAudioDeviceType consume_Windows_Media_Playback_IMediaPlayer2<D>::AudioDeviceType() const
{
    Windows::Media::Playback::MediaPlayerAudioDeviceType value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer2)->get_AudioDeviceType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer2<D>::AudioDeviceType(Windows::Media::Playback::MediaPlayerAudioDeviceType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer2)->put_AudioDeviceType(get_abi(value)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlayer3<D>::IsMutedChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer3)->add_IsMutedChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlayer3> consume_Windows_Media_Playback_IMediaPlayer3<D>::IsMutedChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlayer3>(this, &abi_t<Windows::Media::Playback::IMediaPlayer3>::remove_IsMutedChanged, IsMutedChanged(value));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer3<D>::IsMutedChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer3)->remove_IsMutedChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlayer3<D>::SourceChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer3)->add_SourceChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlayer3> consume_Windows_Media_Playback_IMediaPlayer3<D>::SourceChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlayer3>(this, &abi_t<Windows::Media::Playback::IMediaPlayer3>::remove_SourceChanged, SourceChanged(value));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer3<D>::SourceChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer3)->remove_SourceChanged(get_abi(token)));
}

template <typename D> double consume_Windows_Media_Playback_IMediaPlayer3<D>::AudioBalance() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer3)->get_AudioBalance(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer3<D>::AudioBalance(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer3)->put_AudioBalance(value));
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlayer3<D>::RealTimePlayback() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer3)->get_RealTimePlayback(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer3<D>::RealTimePlayback(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer3)->put_RealTimePlayback(value));
}

template <typename D> Windows::Media::Playback::StereoscopicVideoRenderMode consume_Windows_Media_Playback_IMediaPlayer3<D>::StereoscopicVideoRenderMode() const
{
    Windows::Media::Playback::StereoscopicVideoRenderMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer3)->get_StereoscopicVideoRenderMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer3<D>::StereoscopicVideoRenderMode(Windows::Media::Playback::StereoscopicVideoRenderMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer3)->put_StereoscopicVideoRenderMode(get_abi(value)));
}

template <typename D> Windows::Media::Playback::MediaBreakManager consume_Windows_Media_Playback_IMediaPlayer3<D>::BreakManager() const
{
    Windows::Media::Playback::MediaBreakManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer3)->get_BreakManager(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackCommandManager consume_Windows_Media_Playback_IMediaPlayer3<D>::CommandManager() const
{
    Windows::Media::Playback::MediaPlaybackCommandManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer3)->get_CommandManager(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DeviceInformation consume_Windows_Media_Playback_IMediaPlayer3<D>::AudioDevice() const
{
    Windows::Devices::Enumeration::DeviceInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer3)->get_AudioDevice(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer3<D>::AudioDevice(Windows::Devices::Enumeration::DeviceInformation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer3)->put_AudioDevice(get_abi(value)));
}

template <typename D> Windows::Media::MediaTimelineController consume_Windows_Media_Playback_IMediaPlayer3<D>::TimelineController() const
{
    Windows::Media::MediaTimelineController value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer3)->get_TimelineController(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer3<D>::TimelineController(Windows::Media::MediaTimelineController const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer3)->put_TimelineController(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Playback_IMediaPlayer3<D>::TimelineControllerPositionOffset() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer3)->get_TimelineControllerPositionOffset(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer3<D>::TimelineControllerPositionOffset(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer3)->put_TimelineControllerPositionOffset(get_abi(value)));
}

template <typename D> Windows::Media::Playback::MediaPlaybackSession consume_Windows_Media_Playback_IMediaPlayer3<D>::PlaybackSession() const
{
    Windows::Media::Playback::MediaPlaybackSession value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer3)->get_PlaybackSession(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer3<D>::StepForwardOneFrame() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer3)->StepForwardOneFrame());
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer3<D>::StepBackwardOneFrame() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer3)->StepBackwardOneFrame());
}

template <typename D> Windows::Media::Casting::CastingSource consume_Windows_Media_Playback_IMediaPlayer3<D>::GetAsCastingSource() const
{
    Windows::Media::Casting::CastingSource returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer3)->GetAsCastingSource(put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer4<D>::SetSurfaceSize(Windows::Foundation::Size const& size) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer4)->SetSurfaceSize(get_abi(size)));
}

template <typename D> Windows::Media::Playback::MediaPlayerSurface consume_Windows_Media_Playback_IMediaPlayer4<D>::GetSurface(Windows::UI::Composition::Compositor const& compositor) const
{
    Windows::Media::Playback::MediaPlayerSurface result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer4)->GetSurface(get_abi(compositor), put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlayer5<D>::VideoFrameAvailable(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer5)->add_VideoFrameAvailable(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlayer5> consume_Windows_Media_Playback_IMediaPlayer5<D>::VideoFrameAvailable(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlayer5>(this, &abi_t<Windows::Media::Playback::IMediaPlayer5>::remove_VideoFrameAvailable, VideoFrameAvailable(value));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer5<D>::VideoFrameAvailable(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer5)->remove_VideoFrameAvailable(get_abi(token)));
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlayer5<D>::IsVideoFrameServerEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer5)->get_IsVideoFrameServerEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer5<D>::IsVideoFrameServerEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer5)->put_IsVideoFrameServerEnabled(value));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer5<D>::CopyFrameToVideoSurface(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& destination) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer5)->CopyFrameToVideoSurface(get_abi(destination)));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer5<D>::CopyFrameToVideoSurface(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& destination, Windows::Foundation::Rect const& targetRectangle) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer5)->CopyFrameToVideoSurfaceWithTargetRectangle(get_abi(destination), get_abi(targetRectangle)));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer5<D>::CopyFrameToStereoscopicVideoSurfaces(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& destinationLeftEye, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& destinationRightEye) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer5)->CopyFrameToStereoscopicVideoSurfaces(get_abi(destinationLeftEye), get_abi(destinationRightEye)));
}

template <typename D> event_token consume_Windows_Media_Playback_IMediaPlayer6<D>::SubtitleFrameChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer6)->add_SubtitleFrameChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Playback::IMediaPlayer6> consume_Windows_Media_Playback_IMediaPlayer6<D>::SubtitleFrameChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Playback::IMediaPlayer6>(this, &abi_t<Windows::Media::Playback::IMediaPlayer6>::remove_SubtitleFrameChanged, SubtitleFrameChanged(handler));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayer6<D>::SubtitleFrameChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer6)->remove_SubtitleFrameChanged(get_abi(token)));
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlayer6<D>::RenderSubtitlesToSurface(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& destination) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer6)->RenderSubtitlesToSurface(get_abi(destination), &result));
    return result;
}

template <typename D> bool consume_Windows_Media_Playback_IMediaPlayer6<D>::RenderSubtitlesToSurface(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& destination, Windows::Foundation::Rect const& targetRectangle) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer6)->RenderSubtitlesToSurfaceWithTargetRectangle(get_abi(destination), get_abi(targetRectangle), &result));
    return result;
}

template <typename D> Windows::Media::Audio::AudioStateMonitor consume_Windows_Media_Playback_IMediaPlayer7<D>::AudioStateMonitor() const
{
    Windows::Media::Audio::AudioStateMonitor value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayer7)->get_AudioStateMonitor(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::ValueSet consume_Windows_Media_Playback_IMediaPlayerDataReceivedEventArgs<D>::Data() const
{
    Windows::Foundation::Collections::ValueSet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayerDataReceivedEventArgs)->get_Data(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayerEffects<D>::AddAudioEffect(param::hstring const& activatableClassId, bool effectOptional, Windows::Foundation::Collections::IPropertySet const& configuration) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayerEffects)->AddAudioEffect(get_abi(activatableClassId), effectOptional, get_abi(configuration)));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayerEffects<D>::RemoveAllEffects() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayerEffects)->RemoveAllEffects());
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayerEffects2<D>::AddVideoEffect(param::hstring const& activatableClassId, bool effectOptional, Windows::Foundation::Collections::IPropertySet const& effectConfiguration) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayerEffects2)->AddVideoEffect(get_abi(activatableClassId), effectOptional, get_abi(effectConfiguration)));
}

template <typename D> Windows::Media::Playback::MediaPlayerError consume_Windows_Media_Playback_IMediaPlayerFailedEventArgs<D>::Error() const
{
    Windows::Media::Playback::MediaPlayerError value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayerFailedEventArgs)->get_Error(put_abi(value)));
    return value;
}

template <typename D> HRESULT consume_Windows_Media_Playback_IMediaPlayerFailedEventArgs<D>::ExtendedErrorCode() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayerFailedEventArgs)->get_ExtendedErrorCode(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Playback_IMediaPlayerFailedEventArgs<D>::ErrorMessage() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayerFailedEventArgs)->get_ErrorMessage(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Media_Playback_IMediaPlayerRateChangedEventArgs<D>::NewRate() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayerRateChangedEventArgs)->get_NewRate(&value));
    return value;
}

template <typename D> Windows::Media::Protection::MediaProtectionManager consume_Windows_Media_Playback_IMediaPlayerSource<D>::ProtectionManager() const
{
    Windows::Media::Protection::MediaProtectionManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayerSource)->get_ProtectionManager(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayerSource<D>::ProtectionManager(Windows::Media::Protection::MediaProtectionManager const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayerSource)->put_ProtectionManager(get_abi(value)));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayerSource<D>::SetFileSource(Windows::Storage::IStorageFile const& file) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayerSource)->SetFileSource(get_abi(file)));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayerSource<D>::SetStreamSource(Windows::Storage::Streams::IRandomAccessStream const& stream) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayerSource)->SetStreamSource(get_abi(stream)));
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayerSource<D>::SetMediaSource(Windows::Media::Core::IMediaSource const& source) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayerSource)->SetMediaSource(get_abi(source)));
}

template <typename D> Windows::Media::Playback::IMediaPlaybackSource consume_Windows_Media_Playback_IMediaPlayerSource2<D>::Source() const
{
    Windows::Media::Playback::IMediaPlaybackSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayerSource2)->get_Source(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IMediaPlayerSource2<D>::Source(Windows::Media::Playback::IMediaPlaybackSource const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayerSource2)->put_Source(get_abi(value)));
}

template <typename D> Windows::UI::Composition::ICompositionSurface consume_Windows_Media_Playback_IMediaPlayerSurface<D>::CompositionSurface() const
{
    Windows::UI::Composition::ICompositionSurface value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayerSurface)->get_CompositionSurface(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Composition::Compositor consume_Windows_Media_Playback_IMediaPlayerSurface<D>::Compositor() const
{
    Windows::UI::Composition::Compositor value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayerSurface)->get_Compositor(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlayer consume_Windows_Media_Playback_IMediaPlayerSurface<D>::MediaPlayer() const
{
    Windows::Media::Playback::MediaPlayer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IMediaPlayerSurface)->get_MediaPlayer(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Playback_IPlaybackMediaMarker<D>::Time() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IPlaybackMediaMarker)->get_Time(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Playback_IPlaybackMediaMarker<D>::MediaMarkerType() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IPlaybackMediaMarker)->get_MediaMarkerType(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Playback_IPlaybackMediaMarker<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IPlaybackMediaMarker)->get_Text(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::PlaybackMediaMarker consume_Windows_Media_Playback_IPlaybackMediaMarkerFactory<D>::CreateFromTime(Windows::Foundation::TimeSpan const& value) const
{
    Windows::Media::Playback::PlaybackMediaMarker marker{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IPlaybackMediaMarkerFactory)->CreateFromTime(get_abi(value), put_abi(marker)));
    return marker;
}

template <typename D> Windows::Media::Playback::PlaybackMediaMarker consume_Windows_Media_Playback_IPlaybackMediaMarkerFactory<D>::Create(Windows::Foundation::TimeSpan const& value, param::hstring const& mediaMarketType, param::hstring const& text) const
{
    Windows::Media::Playback::PlaybackMediaMarker marker{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IPlaybackMediaMarkerFactory)->Create(get_abi(value), get_abi(mediaMarketType), get_abi(text), put_abi(marker)));
    return marker;
}

template <typename D> Windows::Media::Playback::PlaybackMediaMarker consume_Windows_Media_Playback_IPlaybackMediaMarkerReachedEventArgs<D>::PlaybackMediaMarker() const
{
    Windows::Media::Playback::PlaybackMediaMarker value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IPlaybackMediaMarkerReachedEventArgs)->get_PlaybackMediaMarker(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Playback_IPlaybackMediaMarkerSequence<D>::Size() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IPlaybackMediaMarkerSequence)->get_Size(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Playback_IPlaybackMediaMarkerSequence<D>::Insert(Windows::Media::Playback::PlaybackMediaMarker const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IPlaybackMediaMarkerSequence)->Insert(get_abi(value)));
}

template <typename D> void consume_Windows_Media_Playback_IPlaybackMediaMarkerSequence<D>::Clear() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Playback::IPlaybackMediaMarkerSequence)->Clear());
}

template <typename D> Windows::Media::Core::TimedMetadataTrack consume_Windows_Media_Playback_ITimedMetadataPresentationModeChangedEventArgs<D>::Track() const
{
    Windows::Media::Core::TimedMetadataTrack value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Playback::ITimedMetadataPresentationModeChangedEventArgs)->get_Track(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::TimedMetadataTrackPresentationMode consume_Windows_Media_Playback_ITimedMetadataPresentationModeChangedEventArgs<D>::OldPresentationMode() const
{
    Windows::Media::Playback::TimedMetadataTrackPresentationMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::ITimedMetadataPresentationModeChangedEventArgs)->get_OldPresentationMode(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::TimedMetadataTrackPresentationMode consume_Windows_Media_Playback_ITimedMetadataPresentationModeChangedEventArgs<D>::NewPresentationMode() const
{
    Windows::Media::Playback::TimedMetadataTrackPresentationMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Playback::ITimedMetadataPresentationModeChangedEventArgs)->get_NewPresentationMode(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Media::Playback::IBackgroundMediaPlayerStatics> : produce_base<D, Windows::Media::Playback::IBackgroundMediaPlayerStatics>
{
    HRESULT __stdcall get_Current(void** player) noexcept final
    {
        try
        {
            *player = nullptr;
            typename D::abi_guard guard(this->shim());
            *player = detach_from<Windows::Media::Playback::MediaPlayer>(this->shim().Current());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_MessageReceivedFromBackground(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().MessageReceivedFromBackground(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_MessageReceivedFromBackground(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MessageReceivedFromBackground(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_MessageReceivedFromForeground(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().MessageReceivedFromForeground(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_MessageReceivedFromForeground(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MessageReceivedFromForeground(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SendMessageToBackground(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SendMessageToBackground(*reinterpret_cast<Windows::Foundation::Collections::ValueSet const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SendMessageToForeground(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SendMessageToForeground(*reinterpret_cast<Windows::Foundation::Collections::ValueSet const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsMediaPlaying(bool* isMediaPlaying) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *isMediaPlaying = detach_from<bool>(this->shim().IsMediaPlaying());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Shutdown() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Shutdown();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs> : produce_base<D, Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs>
{
    HRESULT __stdcall get_NewItem(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackItem>(this->shim().NewItem());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OldItem(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackItem>(this->shim().OldItem());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs2> : produce_base<D, Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs2>
{
    HRESULT __stdcall get_Reason(Windows::Media::Playback::MediaPlaybackItemChangedReason* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackItemChangedReason>(this->shim().Reason());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaBreak> : produce_base<D, Windows::Media::Playback::IMediaBreak>
{
    HRESULT __stdcall get_PlaybackList(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackList>(this->shim().PlaybackList());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PresentationPosition(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>>(this->shim().PresentationPosition());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InsertionMethod(Windows::Media::Playback::MediaBreakInsertionMethod* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaBreakInsertionMethod>(this->shim().InsertionMethod());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CustomProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::ValueSet>(this->shim().CustomProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CanStart(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanStart());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CanStart(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanStart(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaBreakEndedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaBreakEndedEventArgs>
{
    HRESULT __stdcall get_MediaBreak(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaBreak>(this->shim().MediaBreak());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaBreakFactory> : produce_base<D, Windows::Media::Playback::IMediaBreakFactory>
{
    HRESULT __stdcall Create(Windows::Media::Playback::MediaBreakInsertionMethod insertionMethod, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Playback::MediaBreak>(this->shim().Create(*reinterpret_cast<Windows::Media::Playback::MediaBreakInsertionMethod const*>(&insertionMethod)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithPresentationPosition(Windows::Media::Playback::MediaBreakInsertionMethod insertionMethod, Windows::Foundation::TimeSpan presentationPosition, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Playback::MediaBreak>(this->shim().CreateWithPresentationPosition(*reinterpret_cast<Windows::Media::Playback::MediaBreakInsertionMethod const*>(&insertionMethod), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&presentationPosition)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaBreakManager> : produce_base<D, Windows::Media::Playback::IMediaBreakManager>
{
    HRESULT __stdcall add_BreaksSeekedOver(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().BreaksSeekedOver(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakSeekedOverEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_BreaksSeekedOver(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BreaksSeekedOver(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_BreakStarted(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().BreakStarted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakStartedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_BreakStarted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BreakStarted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_BreakEnded(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().BreakEnded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakEndedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_BreakEnded(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BreakEnded(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_BreakSkipped(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().BreakSkipped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakSkippedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_BreakSkipped(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BreakSkipped(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentBreak(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaBreak>(this->shim().CurrentBreak());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PlaybackSession(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackSession>(this->shim().PlaybackSession());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall PlayBreak(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlayBreak(*reinterpret_cast<Windows::Media::Playback::MediaBreak const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SkipCurrentBreak() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SkipCurrentBreak();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaBreakSchedule> : produce_base<D, Windows::Media::Playback::IMediaBreakSchedule>
{
    HRESULT __stdcall add_ScheduleChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ScheduleChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakSchedule, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ScheduleChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScheduleChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InsertMidrollBreak(void* mediaBreak) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertMidrollBreak(*reinterpret_cast<Windows::Media::Playback::MediaBreak const*>(&mediaBreak));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveMidrollBreak(void* mediaBreak) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveMidrollBreak(*reinterpret_cast<Windows::Media::Playback::MediaBreak const*>(&mediaBreak));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MidrollBreaks(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Playback::MediaBreak>>(this->shim().MidrollBreaks());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PrerollBreak(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrerollBreak(*reinterpret_cast<Windows::Media::Playback::MediaBreak const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PrerollBreak(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaBreak>(this->shim().PrerollBreak());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PostrollBreak(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PostrollBreak(*reinterpret_cast<Windows::Media::Playback::MediaBreak const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PostrollBreak(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaBreak>(this->shim().PostrollBreak());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PlaybackItem(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackItem>(this->shim().PlaybackItem());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaBreakSeekedOverEventArgs> : produce_base<D, Windows::Media::Playback::IMediaBreakSeekedOverEventArgs>
{
    HRESULT __stdcall get_SeekedOverBreaks(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Playback::MediaBreak>>(this->shim().SeekedOverBreaks());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OldPosition(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().OldPosition());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NewPosition(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().NewPosition());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaBreakSkippedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaBreakSkippedEventArgs>
{
    HRESULT __stdcall get_MediaBreak(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaBreak>(this->shim().MediaBreak());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaBreakStartedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaBreakStartedEventArgs>
{
    HRESULT __stdcall get_MediaBreak(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaBreak>(this->shim().MediaBreak());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaEnginePlaybackSource> : produce_base<D, Windows::Media::Playback::IMediaEnginePlaybackSource>
{
    HRESULT __stdcall get_CurrentItem(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackItem>(this->shim().CurrentItem());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetPlaybackSource(void* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPlaybackSource(*reinterpret_cast<Windows::Media::Playback::IMediaPlaybackSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaItemDisplayProperties> : produce_base<D, Windows::Media::Playback::IMediaItemDisplayProperties>
{
    HRESULT __stdcall get_Type(Windows::Media::MediaPlaybackType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MediaPlaybackType>(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Type(Windows::Media::MediaPlaybackType value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Type(*reinterpret_cast<Windows::Media::MediaPlaybackType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MusicProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MusicDisplayProperties>(this->shim().MusicProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::VideoDisplayProperties>(this->shim().VideoProperties());
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
            *value = detach_from<Windows::Storage::Streams::RandomAccessStreamReference>(this->shim().Thumbnail());
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
            this->shim().Thumbnail(*reinterpret_cast<Windows::Storage::Streams::RandomAccessStreamReference const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ClearAll() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearAll();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackCommandManager> : produce_base<D, Windows::Media::Playback::IMediaPlaybackCommandManager>
{
    HRESULT __stdcall get_IsEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MediaPlayer(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlayer>(this->shim().MediaPlayer());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PlayBehavior(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior>(this->shim().PlayBehavior());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PauseBehavior(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior>(this->shim().PauseBehavior());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NextBehavior(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior>(this->shim().NextBehavior());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PreviousBehavior(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior>(this->shim().PreviousBehavior());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FastForwardBehavior(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior>(this->shim().FastForwardBehavior());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RewindBehavior(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior>(this->shim().RewindBehavior());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ShuffleBehavior(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior>(this->shim().ShuffleBehavior());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AutoRepeatModeBehavior(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior>(this->shim().AutoRepeatModeBehavior());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PositionBehavior(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior>(this->shim().PositionBehavior());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RateBehavior(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior>(this->shim().RateBehavior());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PlayReceived(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PlayReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPlayReceivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PlayReceived(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlayReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PauseReceived(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PauseReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPauseReceivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PauseReceived(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PauseReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_NextReceived(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().NextReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerNextReceivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_NextReceived(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NextReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PreviousReceived(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PreviousReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPreviousReceivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PreviousReceived(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PreviousReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_FastForwardReceived(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().FastForwardReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerFastForwardReceivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_FastForwardReceived(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FastForwardReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_RewindReceived(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().RewindReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerRewindReceivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_RewindReceived(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RewindReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ShuffleReceived(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ShuffleReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerShuffleReceivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ShuffleReceived(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShuffleReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_AutoRepeatModeReceived(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().AutoRepeatModeReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_AutoRepeatModeReceived(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutoRepeatModeReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PositionReceived(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PositionReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPositionReceivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PositionReceived(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PositionReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_RateReceived(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().RateReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerRateReceivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_RateReceived(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RateReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs>
{
    HRESULT __stdcall get_Handled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AutoRepeatMode(Windows::Media::MediaPlaybackAutoRepeatMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MediaPlaybackAutoRepeatMode>(this->shim().AutoRepeatMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior> : produce_base<D, Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior>
{
    HRESULT __stdcall get_CommandManager(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackCommandManager>(this->shim().CommandManager());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EnablingRule(Windows::Media::Playback::MediaCommandEnablingRule* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaCommandEnablingRule>(this->shim().EnablingRule());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_EnablingRule(Windows::Media::Playback::MediaCommandEnablingRule value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnablingRule(*reinterpret_cast<Windows::Media::Playback::MediaCommandEnablingRule const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_IsEnabledChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().IsEnabledChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_IsEnabledChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsEnabledChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackCommandManagerFastForwardReceivedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlaybackCommandManagerFastForwardReceivedEventArgs>
{
    HRESULT __stdcall get_Handled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackCommandManagerNextReceivedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlaybackCommandManagerNextReceivedEventArgs>
{
    HRESULT __stdcall get_Handled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackCommandManagerPauseReceivedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlaybackCommandManagerPauseReceivedEventArgs>
{
    HRESULT __stdcall get_Handled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackCommandManagerPlayReceivedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlaybackCommandManagerPlayReceivedEventArgs>
{
    HRESULT __stdcall get_Handled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackCommandManagerPositionReceivedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlaybackCommandManagerPositionReceivedEventArgs>
{
    HRESULT __stdcall get_Handled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Position(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackCommandManagerPreviousReceivedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlaybackCommandManagerPreviousReceivedEventArgs>
{
    HRESULT __stdcall get_Handled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackCommandManagerRateReceivedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlaybackCommandManagerRateReceivedEventArgs>
{
    HRESULT __stdcall get_Handled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PlaybackRate(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().PlaybackRate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackCommandManagerRewindReceivedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlaybackCommandManagerRewindReceivedEventArgs>
{
    HRESULT __stdcall get_Handled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackCommandManagerShuffleReceivedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlaybackCommandManagerShuffleReceivedEventArgs>
{
    HRESULT __stdcall get_Handled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsShuffleRequested(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsShuffleRequested());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackItem> : produce_base<D, Windows::Media::Playback::IMediaPlaybackItem>
{
    HRESULT __stdcall add_AudioTracksChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().AudioTracksChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_AudioTracksChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioTracksChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_VideoTracksChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().VideoTracksChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_VideoTracksChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoTracksChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_TimedMetadataTracksChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().TimedMetadataTracksChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_TimedMetadataTracksChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TimedMetadataTracksChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Source(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::MediaSource>(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioTracks(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackAudioTrackList>(this->shim().AudioTracks());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoTracks(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackVideoTrackList>(this->shim().VideoTracks());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TimedMetadataTracks(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList>(this->shim().TimedMetadataTracks());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackItem2> : produce_base<D, Windows::Media::Playback::IMediaPlaybackItem2>
{
    HRESULT __stdcall get_BreakSchedule(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaBreakSchedule>(this->shim().BreakSchedule());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StartTime(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().StartTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DurationLimit(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>>(this->shim().DurationLimit());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CanSkip(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanSkip());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CanSkip(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanSkip(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDisplayProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaItemDisplayProperties>(this->shim().GetDisplayProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ApplyDisplayProperties(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ApplyDisplayProperties(*reinterpret_cast<Windows::Media::Playback::MediaItemDisplayProperties const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackItem3> : produce_base<D, Windows::Media::Playback::IMediaPlaybackItem3>
{
    HRESULT __stdcall get_IsDisabledInPlaybackList(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsDisabledInPlaybackList());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsDisabledInPlaybackList(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsDisabledInPlaybackList(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TotalDownloadProgress(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().TotalDownloadProgress());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AutoLoadedDisplayProperties(Windows::Media::Playback::AutoLoadedDisplayPropertyKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::AutoLoadedDisplayPropertyKind>(this->shim().AutoLoadedDisplayProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AutoLoadedDisplayProperties(Windows::Media::Playback::AutoLoadedDisplayPropertyKind value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutoLoadedDisplayProperties(*reinterpret_cast<Windows::Media::Playback::AutoLoadedDisplayPropertyKind const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackItemError> : produce_base<D, Windows::Media::Playback::IMediaPlaybackItemError>
{
    HRESULT __stdcall get_ErrorCode(Windows::Media::Playback::MediaPlaybackItemErrorCode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackItemErrorCode>(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedError(HRESULT* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<HRESULT>(this->shim().ExtendedError());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackItemFactory> : produce_base<D, Windows::Media::Playback::IMediaPlaybackItemFactory>
{
    HRESULT __stdcall Create(void* source, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackItem>(this->shim().Create(*reinterpret_cast<Windows::Media::Core::MediaSource const*>(&source)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackItemFactory2> : produce_base<D, Windows::Media::Playback::IMediaPlaybackItemFactory2>
{
    HRESULT __stdcall CreateWithStartTime(void* source, Windows::Foundation::TimeSpan startTime, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Playback::MediaPlaybackItem>(this->shim().CreateWithStartTime(*reinterpret_cast<Windows::Media::Core::MediaSource const*>(&source), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&startTime)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithStartTimeAndDurationLimit(void* source, Windows::Foundation::TimeSpan startTime, Windows::Foundation::TimeSpan durationLimit, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Playback::MediaPlaybackItem>(this->shim().CreateWithStartTimeAndDurationLimit(*reinterpret_cast<Windows::Media::Core::MediaSource const*>(&source), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&startTime), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&durationLimit)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackItemFailedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlaybackItemFailedEventArgs>
{
    HRESULT __stdcall get_Item(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackItem>(this->shim().Item());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Error(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackItemError>(this->shim().Error());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackItemOpenedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlaybackItemOpenedEventArgs>
{
    HRESULT __stdcall get_Item(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackItem>(this->shim().Item());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackItemStatics> : produce_base<D, Windows::Media::Playback::IMediaPlaybackItemStatics>
{
    HRESULT __stdcall FindFromMediaSource(void* source, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackItem>(this->shim().FindFromMediaSource(*reinterpret_cast<Windows::Media::Core::MediaSource const*>(&source)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackList> : produce_base<D, Windows::Media::Playback::IMediaPlaybackList>
{
    HRESULT __stdcall add_ItemFailed(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ItemFailed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::MediaPlaybackItemFailedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ItemFailed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ItemFailed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_CurrentItemChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().CurrentItemChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::CurrentMediaPlaybackItemChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_CurrentItemChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CurrentItemChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ItemOpened(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ItemOpened(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::MediaPlaybackItemOpenedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ItemOpened(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ItemOpened(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Items(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IObservableVector<Windows::Media::Playback::MediaPlaybackItem>>(this->shim().Items());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AutoRepeatEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AutoRepeatEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AutoRepeatEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutoRepeatEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ShuffleEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ShuffleEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ShuffleEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShuffleEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentItem(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackItem>(this->shim().CurrentItem());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentItemIndex(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().CurrentItemIndex());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall MoveNext(void** item) noexcept final
    {
        try
        {
            *item = nullptr;
            typename D::abi_guard guard(this->shim());
            *item = detach_from<Windows::Media::Playback::MediaPlaybackItem>(this->shim().MoveNext());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall MovePrevious(void** item) noexcept final
    {
        try
        {
            *item = nullptr;
            typename D::abi_guard guard(this->shim());
            *item = detach_from<Windows::Media::Playback::MediaPlaybackItem>(this->shim().MovePrevious());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall MoveTo(uint32_t itemIndex, void** item) noexcept final
    {
        try
        {
            *item = nullptr;
            typename D::abi_guard guard(this->shim());
            *item = detach_from<Windows::Media::Playback::MediaPlaybackItem>(this->shim().MoveTo(itemIndex));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackList2> : produce_base<D, Windows::Media::Playback::IMediaPlaybackList2>
{
    HRESULT __stdcall get_MaxPrefetchTime(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>>(this->shim().MaxPrefetchTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MaxPrefetchTime(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxPrefetchTime(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StartingItem(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackItem>(this->shim().StartingItem());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StartingItem(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartingItem(*reinterpret_cast<Windows::Media::Playback::MediaPlaybackItem const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ShuffledItems(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Playback::MediaPlaybackItem>>(this->shim().ShuffledItems());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetShuffledItems(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetShuffledItems(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Media::Playback::MediaPlaybackItem> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackList3> : produce_base<D, Windows::Media::Playback::IMediaPlaybackList3>
{
    HRESULT __stdcall get_MaxPlayedItemsToKeepOpen(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint32_t>>(this->shim().MaxPlayedItemsToKeepOpen());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MaxPlayedItemsToKeepOpen(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxPlayedItemsToKeepOpen(*reinterpret_cast<Windows::Foundation::IReference<uint32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackSession> : produce_base<D, Windows::Media::Playback::IMediaPlaybackSession>
{
    HRESULT __stdcall add_PlaybackStateChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PlaybackStateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PlaybackStateChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlaybackStateChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PlaybackRateChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PlaybackRateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PlaybackRateChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlaybackRateChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SeekCompleted(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SeekCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SeekCompleted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SeekCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_BufferingStarted(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().BufferingStarted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_BufferingStarted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BufferingStarted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_BufferingEnded(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().BufferingEnded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_BufferingEnded(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BufferingEnded(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_BufferingProgressChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().BufferingProgressChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_BufferingProgressChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BufferingProgressChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_DownloadProgressChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().DownloadProgressChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_DownloadProgressChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DownloadProgressChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_NaturalDurationChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().NaturalDurationChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_NaturalDurationChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NaturalDurationChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PositionChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PositionChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PositionChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PositionChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_NaturalVideoSizeChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().NaturalVideoSizeChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_NaturalVideoSizeChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NaturalVideoSizeChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MediaPlayer(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlayer>(this->shim().MediaPlayer());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NaturalDuration(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().NaturalDuration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Position(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Position(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Position(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PlaybackState(Windows::Media::Playback::MediaPlaybackState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackState>(this->shim().PlaybackState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CanSeek(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanSeek());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CanPause(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanPause());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsProtected(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsProtected());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PlaybackRate(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().PlaybackRate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PlaybackRate(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlaybackRate(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BufferingProgress(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().BufferingProgress());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DownloadProgress(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().DownloadProgress());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NaturalVideoHeight(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().NaturalVideoHeight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NaturalVideoWidth(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().NaturalVideoWidth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NormalizedSourceRect(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Rect>(this->shim().NormalizedSourceRect());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_NormalizedSourceRect(Windows::Foundation::Rect value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NormalizedSourceRect(*reinterpret_cast<Windows::Foundation::Rect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StereoscopicVideoPackingMode(Windows::Media::MediaProperties::StereoscopicVideoPackingMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MediaProperties::StereoscopicVideoPackingMode>(this->shim().StereoscopicVideoPackingMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StereoscopicVideoPackingMode(Windows::Media::MediaProperties::StereoscopicVideoPackingMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StereoscopicVideoPackingMode(*reinterpret_cast<Windows::Media::MediaProperties::StereoscopicVideoPackingMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackSession2> : produce_base<D, Windows::Media::Playback::IMediaPlaybackSession2>
{
    HRESULT __stdcall add_BufferedRangesChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().BufferedRangesChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_BufferedRangesChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BufferedRangesChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PlayedRangesChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PlayedRangesChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PlayedRangesChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlayedRangesChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SeekableRangesChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SeekableRangesChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SeekableRangesChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SeekableRangesChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SupportedPlaybackRatesChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SupportedPlaybackRatesChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SupportedPlaybackRatesChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SupportedPlaybackRatesChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SphericalVideoProjection(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackSphericalVideoProjection>(this->shim().SphericalVideoProjection());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsMirroring(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsMirroring());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsMirroring(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsMirroring(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetBufferedRanges(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::MediaTimeRange>>(this->shim().GetBufferedRanges());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetPlayedRanges(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::MediaTimeRange>>(this->shim().GetPlayedRanges());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetSeekableRanges(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::MediaTimeRange>>(this->shim().GetSeekableRanges());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsSupportedPlaybackRateRange(double rate1, double rate2, bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSupportedPlaybackRateRange(rate1, rate2));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackSession3> : produce_base<D, Windows::Media::Playback::IMediaPlaybackSession3>
{
    HRESULT __stdcall get_PlaybackRotation(Windows::Media::MediaProperties::MediaRotation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MediaProperties::MediaRotation>(this->shim().PlaybackRotation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PlaybackRotation(Windows::Media::MediaProperties::MediaRotation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlaybackRotation(*reinterpret_cast<Windows::Media::MediaProperties::MediaRotation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetOutputDegradationPolicyState(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackSessionOutputDegradationPolicyState>(this->shim().GetOutputDegradationPolicyState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackSessionBufferingStartedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlaybackSessionBufferingStartedEventArgs>
{
    HRESULT __stdcall get_IsPlaybackInterruption(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPlaybackInterruption());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackSessionOutputDegradationPolicyState> : produce_base<D, Windows::Media::Playback::IMediaPlaybackSessionOutputDegradationPolicyState>
{
    HRESULT __stdcall get_VideoConstrictionReason(Windows::Media::Playback::MediaPlaybackSessionVideoConstrictionReason* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackSessionVideoConstrictionReason>(this->shim().VideoConstrictionReason());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackSource> : produce_base<D, Windows::Media::Playback::IMediaPlaybackSource>
{};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackSphericalVideoProjection> : produce_base<D, Windows::Media::Playback::IMediaPlaybackSphericalVideoProjection>
{
    HRESULT __stdcall get_IsEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FrameFormat(Windows::Media::MediaProperties::SphericalVideoFrameFormat* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MediaProperties::SphericalVideoFrameFormat>(this->shim().FrameFormat());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FrameFormat(Windows::Media::MediaProperties::SphericalVideoFrameFormat value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FrameFormat(*reinterpret_cast<Windows::Media::MediaProperties::SphericalVideoFrameFormat const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalFieldOfViewInDegrees(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().HorizontalFieldOfViewInDegrees());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_HorizontalFieldOfViewInDegrees(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HorizontalFieldOfViewInDegrees(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ViewOrientation(Windows::Foundation::Numerics::quaternion* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::quaternion>(this->shim().ViewOrientation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ViewOrientation(Windows::Foundation::Numerics::quaternion value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ViewOrientation(*reinterpret_cast<Windows::Foundation::Numerics::quaternion const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ProjectionMode(Windows::Media::Playback::SphericalVideoProjectionMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::SphericalVideoProjectionMode>(this->shim().ProjectionMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ProjectionMode(Windows::Media::Playback::SphericalVideoProjectionMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProjectionMode(*reinterpret_cast<Windows::Media::Playback::SphericalVideoProjectionMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackTimedMetadataTrackList> : produce_base<D, Windows::Media::Playback::IMediaPlaybackTimedMetadataTrackList>
{
    HRESULT __stdcall add_PresentationModeChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PresentationModeChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList, Windows::Media::Playback::TimedMetadataPresentationModeChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PresentationModeChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PresentationModeChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetPresentationMode(uint32_t index, Windows::Media::Playback::TimedMetadataTrackPresentationMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::TimedMetadataTrackPresentationMode>(this->shim().GetPresentationMode(index));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetPresentationMode(uint32_t index, Windows::Media::Playback::TimedMetadataTrackPresentationMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPresentationMode(index, *reinterpret_cast<Windows::Media::Playback::TimedMetadataTrackPresentationMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlayer> : produce_base<D, Windows::Media::Playback::IMediaPlayer>
{
    HRESULT __stdcall get_AutoPlay(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AutoPlay());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AutoPlay(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutoPlay(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NaturalDuration(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().NaturalDuration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Position(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Position(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Position(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BufferingProgress(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().BufferingProgress());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentState(Windows::Media::Playback::MediaPlayerState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlayerState>(this->shim().CurrentState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CanSeek(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanSeek());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CanPause(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanPause());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsLoopingEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsLoopingEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsLoopingEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsLoopingEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsProtected(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsProtected());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsMuted(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsMuted());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsMuted(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsMuted(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PlaybackRate(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().PlaybackRate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PlaybackRate(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlaybackRate(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Volume(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Volume());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Volume(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Volume(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PlaybackMediaMarkers(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::PlaybackMediaMarkerSequence>(this->shim().PlaybackMediaMarkers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_MediaOpened(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().MediaOpened(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_MediaOpened(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MediaOpened(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_MediaEnded(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().MediaEnded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_MediaEnded(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MediaEnded(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_MediaFailed(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().MediaFailed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::MediaPlayerFailedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_MediaFailed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MediaFailed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_CurrentStateChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().CurrentStateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_CurrentStateChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CurrentStateChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PlaybackMediaMarkerReached(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PlaybackMediaMarkerReached(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::PlaybackMediaMarkerReachedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PlaybackMediaMarkerReached(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlaybackMediaMarkerReached(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_MediaPlayerRateChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().MediaPlayerRateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::MediaPlayerRateChangedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_MediaPlayerRateChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MediaPlayerRateChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_VolumeChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().VolumeChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_VolumeChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VolumeChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SeekCompleted(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SeekCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SeekCompleted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SeekCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_BufferingStarted(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().BufferingStarted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_BufferingStarted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BufferingStarted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_BufferingEnded(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().BufferingEnded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_BufferingEnded(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BufferingEnded(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Play() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Play();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Pause() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Pause();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetUriSource(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetUriSource(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlayer2> : produce_base<D, Windows::Media::Playback::IMediaPlayer2>
{
    HRESULT __stdcall get_SystemMediaTransportControls(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SystemMediaTransportControls>(this->shim().SystemMediaTransportControls());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioCategory(Windows::Media::Playback::MediaPlayerAudioCategory* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlayerAudioCategory>(this->shim().AudioCategory());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AudioCategory(Windows::Media::Playback::MediaPlayerAudioCategory value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioCategory(*reinterpret_cast<Windows::Media::Playback::MediaPlayerAudioCategory const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioDeviceType(Windows::Media::Playback::MediaPlayerAudioDeviceType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlayerAudioDeviceType>(this->shim().AudioDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AudioDeviceType(Windows::Media::Playback::MediaPlayerAudioDeviceType value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioDeviceType(*reinterpret_cast<Windows::Media::Playback::MediaPlayerAudioDeviceType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlayer3> : produce_base<D, Windows::Media::Playback::IMediaPlayer3>
{
    HRESULT __stdcall add_IsMutedChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().IsMutedChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_IsMutedChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsMutedChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SourceChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SourceChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioBalance(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().AudioBalance());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AudioBalance(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioBalance(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RealTimePlayback(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().RealTimePlayback());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RealTimePlayback(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RealTimePlayback(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StereoscopicVideoRenderMode(Windows::Media::Playback::StereoscopicVideoRenderMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::StereoscopicVideoRenderMode>(this->shim().StereoscopicVideoRenderMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StereoscopicVideoRenderMode(Windows::Media::Playback::StereoscopicVideoRenderMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StereoscopicVideoRenderMode(*reinterpret_cast<Windows::Media::Playback::StereoscopicVideoRenderMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BreakManager(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaBreakManager>(this->shim().BreakManager());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CommandManager(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackCommandManager>(this->shim().CommandManager());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioDevice(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Enumeration::DeviceInformation>(this->shim().AudioDevice());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AudioDevice(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioDevice(*reinterpret_cast<Windows::Devices::Enumeration::DeviceInformation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TimelineController(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MediaTimelineController>(this->shim().TimelineController());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TimelineController(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TimelineController(*reinterpret_cast<Windows::Media::MediaTimelineController const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TimelineControllerPositionOffset(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().TimelineControllerPositionOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TimelineControllerPositionOffset(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TimelineControllerPositionOffset(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PlaybackSession(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackSession>(this->shim().PlaybackSession());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StepForwardOneFrame() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StepForwardOneFrame();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StepBackwardOneFrame() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StepBackwardOneFrame();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetAsCastingSource(void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Media::Casting::CastingSource>(this->shim().GetAsCastingSource());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlayer4> : produce_base<D, Windows::Media::Playback::IMediaPlayer4>
{
    HRESULT __stdcall SetSurfaceSize(Windows::Foundation::Size size) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSurfaceSize(*reinterpret_cast<Windows::Foundation::Size const*>(&size));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetSurface(void* compositor, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Playback::MediaPlayerSurface>(this->shim().GetSurface(*reinterpret_cast<Windows::UI::Composition::Compositor const*>(&compositor)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlayer5> : produce_base<D, Windows::Media::Playback::IMediaPlayer5>
{
    HRESULT __stdcall add_VideoFrameAvailable(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().VideoFrameAvailable(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_VideoFrameAvailable(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoFrameAvailable(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsVideoFrameServerEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsVideoFrameServerEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsVideoFrameServerEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsVideoFrameServerEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CopyFrameToVideoSurface(void* destination) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CopyFrameToVideoSurface(*reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const*>(&destination));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CopyFrameToVideoSurfaceWithTargetRectangle(void* destination, Windows::Foundation::Rect targetRectangle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CopyFrameToVideoSurface(*reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const*>(&destination), *reinterpret_cast<Windows::Foundation::Rect const*>(&targetRectangle));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CopyFrameToStereoscopicVideoSurfaces(void* destinationLeftEye, void* destinationRightEye) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CopyFrameToStereoscopicVideoSurfaces(*reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const*>(&destinationLeftEye), *reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const*>(&destinationRightEye));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlayer6> : produce_base<D, Windows::Media::Playback::IMediaPlayer6>
{
    HRESULT __stdcall add_SubtitleFrameChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SubtitleFrameChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SubtitleFrameChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SubtitleFrameChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RenderSubtitlesToSurface(void* destination, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().RenderSubtitlesToSurface(*reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const*>(&destination)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RenderSubtitlesToSurfaceWithTargetRectangle(void* destination, Windows::Foundation::Rect targetRectangle, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().RenderSubtitlesToSurface(*reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const*>(&destination), *reinterpret_cast<Windows::Foundation::Rect const*>(&targetRectangle)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlayer7> : produce_base<D, Windows::Media::Playback::IMediaPlayer7>
{
    HRESULT __stdcall get_AudioStateMonitor(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Audio::AudioStateMonitor>(this->shim().AudioStateMonitor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlayerDataReceivedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlayerDataReceivedEventArgs>
{
    HRESULT __stdcall get_Data(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::ValueSet>(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlayerEffects> : produce_base<D, Windows::Media::Playback::IMediaPlayerEffects>
{
    HRESULT __stdcall AddAudioEffect(HSTRING activatableClassId, bool effectOptional, void* configuration) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddAudioEffect(*reinterpret_cast<hstring const*>(&activatableClassId), effectOptional, *reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&configuration));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveAllEffects() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveAllEffects();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlayerEffects2> : produce_base<D, Windows::Media::Playback::IMediaPlayerEffects2>
{
    HRESULT __stdcall AddVideoEffect(HSTRING activatableClassId, bool effectOptional, void* effectConfiguration) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddVideoEffect(*reinterpret_cast<hstring const*>(&activatableClassId), effectOptional, *reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&effectConfiguration));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlayerFailedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlayerFailedEventArgs>
{
    HRESULT __stdcall get_Error(Windows::Media::Playback::MediaPlayerError* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlayerError>(this->shim().Error());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedErrorCode(HRESULT* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<HRESULT>(this->shim().ExtendedErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorMessage(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ErrorMessage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlayerRateChangedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlayerRateChangedEventArgs>
{
    HRESULT __stdcall get_NewRate(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().NewRate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlayerSource> : produce_base<D, Windows::Media::Playback::IMediaPlayerSource>
{
    HRESULT __stdcall get_ProtectionManager(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Protection::MediaProtectionManager>(this->shim().ProtectionManager());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ProtectionManager(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProtectionManager(*reinterpret_cast<Windows::Media::Protection::MediaProtectionManager const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetFileSource(void* file) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFileSource(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetStreamSource(void* stream) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStreamSource(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetMediaSource(void* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetMediaSource(*reinterpret_cast<Windows::Media::Core::IMediaSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlayerSource2> : produce_base<D, Windows::Media::Playback::IMediaPlayerSource2>
{
    HRESULT __stdcall get_Source(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::IMediaPlaybackSource>(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Source(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Media::Playback::IMediaPlaybackSource const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlayerSurface> : produce_base<D, Windows::Media::Playback::IMediaPlayerSurface>
{
    HRESULT __stdcall get_CompositionSurface(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::ICompositionSurface>(this->shim().CompositionSurface());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Compositor(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::Compositor>(this->shim().Compositor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MediaPlayer(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlayer>(this->shim().MediaPlayer());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IPlaybackMediaMarker> : produce_base<D, Windows::Media::Playback::IPlaybackMediaMarker>
{
    HRESULT __stdcall get_Time(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Time());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MediaMarkerType(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().MediaMarkerType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Text(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IPlaybackMediaMarkerFactory> : produce_base<D, Windows::Media::Playback::IPlaybackMediaMarkerFactory>
{
    HRESULT __stdcall CreateFromTime(Windows::Foundation::TimeSpan value, void** marker) noexcept final
    {
        try
        {
            *marker = nullptr;
            typename D::abi_guard guard(this->shim());
            *marker = detach_from<Windows::Media::Playback::PlaybackMediaMarker>(this->shim().CreateFromTime(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Create(Windows::Foundation::TimeSpan value, HSTRING mediaMarketType, HSTRING text, void** marker) noexcept final
    {
        try
        {
            *marker = nullptr;
            typename D::abi_guard guard(this->shim());
            *marker = detach_from<Windows::Media::Playback::PlaybackMediaMarker>(this->shim().Create(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value), *reinterpret_cast<hstring const*>(&mediaMarketType), *reinterpret_cast<hstring const*>(&text)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IPlaybackMediaMarkerReachedEventArgs> : produce_base<D, Windows::Media::Playback::IPlaybackMediaMarkerReachedEventArgs>
{
    HRESULT __stdcall get_PlaybackMediaMarker(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::PlaybackMediaMarker>(this->shim().PlaybackMediaMarker());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IPlaybackMediaMarkerSequence> : produce_base<D, Windows::Media::Playback::IPlaybackMediaMarkerSequence>
{
    HRESULT __stdcall get_Size(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Insert(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Insert(*reinterpret_cast<Windows::Media::Playback::PlaybackMediaMarker const*>(&value));
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
struct produce<D, Windows::Media::Playback::ITimedMetadataPresentationModeChangedEventArgs> : produce_base<D, Windows::Media::Playback::ITimedMetadataPresentationModeChangedEventArgs>
{
    HRESULT __stdcall get_Track(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::TimedMetadataTrack>(this->shim().Track());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OldPresentationMode(Windows::Media::Playback::TimedMetadataTrackPresentationMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::TimedMetadataTrackPresentationMode>(this->shim().OldPresentationMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NewPresentationMode(Windows::Media::Playback::TimedMetadataTrackPresentationMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::TimedMetadataTrackPresentationMode>(this->shim().NewPresentationMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Media::Playback {

inline Windows::Media::Playback::MediaPlayer BackgroundMediaPlayer::Current()
{
    return get_activation_factory<BackgroundMediaPlayer, Windows::Media::Playback::IBackgroundMediaPlayerStatics>().Current();
}

inline event_token BackgroundMediaPlayer::MessageReceivedFromBackground(Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> const& value)
{
    return get_activation_factory<BackgroundMediaPlayer, Windows::Media::Playback::IBackgroundMediaPlayerStatics>().MessageReceivedFromBackground(value);
}

inline factory_event_revoker<Windows::Media::Playback::IBackgroundMediaPlayerStatics> BackgroundMediaPlayer::MessageReceivedFromBackground(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> const& value)
{
    auto factory = get_activation_factory<BackgroundMediaPlayer, Windows::Media::Playback::IBackgroundMediaPlayerStatics>();
    return { factory, &impl::abi_t<Windows::Media::Playback::IBackgroundMediaPlayerStatics>::remove_MessageReceivedFromBackground, factory.MessageReceivedFromBackground(value) };
}

inline void BackgroundMediaPlayer::MessageReceivedFromBackground(event_token const& token)
{
    get_activation_factory<BackgroundMediaPlayer, Windows::Media::Playback::IBackgroundMediaPlayerStatics>().MessageReceivedFromBackground(token);
}

inline event_token BackgroundMediaPlayer::MessageReceivedFromForeground(Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> const& value)
{
    return get_activation_factory<BackgroundMediaPlayer, Windows::Media::Playback::IBackgroundMediaPlayerStatics>().MessageReceivedFromForeground(value);
}

inline factory_event_revoker<Windows::Media::Playback::IBackgroundMediaPlayerStatics> BackgroundMediaPlayer::MessageReceivedFromForeground(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> const& value)
{
    auto factory = get_activation_factory<BackgroundMediaPlayer, Windows::Media::Playback::IBackgroundMediaPlayerStatics>();
    return { factory, &impl::abi_t<Windows::Media::Playback::IBackgroundMediaPlayerStatics>::remove_MessageReceivedFromForeground, factory.MessageReceivedFromForeground(value) };
}

inline void BackgroundMediaPlayer::MessageReceivedFromForeground(event_token const& token)
{
    get_activation_factory<BackgroundMediaPlayer, Windows::Media::Playback::IBackgroundMediaPlayerStatics>().MessageReceivedFromForeground(token);
}

inline void BackgroundMediaPlayer::SendMessageToBackground(Windows::Foundation::Collections::ValueSet const& value)
{
    get_activation_factory<BackgroundMediaPlayer, Windows::Media::Playback::IBackgroundMediaPlayerStatics>().SendMessageToBackground(value);
}

inline void BackgroundMediaPlayer::SendMessageToForeground(Windows::Foundation::Collections::ValueSet const& value)
{
    get_activation_factory<BackgroundMediaPlayer, Windows::Media::Playback::IBackgroundMediaPlayerStatics>().SendMessageToForeground(value);
}

inline bool BackgroundMediaPlayer::IsMediaPlaying()
{
    return get_activation_factory<BackgroundMediaPlayer, Windows::Media::Playback::IBackgroundMediaPlayerStatics>().IsMediaPlaying();
}

inline void BackgroundMediaPlayer::Shutdown()
{
    get_activation_factory<BackgroundMediaPlayer, Windows::Media::Playback::IBackgroundMediaPlayerStatics>().Shutdown();
}

inline MediaBreak::MediaBreak(Windows::Media::Playback::MediaBreakInsertionMethod const& insertionMethod) :
    MediaBreak(get_activation_factory<MediaBreak, Windows::Media::Playback::IMediaBreakFactory>().Create(insertionMethod))
{}

inline MediaBreak::MediaBreak(Windows::Media::Playback::MediaBreakInsertionMethod const& insertionMethod, Windows::Foundation::TimeSpan const& presentationPosition) :
    MediaBreak(get_activation_factory<MediaBreak, Windows::Media::Playback::IMediaBreakFactory>().CreateWithPresentationPosition(insertionMethod, presentationPosition))
{}

inline MediaPlaybackItem::MediaPlaybackItem(Windows::Media::Core::MediaSource const& source) :
    MediaPlaybackItem(get_activation_factory<MediaPlaybackItem, Windows::Media::Playback::IMediaPlaybackItemFactory>().Create(source))
{}

inline MediaPlaybackItem::MediaPlaybackItem(Windows::Media::Core::MediaSource const& source, Windows::Foundation::TimeSpan const& startTime) :
    MediaPlaybackItem(get_activation_factory<MediaPlaybackItem, Windows::Media::Playback::IMediaPlaybackItemFactory2>().CreateWithStartTime(source, startTime))
{}

inline MediaPlaybackItem::MediaPlaybackItem(Windows::Media::Core::MediaSource const& source, Windows::Foundation::TimeSpan const& startTime, Windows::Foundation::TimeSpan const& durationLimit) :
    MediaPlaybackItem(get_activation_factory<MediaPlaybackItem, Windows::Media::Playback::IMediaPlaybackItemFactory2>().CreateWithStartTimeAndDurationLimit(source, startTime, durationLimit))
{}

inline Windows::Media::Playback::MediaPlaybackItem MediaPlaybackItem::FindFromMediaSource(Windows::Media::Core::MediaSource const& source)
{
    return get_activation_factory<MediaPlaybackItem, Windows::Media::Playback::IMediaPlaybackItemStatics>().FindFromMediaSource(source);
}

inline MediaPlaybackList::MediaPlaybackList() :
    MediaPlaybackList(get_activation_factory<MediaPlaybackList>().ActivateInstance<MediaPlaybackList>())
{}

inline MediaPlayer::MediaPlayer() :
    MediaPlayer(get_activation_factory<MediaPlayer>().ActivateInstance<MediaPlayer>())
{}

inline PlaybackMediaMarker::PlaybackMediaMarker(Windows::Foundation::TimeSpan const& value) :
    PlaybackMediaMarker(get_activation_factory<PlaybackMediaMarker, Windows::Media::Playback::IPlaybackMediaMarkerFactory>().CreateFromTime(value))
{}

inline PlaybackMediaMarker::PlaybackMediaMarker(Windows::Foundation::TimeSpan const& value, param::hstring const& mediaMarketType, param::hstring const& text) :
    PlaybackMediaMarker(get_activation_factory<PlaybackMediaMarker, Windows::Media::Playback::IPlaybackMediaMarkerFactory>().Create(value, mediaMarketType, text))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::Playback::IBackgroundMediaPlayerStatics> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IBackgroundMediaPlayerStatics> {};
template<> struct hash<winrt::Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs2> : winrt::impl::hash_base<winrt::Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs2> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaBreak> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaBreak> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaBreakEndedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaBreakEndedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaBreakFactory> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaBreakFactory> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaBreakManager> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaBreakManager> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaBreakSchedule> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaBreakSchedule> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaBreakSeekedOverEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaBreakSeekedOverEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaBreakSkippedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaBreakSkippedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaBreakStartedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaBreakStartedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaEnginePlaybackSource> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaEnginePlaybackSource> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaItemDisplayProperties> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaItemDisplayProperties> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackCommandManager> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackCommandManager> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerFastForwardReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerFastForwardReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerNextReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerNextReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPauseReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPauseReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPlayReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPlayReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPositionReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPositionReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPreviousReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerPreviousReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerRateReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerRateReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerRewindReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerRewindReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerShuffleReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackCommandManagerShuffleReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackItem> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackItem> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackItem2> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackItem2> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackItem3> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackItem3> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackItemError> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackItemError> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackItemFactory> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackItemFactory> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackItemFactory2> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackItemFactory2> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackItemFailedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackItemFailedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackItemOpenedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackItemOpenedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackItemStatics> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackItemStatics> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackList> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackList> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackList2> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackList2> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackList3> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackList3> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackSession> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackSession> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackSession2> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackSession2> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackSession3> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackSession3> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackSessionBufferingStartedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackSessionBufferingStartedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackSessionOutputDegradationPolicyState> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackSessionOutputDegradationPolicyState> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackSource> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackSource> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackSphericalVideoProjection> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackSphericalVideoProjection> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlaybackTimedMetadataTrackList> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlaybackTimedMetadataTrackList> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlayer> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlayer> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlayer2> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlayer2> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlayer3> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlayer3> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlayer4> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlayer4> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlayer5> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlayer5> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlayer6> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlayer6> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlayer7> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlayer7> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlayerDataReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlayerDataReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlayerEffects> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlayerEffects> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlayerEffects2> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlayerEffects2> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlayerFailedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlayerFailedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlayerRateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlayerRateChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlayerSource> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlayerSource> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlayerSource2> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlayerSource2> {};
template<> struct hash<winrt::Windows::Media::Playback::IMediaPlayerSurface> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IMediaPlayerSurface> {};
template<> struct hash<winrt::Windows::Media::Playback::IPlaybackMediaMarker> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IPlaybackMediaMarker> {};
template<> struct hash<winrt::Windows::Media::Playback::IPlaybackMediaMarkerFactory> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IPlaybackMediaMarkerFactory> {};
template<> struct hash<winrt::Windows::Media::Playback::IPlaybackMediaMarkerReachedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IPlaybackMediaMarkerReachedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::IPlaybackMediaMarkerSequence> : winrt::impl::hash_base<winrt::Windows::Media::Playback::IPlaybackMediaMarkerSequence> {};
template<> struct hash<winrt::Windows::Media::Playback::ITimedMetadataPresentationModeChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::ITimedMetadataPresentationModeChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::BackgroundMediaPlayer> : winrt::impl::hash_base<winrt::Windows::Media::Playback::BackgroundMediaPlayer> {};
template<> struct hash<winrt::Windows::Media::Playback::CurrentMediaPlaybackItemChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::CurrentMediaPlaybackItemChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaBreak> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaBreak> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaBreakEndedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaBreakEndedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaBreakManager> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaBreakManager> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaBreakSchedule> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaBreakSchedule> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaBreakSeekedOverEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaBreakSeekedOverEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaBreakSkippedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaBreakSkippedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaBreakStartedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaBreakStartedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaItemDisplayProperties> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaItemDisplayProperties> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaPlaybackAudioTrackList> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaPlaybackAudioTrackList> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaPlaybackCommandManager> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaPlaybackCommandManager> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerFastForwardReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerFastForwardReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerNextReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerNextReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPauseReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPauseReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPlayReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPlayReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPositionReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPositionReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPreviousReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPreviousReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerRateReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerRateReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerRewindReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerRewindReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerShuffleReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerShuffleReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaPlaybackItem> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaPlaybackItem> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaPlaybackItemError> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaPlaybackItemError> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaPlaybackItemFailedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaPlaybackItemFailedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaPlaybackItemOpenedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaPlaybackItemOpenedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaPlaybackList> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaPlaybackList> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaPlaybackSession> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaPlaybackSession> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaPlaybackSessionBufferingStartedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaPlaybackSessionBufferingStartedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaPlaybackSessionOutputDegradationPolicyState> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaPlaybackSessionOutputDegradationPolicyState> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaPlaybackSphericalVideoProjection> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaPlaybackSphericalVideoProjection> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaPlaybackVideoTrackList> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaPlaybackVideoTrackList> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaPlayer> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaPlayer> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaPlayerFailedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaPlayerFailedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaPlayerRateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaPlayerRateChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::MediaPlayerSurface> : winrt::impl::hash_base<winrt::Windows::Media::Playback::MediaPlayerSurface> {};
template<> struct hash<winrt::Windows::Media::Playback::PlaybackMediaMarker> : winrt::impl::hash_base<winrt::Windows::Media::Playback::PlaybackMediaMarker> {};
template<> struct hash<winrt::Windows::Media::Playback::PlaybackMediaMarkerReachedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::PlaybackMediaMarkerReachedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Playback::PlaybackMediaMarkerSequence> : winrt::impl::hash_base<winrt::Windows::Media::Playback::PlaybackMediaMarkerSequence> {};
template<> struct hash<winrt::Windows::Media::Playback::TimedMetadataPresentationModeChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Playback::TimedMetadataPresentationModeChangedEventArgs> {};

}

WINRT_WARNING_POP
