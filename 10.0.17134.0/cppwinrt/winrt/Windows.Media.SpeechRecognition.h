﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Globalization.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Media.SpeechRecognition.2.h"
#include "winrt/Windows.Media.h"

namespace winrt::impl {

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus consume_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionCompletedEventArgs<D>::Status() const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionCompletedEventArgs)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionResult consume_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionResultGeneratedEventArgs<D>::Result() const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionResult value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionResultGeneratedEventArgs)->get_Result(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionSession<D>::AutoStopSilenceTimeout() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession)->get_AutoStopSilenceTimeout(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionSession<D>::AutoStopSilenceTimeout(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession)->put_AutoStopSilenceTimeout(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionSession<D>::StartAsync() const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession)->StartAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionSession<D>::StartAsync(Windows::Media::SpeechRecognition::SpeechContinuousRecognitionMode const& mode) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession)->StartWithModeAsync(get_abi(mode), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionSession<D>::StopAsync() const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession)->StopAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionSession<D>::CancelAsync() const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession)->CancelAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionSession<D>::PauseAsync() const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession)->PauseAsync(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionSession<D>::Resume() const
{
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession)->Resume());
}

template <typename D> event_token consume_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionSession<D>::Completed(Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession, Windows::Media::SpeechRecognition::SpeechContinuousRecognitionCompletedEventArgs> const& value) const
{
    event_token returnValue{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession)->add_Completed(get_abi(value), put_abi(returnValue)));
    return returnValue;
}

template <typename D> event_revoker<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession> consume_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionSession<D>::Completed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession, Windows::Media::SpeechRecognition::SpeechContinuousRecognitionCompletedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession>(this, &abi_t<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession>::remove_Completed, Completed(value));
}

template <typename D> void consume_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionSession<D>::Completed(event_token const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession)->remove_Completed(get_abi(value)));
}

template <typename D> event_token consume_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionSession<D>::ResultGenerated(Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession, Windows::Media::SpeechRecognition::SpeechContinuousRecognitionResultGeneratedEventArgs> const& value) const
{
    event_token returnValue{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession)->add_ResultGenerated(get_abi(value), put_abi(returnValue)));
    return returnValue;
}

template <typename D> event_revoker<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession> consume_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionSession<D>::ResultGenerated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession, Windows::Media::SpeechRecognition::SpeechContinuousRecognitionResultGeneratedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession>(this, &abi_t<Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession>::remove_ResultGenerated, ResultGenerated(value));
}

template <typename D> void consume_Windows_Media_SpeechRecognition_ISpeechContinuousRecognitionSession<D>::ResultGenerated(event_token const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession)->remove_ResultGenerated(get_abi(value)));
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus consume_Windows_Media_SpeechRecognition_ISpeechRecognitionCompilationResult<D>::Status() const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionCompilationResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_SpeechRecognition_ISpeechRecognitionConstraint<D>::IsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint)->get_IsEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_SpeechRecognition_ISpeechRecognitionConstraint<D>::IsEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint)->put_IsEnabled(value));
}

template <typename D> hstring consume_Windows_Media_SpeechRecognition_ISpeechRecognitionConstraint<D>::Tag() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint)->get_Tag(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_SpeechRecognition_ISpeechRecognitionConstraint<D>::Tag(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint)->put_Tag(get_abi(value)));
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionConstraintType consume_Windows_Media_SpeechRecognition_ISpeechRecognitionConstraint<D>::Type() const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionConstraintType value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint)->get_Type(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionConstraintProbability consume_Windows_Media_SpeechRecognition_ISpeechRecognitionConstraint<D>::Probability() const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionConstraintProbability value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint)->get_Probability(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_SpeechRecognition_ISpeechRecognitionConstraint<D>::Probability(Windows::Media::SpeechRecognition::SpeechRecognitionConstraintProbability const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint)->put_Probability(get_abi(value)));
}

template <typename D> Windows::Storage::StorageFile consume_Windows_Media_SpeechRecognition_ISpeechRecognitionGrammarFileConstraint<D>::GrammarFile() const
{
    Windows::Storage::StorageFile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraint)->get_GrammarFile(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionGrammarFileConstraint consume_Windows_Media_SpeechRecognition_ISpeechRecognitionGrammarFileConstraintFactory<D>::Create(Windows::Storage::StorageFile const& file) const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionGrammarFileConstraint constraint{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraintFactory)->Create(get_abi(file), put_abi(constraint)));
    return constraint;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionGrammarFileConstraint consume_Windows_Media_SpeechRecognition_ISpeechRecognitionGrammarFileConstraintFactory<D>::CreateWithTag(Windows::Storage::StorageFile const& file, param::hstring const& tag) const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionGrammarFileConstraint constraint{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraintFactory)->CreateWithTag(get_abi(file), get_abi(tag), put_abi(constraint)));
    return constraint;
}

template <typename D> hstring consume_Windows_Media_SpeechRecognition_ISpeechRecognitionHypothesis<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesis)->get_Text(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionHypothesis consume_Windows_Media_SpeechRecognition_ISpeechRecognitionHypothesisGeneratedEventArgs<D>::Hypothesis() const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionHypothesis value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesisGeneratedEventArgs)->get_Hypothesis(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Media_SpeechRecognition_ISpeechRecognitionListConstraint<D>::Commands() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraint)->get_Commands(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionListConstraint consume_Windows_Media_SpeechRecognition_ISpeechRecognitionListConstraintFactory<D>::Create(param::iterable<hstring> const& commands) const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionListConstraint constraint{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraintFactory)->Create(get_abi(commands), put_abi(constraint)));
    return constraint;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionListConstraint consume_Windows_Media_SpeechRecognition_ISpeechRecognitionListConstraintFactory<D>::CreateWithTag(param::iterable<hstring> const& commands, param::hstring const& tag) const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionListConstraint constraint{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraintFactory)->CreateWithTag(get_abi(commands), get_abi(tag), put_abi(constraint)));
    return constraint;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionAudioProblem consume_Windows_Media_SpeechRecognition_ISpeechRecognitionQualityDegradingEventArgs<D>::Problem() const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionAudioProblem value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionQualityDegradingEventArgs)->get_Problem(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus consume_Windows_Media_SpeechRecognition_ISpeechRecognitionResult<D>::Status() const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_SpeechRecognition_ISpeechRecognitionResult<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionResult)->get_Text(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionConfidence consume_Windows_Media_SpeechRecognition_ISpeechRecognitionResult<D>::Confidence() const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionConfidence value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionResult)->get_Confidence(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionSemanticInterpretation consume_Windows_Media_SpeechRecognition_ISpeechRecognitionResult<D>::SemanticInterpretation() const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionSemanticInterpretation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionResult)->get_SemanticInterpretation(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::SpeechRecognition::SpeechRecognitionResult> consume_Windows_Media_SpeechRecognition_ISpeechRecognitionResult<D>::GetAlternates(uint32_t maxAlternates) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::SpeechRecognition::SpeechRecognitionResult> alternates{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionResult)->GetAlternates(maxAlternates, put_abi(alternates)));
    return alternates;
}

template <typename D> Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint consume_Windows_Media_SpeechRecognition_ISpeechRecognitionResult<D>::Constraint() const
{
    Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionResult)->get_Constraint(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Media_SpeechRecognition_ISpeechRecognitionResult<D>::RulePath() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionResult)->get_RulePath(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Media_SpeechRecognition_ISpeechRecognitionResult<D>::RawConfidence() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionResult)->get_RawConfidence(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Media_SpeechRecognition_ISpeechRecognitionResult2<D>::PhraseStartTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionResult2)->get_PhraseStartTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_SpeechRecognition_ISpeechRecognitionResult2<D>::PhraseDuration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionResult2)->get_PhraseDuration(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::Collections::IVectorView<hstring>> consume_Windows_Media_SpeechRecognition_ISpeechRecognitionSemanticInterpretation<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::Collections::IVectorView<hstring>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionSemanticInterpretation)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionScenario consume_Windows_Media_SpeechRecognition_ISpeechRecognitionTopicConstraint<D>::Scenario() const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionScenario value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraint)->get_Scenario(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_SpeechRecognition_ISpeechRecognitionTopicConstraint<D>::TopicHint() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraint)->get_TopicHint(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionTopicConstraint consume_Windows_Media_SpeechRecognition_ISpeechRecognitionTopicConstraintFactory<D>::Create(Windows::Media::SpeechRecognition::SpeechRecognitionScenario const& scenario, param::hstring const& topicHint) const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionTopicConstraint constraint{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraintFactory)->Create(get_abi(scenario), get_abi(topicHint), put_abi(constraint)));
    return constraint;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionTopicConstraint consume_Windows_Media_SpeechRecognition_ISpeechRecognitionTopicConstraintFactory<D>::CreateWithTag(Windows::Media::SpeechRecognition::SpeechRecognitionScenario const& scenario, param::hstring const& topicHint, param::hstring const& tag) const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionTopicConstraint constraint{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraintFactory)->CreateWithTag(get_abi(scenario), get_abi(topicHint), get_abi(tag), put_abi(constraint)));
    return constraint;
}

template <typename D> Windows::Globalization::Language consume_Windows_Media_SpeechRecognition_ISpeechRecognizer<D>::CurrentLanguage() const
{
    Windows::Globalization::Language language{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizer)->get_CurrentLanguage(put_abi(language)));
    return language;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint> consume_Windows_Media_SpeechRecognition_ISpeechRecognizer<D>::Constraints() const
{
    Windows::Foundation::Collections::IVector<Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizer)->get_Constraints(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognizerTimeouts consume_Windows_Media_SpeechRecognition_ISpeechRecognizer<D>::Timeouts() const
{
    Windows::Media::SpeechRecognition::SpeechRecognizerTimeouts value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizer)->get_Timeouts(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognizerUIOptions consume_Windows_Media_SpeechRecognition_ISpeechRecognizer<D>::UIOptions() const
{
    Windows::Media::SpeechRecognition::SpeechRecognizerUIOptions value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizer)->get_UIOptions(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::SpeechRecognition::SpeechRecognitionCompilationResult> consume_Windows_Media_SpeechRecognition_ISpeechRecognizer<D>::CompileConstraintsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::SpeechRecognition::SpeechRecognitionCompilationResult> asyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizer)->CompileConstraintsAsync(put_abi(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::SpeechRecognition::SpeechRecognitionResult> consume_Windows_Media_SpeechRecognition_ISpeechRecognizer<D>::RecognizeAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::SpeechRecognition::SpeechRecognitionResult> asyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizer)->RecognizeAsync(put_abi(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::SpeechRecognition::SpeechRecognitionResult> consume_Windows_Media_SpeechRecognition_ISpeechRecognizer<D>::RecognizeWithUIAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::SpeechRecognition::SpeechRecognitionResult> asyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizer)->RecognizeWithUIAsync(put_abi(asyncOperation)));
    return asyncOperation;
}

template <typename D> event_token consume_Windows_Media_SpeechRecognition_ISpeechRecognizer<D>::RecognitionQualityDegrading(Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognitionQualityDegradingEventArgs> const& speechRecognitionQualityDegradingHandler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizer)->add_RecognitionQualityDegrading(get_abi(speechRecognitionQualityDegradingHandler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Media::SpeechRecognition::ISpeechRecognizer> consume_Windows_Media_SpeechRecognition_ISpeechRecognizer<D>::RecognitionQualityDegrading(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognitionQualityDegradingEventArgs> const& speechRecognitionQualityDegradingHandler) const
{
    return impl::make_event_revoker<D, Windows::Media::SpeechRecognition::ISpeechRecognizer>(this, &abi_t<Windows::Media::SpeechRecognition::ISpeechRecognizer>::remove_RecognitionQualityDegrading, RecognitionQualityDegrading(speechRecognitionQualityDegradingHandler));
}

template <typename D> void consume_Windows_Media_SpeechRecognition_ISpeechRecognizer<D>::RecognitionQualityDegrading(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizer)->remove_RecognitionQualityDegrading(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_Media_SpeechRecognition_ISpeechRecognizer<D>::StateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognizerStateChangedEventArgs> const& stateChangedHandler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizer)->add_StateChanged(get_abi(stateChangedHandler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Media::SpeechRecognition::ISpeechRecognizer> consume_Windows_Media_SpeechRecognition_ISpeechRecognizer<D>::StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognizerStateChangedEventArgs> const& stateChangedHandler) const
{
    return impl::make_event_revoker<D, Windows::Media::SpeechRecognition::ISpeechRecognizer>(this, &abi_t<Windows::Media::SpeechRecognition::ISpeechRecognizer>::remove_StateChanged, StateChanged(stateChangedHandler));
}

template <typename D> void consume_Windows_Media_SpeechRecognition_ISpeechRecognizer<D>::StateChanged(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizer)->remove_StateChanged(get_abi(cookie)));
}

template <typename D> Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession consume_Windows_Media_SpeechRecognition_ISpeechRecognizer2<D>::ContinuousRecognitionSession() const
{
    Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizer2)->get_ContinuousRecognitionSession(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognizerState consume_Windows_Media_SpeechRecognition_ISpeechRecognizer2<D>::State() const
{
    Windows::Media::SpeechRecognition::SpeechRecognizerState value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizer2)->get_State(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_SpeechRecognition_ISpeechRecognizer2<D>::StopRecognitionAsync() const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizer2)->StopRecognitionAsync(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_SpeechRecognition_ISpeechRecognizer2<D>::HypothesisGenerated(Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognitionHypothesisGeneratedEventArgs> const& value) const
{
    event_token returnValue{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizer2)->add_HypothesisGenerated(get_abi(value), put_abi(returnValue)));
    return returnValue;
}

template <typename D> event_revoker<Windows::Media::SpeechRecognition::ISpeechRecognizer2> consume_Windows_Media_SpeechRecognition_ISpeechRecognizer2<D>::HypothesisGenerated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognitionHypothesisGeneratedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::SpeechRecognition::ISpeechRecognizer2>(this, &abi_t<Windows::Media::SpeechRecognition::ISpeechRecognizer2>::remove_HypothesisGenerated, HypothesisGenerated(value));
}

template <typename D> void consume_Windows_Media_SpeechRecognition_ISpeechRecognizer2<D>::HypothesisGenerated(event_token const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizer2)->remove_HypothesisGenerated(get_abi(value)));
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognizer consume_Windows_Media_SpeechRecognition_ISpeechRecognizerFactory<D>::Create(Windows::Globalization::Language const& language) const
{
    Windows::Media::SpeechRecognition::SpeechRecognizer recognizer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizerFactory)->Create(get_abi(language), put_abi(recognizer)));
    return recognizer;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognizerState consume_Windows_Media_SpeechRecognition_ISpeechRecognizerStateChangedEventArgs<D>::State() const
{
    Windows::Media::SpeechRecognition::SpeechRecognizerState value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizerStateChangedEventArgs)->get_State(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::Language consume_Windows_Media_SpeechRecognition_ISpeechRecognizerStatics<D>::SystemSpeechLanguage() const
{
    Windows::Globalization::Language language{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizerStatics)->get_SystemSpeechLanguage(put_abi(language)));
    return language;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language> consume_Windows_Media_SpeechRecognition_ISpeechRecognizerStatics<D>::SupportedTopicLanguages() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language> languages{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizerStatics)->get_SupportedTopicLanguages(put_abi(languages)));
    return languages;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language> consume_Windows_Media_SpeechRecognition_ISpeechRecognizerStatics<D>::SupportedGrammarLanguages() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language> languages{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizerStatics)->get_SupportedGrammarLanguages(put_abi(languages)));
    return languages;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Media_SpeechRecognition_ISpeechRecognizerStatics2<D>::TrySetSystemSpeechLanguageAsync(Windows::Globalization::Language const& speechLanguage) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizerStatics2)->TrySetSystemSpeechLanguageAsync(get_abi(speechLanguage), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_SpeechRecognition_ISpeechRecognizerTimeouts<D>::InitialSilenceTimeout() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizerTimeouts)->get_InitialSilenceTimeout(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_SpeechRecognition_ISpeechRecognizerTimeouts<D>::InitialSilenceTimeout(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizerTimeouts)->put_InitialSilenceTimeout(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_SpeechRecognition_ISpeechRecognizerTimeouts<D>::EndSilenceTimeout() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizerTimeouts)->get_EndSilenceTimeout(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_SpeechRecognition_ISpeechRecognizerTimeouts<D>::EndSilenceTimeout(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizerTimeouts)->put_EndSilenceTimeout(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_SpeechRecognition_ISpeechRecognizerTimeouts<D>::BabbleTimeout() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizerTimeouts)->get_BabbleTimeout(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_SpeechRecognition_ISpeechRecognizerTimeouts<D>::BabbleTimeout(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizerTimeouts)->put_BabbleTimeout(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_SpeechRecognition_ISpeechRecognizerUIOptions<D>::ExampleText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizerUIOptions)->get_ExampleText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_SpeechRecognition_ISpeechRecognizerUIOptions<D>::ExampleText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizerUIOptions)->put_ExampleText(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_SpeechRecognition_ISpeechRecognizerUIOptions<D>::AudiblePrompt() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizerUIOptions)->get_AudiblePrompt(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_SpeechRecognition_ISpeechRecognizerUIOptions<D>::AudiblePrompt(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizerUIOptions)->put_AudiblePrompt(get_abi(value)));
}

template <typename D> bool consume_Windows_Media_SpeechRecognition_ISpeechRecognizerUIOptions<D>::IsReadBackEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizerUIOptions)->get_IsReadBackEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_SpeechRecognition_ISpeechRecognizerUIOptions<D>::IsReadBackEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizerUIOptions)->put_IsReadBackEnabled(value));
}

template <typename D> bool consume_Windows_Media_SpeechRecognition_ISpeechRecognizerUIOptions<D>::ShowConfirmation() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizerUIOptions)->get_ShowConfirmation(&value));
    return value;
}

template <typename D> void consume_Windows_Media_SpeechRecognition_ISpeechRecognizerUIOptions<D>::ShowConfirmation(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::ISpeechRecognizerUIOptions)->put_ShowConfirmation(value));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_SpeechRecognition_IVoiceCommandManager<D>::InstallCommandSetsFromStorageFileAsync(Windows::Storage::StorageFile const& file) const
{
    Windows::Foundation::IAsyncAction installAction{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::IVoiceCommandManager)->InstallCommandSetsFromStorageFileAsync(get_abi(file), put_abi(installAction)));
    return installAction;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Media::SpeechRecognition::VoiceCommandSet> consume_Windows_Media_SpeechRecognition_IVoiceCommandManager<D>::InstalledCommandSets() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Media::SpeechRecognition::VoiceCommandSet> voiceCommandSets{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::IVoiceCommandManager)->get_InstalledCommandSets(put_abi(voiceCommandSets)));
    return voiceCommandSets;
}

template <typename D> hstring consume_Windows_Media_SpeechRecognition_IVoiceCommandSet<D>::Language() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::IVoiceCommandSet)->get_Language(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_SpeechRecognition_IVoiceCommandSet<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::IVoiceCommandSet)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_SpeechRecognition_IVoiceCommandSet<D>::SetPhraseListAsync(param::hstring const& phraseListName, param::async_iterable<hstring> const& phraseList) const
{
    Windows::Foundation::IAsyncAction updateAction{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechRecognition::IVoiceCommandSet)->SetPhraseListAsync(get_abi(phraseListName), get_abi(phraseList), put_abi(updateAction)));
    return updateAction;
}

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionCompletedEventArgs> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionCompletedEventArgs>
{
    HRESULT __stdcall get_Status(Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionResultGeneratedEventArgs> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionResultGeneratedEventArgs>
{
    HRESULT __stdcall get_Result(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SpeechRecognition::SpeechRecognitionResult>(this->shim().Result());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession>
{
    HRESULT __stdcall get_AutoStopSilenceTimeout(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().AutoStopSilenceTimeout());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AutoStopSilenceTimeout(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutoStopSilenceTimeout(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
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
            *value = detach_from<Windows::Foundation::IAsyncAction>(this->shim().StartAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartWithModeAsync(Windows::Media::SpeechRecognition::SpeechContinuousRecognitionMode mode, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncAction>(this->shim().StartAsync(*reinterpret_cast<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionMode const*>(&mode)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StopAsync(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncAction>(this->shim().StopAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CancelAsync(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncAction>(this->shim().CancelAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall PauseAsync(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncAction>(this->shim().PauseAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Resume() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Resume();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Completed(void* value, event_token* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<event_token>(this->shim().Completed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession, Windows::Media::SpeechRecognition::SpeechContinuousRecognitionCompletedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Completed(event_token value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Completed(*reinterpret_cast<event_token const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ResultGenerated(void* value, event_token* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<event_token>(this->shim().ResultGenerated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession, Windows::Media::SpeechRecognition::SpeechContinuousRecognitionResultGeneratedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ResultGenerated(event_token value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResultGenerated(*reinterpret_cast<event_token const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognitionCompilationResult> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognitionCompilationResult>
{
    HRESULT __stdcall get_Status(Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>
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

    HRESULT __stdcall get_Tag(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Tag());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Tag(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Tag(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Type(Windows::Media::SpeechRecognition::SpeechRecognitionConstraintType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SpeechRecognition::SpeechRecognitionConstraintType>(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Probability(Windows::Media::SpeechRecognition::SpeechRecognitionConstraintProbability* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SpeechRecognition::SpeechRecognitionConstraintProbability>(this->shim().Probability());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Probability(Windows::Media::SpeechRecognition::SpeechRecognitionConstraintProbability value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Probability(*reinterpret_cast<Windows::Media::SpeechRecognition::SpeechRecognitionConstraintProbability const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraint> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraint>
{
    HRESULT __stdcall get_GrammarFile(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::StorageFile>(this->shim().GrammarFile());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraintFactory> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraintFactory>
{
    HRESULT __stdcall Create(void* file, void** constraint) noexcept final
    {
        try
        {
            *constraint = nullptr;
            typename D::abi_guard guard(this->shim());
            *constraint = detach_from<Windows::Media::SpeechRecognition::SpeechRecognitionGrammarFileConstraint>(this->shim().Create(*reinterpret_cast<Windows::Storage::StorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithTag(void* file, HSTRING tag, void** constraint) noexcept final
    {
        try
        {
            *constraint = nullptr;
            typename D::abi_guard guard(this->shim());
            *constraint = detach_from<Windows::Media::SpeechRecognition::SpeechRecognitionGrammarFileConstraint>(this->shim().CreateWithTag(*reinterpret_cast<Windows::Storage::StorageFile const*>(&file), *reinterpret_cast<hstring const*>(&tag)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesis> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesis>
{
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
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesisGeneratedEventArgs> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesisGeneratedEventArgs>
{
    HRESULT __stdcall get_Hypothesis(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SpeechRecognition::SpeechRecognitionHypothesis>(this->shim().Hypothesis());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraint> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraint>
{
    HRESULT __stdcall get_Commands(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().Commands());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraintFactory> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraintFactory>
{
    HRESULT __stdcall Create(void* commands, void** constraint) noexcept final
    {
        try
        {
            *constraint = nullptr;
            typename D::abi_guard guard(this->shim());
            *constraint = detach_from<Windows::Media::SpeechRecognition::SpeechRecognitionListConstraint>(this->shim().Create(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&commands)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithTag(void* commands, HSTRING tag, void** constraint) noexcept final
    {
        try
        {
            *constraint = nullptr;
            typename D::abi_guard guard(this->shim());
            *constraint = detach_from<Windows::Media::SpeechRecognition::SpeechRecognitionListConstraint>(this->shim().CreateWithTag(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&commands), *reinterpret_cast<hstring const*>(&tag)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognitionQualityDegradingEventArgs> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognitionQualityDegradingEventArgs>
{
    HRESULT __stdcall get_Problem(Windows::Media::SpeechRecognition::SpeechRecognitionAudioProblem* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SpeechRecognition::SpeechRecognitionAudioProblem>(this->shim().Problem());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognitionResult> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognitionResult>
{
    HRESULT __stdcall get_Status(Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus>(this->shim().Status());
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

    HRESULT __stdcall get_Confidence(Windows::Media::SpeechRecognition::SpeechRecognitionConfidence* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SpeechRecognition::SpeechRecognitionConfidence>(this->shim().Confidence());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SemanticInterpretation(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SpeechRecognition::SpeechRecognitionSemanticInterpretation>(this->shim().SemanticInterpretation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetAlternates(uint32_t maxAlternates, void** alternates) noexcept final
    {
        try
        {
            *alternates = nullptr;
            typename D::abi_guard guard(this->shim());
            *alternates = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::SpeechRecognition::SpeechRecognitionResult>>(this->shim().GetAlternates(maxAlternates));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Constraint(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>(this->shim().Constraint());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RulePath(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().RulePath());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RawConfidence(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().RawConfidence());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognitionResult2> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognitionResult2>
{
    HRESULT __stdcall get_PhraseStartTime(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().PhraseStartTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PhraseDuration(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().PhraseDuration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognitionSemanticInterpretation> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognitionSemanticInterpretation>
{
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
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraint> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraint>
{
    HRESULT __stdcall get_Scenario(Windows::Media::SpeechRecognition::SpeechRecognitionScenario* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SpeechRecognition::SpeechRecognitionScenario>(this->shim().Scenario());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TopicHint(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TopicHint());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraintFactory> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraintFactory>
{
    HRESULT __stdcall Create(Windows::Media::SpeechRecognition::SpeechRecognitionScenario scenario, HSTRING topicHint, void** constraint) noexcept final
    {
        try
        {
            *constraint = nullptr;
            typename D::abi_guard guard(this->shim());
            *constraint = detach_from<Windows::Media::SpeechRecognition::SpeechRecognitionTopicConstraint>(this->shim().Create(*reinterpret_cast<Windows::Media::SpeechRecognition::SpeechRecognitionScenario const*>(&scenario), *reinterpret_cast<hstring const*>(&topicHint)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithTag(Windows::Media::SpeechRecognition::SpeechRecognitionScenario scenario, HSTRING topicHint, HSTRING tag, void** constraint) noexcept final
    {
        try
        {
            *constraint = nullptr;
            typename D::abi_guard guard(this->shim());
            *constraint = detach_from<Windows::Media::SpeechRecognition::SpeechRecognitionTopicConstraint>(this->shim().CreateWithTag(*reinterpret_cast<Windows::Media::SpeechRecognition::SpeechRecognitionScenario const*>(&scenario), *reinterpret_cast<hstring const*>(&topicHint), *reinterpret_cast<hstring const*>(&tag)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognitionVoiceCommandDefinitionConstraint> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognitionVoiceCommandDefinitionConstraint>
{};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognizer> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognizer>
{
    HRESULT __stdcall get_CurrentLanguage(void** language) noexcept final
    {
        try
        {
            *language = nullptr;
            typename D::abi_guard guard(this->shim());
            *language = detach_from<Windows::Globalization::Language>(this->shim().CurrentLanguage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Constraints(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>>(this->shim().Constraints());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Timeouts(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SpeechRecognition::SpeechRecognizerTimeouts>(this->shim().Timeouts());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UIOptions(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SpeechRecognition::SpeechRecognizerUIOptions>(this->shim().UIOptions());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CompileConstraintsAsync(void** asyncOperation) noexcept final
    {
        try
        {
            *asyncOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::SpeechRecognition::SpeechRecognitionCompilationResult>>(this->shim().CompileConstraintsAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RecognizeAsync(void** asyncOperation) noexcept final
    {
        try
        {
            *asyncOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::SpeechRecognition::SpeechRecognitionResult>>(this->shim().RecognizeAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RecognizeWithUIAsync(void** asyncOperation) noexcept final
    {
        try
        {
            *asyncOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::SpeechRecognition::SpeechRecognitionResult>>(this->shim().RecognizeWithUIAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_RecognitionQualityDegrading(void* speechRecognitionQualityDegradingHandler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().RecognitionQualityDegrading(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognitionQualityDegradingEventArgs> const*>(&speechRecognitionQualityDegradingHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_RecognitionQualityDegrading(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RecognitionQualityDegrading(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_StateChanged(void* stateChangedHandler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().StateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognizerStateChangedEventArgs> const*>(&stateChangedHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_StateChanged(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StateChanged(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognizer2> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognizer2>
{
    HRESULT __stdcall get_ContinuousRecognitionSession(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession>(this->shim().ContinuousRecognitionSession());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_State(Windows::Media::SpeechRecognition::SpeechRecognizerState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SpeechRecognition::SpeechRecognizerState>(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StopRecognitionAsync(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncAction>(this->shim().StopRecognitionAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_HypothesisGenerated(void* value, event_token* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<event_token>(this->shim().HypothesisGenerated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::SpeechRecognition::SpeechRecognizer, Windows::Media::SpeechRecognition::SpeechRecognitionHypothesisGeneratedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_HypothesisGenerated(event_token value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HypothesisGenerated(*reinterpret_cast<event_token const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognizerFactory> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognizerFactory>
{
    HRESULT __stdcall Create(void* language, void** recognizer) noexcept final
    {
        try
        {
            *recognizer = nullptr;
            typename D::abi_guard guard(this->shim());
            *recognizer = detach_from<Windows::Media::SpeechRecognition::SpeechRecognizer>(this->shim().Create(*reinterpret_cast<Windows::Globalization::Language const*>(&language)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognizerStateChangedEventArgs> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognizerStateChangedEventArgs>
{
    HRESULT __stdcall get_State(Windows::Media::SpeechRecognition::SpeechRecognizerState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SpeechRecognition::SpeechRecognizerState>(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognizerStatics> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognizerStatics>
{
    HRESULT __stdcall get_SystemSpeechLanguage(void** language) noexcept final
    {
        try
        {
            *language = nullptr;
            typename D::abi_guard guard(this->shim());
            *language = detach_from<Windows::Globalization::Language>(this->shim().SystemSpeechLanguage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedTopicLanguages(void** languages) noexcept final
    {
        try
        {
            *languages = nullptr;
            typename D::abi_guard guard(this->shim());
            *languages = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language>>(this->shim().SupportedTopicLanguages());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedGrammarLanguages(void** languages) noexcept final
    {
        try
        {
            *languages = nullptr;
            typename D::abi_guard guard(this->shim());
            *languages = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language>>(this->shim().SupportedGrammarLanguages());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognizerStatics2> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognizerStatics2>
{
    HRESULT __stdcall TrySetSystemSpeechLanguageAsync(void* speechLanguage, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TrySetSystemSpeechLanguageAsync(*reinterpret_cast<Windows::Globalization::Language const*>(&speechLanguage)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognizerTimeouts> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognizerTimeouts>
{
    HRESULT __stdcall get_InitialSilenceTimeout(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().InitialSilenceTimeout());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_InitialSilenceTimeout(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InitialSilenceTimeout(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EndSilenceTimeout(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().EndSilenceTimeout());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_EndSilenceTimeout(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EndSilenceTimeout(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BabbleTimeout(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().BabbleTimeout());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_BabbleTimeout(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BabbleTimeout(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::ISpeechRecognizerUIOptions> : produce_base<D, Windows::Media::SpeechRecognition::ISpeechRecognizerUIOptions>
{
    HRESULT __stdcall get_ExampleText(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ExampleText());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ExampleText(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExampleText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudiblePrompt(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AudiblePrompt());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AudiblePrompt(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudiblePrompt(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsReadBackEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsReadBackEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsReadBackEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsReadBackEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ShowConfirmation(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ShowConfirmation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ShowConfirmation(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowConfirmation(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::IVoiceCommandManager> : produce_base<D, Windows::Media::SpeechRecognition::IVoiceCommandManager>
{
    HRESULT __stdcall InstallCommandSetsFromStorageFileAsync(void* file, void** installAction) noexcept final
    {
        try
        {
            *installAction = nullptr;
            typename D::abi_guard guard(this->shim());
            *installAction = detach_from<Windows::Foundation::IAsyncAction>(this->shim().InstallCommandSetsFromStorageFileAsync(*reinterpret_cast<Windows::Storage::StorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InstalledCommandSets(void** voiceCommandSets) noexcept final
    {
        try
        {
            *voiceCommandSets = nullptr;
            typename D::abi_guard guard(this->shim());
            *voiceCommandSets = detach_from<Windows::Foundation::Collections::IMapView<hstring, Windows::Media::SpeechRecognition::VoiceCommandSet>>(this->shim().InstalledCommandSets());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechRecognition::IVoiceCommandSet> : produce_base<D, Windows::Media::SpeechRecognition::IVoiceCommandSet>
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

}

WINRT_EXPORT namespace winrt::Windows::Media::SpeechRecognition {

inline SpeechRecognitionGrammarFileConstraint::SpeechRecognitionGrammarFileConstraint(Windows::Storage::StorageFile const& file) :
    SpeechRecognitionGrammarFileConstraint(get_activation_factory<SpeechRecognitionGrammarFileConstraint, Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraintFactory>().Create(file))
{}

inline SpeechRecognitionGrammarFileConstraint::SpeechRecognitionGrammarFileConstraint(Windows::Storage::StorageFile const& file, param::hstring const& tag) :
    SpeechRecognitionGrammarFileConstraint(get_activation_factory<SpeechRecognitionGrammarFileConstraint, Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraintFactory>().CreateWithTag(file, tag))
{}

inline SpeechRecognitionListConstraint::SpeechRecognitionListConstraint(param::iterable<hstring> const& commands) :
    SpeechRecognitionListConstraint(get_activation_factory<SpeechRecognitionListConstraint, Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraintFactory>().Create(commands))
{}

inline SpeechRecognitionListConstraint::SpeechRecognitionListConstraint(param::iterable<hstring> const& commands, param::hstring const& tag) :
    SpeechRecognitionListConstraint(get_activation_factory<SpeechRecognitionListConstraint, Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraintFactory>().CreateWithTag(commands, tag))
{}

inline SpeechRecognitionTopicConstraint::SpeechRecognitionTopicConstraint(Windows::Media::SpeechRecognition::SpeechRecognitionScenario const& scenario, param::hstring const& topicHint) :
    SpeechRecognitionTopicConstraint(get_activation_factory<SpeechRecognitionTopicConstraint, Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraintFactory>().Create(scenario, topicHint))
{}

inline SpeechRecognitionTopicConstraint::SpeechRecognitionTopicConstraint(Windows::Media::SpeechRecognition::SpeechRecognitionScenario const& scenario, param::hstring const& topicHint, param::hstring const& tag) :
    SpeechRecognitionTopicConstraint(get_activation_factory<SpeechRecognitionTopicConstraint, Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraintFactory>().CreateWithTag(scenario, topicHint, tag))
{}

inline SpeechRecognizer::SpeechRecognizer() :
    SpeechRecognizer(get_activation_factory<SpeechRecognizer>().ActivateInstance<SpeechRecognizer>())
{}

inline SpeechRecognizer::SpeechRecognizer(Windows::Globalization::Language const& language) :
    SpeechRecognizer(get_activation_factory<SpeechRecognizer, Windows::Media::SpeechRecognition::ISpeechRecognizerFactory>().Create(language))
{}

inline Windows::Globalization::Language SpeechRecognizer::SystemSpeechLanguage()
{
    return get_activation_factory<SpeechRecognizer, Windows::Media::SpeechRecognition::ISpeechRecognizerStatics>().SystemSpeechLanguage();
}

inline Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language> SpeechRecognizer::SupportedTopicLanguages()
{
    return get_activation_factory<SpeechRecognizer, Windows::Media::SpeechRecognition::ISpeechRecognizerStatics>().SupportedTopicLanguages();
}

inline Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language> SpeechRecognizer::SupportedGrammarLanguages()
{
    return get_activation_factory<SpeechRecognizer, Windows::Media::SpeechRecognition::ISpeechRecognizerStatics>().SupportedGrammarLanguages();
}

inline Windows::Foundation::IAsyncOperation<bool> SpeechRecognizer::TrySetSystemSpeechLanguageAsync(Windows::Globalization::Language const& speechLanguage)
{
    return get_activation_factory<SpeechRecognizer, Windows::Media::SpeechRecognition::ISpeechRecognizerStatics2>().TrySetSystemSpeechLanguageAsync(speechLanguage);
}

inline Windows::Foundation::IAsyncAction VoiceCommandManager::InstallCommandSetsFromStorageFileAsync(Windows::Storage::StorageFile const& file)
{
    return get_activation_factory<VoiceCommandManager, Windows::Media::SpeechRecognition::IVoiceCommandManager>().InstallCommandSetsFromStorageFileAsync(file);
}

inline Windows::Foundation::Collections::IMapView<hstring, Windows::Media::SpeechRecognition::VoiceCommandSet> VoiceCommandManager::InstalledCommandSets()
{
    return get_activation_factory<VoiceCommandManager, Windows::Media::SpeechRecognition::IVoiceCommandManager>().InstalledCommandSets();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionCompletedEventArgs> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionResultGeneratedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionResultGeneratedEventArgs> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::ISpeechContinuousRecognitionSession> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionCompilationResult> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionCompilationResult> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraint> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraint> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraintFactory> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionGrammarFileConstraintFactory> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesis> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesis> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesisGeneratedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionHypothesisGeneratedEventArgs> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraint> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraint> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraintFactory> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionListConstraintFactory> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionQualityDegradingEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionQualityDegradingEventArgs> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionResult> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionResult> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionResult2> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionResult2> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionSemanticInterpretation> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionSemanticInterpretation> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraint> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraint> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraintFactory> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionTopicConstraintFactory> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionVoiceCommandDefinitionConstraint> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionVoiceCommandDefinitionConstraint> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::ISpeechRecognizer> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::ISpeechRecognizer> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::ISpeechRecognizer2> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::ISpeechRecognizer2> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::ISpeechRecognizerFactory> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::ISpeechRecognizerFactory> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::ISpeechRecognizerStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::ISpeechRecognizerStateChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::ISpeechRecognizerStatics> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::ISpeechRecognizerStatics> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::ISpeechRecognizerStatics2> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::ISpeechRecognizerStatics2> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::ISpeechRecognizerTimeouts> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::ISpeechRecognizerTimeouts> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::ISpeechRecognizerUIOptions> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::ISpeechRecognizerUIOptions> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::IVoiceCommandManager> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::IVoiceCommandManager> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::IVoiceCommandSet> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::IVoiceCommandSet> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::SpeechContinuousRecognitionCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::SpeechContinuousRecognitionCompletedEventArgs> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::SpeechContinuousRecognitionResultGeneratedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::SpeechContinuousRecognitionResultGeneratedEventArgs> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionCompilationResult> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionCompilationResult> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionGrammarFileConstraint> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionGrammarFileConstraint> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionHypothesis> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionHypothesis> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionHypothesisGeneratedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionHypothesisGeneratedEventArgs> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionListConstraint> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionListConstraint> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionQualityDegradingEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionQualityDegradingEventArgs> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionResult> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionResult> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionSemanticInterpretation> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionSemanticInterpretation> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionTopicConstraint> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionTopicConstraint> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionVoiceCommandDefinitionConstraint> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionVoiceCommandDefinitionConstraint> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::SpeechRecognizer> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::SpeechRecognizer> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::SpeechRecognizerStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::SpeechRecognizerStateChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::SpeechRecognizerTimeouts> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::SpeechRecognizerTimeouts> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::SpeechRecognizerUIOptions> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::SpeechRecognizerUIOptions> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::VoiceCommandManager> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::VoiceCommandManager> {};
template<> struct hash<winrt::Windows::Media::SpeechRecognition::VoiceCommandSet> : winrt::impl::hash_base<winrt::Windows::Media::SpeechRecognition::VoiceCommandSet> {};

}

WINRT_WARNING_POP
