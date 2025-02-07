﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.ApplicationModel.2.h"
#include "winrt/impl/Windows.ApplicationModel.Activation.2.h"
#include "winrt/impl/Windows.ApplicationModel.Core.2.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.2.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.DragDrop.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.UI.Composition.2.h"
#include "winrt/impl/Windows.UI.Core.2.h"
#include "winrt/impl/Windows.UI.Input.2.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.Peers.2.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.2.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.Primitives.2.h"
#include "winrt/impl/Windows.UI.Xaml.Data.2.h"
#include "winrt/impl/Windows.UI.Xaml.Input.2.h"
#include "winrt/impl/Windows.UI.Xaml.Interop.2.h"
#include "winrt/impl/Windows.UI.Xaml.Media.2.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Animation.2.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Imaging.2.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Media3D.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/Windows.UI.h"

namespace winrt::impl {

template <typename D> double consume_Windows_UI_Xaml_IAdaptiveTrigger<D>::MinWindowWidth() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IAdaptiveTrigger)->get_MinWindowWidth(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IAdaptiveTrigger<D>::MinWindowWidth(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IAdaptiveTrigger)->put_MinWindowWidth(value));
}

template <typename D> double consume_Windows_UI_Xaml_IAdaptiveTrigger<D>::MinWindowHeight() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IAdaptiveTrigger)->get_MinWindowHeight(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IAdaptiveTrigger<D>::MinWindowHeight(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IAdaptiveTrigger)->put_MinWindowHeight(value));
}

template <typename D> Windows::UI::Xaml::AdaptiveTrigger consume_Windows_UI_Xaml_IAdaptiveTriggerFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::AdaptiveTrigger instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IAdaptiveTriggerFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IAdaptiveTriggerStatics<D>::MinWindowWidthProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IAdaptiveTriggerStatics)->get_MinWindowWidthProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IAdaptiveTriggerStatics<D>::MinWindowHeightProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IAdaptiveTriggerStatics)->get_MinWindowHeightProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::ResourceDictionary consume_Windows_UI_Xaml_IApplication<D>::Resources() const
{
    Windows::UI::Xaml::ResourceDictionary value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplication)->get_Resources(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IApplication<D>::Resources(Windows::UI::Xaml::ResourceDictionary const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplication)->put_Resources(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DebugSettings consume_Windows_UI_Xaml_IApplication<D>::DebugSettings() const
{
    Windows::UI::Xaml::DebugSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplication)->get_DebugSettings(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::ApplicationTheme consume_Windows_UI_Xaml_IApplication<D>::RequestedTheme() const
{
    Windows::UI::Xaml::ApplicationTheme value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplication)->get_RequestedTheme(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IApplication<D>::RequestedTheme(Windows::UI::Xaml::ApplicationTheme const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplication)->put_RequestedTheme(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IApplication<D>::UnhandledException(Windows::UI::Xaml::UnhandledExceptionEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplication)->add_UnhandledException(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IApplication> consume_Windows_UI_Xaml_IApplication<D>::UnhandledException(auto_revoke_t, Windows::UI::Xaml::UnhandledExceptionEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IApplication>(this, &abi_t<Windows::UI::Xaml::IApplication>::remove_UnhandledException, UnhandledException(value));
}

template <typename D> void consume_Windows_UI_Xaml_IApplication<D>::UnhandledException(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplication)->remove_UnhandledException(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IApplication<D>::Suspending(Windows::UI::Xaml::SuspendingEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplication)->add_Suspending(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IApplication> consume_Windows_UI_Xaml_IApplication<D>::Suspending(auto_revoke_t, Windows::UI::Xaml::SuspendingEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IApplication>(this, &abi_t<Windows::UI::Xaml::IApplication>::remove_Suspending, Suspending(value));
}

template <typename D> void consume_Windows_UI_Xaml_IApplication<D>::Suspending(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplication)->remove_Suspending(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IApplication<D>::Resuming(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplication)->add_Resuming(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IApplication> consume_Windows_UI_Xaml_IApplication<D>::Resuming(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IApplication>(this, &abi_t<Windows::UI::Xaml::IApplication>::remove_Resuming, Resuming(value));
}

template <typename D> void consume_Windows_UI_Xaml_IApplication<D>::Resuming(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplication)->remove_Resuming(get_abi(token)));
}

template <typename D> void consume_Windows_UI_Xaml_IApplication<D>::Exit() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplication)->Exit());
}

template <typename D> Windows::UI::Xaml::FocusVisualKind consume_Windows_UI_Xaml_IApplication2<D>::FocusVisualKind() const
{
    Windows::UI::Xaml::FocusVisualKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplication2)->get_FocusVisualKind(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IApplication2<D>::FocusVisualKind(Windows::UI::Xaml::FocusVisualKind const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplication2)->put_FocusVisualKind(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::ApplicationRequiresPointerMode consume_Windows_UI_Xaml_IApplication2<D>::RequiresPointerMode() const
{
    Windows::UI::Xaml::ApplicationRequiresPointerMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplication2)->get_RequiresPointerMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IApplication2<D>::RequiresPointerMode(Windows::UI::Xaml::ApplicationRequiresPointerMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplication2)->put_RequiresPointerMode(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IApplication2<D>::LeavingBackground(Windows::UI::Xaml::LeavingBackgroundEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplication2)->add_LeavingBackground(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IApplication2> consume_Windows_UI_Xaml_IApplication2<D>::LeavingBackground(auto_revoke_t, Windows::UI::Xaml::LeavingBackgroundEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IApplication2>(this, &abi_t<Windows::UI::Xaml::IApplication2>::remove_LeavingBackground, LeavingBackground(value));
}

template <typename D> void consume_Windows_UI_Xaml_IApplication2<D>::LeavingBackground(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplication2)->remove_LeavingBackground(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IApplication2<D>::EnteredBackground(Windows::UI::Xaml::EnteredBackgroundEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplication2)->add_EnteredBackground(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IApplication2> consume_Windows_UI_Xaml_IApplication2<D>::EnteredBackground(auto_revoke_t, Windows::UI::Xaml::EnteredBackgroundEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IApplication2>(this, &abi_t<Windows::UI::Xaml::IApplication2>::remove_EnteredBackground, EnteredBackground(value));
}

template <typename D> void consume_Windows_UI_Xaml_IApplication2<D>::EnteredBackground(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplication2)->remove_EnteredBackground(get_abi(token)));
}

template <typename D> Windows::UI::Xaml::ApplicationHighContrastAdjustment consume_Windows_UI_Xaml_IApplication3<D>::HighContrastAdjustment() const
{
    Windows::UI::Xaml::ApplicationHighContrastAdjustment value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplication3)->get_HighContrastAdjustment(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IApplication3<D>::HighContrastAdjustment(Windows::UI::Xaml::ApplicationHighContrastAdjustment const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplication3)->put_HighContrastAdjustment(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Application consume_Windows_UI_Xaml_IApplicationFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Application instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplicationFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> void consume_Windows_UI_Xaml_IApplicationOverrides<D>::OnActivated(Windows::ApplicationModel::Activation::IActivatedEventArgs const& args) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplicationOverrides)->OnActivated(get_abi(args)));
}

template <typename D> void consume_Windows_UI_Xaml_IApplicationOverrides<D>::OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs const& args) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplicationOverrides)->OnLaunched(get_abi(args)));
}

template <typename D> void consume_Windows_UI_Xaml_IApplicationOverrides<D>::OnFileActivated(Windows::ApplicationModel::Activation::FileActivatedEventArgs const& args) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplicationOverrides)->OnFileActivated(get_abi(args)));
}

template <typename D> void consume_Windows_UI_Xaml_IApplicationOverrides<D>::OnSearchActivated(Windows::ApplicationModel::Activation::SearchActivatedEventArgs const& args) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplicationOverrides)->OnSearchActivated(get_abi(args)));
}

template <typename D> void consume_Windows_UI_Xaml_IApplicationOverrides<D>::OnShareTargetActivated(Windows::ApplicationModel::Activation::ShareTargetActivatedEventArgs const& args) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplicationOverrides)->OnShareTargetActivated(get_abi(args)));
}

template <typename D> void consume_Windows_UI_Xaml_IApplicationOverrides<D>::OnFileOpenPickerActivated(Windows::ApplicationModel::Activation::FileOpenPickerActivatedEventArgs const& args) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplicationOverrides)->OnFileOpenPickerActivated(get_abi(args)));
}

template <typename D> void consume_Windows_UI_Xaml_IApplicationOverrides<D>::OnFileSavePickerActivated(Windows::ApplicationModel::Activation::FileSavePickerActivatedEventArgs const& args) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplicationOverrides)->OnFileSavePickerActivated(get_abi(args)));
}

template <typename D> void consume_Windows_UI_Xaml_IApplicationOverrides<D>::OnCachedFileUpdaterActivated(Windows::ApplicationModel::Activation::CachedFileUpdaterActivatedEventArgs const& args) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplicationOverrides)->OnCachedFileUpdaterActivated(get_abi(args)));
}

template <typename D> void consume_Windows_UI_Xaml_IApplicationOverrides<D>::OnWindowCreated(Windows::UI::Xaml::WindowCreatedEventArgs const& args) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplicationOverrides)->OnWindowCreated(get_abi(args)));
}

template <typename D> void consume_Windows_UI_Xaml_IApplicationOverrides2<D>::OnBackgroundActivated(Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs const& args) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplicationOverrides2)->OnBackgroundActivated(get_abi(args)));
}

template <typename D> Windows::UI::Xaml::Application consume_Windows_UI_Xaml_IApplicationStatics<D>::Current() const
{
    Windows::UI::Xaml::Application value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplicationStatics)->get_Current(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IApplicationStatics<D>::Start(Windows::UI::Xaml::ApplicationInitializationCallback const& callback) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplicationStatics)->Start(get_abi(callback)));
}

template <typename D> void consume_Windows_UI_Xaml_IApplicationStatics<D>::LoadComponent(Windows::Foundation::IInspectable const& component, Windows::Foundation::Uri const& resourceLocator) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplicationStatics)->LoadComponent(get_abi(component), get_abi(resourceLocator)));
}

template <typename D> void consume_Windows_UI_Xaml_IApplicationStatics<D>::LoadComponent(Windows::Foundation::IInspectable const& component, Windows::Foundation::Uri const& resourceLocator, Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation const& componentResourceLocation) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IApplicationStatics)->LoadComponentWithResourceLocation(get_abi(component), get_abi(resourceLocator), get_abi(componentResourceLocation)));
}

template <typename D> hstring consume_Windows_UI_Xaml_IBindingFailedEventArgs<D>::Message() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IBindingFailedEventArgs)->get_Message(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_IBringIntoViewOptions<D>::AnimationDesired() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IBringIntoViewOptions)->get_AnimationDesired(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IBringIntoViewOptions<D>::AnimationDesired(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IBringIntoViewOptions)->put_AnimationDesired(value));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Rect> consume_Windows_UI_Xaml_IBringIntoViewOptions<D>::TargetRect() const
{
    Windows::Foundation::IReference<Windows::Foundation::Rect> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IBringIntoViewOptions)->get_TargetRect(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IBringIntoViewOptions<D>::TargetRect(optional<Windows::Foundation::Rect> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IBringIntoViewOptions)->put_TargetRect(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_IBringIntoViewOptions2<D>::HorizontalAlignmentRatio() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IBringIntoViewOptions2)->get_HorizontalAlignmentRatio(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IBringIntoViewOptions2<D>::HorizontalAlignmentRatio(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IBringIntoViewOptions2)->put_HorizontalAlignmentRatio(value));
}

template <typename D> double consume_Windows_UI_Xaml_IBringIntoViewOptions2<D>::VerticalAlignmentRatio() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IBringIntoViewOptions2)->get_VerticalAlignmentRatio(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IBringIntoViewOptions2<D>::VerticalAlignmentRatio(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IBringIntoViewOptions2)->put_VerticalAlignmentRatio(value));
}

template <typename D> double consume_Windows_UI_Xaml_IBringIntoViewOptions2<D>::HorizontalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IBringIntoViewOptions2)->get_HorizontalOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IBringIntoViewOptions2<D>::HorizontalOffset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IBringIntoViewOptions2)->put_HorizontalOffset(value));
}

template <typename D> double consume_Windows_UI_Xaml_IBringIntoViewOptions2<D>::VerticalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IBringIntoViewOptions2)->get_VerticalOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IBringIntoViewOptions2<D>::VerticalOffset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IBringIntoViewOptions2)->put_VerticalOffset(value));
}

template <typename D> Windows::UI::Xaml::UIElement consume_Windows_UI_Xaml_IBringIntoViewRequestedEventArgs<D>::TargetElement() const
{
    Windows::UI::Xaml::UIElement value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IBringIntoViewRequestedEventArgs)->get_TargetElement(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IBringIntoViewRequestedEventArgs<D>::TargetElement(Windows::UI::Xaml::UIElement const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IBringIntoViewRequestedEventArgs)->put_TargetElement(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_IBringIntoViewRequestedEventArgs<D>::AnimationDesired() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IBringIntoViewRequestedEventArgs)->get_AnimationDesired(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IBringIntoViewRequestedEventArgs<D>::AnimationDesired(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IBringIntoViewRequestedEventArgs)->put_AnimationDesired(value));
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Xaml_IBringIntoViewRequestedEventArgs<D>::TargetRect() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IBringIntoViewRequestedEventArgs)->get_TargetRect(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IBringIntoViewRequestedEventArgs<D>::TargetRect(Windows::Foundation::Rect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IBringIntoViewRequestedEventArgs)->put_TargetRect(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_IBringIntoViewRequestedEventArgs<D>::HorizontalAlignmentRatio() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IBringIntoViewRequestedEventArgs)->get_HorizontalAlignmentRatio(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_IBringIntoViewRequestedEventArgs<D>::VerticalAlignmentRatio() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IBringIntoViewRequestedEventArgs)->get_VerticalAlignmentRatio(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_IBringIntoViewRequestedEventArgs<D>::HorizontalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IBringIntoViewRequestedEventArgs)->get_HorizontalOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IBringIntoViewRequestedEventArgs<D>::HorizontalOffset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IBringIntoViewRequestedEventArgs)->put_HorizontalOffset(value));
}

template <typename D> double consume_Windows_UI_Xaml_IBringIntoViewRequestedEventArgs<D>::VerticalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IBringIntoViewRequestedEventArgs)->get_VerticalOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IBringIntoViewRequestedEventArgs<D>::VerticalOffset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IBringIntoViewRequestedEventArgs)->put_VerticalOffset(value));
}

template <typename D> bool consume_Windows_UI_Xaml_IBringIntoViewRequestedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IBringIntoViewRequestedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IBringIntoViewRequestedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IBringIntoViewRequestedEventArgs)->put_Handled(value));
}

template <typename D> Windows::UI::Xaml::CornerRadius consume_Windows_UI_Xaml_ICornerRadiusHelperStatics<D>::FromRadii(double topLeft, double topRight, double bottomRight, double bottomLeft) const
{
    Windows::UI::Xaml::CornerRadius returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::ICornerRadiusHelperStatics)->FromRadii(topLeft, topRight, bottomRight, bottomLeft, put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::CornerRadius consume_Windows_UI_Xaml_ICornerRadiusHelperStatics<D>::FromUniformRadius(double uniformRadius) const
{
    Windows::UI::Xaml::CornerRadius returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::ICornerRadiusHelperStatics)->FromUniformRadius(uniformRadius, put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_IDataContextChangedEventArgs<D>::NewValue() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDataContextChangedEventArgs)->get_NewValue(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_IDataContextChangedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDataContextChangedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IDataContextChangedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDataContextChangedEventArgs)->put_Handled(value));
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_IDataTemplate<D>::LoadContent() const
{
    Windows::UI::Xaml::DependencyObject returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDataTemplate)->LoadContent(put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_IDataTemplateExtension<D>::ResetTemplate() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDataTemplateExtension)->ResetTemplate());
}

template <typename D> bool consume_Windows_UI_Xaml_IDataTemplateExtension<D>::ProcessBinding(uint32_t phase) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDataTemplateExtension)->ProcessBinding(phase, &returnValue));
    return returnValue;
}

template <typename D> int32_t consume_Windows_UI_Xaml_IDataTemplateExtension<D>::ProcessBindings(Windows::UI::Xaml::Controls::ContainerContentChangingEventArgs const& arg) const
{
    int32_t returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDataTemplateExtension)->ProcessBindings(get_abi(arg), &returnValue));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DataTemplate consume_Windows_UI_Xaml_IDataTemplateFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::DataTemplate instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDataTemplateFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_IDataTemplateKey<D>::DataType() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDataTemplateKey)->get_DataType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IDataTemplateKey<D>::DataType(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDataTemplateKey)->put_DataType(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DataTemplateKey consume_Windows_UI_Xaml_IDataTemplateKeyFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::DataTemplateKey instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDataTemplateKeyFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DataTemplateKey consume_Windows_UI_Xaml_IDataTemplateKeyFactory<D>::CreateInstanceWithType(Windows::Foundation::IInspectable const& dataType, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::DataTemplateKey instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDataTemplateKeyFactory)->CreateInstanceWithType(get_abi(dataType), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IDataTemplateStatics2<D>::ExtensionInstanceProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDataTemplateStatics2)->get_ExtensionInstanceProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::IDataTemplateExtension consume_Windows_UI_Xaml_IDataTemplateStatics2<D>::GetExtensionInstance(Windows::UI::Xaml::FrameworkElement const& element) const
{
    Windows::UI::Xaml::IDataTemplateExtension value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDataTemplateStatics2)->GetExtensionInstance(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IDataTemplateStatics2<D>::SetExtensionInstance(Windows::UI::Xaml::FrameworkElement const& element, Windows::UI::Xaml::IDataTemplateExtension const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDataTemplateStatics2)->SetExtensionInstance(get_abi(element), get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_IDebugSettings<D>::EnableFrameRateCounter() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDebugSettings)->get_EnableFrameRateCounter(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IDebugSettings<D>::EnableFrameRateCounter(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDebugSettings)->put_EnableFrameRateCounter(value));
}

template <typename D> bool consume_Windows_UI_Xaml_IDebugSettings<D>::IsBindingTracingEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDebugSettings)->get_IsBindingTracingEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IDebugSettings<D>::IsBindingTracingEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDebugSettings)->put_IsBindingTracingEnabled(value));
}

template <typename D> bool consume_Windows_UI_Xaml_IDebugSettings<D>::IsOverdrawHeatMapEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDebugSettings)->get_IsOverdrawHeatMapEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IDebugSettings<D>::IsOverdrawHeatMapEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDebugSettings)->put_IsOverdrawHeatMapEnabled(value));
}

template <typename D> event_token consume_Windows_UI_Xaml_IDebugSettings<D>::BindingFailed(Windows::UI::Xaml::BindingFailedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDebugSettings)->add_BindingFailed(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IDebugSettings> consume_Windows_UI_Xaml_IDebugSettings<D>::BindingFailed(auto_revoke_t, Windows::UI::Xaml::BindingFailedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IDebugSettings>(this, &abi_t<Windows::UI::Xaml::IDebugSettings>::remove_BindingFailed, BindingFailed(value));
}

template <typename D> void consume_Windows_UI_Xaml_IDebugSettings<D>::BindingFailed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDebugSettings)->remove_BindingFailed(get_abi(token)));
}

template <typename D> bool consume_Windows_UI_Xaml_IDebugSettings2<D>::EnableRedrawRegions() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDebugSettings2)->get_EnableRedrawRegions(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IDebugSettings2<D>::EnableRedrawRegions(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDebugSettings2)->put_EnableRedrawRegions(value));
}

template <typename D> bool consume_Windows_UI_Xaml_IDebugSettings3<D>::IsTextPerformanceVisualizationEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDebugSettings3)->get_IsTextPerformanceVisualizationEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IDebugSettings3<D>::IsTextPerformanceVisualizationEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDebugSettings3)->put_IsTextPerformanceVisualizationEnabled(value));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_IDependencyObject<D>::GetValue(Windows::UI::Xaml::DependencyProperty const& dp) const
{
    Windows::Foundation::IInspectable returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDependencyObject)->GetValue(get_abi(dp), put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_IDependencyObject<D>::SetValue(Windows::UI::Xaml::DependencyProperty const& dp, Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDependencyObject)->SetValue(get_abi(dp), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Xaml_IDependencyObject<D>::ClearValue(Windows::UI::Xaml::DependencyProperty const& dp) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDependencyObject)->ClearValue(get_abi(dp)));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_IDependencyObject<D>::ReadLocalValue(Windows::UI::Xaml::DependencyProperty const& dp) const
{
    Windows::Foundation::IInspectable returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDependencyObject)->ReadLocalValue(get_abi(dp), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_IDependencyObject<D>::GetAnimationBaseValue(Windows::UI::Xaml::DependencyProperty const& dp) const
{
    Windows::Foundation::IInspectable returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDependencyObject)->GetAnimationBaseValue(get_abi(dp), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Core::CoreDispatcher consume_Windows_UI_Xaml_IDependencyObject<D>::Dispatcher() const
{
    Windows::UI::Core::CoreDispatcher value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDependencyObject)->get_Dispatcher(put_abi(value)));
    return value;
}

template <typename D> int64_t consume_Windows_UI_Xaml_IDependencyObject2<D>::RegisterPropertyChangedCallback(Windows::UI::Xaml::DependencyProperty const& dp, Windows::UI::Xaml::DependencyPropertyChangedCallback const& callback) const
{
    int64_t returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDependencyObject2)->RegisterPropertyChangedCallback(get_abi(dp), get_abi(callback), &returnValue));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_IDependencyObject2<D>::UnregisterPropertyChangedCallback(Windows::UI::Xaml::DependencyProperty const& dp, int64_t token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDependencyObject2)->UnregisterPropertyChangedCallback(get_abi(dp), token));
}

template <typename D> Windows::UI::Xaml::DependencyObjectCollection consume_Windows_UI_Xaml_IDependencyObjectCollectionFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::DependencyObjectCollection instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDependencyObjectCollectionFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_IDependencyObjectFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::DependencyObject instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDependencyObjectFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::PropertyMetadata consume_Windows_UI_Xaml_IDependencyProperty<D>::GetMetadata(Windows::UI::Xaml::Interop::TypeName const& forType) const
{
    Windows::UI::Xaml::PropertyMetadata returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDependencyProperty)->GetMetadata(get_abi(forType), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IDependencyPropertyChangedEventArgs<D>::Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDependencyPropertyChangedEventArgs)->get_Property(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_IDependencyPropertyChangedEventArgs<D>::OldValue() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDependencyPropertyChangedEventArgs)->get_OldValue(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_IDependencyPropertyChangedEventArgs<D>::NewValue() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDependencyPropertyChangedEventArgs)->get_NewValue(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_IDependencyPropertyStatics<D>::UnsetValue() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDependencyPropertyStatics)->get_UnsetValue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IDependencyPropertyStatics<D>::Register(param::hstring const& name, Windows::UI::Xaml::Interop::TypeName const& propertyType, Windows::UI::Xaml::Interop::TypeName const& ownerType, Windows::UI::Xaml::PropertyMetadata const& typeMetadata) const
{
    Windows::UI::Xaml::DependencyProperty returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDependencyPropertyStatics)->Register(get_abi(name), get_abi(propertyType), get_abi(ownerType), get_abi(typeMetadata), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IDependencyPropertyStatics<D>::RegisterAttached(param::hstring const& name, Windows::UI::Xaml::Interop::TypeName const& propertyType, Windows::UI::Xaml::Interop::TypeName const& ownerType, Windows::UI::Xaml::PropertyMetadata const& defaultMetadata) const
{
    Windows::UI::Xaml::DependencyProperty returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDependencyPropertyStatics)->RegisterAttached(get_abi(name), get_abi(propertyType), get_abi(ownerType), get_abi(defaultMetadata), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_UI_Xaml_IDispatcherTimer<D>::Interval() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDispatcherTimer)->get_Interval(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IDispatcherTimer<D>::Interval(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDispatcherTimer)->put_Interval(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_IDispatcherTimer<D>::IsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDispatcherTimer)->get_IsEnabled(&value));
    return value;
}

template <typename D> event_token consume_Windows_UI_Xaml_IDispatcherTimer<D>::Tick(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDispatcherTimer)->add_Tick(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IDispatcherTimer> consume_Windows_UI_Xaml_IDispatcherTimer<D>::Tick(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IDispatcherTimer>(this, &abi_t<Windows::UI::Xaml::IDispatcherTimer>::remove_Tick, Tick(value));
}

template <typename D> void consume_Windows_UI_Xaml_IDispatcherTimer<D>::Tick(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDispatcherTimer)->remove_Tick(get_abi(token)));
}

template <typename D> void consume_Windows_UI_Xaml_IDispatcherTimer<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDispatcherTimer)->Start());
}

template <typename D> void consume_Windows_UI_Xaml_IDispatcherTimer<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDispatcherTimer)->Stop());
}

template <typename D> Windows::UI::Xaml::DispatcherTimer consume_Windows_UI_Xaml_IDispatcherTimerFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::DispatcherTimer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDispatcherTimerFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> bool consume_Windows_UI_Xaml_IDragEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IDragEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragEventArgs)->put_Handled(value));
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackage consume_Windows_UI_Xaml_IDragEventArgs<D>::Data() const
{
    Windows::ApplicationModel::DataTransfer::DataPackage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragEventArgs)->get_Data(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IDragEventArgs<D>::Data(Windows::ApplicationModel::DataTransfer::DataPackage const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragEventArgs)->put_Data(get_abi(value)));
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_IDragEventArgs<D>::GetPosition(Windows::UI::Xaml::UIElement const& relativeTo) const
{
    Windows::Foundation::Point returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragEventArgs)->GetPosition(get_abi(relativeTo), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageView consume_Windows_UI_Xaml_IDragEventArgs2<D>::DataView() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageView value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragEventArgs2)->get_DataView(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DragUIOverride consume_Windows_UI_Xaml_IDragEventArgs2<D>::DragUIOverride() const
{
    Windows::UI::Xaml::DragUIOverride value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragEventArgs2)->get_DragUIOverride(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DragDrop::DragDropModifiers consume_Windows_UI_Xaml_IDragEventArgs2<D>::Modifiers() const
{
    Windows::ApplicationModel::DataTransfer::DragDrop::DragDropModifiers value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragEventArgs2)->get_Modifiers(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageOperation consume_Windows_UI_Xaml_IDragEventArgs2<D>::AcceptedOperation() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageOperation value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragEventArgs2)->get_AcceptedOperation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IDragEventArgs2<D>::AcceptedOperation(Windows::ApplicationModel::DataTransfer::DataPackageOperation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragEventArgs2)->put_AcceptedOperation(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DragOperationDeferral consume_Windows_UI_Xaml_IDragEventArgs2<D>::GetDeferral() const
{
    Windows::UI::Xaml::DragOperationDeferral returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragEventArgs2)->GetDeferral(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageOperation consume_Windows_UI_Xaml_IDragEventArgs3<D>::AllowedOperations() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageOperation value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragEventArgs3)->get_AllowedOperations(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IDragOperationDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragOperationDeferral)->Complete());
}

template <typename D> bool consume_Windows_UI_Xaml_IDragStartingEventArgs<D>::Cancel() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragStartingEventArgs)->get_Cancel(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IDragStartingEventArgs<D>::Cancel(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragStartingEventArgs)->put_Cancel(value));
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackage consume_Windows_UI_Xaml_IDragStartingEventArgs<D>::Data() const
{
    Windows::ApplicationModel::DataTransfer::DataPackage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragStartingEventArgs)->get_Data(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DragUI consume_Windows_UI_Xaml_IDragStartingEventArgs<D>::DragUI() const
{
    Windows::UI::Xaml::DragUI value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragStartingEventArgs)->get_DragUI(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DragOperationDeferral consume_Windows_UI_Xaml_IDragStartingEventArgs<D>::GetDeferral() const
{
    Windows::UI::Xaml::DragOperationDeferral returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragStartingEventArgs)->GetDeferral(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_IDragStartingEventArgs<D>::GetPosition(Windows::UI::Xaml::UIElement const& relativeTo) const
{
    Windows::Foundation::Point returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragStartingEventArgs)->GetPosition(get_abi(relativeTo), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageOperation consume_Windows_UI_Xaml_IDragStartingEventArgs2<D>::AllowedOperations() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageOperation value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragStartingEventArgs2)->get_AllowedOperations(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IDragStartingEventArgs2<D>::AllowedOperations(Windows::ApplicationModel::DataTransfer::DataPackageOperation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragStartingEventArgs2)->put_AllowedOperations(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Xaml_IDragUI<D>::SetContentFromBitmapImage(Windows::UI::Xaml::Media::Imaging::BitmapImage const& bitmapImage) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragUI)->SetContentFromBitmapImage(get_abi(bitmapImage)));
}

template <typename D> void consume_Windows_UI_Xaml_IDragUI<D>::SetContentFromBitmapImage(Windows::UI::Xaml::Media::Imaging::BitmapImage const& bitmapImage, Windows::Foundation::Point const& anchorPoint) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragUI)->SetContentFromBitmapImageWithAnchorPoint(get_abi(bitmapImage), get_abi(anchorPoint)));
}

template <typename D> void consume_Windows_UI_Xaml_IDragUI<D>::SetContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragUI)->SetContentFromSoftwareBitmap(get_abi(softwareBitmap)));
}

template <typename D> void consume_Windows_UI_Xaml_IDragUI<D>::SetContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap, Windows::Foundation::Point const& anchorPoint) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragUI)->SetContentFromSoftwareBitmapWithAnchorPoint(get_abi(softwareBitmap), get_abi(anchorPoint)));
}

template <typename D> void consume_Windows_UI_Xaml_IDragUI<D>::SetContentFromDataPackage() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragUI)->SetContentFromDataPackage());
}

template <typename D> hstring consume_Windows_UI_Xaml_IDragUIOverride<D>::Caption() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragUIOverride)->get_Caption(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IDragUIOverride<D>::Caption(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragUIOverride)->put_Caption(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_IDragUIOverride<D>::IsContentVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragUIOverride)->get_IsContentVisible(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IDragUIOverride<D>::IsContentVisible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragUIOverride)->put_IsContentVisible(value));
}

template <typename D> bool consume_Windows_UI_Xaml_IDragUIOverride<D>::IsCaptionVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragUIOverride)->get_IsCaptionVisible(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IDragUIOverride<D>::IsCaptionVisible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragUIOverride)->put_IsCaptionVisible(value));
}

template <typename D> bool consume_Windows_UI_Xaml_IDragUIOverride<D>::IsGlyphVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragUIOverride)->get_IsGlyphVisible(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IDragUIOverride<D>::IsGlyphVisible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragUIOverride)->put_IsGlyphVisible(value));
}

template <typename D> void consume_Windows_UI_Xaml_IDragUIOverride<D>::Clear() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragUIOverride)->Clear());
}

template <typename D> void consume_Windows_UI_Xaml_IDragUIOverride<D>::SetContentFromBitmapImage(Windows::UI::Xaml::Media::Imaging::BitmapImage const& bitmapImage) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragUIOverride)->SetContentFromBitmapImage(get_abi(bitmapImage)));
}

template <typename D> void consume_Windows_UI_Xaml_IDragUIOverride<D>::SetContentFromBitmapImage(Windows::UI::Xaml::Media::Imaging::BitmapImage const& bitmapImage, Windows::Foundation::Point const& anchorPoint) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragUIOverride)->SetContentFromBitmapImageWithAnchorPoint(get_abi(bitmapImage), get_abi(anchorPoint)));
}

template <typename D> void consume_Windows_UI_Xaml_IDragUIOverride<D>::SetContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragUIOverride)->SetContentFromSoftwareBitmap(get_abi(softwareBitmap)));
}

template <typename D> void consume_Windows_UI_Xaml_IDragUIOverride<D>::SetContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap, Windows::Foundation::Point const& anchorPoint) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDragUIOverride)->SetContentFromSoftwareBitmapWithAnchorPoint(get_abi(softwareBitmap), get_abi(anchorPoint)));
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageOperation consume_Windows_UI_Xaml_IDropCompletedEventArgs<D>::DropResult() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageOperation value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDropCompletedEventArgs)->get_DropResult(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Duration consume_Windows_UI_Xaml_IDurationHelperStatics<D>::Automatic() const
{
    Windows::UI::Xaml::Duration value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDurationHelperStatics)->get_Automatic(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Duration consume_Windows_UI_Xaml_IDurationHelperStatics<D>::Forever() const
{
    Windows::UI::Xaml::Duration value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDurationHelperStatics)->get_Forever(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_IDurationHelperStatics<D>::Compare(Windows::UI::Xaml::Duration const& duration1, Windows::UI::Xaml::Duration const& duration2) const
{
    int32_t returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDurationHelperStatics)->Compare(get_abi(duration1), get_abi(duration2), &returnValue));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Duration consume_Windows_UI_Xaml_IDurationHelperStatics<D>::FromTimeSpan(Windows::Foundation::TimeSpan const& timeSpan) const
{
    Windows::UI::Xaml::Duration returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDurationHelperStatics)->FromTimeSpan(get_abi(timeSpan), put_abi(returnValue)));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_IDurationHelperStatics<D>::GetHasTimeSpan(Windows::UI::Xaml::Duration const& target) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDurationHelperStatics)->GetHasTimeSpan(get_abi(target), &value));
    return value;
}

template <typename D> Windows::UI::Xaml::Duration consume_Windows_UI_Xaml_IDurationHelperStatics<D>::Add(Windows::UI::Xaml::Duration const& target, Windows::UI::Xaml::Duration const& duration) const
{
    Windows::UI::Xaml::Duration returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDurationHelperStatics)->Add(get_abi(target), get_abi(duration), put_abi(returnValue)));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_IDurationHelperStatics<D>::Equals(Windows::UI::Xaml::Duration const& target, Windows::UI::Xaml::Duration const& value) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDurationHelperStatics)->Equals(get_abi(target), get_abi(value), &returnValue));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Duration consume_Windows_UI_Xaml_IDurationHelperStatics<D>::Subtract(Windows::UI::Xaml::Duration const& target, Windows::UI::Xaml::Duration const& duration) const
{
    Windows::UI::Xaml::Duration returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IDurationHelperStatics)->Subtract(get_abi(target), get_abi(duration), put_abi(returnValue)));
    return returnValue;
}

template <typename D> double consume_Windows_UI_Xaml_IElementSoundPlayerStatics<D>::Volume() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IElementSoundPlayerStatics)->get_Volume(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IElementSoundPlayerStatics<D>::Volume(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IElementSoundPlayerStatics)->put_Volume(value));
}

template <typename D> Windows::UI::Xaml::ElementSoundPlayerState consume_Windows_UI_Xaml_IElementSoundPlayerStatics<D>::State() const
{
    Windows::UI::Xaml::ElementSoundPlayerState value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IElementSoundPlayerStatics)->get_State(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IElementSoundPlayerStatics<D>::State(Windows::UI::Xaml::ElementSoundPlayerState const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IElementSoundPlayerStatics)->put_State(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Xaml_IElementSoundPlayerStatics<D>::Play(Windows::UI::Xaml::ElementSoundKind const& sound) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IElementSoundPlayerStatics)->Play(get_abi(sound)));
}

template <typename D> Windows::UI::Xaml::ElementSpatialAudioMode consume_Windows_UI_Xaml_IElementSoundPlayerStatics2<D>::SpatialAudioMode() const
{
    Windows::UI::Xaml::ElementSpatialAudioMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IElementSoundPlayerStatics2)->get_SpatialAudioMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IElementSoundPlayerStatics2<D>::SpatialAudioMode(Windows::UI::Xaml::ElementSpatialAudioMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IElementSoundPlayerStatics2)->put_SpatialAudioMode(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IEventTrigger<D>::RoutedEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IEventTrigger)->get_RoutedEvent(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IEventTrigger<D>::RoutedEvent(Windows::UI::Xaml::RoutedEvent const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IEventTrigger)->put_RoutedEvent(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::TriggerActionCollection consume_Windows_UI_Xaml_IEventTrigger<D>::Actions() const
{
    Windows::UI::Xaml::TriggerActionCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IEventTrigger)->get_Actions(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_IExceptionRoutedEventArgs<D>::ErrorMessage() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IExceptionRoutedEventArgs)->get_ErrorMessage(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::TriggerCollection consume_Windows_UI_Xaml_IFrameworkElement<D>::Triggers() const
{
    Windows::UI::Xaml::TriggerCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->get_Triggers(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::ResourceDictionary consume_Windows_UI_Xaml_IFrameworkElement<D>::Resources() const
{
    Windows::UI::Xaml::ResourceDictionary value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->get_Resources(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement<D>::Resources(Windows::UI::Xaml::ResourceDictionary const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->put_Resources(get_abi(value)));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_IFrameworkElement<D>::Tag() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->get_Tag(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement<D>::Tag(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->put_Tag(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Xaml_IFrameworkElement<D>::Language() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->get_Language(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement<D>::Language(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->put_Language(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_IFrameworkElement<D>::ActualWidth() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->get_ActualWidth(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_IFrameworkElement<D>::ActualHeight() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->get_ActualHeight(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_IFrameworkElement<D>::Width() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->get_Width(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement<D>::Width(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->put_Width(value));
}

template <typename D> double consume_Windows_UI_Xaml_IFrameworkElement<D>::Height() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->get_Height(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement<D>::Height(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->put_Height(value));
}

template <typename D> double consume_Windows_UI_Xaml_IFrameworkElement<D>::MinWidth() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->get_MinWidth(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement<D>::MinWidth(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->put_MinWidth(value));
}

template <typename D> double consume_Windows_UI_Xaml_IFrameworkElement<D>::MaxWidth() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->get_MaxWidth(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement<D>::MaxWidth(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->put_MaxWidth(value));
}

template <typename D> double consume_Windows_UI_Xaml_IFrameworkElement<D>::MinHeight() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->get_MinHeight(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement<D>::MinHeight(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->put_MinHeight(value));
}

template <typename D> double consume_Windows_UI_Xaml_IFrameworkElement<D>::MaxHeight() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->get_MaxHeight(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement<D>::MaxHeight(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->put_MaxHeight(value));
}

template <typename D> Windows::UI::Xaml::HorizontalAlignment consume_Windows_UI_Xaml_IFrameworkElement<D>::HorizontalAlignment() const
{
    Windows::UI::Xaml::HorizontalAlignment value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->get_HorizontalAlignment(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement<D>::HorizontalAlignment(Windows::UI::Xaml::HorizontalAlignment const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->put_HorizontalAlignment(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::VerticalAlignment consume_Windows_UI_Xaml_IFrameworkElement<D>::VerticalAlignment() const
{
    Windows::UI::Xaml::VerticalAlignment value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->get_VerticalAlignment(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement<D>::VerticalAlignment(Windows::UI::Xaml::VerticalAlignment const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->put_VerticalAlignment(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Thickness consume_Windows_UI_Xaml_IFrameworkElement<D>::Margin() const
{
    Windows::UI::Xaml::Thickness value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->get_Margin(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement<D>::Margin(Windows::UI::Xaml::Thickness const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->put_Margin(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Xaml_IFrameworkElement<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->get_Name(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement<D>::Name(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->put_Name(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_Xaml_IFrameworkElement<D>::BaseUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->get_BaseUri(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_IFrameworkElement<D>::DataContext() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->get_DataContext(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement<D>::DataContext(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->put_DataContext(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Style consume_Windows_UI_Xaml_IFrameworkElement<D>::Style() const
{
    Windows::UI::Xaml::Style value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->get_Style(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement<D>::Style(Windows::UI::Xaml::Style const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->put_Style(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_IFrameworkElement<D>::Parent() const
{
    Windows::UI::Xaml::DependencyObject value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->get_Parent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::FlowDirection consume_Windows_UI_Xaml_IFrameworkElement<D>::FlowDirection() const
{
    Windows::UI::Xaml::FlowDirection value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->get_FlowDirection(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement<D>::FlowDirection(Windows::UI::Xaml::FlowDirection const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->put_FlowDirection(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IFrameworkElement<D>::Loaded(Windows::UI::Xaml::RoutedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->add_Loaded(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IFrameworkElement> consume_Windows_UI_Xaml_IFrameworkElement<D>::Loaded(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IFrameworkElement>(this, &abi_t<Windows::UI::Xaml::IFrameworkElement>::remove_Loaded, Loaded(value));
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement<D>::Loaded(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->remove_Loaded(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IFrameworkElement<D>::Unloaded(Windows::UI::Xaml::RoutedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->add_Unloaded(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IFrameworkElement> consume_Windows_UI_Xaml_IFrameworkElement<D>::Unloaded(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IFrameworkElement>(this, &abi_t<Windows::UI::Xaml::IFrameworkElement>::remove_Unloaded, Unloaded(value));
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement<D>::Unloaded(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->remove_Unloaded(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IFrameworkElement<D>::SizeChanged(Windows::UI::Xaml::SizeChangedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->add_SizeChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IFrameworkElement> consume_Windows_UI_Xaml_IFrameworkElement<D>::SizeChanged(auto_revoke_t, Windows::UI::Xaml::SizeChangedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IFrameworkElement>(this, &abi_t<Windows::UI::Xaml::IFrameworkElement>::remove_SizeChanged, SizeChanged(value));
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement<D>::SizeChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->remove_SizeChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IFrameworkElement<D>::LayoutUpdated(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->add_LayoutUpdated(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IFrameworkElement> consume_Windows_UI_Xaml_IFrameworkElement<D>::LayoutUpdated(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IFrameworkElement>(this, &abi_t<Windows::UI::Xaml::IFrameworkElement>::remove_LayoutUpdated, LayoutUpdated(value));
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement<D>::LayoutUpdated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->remove_LayoutUpdated(get_abi(token)));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_IFrameworkElement<D>::FindName(param::hstring const& name) const
{
    Windows::Foundation::IInspectable returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->FindName(get_abi(name), put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement<D>::SetBinding(Windows::UI::Xaml::DependencyProperty const& dp, Windows::UI::Xaml::Data::BindingBase const& binding) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement)->SetBinding(get_abi(dp), get_abi(binding)));
}

template <typename D> Windows::UI::Xaml::ElementTheme consume_Windows_UI_Xaml_IFrameworkElement2<D>::RequestedTheme() const
{
    Windows::UI::Xaml::ElementTheme value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement2)->get_RequestedTheme(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement2<D>::RequestedTheme(Windows::UI::Xaml::ElementTheme const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement2)->put_RequestedTheme(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IFrameworkElement2<D>::DataContextChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::DataContextChangedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement2)->add_DataContextChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IFrameworkElement2> consume_Windows_UI_Xaml_IFrameworkElement2<D>::DataContextChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::DataContextChangedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IFrameworkElement2>(this, &abi_t<Windows::UI::Xaml::IFrameworkElement2>::remove_DataContextChanged, DataContextChanged(value));
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement2<D>::DataContextChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement2)->remove_DataContextChanged(get_abi(token)));
}

template <typename D> Windows::UI::Xaml::Data::BindingExpression consume_Windows_UI_Xaml_IFrameworkElement2<D>::GetBindingExpression(Windows::UI::Xaml::DependencyProperty const& dp) const
{
    Windows::UI::Xaml::Data::BindingExpression returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement2)->GetBindingExpression(get_abi(dp), put_abi(returnValue)));
    return returnValue;
}

template <typename D> event_token consume_Windows_UI_Xaml_IFrameworkElement3<D>::Loading(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement3)->add_Loading(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IFrameworkElement3> consume_Windows_UI_Xaml_IFrameworkElement3<D>::Loading(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IFrameworkElement3>(this, &abi_t<Windows::UI::Xaml::IFrameworkElement3>::remove_Loading, Loading(value));
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement3<D>::Loading(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement3)->remove_Loading(get_abi(token)));
}

template <typename D> bool consume_Windows_UI_Xaml_IFrameworkElement4<D>::AllowFocusOnInteraction() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement4)->get_AllowFocusOnInteraction(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement4<D>::AllowFocusOnInteraction(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement4)->put_AllowFocusOnInteraction(value));
}

template <typename D> Windows::UI::Xaml::Thickness consume_Windows_UI_Xaml_IFrameworkElement4<D>::FocusVisualMargin() const
{
    Windows::UI::Xaml::Thickness value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement4)->get_FocusVisualMargin(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement4<D>::FocusVisualMargin(Windows::UI::Xaml::Thickness const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement4)->put_FocusVisualMargin(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Thickness consume_Windows_UI_Xaml_IFrameworkElement4<D>::FocusVisualSecondaryThickness() const
{
    Windows::UI::Xaml::Thickness value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement4)->get_FocusVisualSecondaryThickness(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement4<D>::FocusVisualSecondaryThickness(Windows::UI::Xaml::Thickness const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement4)->put_FocusVisualSecondaryThickness(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Thickness consume_Windows_UI_Xaml_IFrameworkElement4<D>::FocusVisualPrimaryThickness() const
{
    Windows::UI::Xaml::Thickness value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement4)->get_FocusVisualPrimaryThickness(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement4<D>::FocusVisualPrimaryThickness(Windows::UI::Xaml::Thickness const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement4)->put_FocusVisualPrimaryThickness(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_IFrameworkElement4<D>::FocusVisualSecondaryBrush() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement4)->get_FocusVisualSecondaryBrush(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement4<D>::FocusVisualSecondaryBrush(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement4)->put_FocusVisualSecondaryBrush(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_IFrameworkElement4<D>::FocusVisualPrimaryBrush() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement4)->get_FocusVisualPrimaryBrush(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement4<D>::FocusVisualPrimaryBrush(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement4)->put_FocusVisualPrimaryBrush(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_IFrameworkElement4<D>::AllowFocusWhenDisabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement4)->get_AllowFocusWhenDisabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement4<D>::AllowFocusWhenDisabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement4)->put_AllowFocusWhenDisabled(value));
}

template <typename D> Windows::UI::Xaml::ElementTheme consume_Windows_UI_Xaml_IFrameworkElement6<D>::ActualTheme() const
{
    Windows::UI::Xaml::ElementTheme value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement6)->get_ActualTheme(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_UI_Xaml_IFrameworkElement6<D>::ActualThemeChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement6)->add_ActualThemeChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IFrameworkElement6> consume_Windows_UI_Xaml_IFrameworkElement6<D>::ActualThemeChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IFrameworkElement6>(this, &abi_t<Windows::UI::Xaml::IFrameworkElement6>::remove_ActualThemeChanged, ActualThemeChanged(value));
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElement6<D>::ActualThemeChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElement6)->remove_ActualThemeChanged(get_abi(token)));
}

template <typename D> Windows::UI::Xaml::FrameworkElement consume_Windows_UI_Xaml_IFrameworkElementFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::FrameworkElement instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::Foundation::Size consume_Windows_UI_Xaml_IFrameworkElementOverrides<D>::MeasureOverride(Windows::Foundation::Size const& availableSize) const
{
    Windows::Foundation::Size returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementOverrides)->MeasureOverride(get_abi(availableSize), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Size consume_Windows_UI_Xaml_IFrameworkElementOverrides<D>::ArrangeOverride(Windows::Foundation::Size const& finalSize) const
{
    Windows::Foundation::Size returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementOverrides)->ArrangeOverride(get_abi(finalSize), put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElementOverrides<D>::OnApplyTemplate() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementOverrides)->OnApplyTemplate());
}

template <typename D> bool consume_Windows_UI_Xaml_IFrameworkElementOverrides2<D>::GoToElementStateCore(param::hstring const& stateName, bool useTransitions) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementOverrides2)->GoToElementStateCore(get_abi(stateName), useTransitions, &returnValue));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IFrameworkElementStatics<D>::TagProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementStatics)->get_TagProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IFrameworkElementStatics<D>::LanguageProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementStatics)->get_LanguageProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IFrameworkElementStatics<D>::ActualWidthProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementStatics)->get_ActualWidthProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IFrameworkElementStatics<D>::ActualHeightProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementStatics)->get_ActualHeightProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IFrameworkElementStatics<D>::WidthProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementStatics)->get_WidthProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IFrameworkElementStatics<D>::HeightProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementStatics)->get_HeightProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IFrameworkElementStatics<D>::MinWidthProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementStatics)->get_MinWidthProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IFrameworkElementStatics<D>::MaxWidthProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementStatics)->get_MaxWidthProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IFrameworkElementStatics<D>::MinHeightProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementStatics)->get_MinHeightProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IFrameworkElementStatics<D>::MaxHeightProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementStatics)->get_MaxHeightProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IFrameworkElementStatics<D>::HorizontalAlignmentProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementStatics)->get_HorizontalAlignmentProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IFrameworkElementStatics<D>::VerticalAlignmentProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementStatics)->get_VerticalAlignmentProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IFrameworkElementStatics<D>::MarginProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementStatics)->get_MarginProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IFrameworkElementStatics<D>::NameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementStatics)->get_NameProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IFrameworkElementStatics<D>::DataContextProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementStatics)->get_DataContextProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IFrameworkElementStatics<D>::StyleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementStatics)->get_StyleProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IFrameworkElementStatics<D>::FlowDirectionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementStatics)->get_FlowDirectionProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IFrameworkElementStatics2<D>::RequestedThemeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementStatics2)->get_RequestedThemeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IFrameworkElementStatics4<D>::AllowFocusOnInteractionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementStatics4)->get_AllowFocusOnInteractionProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IFrameworkElementStatics4<D>::FocusVisualMarginProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementStatics4)->get_FocusVisualMarginProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IFrameworkElementStatics4<D>::FocusVisualSecondaryThicknessProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementStatics4)->get_FocusVisualSecondaryThicknessProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IFrameworkElementStatics4<D>::FocusVisualPrimaryThicknessProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementStatics4)->get_FocusVisualPrimaryThicknessProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IFrameworkElementStatics4<D>::FocusVisualSecondaryBrushProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementStatics4)->get_FocusVisualSecondaryBrushProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IFrameworkElementStatics4<D>::FocusVisualPrimaryBrushProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementStatics4)->get_FocusVisualPrimaryBrushProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IFrameworkElementStatics4<D>::AllowFocusWhenDisabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementStatics4)->get_AllowFocusWhenDisabledProperty(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IFrameworkElementStatics5<D>::DeferTree(Windows::UI::Xaml::DependencyObject const& element) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementStatics5)->DeferTree(get_abi(element)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IFrameworkElementStatics6<D>::ActualThemeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkElementStatics6)->get_ActualThemeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::FrameworkTemplate consume_Windows_UI_Xaml_IFrameworkTemplateFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::FrameworkTemplate instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IFrameworkTemplateFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::GridLength consume_Windows_UI_Xaml_IGridLengthHelperStatics<D>::Auto() const
{
    Windows::UI::Xaml::GridLength value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IGridLengthHelperStatics)->get_Auto(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::GridLength consume_Windows_UI_Xaml_IGridLengthHelperStatics<D>::FromPixels(double pixels) const
{
    Windows::UI::Xaml::GridLength returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IGridLengthHelperStatics)->FromPixels(pixels, put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::GridLength consume_Windows_UI_Xaml_IGridLengthHelperStatics<D>::FromValueAndType(double value, Windows::UI::Xaml::GridUnitType const& type) const
{
    Windows::UI::Xaml::GridLength returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IGridLengthHelperStatics)->FromValueAndType(value, get_abi(type), put_abi(returnValue)));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_IGridLengthHelperStatics<D>::GetIsAbsolute(Windows::UI::Xaml::GridLength const& target) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IGridLengthHelperStatics)->GetIsAbsolute(get_abi(target), &value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_IGridLengthHelperStatics<D>::GetIsAuto(Windows::UI::Xaml::GridLength const& target) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IGridLengthHelperStatics)->GetIsAuto(get_abi(target), &value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_IGridLengthHelperStatics<D>::GetIsStar(Windows::UI::Xaml::GridLength const& target) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IGridLengthHelperStatics)->GetIsStar(get_abi(target), &value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_IGridLengthHelperStatics<D>::Equals(Windows::UI::Xaml::GridLength const& target, Windows::UI::Xaml::GridLength const& value) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IGridLengthHelperStatics)->Equals(get_abi(target), get_abi(value), &returnValue));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_IMediaFailedRoutedEventArgs<D>::ErrorTrace() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IMediaFailedRoutedEventArgs)->get_ErrorTrace(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_IPointHelperStatics<D>::FromCoordinates(float x, float y) const
{
    Windows::Foundation::Point returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IPointHelperStatics)->FromCoordinates(x, y, put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_IPropertyMetadata<D>::DefaultValue() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IPropertyMetadata)->get_DefaultValue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::CreateDefaultValueCallback consume_Windows_UI_Xaml_IPropertyMetadata<D>::CreateDefaultValueCallback() const
{
    Windows::UI::Xaml::CreateDefaultValueCallback value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IPropertyMetadata)->get_CreateDefaultValueCallback(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::PropertyMetadata consume_Windows_UI_Xaml_IPropertyMetadataFactory<D>::CreateInstanceWithDefaultValue(Windows::Foundation::IInspectable const& defaultValue, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::PropertyMetadata instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IPropertyMetadataFactory)->CreateInstanceWithDefaultValue(get_abi(defaultValue), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::PropertyMetadata consume_Windows_UI_Xaml_IPropertyMetadataFactory<D>::CreateInstanceWithDefaultValueAndCallback(Windows::Foundation::IInspectable const& defaultValue, Windows::UI::Xaml::PropertyChangedCallback const& propertyChangedCallback, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::PropertyMetadata instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IPropertyMetadataFactory)->CreateInstanceWithDefaultValueAndCallback(get_abi(defaultValue), get_abi(propertyChangedCallback), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::PropertyMetadata consume_Windows_UI_Xaml_IPropertyMetadataStatics<D>::Create(Windows::Foundation::IInspectable const& defaultValue) const
{
    Windows::UI::Xaml::PropertyMetadata returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IPropertyMetadataStatics)->CreateWithDefaultValue(get_abi(defaultValue), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::PropertyMetadata consume_Windows_UI_Xaml_IPropertyMetadataStatics<D>::Create(Windows::Foundation::IInspectable const& defaultValue, Windows::UI::Xaml::PropertyChangedCallback const& propertyChangedCallback) const
{
    Windows::UI::Xaml::PropertyMetadata returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IPropertyMetadataStatics)->CreateWithDefaultValueAndCallback(get_abi(defaultValue), get_abi(propertyChangedCallback), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::PropertyMetadata consume_Windows_UI_Xaml_IPropertyMetadataStatics<D>::Create(Windows::UI::Xaml::CreateDefaultValueCallback const& createDefaultValueCallback) const
{
    Windows::UI::Xaml::PropertyMetadata returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IPropertyMetadataStatics)->CreateWithFactory(get_abi(createDefaultValueCallback), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::PropertyMetadata consume_Windows_UI_Xaml_IPropertyMetadataStatics<D>::Create(Windows::UI::Xaml::CreateDefaultValueCallback const& createDefaultValueCallback, Windows::UI::Xaml::PropertyChangedCallback const& propertyChangedCallback) const
{
    Windows::UI::Xaml::PropertyMetadata returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IPropertyMetadataStatics)->CreateWithFactoryAndCallback(get_abi(createDefaultValueCallback), get_abi(propertyChangedCallback), put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_IPropertyPath<D>::Path() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IPropertyPath)->get_Path(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::PropertyPath consume_Windows_UI_Xaml_IPropertyPathFactory<D>::CreateInstance(param::hstring const& path) const
{
    Windows::UI::Xaml::PropertyPath instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IPropertyPathFactory)->CreateInstance(get_abi(path), put_abi(instance)));
    return instance;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Xaml_IRectHelperStatics<D>::Empty() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IRectHelperStatics)->get_Empty(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Xaml_IRectHelperStatics<D>::FromCoordinatesAndDimensions(float x, float y, float width, float height) const
{
    Windows::Foundation::Rect returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IRectHelperStatics)->FromCoordinatesAndDimensions(x, y, width, height, put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Xaml_IRectHelperStatics<D>::FromPoints(Windows::Foundation::Point const& point1, Windows::Foundation::Point const& point2) const
{
    Windows::Foundation::Rect returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IRectHelperStatics)->FromPoints(get_abi(point1), get_abi(point2), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Xaml_IRectHelperStatics<D>::FromLocationAndSize(Windows::Foundation::Point const& location, Windows::Foundation::Size const& size) const
{
    Windows::Foundation::Rect returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IRectHelperStatics)->FromLocationAndSize(get_abi(location), get_abi(size), put_abi(returnValue)));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_IRectHelperStatics<D>::GetIsEmpty(Windows::Foundation::Rect const& target) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IRectHelperStatics)->GetIsEmpty(get_abi(target), &value));
    return value;
}

template <typename D> float consume_Windows_UI_Xaml_IRectHelperStatics<D>::GetBottom(Windows::Foundation::Rect const& target) const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IRectHelperStatics)->GetBottom(get_abi(target), &value));
    return value;
}

template <typename D> float consume_Windows_UI_Xaml_IRectHelperStatics<D>::GetLeft(Windows::Foundation::Rect const& target) const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IRectHelperStatics)->GetLeft(get_abi(target), &value));
    return value;
}

template <typename D> float consume_Windows_UI_Xaml_IRectHelperStatics<D>::GetRight(Windows::Foundation::Rect const& target) const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IRectHelperStatics)->GetRight(get_abi(target), &value));
    return value;
}

template <typename D> float consume_Windows_UI_Xaml_IRectHelperStatics<D>::GetTop(Windows::Foundation::Rect const& target) const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IRectHelperStatics)->GetTop(get_abi(target), &value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_IRectHelperStatics<D>::Contains(Windows::Foundation::Rect const& target, Windows::Foundation::Point const& point) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IRectHelperStatics)->Contains(get_abi(target), get_abi(point), &returnValue));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_IRectHelperStatics<D>::Equals(Windows::Foundation::Rect const& target, Windows::Foundation::Rect const& value) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IRectHelperStatics)->Equals(get_abi(target), get_abi(value), &returnValue));
    return returnValue;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Xaml_IRectHelperStatics<D>::Intersect(Windows::Foundation::Rect const& target, Windows::Foundation::Rect const& rect) const
{
    Windows::Foundation::Rect returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IRectHelperStatics)->Intersect(get_abi(target), get_abi(rect), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Xaml_IRectHelperStatics<D>::Union(Windows::Foundation::Rect const& target, Windows::Foundation::Point const& point) const
{
    Windows::Foundation::Rect returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IRectHelperStatics)->UnionWithPoint(get_abi(target), get_abi(point), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Xaml_IRectHelperStatics<D>::Union(Windows::Foundation::Rect const& target, Windows::Foundation::Rect const& rect) const
{
    Windows::Foundation::Rect returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IRectHelperStatics)->UnionWithRect(get_abi(target), get_abi(rect), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_Xaml_IResourceDictionary<D>::Source() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IResourceDictionary)->get_Source(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IResourceDictionary<D>::Source(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IResourceDictionary)->put_Source(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::ResourceDictionary> consume_Windows_UI_Xaml_IResourceDictionary<D>::MergedDictionaries() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::ResourceDictionary> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IResourceDictionary)->get_MergedDictionaries(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMap<Windows::Foundation::IInspectable, Windows::Foundation::IInspectable> consume_Windows_UI_Xaml_IResourceDictionary<D>::ThemeDictionaries() const
{
    Windows::Foundation::Collections::IMap<Windows::Foundation::IInspectable, Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IResourceDictionary)->get_ThemeDictionaries(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::ResourceDictionary consume_Windows_UI_Xaml_IResourceDictionaryFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::ResourceDictionary instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IResourceDictionaryFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_IRoutedEventArgs<D>::OriginalSource() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IRoutedEventArgs)->get_OriginalSource(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEventArgs consume_Windows_UI_Xaml_IRoutedEventArgsFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::RoutedEventArgs instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IRoutedEventArgsFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_ISetter<D>::Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::ISetter)->get_Property(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_ISetter<D>::Property(Windows::UI::Xaml::DependencyProperty const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::ISetter)->put_Property(get_abi(value)));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_ISetter<D>::Value() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::ISetter)->get_Value(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_ISetter<D>::Value(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::ISetter)->put_Value(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::TargetPropertyPath consume_Windows_UI_Xaml_ISetter2<D>::Target() const
{
    Windows::UI::Xaml::TargetPropertyPath value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::ISetter2)->get_Target(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_ISetter2<D>::Target(Windows::UI::Xaml::TargetPropertyPath const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::ISetter2)->put_Target(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_ISetterBase<D>::IsSealed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::ISetterBase)->get_IsSealed(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_ISetterBaseCollection<D>::IsSealed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::ISetterBaseCollection)->get_IsSealed(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Setter consume_Windows_UI_Xaml_ISetterFactory<D>::CreateInstance(Windows::UI::Xaml::DependencyProperty const& targetProperty, Windows::Foundation::IInspectable const& value) const
{
    Windows::UI::Xaml::Setter instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::ISetterFactory)->CreateInstance(get_abi(targetProperty), get_abi(value), put_abi(instance)));
    return instance;
}

template <typename D> Windows::Foundation::Size consume_Windows_UI_Xaml_ISizeChangedEventArgs<D>::PreviousSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::ISizeChangedEventArgs)->get_PreviousSize(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Windows_UI_Xaml_ISizeChangedEventArgs<D>::NewSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::ISizeChangedEventArgs)->get_NewSize(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Windows_UI_Xaml_ISizeHelperStatics<D>::Empty() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::ISizeHelperStatics)->get_Empty(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Windows_UI_Xaml_ISizeHelperStatics<D>::FromDimensions(float width, float height) const
{
    Windows::Foundation::Size returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::ISizeHelperStatics)->FromDimensions(width, height, put_abi(returnValue)));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_ISizeHelperStatics<D>::GetIsEmpty(Windows::Foundation::Size const& target) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::ISizeHelperStatics)->GetIsEmpty(get_abi(target), &value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_ISizeHelperStatics<D>::Equals(Windows::Foundation::Size const& target, Windows::Foundation::Size const& value) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::ISizeHelperStatics)->Equals(get_abi(target), get_abi(value), &returnValue));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_IStateTrigger<D>::IsActive() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IStateTrigger)->get_IsActive(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IStateTrigger<D>::IsActive(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IStateTrigger)->put_IsActive(value));
}

template <typename D> Windows::UI::Xaml::StateTriggerBase consume_Windows_UI_Xaml_IStateTriggerBaseFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::StateTriggerBase instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IStateTriggerBaseFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> void consume_Windows_UI_Xaml_IStateTriggerBaseProtected<D>::SetActive(bool IsActive) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IStateTriggerBaseProtected)->SetActive(IsActive));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IStateTriggerStatics<D>::IsActiveProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IStateTriggerStatics)->get_IsActiveProperty(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_IStyle<D>::IsSealed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IStyle)->get_IsSealed(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::SetterBaseCollection consume_Windows_UI_Xaml_IStyle<D>::Setters() const
{
    Windows::UI::Xaml::SetterBaseCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IStyle)->get_Setters(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Interop::TypeName consume_Windows_UI_Xaml_IStyle<D>::TargetType() const
{
    Windows::UI::Xaml::Interop::TypeName value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IStyle)->get_TargetType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IStyle<D>::TargetType(Windows::UI::Xaml::Interop::TypeName const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IStyle)->put_TargetType(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Style consume_Windows_UI_Xaml_IStyle<D>::BasedOn() const
{
    Windows::UI::Xaml::Style value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IStyle)->get_BasedOn(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IStyle<D>::BasedOn(Windows::UI::Xaml::Style const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IStyle)->put_BasedOn(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Xaml_IStyle<D>::Seal() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IStyle)->Seal());
}

template <typename D> Windows::UI::Xaml::Style consume_Windows_UI_Xaml_IStyleFactory<D>::CreateInstance(Windows::UI::Xaml::Interop::TypeName const& targetType) const
{
    Windows::UI::Xaml::Style instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IStyleFactory)->CreateInstance(get_abi(targetType), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::PropertyPath consume_Windows_UI_Xaml_ITargetPropertyPath<D>::Path() const
{
    Windows::UI::Xaml::PropertyPath value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::ITargetPropertyPath)->get_Path(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_ITargetPropertyPath<D>::Path(Windows::UI::Xaml::PropertyPath const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::ITargetPropertyPath)->put_Path(get_abi(value)));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_ITargetPropertyPath<D>::Target() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::ITargetPropertyPath)->get_Target(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_ITargetPropertyPath<D>::Target(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::ITargetPropertyPath)->put_Target(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::TargetPropertyPath consume_Windows_UI_Xaml_ITargetPropertyPathFactory<D>::CreateInstance(Windows::UI::Xaml::DependencyProperty const& targetProperty) const
{
    Windows::UI::Xaml::TargetPropertyPath instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::ITargetPropertyPathFactory)->CreateInstance(get_abi(targetProperty), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Thickness consume_Windows_UI_Xaml_IThicknessHelperStatics<D>::FromLengths(double left, double top, double right, double bottom) const
{
    Windows::UI::Xaml::Thickness returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IThicknessHelperStatics)->FromLengths(left, top, right, bottom, put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Thickness consume_Windows_UI_Xaml_IThicknessHelperStatics<D>::FromUniformLength(double uniformLength) const
{
    Windows::UI::Xaml::Thickness returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IThicknessHelperStatics)->FromUniformLength(uniformLength, put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Size consume_Windows_UI_Xaml_IUIElement<D>::DesiredSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->get_DesiredSize(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_IUIElement<D>::AllowDrop() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->get_AllowDrop(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::AllowDrop(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->put_AllowDrop(value));
}

template <typename D> double consume_Windows_UI_Xaml_IUIElement<D>::Opacity() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->get_Opacity(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::Opacity(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->put_Opacity(value));
}

template <typename D> Windows::UI::Xaml::Media::RectangleGeometry consume_Windows_UI_Xaml_IUIElement<D>::Clip() const
{
    Windows::UI::Xaml::Media::RectangleGeometry value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->get_Clip(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::Clip(Windows::UI::Xaml::Media::RectangleGeometry const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->put_Clip(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Transform consume_Windows_UI_Xaml_IUIElement<D>::RenderTransform() const
{
    Windows::UI::Xaml::Media::Transform value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->get_RenderTransform(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::RenderTransform(Windows::UI::Xaml::Media::Transform const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->put_RenderTransform(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Projection consume_Windows_UI_Xaml_IUIElement<D>::Projection() const
{
    Windows::UI::Xaml::Media::Projection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->get_Projection(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::Projection(Windows::UI::Xaml::Media::Projection const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->put_Projection(get_abi(value)));
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_IUIElement<D>::RenderTransformOrigin() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->get_RenderTransformOrigin(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::RenderTransformOrigin(Windows::Foundation::Point const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->put_RenderTransformOrigin(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_IUIElement<D>::IsHitTestVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->get_IsHitTestVisible(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::IsHitTestVisible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->put_IsHitTestVisible(value));
}

template <typename D> Windows::UI::Xaml::Visibility consume_Windows_UI_Xaml_IUIElement<D>::Visibility() const
{
    Windows::UI::Xaml::Visibility value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->get_Visibility(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::Visibility(Windows::UI::Xaml::Visibility const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->put_Visibility(get_abi(value)));
}

template <typename D> Windows::Foundation::Size consume_Windows_UI_Xaml_IUIElement<D>::RenderSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->get_RenderSize(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_IUIElement<D>::UseLayoutRounding() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->get_UseLayoutRounding(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::UseLayoutRounding(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->put_UseLayoutRounding(value));
}

template <typename D> Windows::UI::Xaml::Media::Animation::TransitionCollection consume_Windows_UI_Xaml_IUIElement<D>::Transitions() const
{
    Windows::UI::Xaml::Media::Animation::TransitionCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->get_Transitions(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::Transitions(Windows::UI::Xaml::Media::Animation::TransitionCollection const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->put_Transitions(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::CacheMode consume_Windows_UI_Xaml_IUIElement<D>::CacheMode() const
{
    Windows::UI::Xaml::Media::CacheMode value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->get_CacheMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::CacheMode(Windows::UI::Xaml::Media::CacheMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->put_CacheMode(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_IUIElement<D>::IsTapEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->get_IsTapEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::IsTapEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->put_IsTapEnabled(value));
}

template <typename D> bool consume_Windows_UI_Xaml_IUIElement<D>::IsDoubleTapEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->get_IsDoubleTapEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::IsDoubleTapEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->put_IsDoubleTapEnabled(value));
}

template <typename D> bool consume_Windows_UI_Xaml_IUIElement<D>::IsRightTapEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->get_IsRightTapEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::IsRightTapEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->put_IsRightTapEnabled(value));
}

template <typename D> bool consume_Windows_UI_Xaml_IUIElement<D>::IsHoldingEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->get_IsHoldingEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::IsHoldingEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->put_IsHoldingEnabled(value));
}

template <typename D> Windows::UI::Xaml::Input::ManipulationModes consume_Windows_UI_Xaml_IUIElement<D>::ManipulationMode() const
{
    Windows::UI::Xaml::Input::ManipulationModes value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->get_ManipulationMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::ManipulationMode(Windows::UI::Xaml::Input::ManipulationModes const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->put_ManipulationMode(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Input::Pointer> consume_Windows_UI_Xaml_IUIElement<D>::PointerCaptures() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Input::Pointer> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->get_PointerCaptures(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement<D>::KeyUp(Windows::UI::Xaml::Input::KeyEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->add_KeyUp(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement> consume_Windows_UI_Xaml_IUIElement<D>::KeyUp(auto_revoke_t, Windows::UI::Xaml::Input::KeyEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement>(this, &abi_t<Windows::UI::Xaml::IUIElement>::remove_KeyUp, KeyUp(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::KeyUp(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->remove_KeyUp(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement<D>::KeyDown(Windows::UI::Xaml::Input::KeyEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->add_KeyDown(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement> consume_Windows_UI_Xaml_IUIElement<D>::KeyDown(auto_revoke_t, Windows::UI::Xaml::Input::KeyEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement>(this, &abi_t<Windows::UI::Xaml::IUIElement>::remove_KeyDown, KeyDown(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::KeyDown(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->remove_KeyDown(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement<D>::GotFocus(Windows::UI::Xaml::RoutedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->add_GotFocus(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement> consume_Windows_UI_Xaml_IUIElement<D>::GotFocus(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement>(this, &abi_t<Windows::UI::Xaml::IUIElement>::remove_GotFocus, GotFocus(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::GotFocus(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->remove_GotFocus(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement<D>::LostFocus(Windows::UI::Xaml::RoutedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->add_LostFocus(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement> consume_Windows_UI_Xaml_IUIElement<D>::LostFocus(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement>(this, &abi_t<Windows::UI::Xaml::IUIElement>::remove_LostFocus, LostFocus(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::LostFocus(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->remove_LostFocus(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement<D>::DragEnter(Windows::UI::Xaml::DragEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->add_DragEnter(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement> consume_Windows_UI_Xaml_IUIElement<D>::DragEnter(auto_revoke_t, Windows::UI::Xaml::DragEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement>(this, &abi_t<Windows::UI::Xaml::IUIElement>::remove_DragEnter, DragEnter(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::DragEnter(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->remove_DragEnter(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement<D>::DragLeave(Windows::UI::Xaml::DragEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->add_DragLeave(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement> consume_Windows_UI_Xaml_IUIElement<D>::DragLeave(auto_revoke_t, Windows::UI::Xaml::DragEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement>(this, &abi_t<Windows::UI::Xaml::IUIElement>::remove_DragLeave, DragLeave(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::DragLeave(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->remove_DragLeave(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement<D>::DragOver(Windows::UI::Xaml::DragEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->add_DragOver(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement> consume_Windows_UI_Xaml_IUIElement<D>::DragOver(auto_revoke_t, Windows::UI::Xaml::DragEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement>(this, &abi_t<Windows::UI::Xaml::IUIElement>::remove_DragOver, DragOver(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::DragOver(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->remove_DragOver(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement<D>::Drop(Windows::UI::Xaml::DragEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->add_Drop(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement> consume_Windows_UI_Xaml_IUIElement<D>::Drop(auto_revoke_t, Windows::UI::Xaml::DragEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement>(this, &abi_t<Windows::UI::Xaml::IUIElement>::remove_Drop, Drop(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::Drop(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->remove_Drop(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement<D>::PointerPressed(Windows::UI::Xaml::Input::PointerEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->add_PointerPressed(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement> consume_Windows_UI_Xaml_IUIElement<D>::PointerPressed(auto_revoke_t, Windows::UI::Xaml::Input::PointerEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement>(this, &abi_t<Windows::UI::Xaml::IUIElement>::remove_PointerPressed, PointerPressed(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::PointerPressed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->remove_PointerPressed(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement<D>::PointerMoved(Windows::UI::Xaml::Input::PointerEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->add_PointerMoved(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement> consume_Windows_UI_Xaml_IUIElement<D>::PointerMoved(auto_revoke_t, Windows::UI::Xaml::Input::PointerEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement>(this, &abi_t<Windows::UI::Xaml::IUIElement>::remove_PointerMoved, PointerMoved(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::PointerMoved(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->remove_PointerMoved(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement<D>::PointerReleased(Windows::UI::Xaml::Input::PointerEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->add_PointerReleased(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement> consume_Windows_UI_Xaml_IUIElement<D>::PointerReleased(auto_revoke_t, Windows::UI::Xaml::Input::PointerEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement>(this, &abi_t<Windows::UI::Xaml::IUIElement>::remove_PointerReleased, PointerReleased(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::PointerReleased(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->remove_PointerReleased(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement<D>::PointerEntered(Windows::UI::Xaml::Input::PointerEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->add_PointerEntered(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement> consume_Windows_UI_Xaml_IUIElement<D>::PointerEntered(auto_revoke_t, Windows::UI::Xaml::Input::PointerEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement>(this, &abi_t<Windows::UI::Xaml::IUIElement>::remove_PointerEntered, PointerEntered(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::PointerEntered(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->remove_PointerEntered(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement<D>::PointerExited(Windows::UI::Xaml::Input::PointerEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->add_PointerExited(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement> consume_Windows_UI_Xaml_IUIElement<D>::PointerExited(auto_revoke_t, Windows::UI::Xaml::Input::PointerEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement>(this, &abi_t<Windows::UI::Xaml::IUIElement>::remove_PointerExited, PointerExited(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::PointerExited(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->remove_PointerExited(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement<D>::PointerCaptureLost(Windows::UI::Xaml::Input::PointerEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->add_PointerCaptureLost(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement> consume_Windows_UI_Xaml_IUIElement<D>::PointerCaptureLost(auto_revoke_t, Windows::UI::Xaml::Input::PointerEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement>(this, &abi_t<Windows::UI::Xaml::IUIElement>::remove_PointerCaptureLost, PointerCaptureLost(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::PointerCaptureLost(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->remove_PointerCaptureLost(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement<D>::PointerCanceled(Windows::UI::Xaml::Input::PointerEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->add_PointerCanceled(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement> consume_Windows_UI_Xaml_IUIElement<D>::PointerCanceled(auto_revoke_t, Windows::UI::Xaml::Input::PointerEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement>(this, &abi_t<Windows::UI::Xaml::IUIElement>::remove_PointerCanceled, PointerCanceled(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::PointerCanceled(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->remove_PointerCanceled(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement<D>::PointerWheelChanged(Windows::UI::Xaml::Input::PointerEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->add_PointerWheelChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement> consume_Windows_UI_Xaml_IUIElement<D>::PointerWheelChanged(auto_revoke_t, Windows::UI::Xaml::Input::PointerEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement>(this, &abi_t<Windows::UI::Xaml::IUIElement>::remove_PointerWheelChanged, PointerWheelChanged(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::PointerWheelChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->remove_PointerWheelChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement<D>::Tapped(Windows::UI::Xaml::Input::TappedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->add_Tapped(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement> consume_Windows_UI_Xaml_IUIElement<D>::Tapped(auto_revoke_t, Windows::UI::Xaml::Input::TappedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement>(this, &abi_t<Windows::UI::Xaml::IUIElement>::remove_Tapped, Tapped(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::Tapped(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->remove_Tapped(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement<D>::DoubleTapped(Windows::UI::Xaml::Input::DoubleTappedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->add_DoubleTapped(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement> consume_Windows_UI_Xaml_IUIElement<D>::DoubleTapped(auto_revoke_t, Windows::UI::Xaml::Input::DoubleTappedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement>(this, &abi_t<Windows::UI::Xaml::IUIElement>::remove_DoubleTapped, DoubleTapped(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::DoubleTapped(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->remove_DoubleTapped(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement<D>::Holding(Windows::UI::Xaml::Input::HoldingEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->add_Holding(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement> consume_Windows_UI_Xaml_IUIElement<D>::Holding(auto_revoke_t, Windows::UI::Xaml::Input::HoldingEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement>(this, &abi_t<Windows::UI::Xaml::IUIElement>::remove_Holding, Holding(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::Holding(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->remove_Holding(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement<D>::RightTapped(Windows::UI::Xaml::Input::RightTappedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->add_RightTapped(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement> consume_Windows_UI_Xaml_IUIElement<D>::RightTapped(auto_revoke_t, Windows::UI::Xaml::Input::RightTappedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement>(this, &abi_t<Windows::UI::Xaml::IUIElement>::remove_RightTapped, RightTapped(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::RightTapped(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->remove_RightTapped(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement<D>::ManipulationStarting(Windows::UI::Xaml::Input::ManipulationStartingEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->add_ManipulationStarting(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement> consume_Windows_UI_Xaml_IUIElement<D>::ManipulationStarting(auto_revoke_t, Windows::UI::Xaml::Input::ManipulationStartingEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement>(this, &abi_t<Windows::UI::Xaml::IUIElement>::remove_ManipulationStarting, ManipulationStarting(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::ManipulationStarting(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->remove_ManipulationStarting(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement<D>::ManipulationInertiaStarting(Windows::UI::Xaml::Input::ManipulationInertiaStartingEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->add_ManipulationInertiaStarting(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement> consume_Windows_UI_Xaml_IUIElement<D>::ManipulationInertiaStarting(auto_revoke_t, Windows::UI::Xaml::Input::ManipulationInertiaStartingEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement>(this, &abi_t<Windows::UI::Xaml::IUIElement>::remove_ManipulationInertiaStarting, ManipulationInertiaStarting(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::ManipulationInertiaStarting(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->remove_ManipulationInertiaStarting(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement<D>::ManipulationStarted(Windows::UI::Xaml::Input::ManipulationStartedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->add_ManipulationStarted(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement> consume_Windows_UI_Xaml_IUIElement<D>::ManipulationStarted(auto_revoke_t, Windows::UI::Xaml::Input::ManipulationStartedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement>(this, &abi_t<Windows::UI::Xaml::IUIElement>::remove_ManipulationStarted, ManipulationStarted(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::ManipulationStarted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->remove_ManipulationStarted(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement<D>::ManipulationDelta(Windows::UI::Xaml::Input::ManipulationDeltaEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->add_ManipulationDelta(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement> consume_Windows_UI_Xaml_IUIElement<D>::ManipulationDelta(auto_revoke_t, Windows::UI::Xaml::Input::ManipulationDeltaEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement>(this, &abi_t<Windows::UI::Xaml::IUIElement>::remove_ManipulationDelta, ManipulationDelta(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::ManipulationDelta(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->remove_ManipulationDelta(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement<D>::ManipulationCompleted(Windows::UI::Xaml::Input::ManipulationCompletedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->add_ManipulationCompleted(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement> consume_Windows_UI_Xaml_IUIElement<D>::ManipulationCompleted(auto_revoke_t, Windows::UI::Xaml::Input::ManipulationCompletedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement>(this, &abi_t<Windows::UI::Xaml::IUIElement>::remove_ManipulationCompleted, ManipulationCompleted(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::ManipulationCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->remove_ManipulationCompleted(get_abi(token)));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::Measure(Windows::Foundation::Size const& availableSize) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->Measure(get_abi(availableSize)));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::Arrange(Windows::Foundation::Rect const& finalRect) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->Arrange(get_abi(finalRect)));
}

template <typename D> bool consume_Windows_UI_Xaml_IUIElement<D>::CapturePointer(Windows::UI::Xaml::Input::Pointer const& value) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->CapturePointer(get_abi(value), &returnValue));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::ReleasePointerCapture(Windows::UI::Xaml::Input::Pointer const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->ReleasePointerCapture(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::ReleasePointerCaptures() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->ReleasePointerCaptures());
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::AddHandler(Windows::UI::Xaml::RoutedEvent const& routedEvent, Windows::Foundation::IInspectable const& handler, bool handledEventsToo) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->AddHandler(get_abi(routedEvent), get_abi(handler), handledEventsToo));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::RemoveHandler(Windows::UI::Xaml::RoutedEvent const& routedEvent, Windows::Foundation::IInspectable const& handler) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->RemoveHandler(get_abi(routedEvent), get_abi(handler)));
}

template <typename D> Windows::UI::Xaml::Media::GeneralTransform consume_Windows_UI_Xaml_IUIElement<D>::TransformToVisual(Windows::UI::Xaml::UIElement const& visual) const
{
    Windows::UI::Xaml::Media::GeneralTransform returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->TransformToVisual(get_abi(visual), put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::InvalidateMeasure() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->InvalidateMeasure());
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::InvalidateArrange() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->InvalidateArrange());
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement<D>::UpdateLayout() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement)->UpdateLayout());
}

template <typename D> Windows::UI::Xaml::Media::ElementCompositeMode consume_Windows_UI_Xaml_IUIElement2<D>::CompositeMode() const
{
    Windows::UI::Xaml::Media::ElementCompositeMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement2)->get_CompositeMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement2<D>::CompositeMode(Windows::UI::Xaml::Media::ElementCompositeMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement2)->put_CompositeMode(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_IUIElement2<D>::CancelDirectManipulations() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement2)->CancelDirectManipulations(&returnValue));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Media::Media3D::Transform3D consume_Windows_UI_Xaml_IUIElement3<D>::Transform3D() const
{
    Windows::UI::Xaml::Media::Media3D::Transform3D value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement3)->get_Transform3D(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement3<D>::Transform3D(Windows::UI::Xaml::Media::Media3D::Transform3D const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement3)->put_Transform3D(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_IUIElement3<D>::CanDrag() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement3)->get_CanDrag(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement3<D>::CanDrag(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement3)->put_CanDrag(value));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement3<D>::DragStarting(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DragStartingEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement3)->add_DragStarting(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement3> consume_Windows_UI_Xaml_IUIElement3<D>::DragStarting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DragStartingEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement3>(this, &abi_t<Windows::UI::Xaml::IUIElement3>::remove_DragStarting, DragStarting(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement3<D>::DragStarting(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement3)->remove_DragStarting(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement3<D>::DropCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DropCompletedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement3)->add_DropCompleted(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement3> consume_Windows_UI_Xaml_IUIElement3<D>::DropCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DropCompletedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement3>(this, &abi_t<Windows::UI::Xaml::IUIElement3>::remove_DropCompleted, DropCompleted(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement3<D>::DropCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement3)->remove_DropCompleted(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation> consume_Windows_UI_Xaml_IUIElement3<D>::StartDragAsync(Windows::UI::Input::PointerPoint const& pointerPoint) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement3)->StartDragAsync(get_abi(pointerPoint), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::FlyoutBase consume_Windows_UI_Xaml_IUIElement4<D>::ContextFlyout() const
{
    Windows::UI::Xaml::Controls::Primitives::FlyoutBase value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement4)->get_ContextFlyout(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement4<D>::ContextFlyout(Windows::UI::Xaml::Controls::Primitives::FlyoutBase const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement4)->put_ContextFlyout(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_IUIElement4<D>::ExitDisplayModeOnAccessKeyInvoked() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement4)->get_ExitDisplayModeOnAccessKeyInvoked(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement4<D>::ExitDisplayModeOnAccessKeyInvoked(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement4)->put_ExitDisplayModeOnAccessKeyInvoked(value));
}

template <typename D> bool consume_Windows_UI_Xaml_IUIElement4<D>::IsAccessKeyScope() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement4)->get_IsAccessKeyScope(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement4<D>::IsAccessKeyScope(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement4)->put_IsAccessKeyScope(value));
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_IUIElement4<D>::AccessKeyScopeOwner() const
{
    Windows::UI::Xaml::DependencyObject value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement4)->get_AccessKeyScopeOwner(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement4<D>::AccessKeyScopeOwner(Windows::UI::Xaml::DependencyObject const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement4)->put_AccessKeyScopeOwner(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Xaml_IUIElement4<D>::AccessKey() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement4)->get_AccessKey(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement4<D>::AccessKey(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement4)->put_AccessKey(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement4<D>::ContextRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::ContextRequestedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement4)->add_ContextRequested(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement4> consume_Windows_UI_Xaml_IUIElement4<D>::ContextRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::ContextRequestedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement4>(this, &abi_t<Windows::UI::Xaml::IUIElement4>::remove_ContextRequested, ContextRequested(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement4<D>::ContextRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement4)->remove_ContextRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement4<D>::ContextCanceled(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::RoutedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement4)->add_ContextCanceled(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement4> consume_Windows_UI_Xaml_IUIElement4<D>::ContextCanceled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::RoutedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement4>(this, &abi_t<Windows::UI::Xaml::IUIElement4>::remove_ContextCanceled, ContextCanceled(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement4<D>::ContextCanceled(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement4)->remove_ContextCanceled(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement4<D>::AccessKeyDisplayRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement4)->add_AccessKeyDisplayRequested(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement4> consume_Windows_UI_Xaml_IUIElement4<D>::AccessKeyDisplayRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement4>(this, &abi_t<Windows::UI::Xaml::IUIElement4>::remove_AccessKeyDisplayRequested, AccessKeyDisplayRequested(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement4<D>::AccessKeyDisplayRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement4)->remove_AccessKeyDisplayRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement4<D>::AccessKeyDisplayDismissed(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement4)->add_AccessKeyDisplayDismissed(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement4> consume_Windows_UI_Xaml_IUIElement4<D>::AccessKeyDisplayDismissed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement4>(this, &abi_t<Windows::UI::Xaml::IUIElement4>::remove_AccessKeyDisplayDismissed, AccessKeyDisplayDismissed(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement4<D>::AccessKeyDisplayDismissed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement4)->remove_AccessKeyDisplayDismissed(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement4<D>::AccessKeyInvoked(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement4)->add_AccessKeyInvoked(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement4> consume_Windows_UI_Xaml_IUIElement4<D>::AccessKeyInvoked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement4>(this, &abi_t<Windows::UI::Xaml::IUIElement4>::remove_AccessKeyInvoked, AccessKeyInvoked(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement4<D>::AccessKeyInvoked(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement4)->remove_AccessKeyInvoked(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::XamlLight> consume_Windows_UI_Xaml_IUIElement5<D>::Lights() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::XamlLight> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement5)->get_Lights(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Input::KeyTipPlacementMode consume_Windows_UI_Xaml_IUIElement5<D>::KeyTipPlacementMode() const
{
    Windows::UI::Xaml::Input::KeyTipPlacementMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement5)->get_KeyTipPlacementMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement5<D>::KeyTipPlacementMode(Windows::UI::Xaml::Input::KeyTipPlacementMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement5)->put_KeyTipPlacementMode(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_IUIElement5<D>::KeyTipHorizontalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement5)->get_KeyTipHorizontalOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement5<D>::KeyTipHorizontalOffset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement5)->put_KeyTipHorizontalOffset(value));
}

template <typename D> double consume_Windows_UI_Xaml_IUIElement5<D>::KeyTipVerticalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement5)->get_KeyTipVerticalOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement5<D>::KeyTipVerticalOffset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement5)->put_KeyTipVerticalOffset(value));
}

template <typename D> Windows::UI::Xaml::Input::XYFocusKeyboardNavigationMode consume_Windows_UI_Xaml_IUIElement5<D>::XYFocusKeyboardNavigation() const
{
    Windows::UI::Xaml::Input::XYFocusKeyboardNavigationMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement5)->get_XYFocusKeyboardNavigation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement5<D>::XYFocusKeyboardNavigation(Windows::UI::Xaml::Input::XYFocusKeyboardNavigationMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement5)->put_XYFocusKeyboardNavigation(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Input::XYFocusNavigationStrategy consume_Windows_UI_Xaml_IUIElement5<D>::XYFocusUpNavigationStrategy() const
{
    Windows::UI::Xaml::Input::XYFocusNavigationStrategy value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement5)->get_XYFocusUpNavigationStrategy(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement5<D>::XYFocusUpNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement5)->put_XYFocusUpNavigationStrategy(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Input::XYFocusNavigationStrategy consume_Windows_UI_Xaml_IUIElement5<D>::XYFocusDownNavigationStrategy() const
{
    Windows::UI::Xaml::Input::XYFocusNavigationStrategy value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement5)->get_XYFocusDownNavigationStrategy(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement5<D>::XYFocusDownNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement5)->put_XYFocusDownNavigationStrategy(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Input::XYFocusNavigationStrategy consume_Windows_UI_Xaml_IUIElement5<D>::XYFocusLeftNavigationStrategy() const
{
    Windows::UI::Xaml::Input::XYFocusNavigationStrategy value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement5)->get_XYFocusLeftNavigationStrategy(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement5<D>::XYFocusLeftNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement5)->put_XYFocusLeftNavigationStrategy(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Input::XYFocusNavigationStrategy consume_Windows_UI_Xaml_IUIElement5<D>::XYFocusRightNavigationStrategy() const
{
    Windows::UI::Xaml::Input::XYFocusNavigationStrategy value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement5)->get_XYFocusRightNavigationStrategy(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement5<D>::XYFocusRightNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement5)->put_XYFocusRightNavigationStrategy(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::ElementHighContrastAdjustment consume_Windows_UI_Xaml_IUIElement5<D>::HighContrastAdjustment() const
{
    Windows::UI::Xaml::ElementHighContrastAdjustment value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement5)->get_HighContrastAdjustment(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement5<D>::HighContrastAdjustment(Windows::UI::Xaml::ElementHighContrastAdjustment const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement5)->put_HighContrastAdjustment(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Input::KeyboardNavigationMode consume_Windows_UI_Xaml_IUIElement5<D>::TabFocusNavigation() const
{
    Windows::UI::Xaml::Input::KeyboardNavigationMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement5)->get_TabFocusNavigation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement5<D>::TabFocusNavigation(Windows::UI::Xaml::Input::KeyboardNavigationMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement5)->put_TabFocusNavigation(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement5<D>::GettingFocus(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::GettingFocusEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement5)->add_GettingFocus(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement5> consume_Windows_UI_Xaml_IUIElement5<D>::GettingFocus(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::GettingFocusEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement5>(this, &abi_t<Windows::UI::Xaml::IUIElement5>::remove_GettingFocus, GettingFocus(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement5<D>::GettingFocus(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement5)->remove_GettingFocus(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement5<D>::LosingFocus(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::LosingFocusEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement5)->add_LosingFocus(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement5> consume_Windows_UI_Xaml_IUIElement5<D>::LosingFocus(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::LosingFocusEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement5>(this, &abi_t<Windows::UI::Xaml::IUIElement5>::remove_LosingFocus, LosingFocus(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement5<D>::LosingFocus(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement5)->remove_LosingFocus(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement5<D>::NoFocusCandidateFound(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement5)->add_NoFocusCandidateFound(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement5> consume_Windows_UI_Xaml_IUIElement5<D>::NoFocusCandidateFound(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement5>(this, &abi_t<Windows::UI::Xaml::IUIElement5>::remove_NoFocusCandidateFound, NoFocusCandidateFound(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement5<D>::NoFocusCandidateFound(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement5)->remove_NoFocusCandidateFound(get_abi(token)));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement5<D>::StartBringIntoView() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement5)->StartBringIntoView());
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement5<D>::StartBringIntoView(Windows::UI::Xaml::BringIntoViewOptions const& options) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement5)->StartBringIntoViewWithOptions(get_abi(options)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Input::KeyboardAccelerator> consume_Windows_UI_Xaml_IUIElement7<D>::KeyboardAccelerators() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Input::KeyboardAccelerator> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement7)->get_KeyboardAccelerators(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement7<D>::CharacterReceived(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::CharacterReceivedRoutedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement7)->add_CharacterReceived(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement7> consume_Windows_UI_Xaml_IUIElement7<D>::CharacterReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::CharacterReceivedRoutedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement7>(this, &abi_t<Windows::UI::Xaml::IUIElement7>::remove_CharacterReceived, CharacterReceived(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement7<D>::CharacterReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement7)->remove_CharacterReceived(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement7<D>::ProcessKeyboardAccelerators(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement7)->add_ProcessKeyboardAccelerators(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement7> consume_Windows_UI_Xaml_IUIElement7<D>::ProcessKeyboardAccelerators(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement7>(this, &abi_t<Windows::UI::Xaml::IUIElement7>::remove_ProcessKeyboardAccelerators, ProcessKeyboardAccelerators(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement7<D>::ProcessKeyboardAccelerators(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement7)->remove_ProcessKeyboardAccelerators(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement7<D>::PreviewKeyDown(Windows::UI::Xaml::Input::KeyEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement7)->add_PreviewKeyDown(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement7> consume_Windows_UI_Xaml_IUIElement7<D>::PreviewKeyDown(auto_revoke_t, Windows::UI::Xaml::Input::KeyEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement7>(this, &abi_t<Windows::UI::Xaml::IUIElement7>::remove_PreviewKeyDown, PreviewKeyDown(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement7<D>::PreviewKeyDown(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement7)->remove_PreviewKeyDown(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement7<D>::PreviewKeyUp(Windows::UI::Xaml::Input::KeyEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement7)->add_PreviewKeyUp(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement7> consume_Windows_UI_Xaml_IUIElement7<D>::PreviewKeyUp(auto_revoke_t, Windows::UI::Xaml::Input::KeyEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement7>(this, &abi_t<Windows::UI::Xaml::IUIElement7>::remove_PreviewKeyUp, PreviewKeyUp(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement7<D>::PreviewKeyUp(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement7)->remove_PreviewKeyUp(get_abi(token)));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement7<D>::TryInvokeKeyboardAccelerator(Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs const& args) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement7)->TryInvokeKeyboardAccelerator(get_abi(args)));
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_IUIElement8<D>::KeyTipTarget() const
{
    Windows::UI::Xaml::DependencyObject value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement8)->get_KeyTipTarget(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement8<D>::KeyTipTarget(Windows::UI::Xaml::DependencyObject const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement8)->put_KeyTipTarget(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_IUIElement8<D>::KeyboardAcceleratorPlacementTarget() const
{
    Windows::UI::Xaml::DependencyObject value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement8)->get_KeyboardAcceleratorPlacementTarget(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement8<D>::KeyboardAcceleratorPlacementTarget(Windows::UI::Xaml::DependencyObject const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement8)->put_KeyboardAcceleratorPlacementTarget(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Input::KeyboardAcceleratorPlacementMode consume_Windows_UI_Xaml_IUIElement8<D>::KeyboardAcceleratorPlacementMode() const
{
    Windows::UI::Xaml::Input::KeyboardAcceleratorPlacementMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement8)->get_KeyboardAcceleratorPlacementMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement8<D>::KeyboardAcceleratorPlacementMode(Windows::UI::Xaml::Input::KeyboardAcceleratorPlacementMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement8)->put_KeyboardAcceleratorPlacementMode(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IUIElement8<D>::BringIntoViewRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::BringIntoViewRequestedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement8)->add_BringIntoViewRequested(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IUIElement8> consume_Windows_UI_Xaml_IUIElement8<D>::BringIntoViewRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::BringIntoViewRequestedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IUIElement8>(this, &abi_t<Windows::UI::Xaml::IUIElement8>::remove_BringIntoViewRequested, BringIntoViewRequested(value));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElement8<D>::BringIntoViewRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElement8)->remove_BringIntoViewRequested(get_abi(token)));
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationPeer consume_Windows_UI_Xaml_IUIElementOverrides<D>::OnCreateAutomationPeer() const
{
    Windows::UI::Xaml::Automation::Peers::AutomationPeer returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementOverrides)->OnCreateAutomationPeer(put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElementOverrides<D>::OnDisconnectVisualChildren() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementOverrides)->OnDisconnectVisualChildren());
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IIterable<Windows::Foundation::Point>> consume_Windows_UI_Xaml_IUIElementOverrides<D>::FindSubElementsForTouchTargeting(Windows::Foundation::Point const& point, Windows::Foundation::Rect const& boundingRect) const
{
    Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IIterable<Windows::Foundation::Point>> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementOverrides)->FindSubElementsForTouchTargeting(get_abi(point), get_abi(boundingRect), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::DependencyObject> consume_Windows_UI_Xaml_IUIElementOverrides7<D>::GetChildrenInTabFocusOrder() const
{
    Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::DependencyObject> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementOverrides7)->GetChildrenInTabFocusOrder(put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElementOverrides7<D>::OnProcessKeyboardAccelerators(Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs const& args) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementOverrides7)->OnProcessKeyboardAccelerators(get_abi(args)));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElementOverrides8<D>::OnKeyboardAcceleratorInvoked(Windows::UI::Xaml::Input::KeyboardAcceleratorInvokedEventArgs const& args) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementOverrides8)->OnKeyboardAcceleratorInvoked(get_abi(args)));
}

template <typename D> void consume_Windows_UI_Xaml_IUIElementOverrides8<D>::OnBringIntoViewRequested(Windows::UI::Xaml::BringIntoViewRequestedEventArgs const& e) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementOverrides8)->OnBringIntoViewRequested(get_abi(e)));
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics<D>::KeyDownEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_KeyDownEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics<D>::KeyUpEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_KeyUpEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics<D>::PointerEnteredEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_PointerEnteredEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics<D>::PointerPressedEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_PointerPressedEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics<D>::PointerMovedEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_PointerMovedEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics<D>::PointerReleasedEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_PointerReleasedEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics<D>::PointerExitedEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_PointerExitedEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics<D>::PointerCaptureLostEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_PointerCaptureLostEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics<D>::PointerCanceledEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_PointerCanceledEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics<D>::PointerWheelChangedEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_PointerWheelChangedEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics<D>::TappedEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_TappedEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics<D>::DoubleTappedEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_DoubleTappedEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics<D>::HoldingEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_HoldingEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics<D>::RightTappedEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_RightTappedEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics<D>::ManipulationStartingEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_ManipulationStartingEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics<D>::ManipulationInertiaStartingEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_ManipulationInertiaStartingEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics<D>::ManipulationStartedEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_ManipulationStartedEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics<D>::ManipulationDeltaEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_ManipulationDeltaEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics<D>::ManipulationCompletedEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_ManipulationCompletedEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics<D>::DragEnterEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_DragEnterEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics<D>::DragLeaveEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_DragLeaveEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics<D>::DragOverEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_DragOverEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics<D>::DropEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_DropEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics<D>::AllowDropProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_AllowDropProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics<D>::OpacityProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_OpacityProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics<D>::ClipProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_ClipProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics<D>::RenderTransformProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_RenderTransformProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics<D>::ProjectionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_ProjectionProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics<D>::RenderTransformOriginProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_RenderTransformOriginProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics<D>::IsHitTestVisibleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_IsHitTestVisibleProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics<D>::VisibilityProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_VisibilityProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics<D>::UseLayoutRoundingProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_UseLayoutRoundingProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics<D>::TransitionsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_TransitionsProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics<D>::CacheModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_CacheModeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics<D>::IsTapEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_IsTapEnabledProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics<D>::IsDoubleTapEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_IsDoubleTapEnabledProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics<D>::IsRightTapEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_IsRightTapEnabledProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics<D>::IsHoldingEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_IsHoldingEnabledProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics<D>::ManipulationModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_ManipulationModeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics<D>::PointerCapturesProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics)->get_PointerCapturesProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics2<D>::CompositeModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics2)->get_CompositeModeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics3<D>::Transform3DProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics3)->get_Transform3DProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics3<D>::CanDragProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics3)->get_CanDragProperty(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_IUIElementStatics3<D>::TryStartDirectManipulation(Windows::UI::Xaml::Input::Pointer const& value) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics3)->TryStartDirectManipulation(get_abi(value), &returnValue));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics4<D>::ContextFlyoutProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics4)->get_ContextFlyoutProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics4<D>::ExitDisplayModeOnAccessKeyInvokedProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics4)->get_ExitDisplayModeOnAccessKeyInvokedProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics4<D>::IsAccessKeyScopeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics4)->get_IsAccessKeyScopeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics4<D>::AccessKeyScopeOwnerProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics4)->get_AccessKeyScopeOwnerProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics4<D>::AccessKeyProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics4)->get_AccessKeyProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics5<D>::LightsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics5)->get_LightsProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics5<D>::KeyTipPlacementModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics5)->get_KeyTipPlacementModeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics5<D>::KeyTipHorizontalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics5)->get_KeyTipHorizontalOffsetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics5<D>::KeyTipVerticalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics5)->get_KeyTipVerticalOffsetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics5<D>::XYFocusKeyboardNavigationProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics5)->get_XYFocusKeyboardNavigationProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics5<D>::XYFocusUpNavigationStrategyProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics5)->get_XYFocusUpNavigationStrategyProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics5<D>::XYFocusDownNavigationStrategyProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics5)->get_XYFocusDownNavigationStrategyProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics5<D>::XYFocusLeftNavigationStrategyProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics5)->get_XYFocusLeftNavigationStrategyProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics5<D>::XYFocusRightNavigationStrategyProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics5)->get_XYFocusRightNavigationStrategyProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics5<D>::HighContrastAdjustmentProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics5)->get_HighContrastAdjustmentProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics5<D>::TabFocusNavigationProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics5)->get_TabFocusNavigationProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics6<D>::GettingFocusEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics6)->get_GettingFocusEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics6<D>::LosingFocusEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics6)->get_LosingFocusEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics6<D>::NoFocusCandidateFoundEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics6)->get_NoFocusCandidateFoundEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics7<D>::PreviewKeyDownEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics7)->get_PreviewKeyDownEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics7<D>::CharacterReceivedEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics7)->get_CharacterReceivedEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics7<D>::PreviewKeyUpEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics7)->get_PreviewKeyUpEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics8<D>::BringIntoViewRequestedEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics8)->get_BringIntoViewRequestedEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent consume_Windows_UI_Xaml_IUIElementStatics8<D>::ContextRequestedEvent() const
{
    Windows::UI::Xaml::RoutedEvent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics8)->get_ContextRequestedEvent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics8<D>::KeyTipTargetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics8)->get_KeyTipTargetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics8<D>::KeyboardAcceleratorPlacementTargetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics8)->get_KeyboardAcceleratorPlacementTargetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IUIElementStatics8<D>::KeyboardAcceleratorPlacementModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics8)->get_KeyboardAcceleratorPlacementModeProperty(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUIElementStatics8<D>::RegisterAsScrollPort(Windows::UI::Xaml::UIElement const& element) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUIElementStatics8)->RegisterAsScrollPort(get_abi(element)));
}

template <typename D> HRESULT consume_Windows_UI_Xaml_IUnhandledExceptionEventArgs<D>::Exception() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUnhandledExceptionEventArgs)->get_Exception(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_IUnhandledExceptionEventArgs<D>::Message() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUnhandledExceptionEventArgs)->get_Message(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_IUnhandledExceptionEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUnhandledExceptionEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IUnhandledExceptionEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IUnhandledExceptionEventArgs)->put_Handled(value));
}

template <typename D> hstring consume_Windows_UI_Xaml_IVisualState<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualState)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::Storyboard consume_Windows_UI_Xaml_IVisualState<D>::Storyboard() const
{
    Windows::UI::Xaml::Media::Animation::Storyboard value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualState)->get_Storyboard(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IVisualState<D>::Storyboard(Windows::UI::Xaml::Media::Animation::Storyboard const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualState)->put_Storyboard(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::SetterBaseCollection consume_Windows_UI_Xaml_IVisualState2<D>::Setters() const
{
    Windows::UI::Xaml::SetterBaseCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualState2)->get_Setters(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::StateTriggerBase> consume_Windows_UI_Xaml_IVisualState2<D>::StateTriggers() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::StateTriggerBase> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualState2)->get_StateTriggers(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::VisualState consume_Windows_UI_Xaml_IVisualStateChangedEventArgs<D>::OldState() const
{
    Windows::UI::Xaml::VisualState value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualStateChangedEventArgs)->get_OldState(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IVisualStateChangedEventArgs<D>::OldState(Windows::UI::Xaml::VisualState const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualStateChangedEventArgs)->put_OldState(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::VisualState consume_Windows_UI_Xaml_IVisualStateChangedEventArgs<D>::NewState() const
{
    Windows::UI::Xaml::VisualState value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualStateChangedEventArgs)->get_NewState(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IVisualStateChangedEventArgs<D>::NewState(Windows::UI::Xaml::VisualState const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualStateChangedEventArgs)->put_NewState(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Controls::Control consume_Windows_UI_Xaml_IVisualStateChangedEventArgs<D>::Control() const
{
    Windows::UI::Xaml::Controls::Control value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualStateChangedEventArgs)->get_Control(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IVisualStateChangedEventArgs<D>::Control(Windows::UI::Xaml::Controls::Control const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualStateChangedEventArgs)->put_Control(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Xaml_IVisualStateGroup<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualStateGroup)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::VisualTransition> consume_Windows_UI_Xaml_IVisualStateGroup<D>::Transitions() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::VisualTransition> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualStateGroup)->get_Transitions(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::VisualState> consume_Windows_UI_Xaml_IVisualStateGroup<D>::States() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::VisualState> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualStateGroup)->get_States(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::VisualState consume_Windows_UI_Xaml_IVisualStateGroup<D>::CurrentState() const
{
    Windows::UI::Xaml::VisualState value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualStateGroup)->get_CurrentState(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_UI_Xaml_IVisualStateGroup<D>::CurrentStateChanged(Windows::UI::Xaml::VisualStateChangedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualStateGroup)->add_CurrentStateChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IVisualStateGroup> consume_Windows_UI_Xaml_IVisualStateGroup<D>::CurrentStateChanged(auto_revoke_t, Windows::UI::Xaml::VisualStateChangedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IVisualStateGroup>(this, &abi_t<Windows::UI::Xaml::IVisualStateGroup>::remove_CurrentStateChanged, CurrentStateChanged(value));
}

template <typename D> void consume_Windows_UI_Xaml_IVisualStateGroup<D>::CurrentStateChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualStateGroup)->remove_CurrentStateChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IVisualStateGroup<D>::CurrentStateChanging(Windows::UI::Xaml::VisualStateChangedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualStateGroup)->add_CurrentStateChanging(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IVisualStateGroup> consume_Windows_UI_Xaml_IVisualStateGroup<D>::CurrentStateChanging(auto_revoke_t, Windows::UI::Xaml::VisualStateChangedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IVisualStateGroup>(this, &abi_t<Windows::UI::Xaml::IVisualStateGroup>::remove_CurrentStateChanging, CurrentStateChanging(value));
}

template <typename D> void consume_Windows_UI_Xaml_IVisualStateGroup<D>::CurrentStateChanging(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualStateGroup)->remove_CurrentStateChanging(get_abi(token)));
}

template <typename D> Windows::UI::Xaml::VisualStateManager consume_Windows_UI_Xaml_IVisualStateManagerFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::VisualStateManager instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualStateManagerFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> bool consume_Windows_UI_Xaml_IVisualStateManagerOverrides<D>::GoToStateCore(Windows::UI::Xaml::Controls::Control const& control, Windows::UI::Xaml::FrameworkElement const& templateRoot, param::hstring const& stateName, Windows::UI::Xaml::VisualStateGroup const& group, Windows::UI::Xaml::VisualState const& state, bool useTransitions) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualStateManagerOverrides)->GoToStateCore(get_abi(control), get_abi(templateRoot), get_abi(stateName), get_abi(group), get_abi(state), useTransitions, &returnValue));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_IVisualStateManagerProtected<D>::RaiseCurrentStateChanging(Windows::UI::Xaml::VisualStateGroup const& stateGroup, Windows::UI::Xaml::VisualState const& oldState, Windows::UI::Xaml::VisualState const& newState, Windows::UI::Xaml::Controls::Control const& control) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualStateManagerProtected)->RaiseCurrentStateChanging(get_abi(stateGroup), get_abi(oldState), get_abi(newState), get_abi(control)));
}

template <typename D> void consume_Windows_UI_Xaml_IVisualStateManagerProtected<D>::RaiseCurrentStateChanged(Windows::UI::Xaml::VisualStateGroup const& stateGroup, Windows::UI::Xaml::VisualState const& oldState, Windows::UI::Xaml::VisualState const& newState, Windows::UI::Xaml::Controls::Control const& control) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualStateManagerProtected)->RaiseCurrentStateChanged(get_abi(stateGroup), get_abi(oldState), get_abi(newState), get_abi(control)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::VisualStateGroup> consume_Windows_UI_Xaml_IVisualStateManagerStatics<D>::GetVisualStateGroups(Windows::UI::Xaml::FrameworkElement const& obj) const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::VisualStateGroup> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualStateManagerStatics)->GetVisualStateGroups(get_abi(obj), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_IVisualStateManagerStatics<D>::CustomVisualStateManagerProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualStateManagerStatics)->get_CustomVisualStateManagerProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::VisualStateManager consume_Windows_UI_Xaml_IVisualStateManagerStatics<D>::GetCustomVisualStateManager(Windows::UI::Xaml::FrameworkElement const& obj) const
{
    Windows::UI::Xaml::VisualStateManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualStateManagerStatics)->GetCustomVisualStateManager(get_abi(obj), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IVisualStateManagerStatics<D>::SetCustomVisualStateManager(Windows::UI::Xaml::FrameworkElement const& obj, Windows::UI::Xaml::VisualStateManager const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualStateManagerStatics)->SetCustomVisualStateManager(get_abi(obj), get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_IVisualStateManagerStatics<D>::GoToState(Windows::UI::Xaml::Controls::Control const& control, param::hstring const& stateName, bool useTransitions) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualStateManagerStatics)->GoToState(get_abi(control), get_abi(stateName), useTransitions, &returnValue));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Duration consume_Windows_UI_Xaml_IVisualTransition<D>::GeneratedDuration() const
{
    Windows::UI::Xaml::Duration value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualTransition)->get_GeneratedDuration(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IVisualTransition<D>::GeneratedDuration(Windows::UI::Xaml::Duration const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualTransition)->put_GeneratedDuration(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Animation::EasingFunctionBase consume_Windows_UI_Xaml_IVisualTransition<D>::GeneratedEasingFunction() const
{
    Windows::UI::Xaml::Media::Animation::EasingFunctionBase value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualTransition)->get_GeneratedEasingFunction(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IVisualTransition<D>::GeneratedEasingFunction(Windows::UI::Xaml::Media::Animation::EasingFunctionBase const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualTransition)->put_GeneratedEasingFunction(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Xaml_IVisualTransition<D>::To() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualTransition)->get_To(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IVisualTransition<D>::To(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualTransition)->put_To(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Xaml_IVisualTransition<D>::From() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualTransition)->get_From(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IVisualTransition<D>::From(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualTransition)->put_From(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Animation::Storyboard consume_Windows_UI_Xaml_IVisualTransition<D>::Storyboard() const
{
    Windows::UI::Xaml::Media::Animation::Storyboard value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualTransition)->get_Storyboard(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IVisualTransition<D>::Storyboard(Windows::UI::Xaml::Media::Animation::Storyboard const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualTransition)->put_Storyboard(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::VisualTransition consume_Windows_UI_Xaml_IVisualTransitionFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::VisualTransition instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IVisualTransitionFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Xaml_IWindow<D>::Bounds() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IWindow)->get_Bounds(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_IWindow<D>::Visible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IWindow)->get_Visible(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::UIElement consume_Windows_UI_Xaml_IWindow<D>::Content() const
{
    Windows::UI::Xaml::UIElement value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IWindow)->get_Content(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_IWindow<D>::Content(Windows::UI::Xaml::UIElement const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IWindow)->put_Content(get_abi(value)));
}

template <typename D> Windows::UI::Core::CoreWindow consume_Windows_UI_Xaml_IWindow<D>::CoreWindow() const
{
    Windows::UI::Core::CoreWindow value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IWindow)->get_CoreWindow(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Core::CoreDispatcher consume_Windows_UI_Xaml_IWindow<D>::Dispatcher() const
{
    Windows::UI::Core::CoreDispatcher value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IWindow)->get_Dispatcher(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_UI_Xaml_IWindow<D>::Activated(Windows::UI::Xaml::WindowActivatedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IWindow)->add_Activated(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IWindow> consume_Windows_UI_Xaml_IWindow<D>::Activated(auto_revoke_t, Windows::UI::Xaml::WindowActivatedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IWindow>(this, &abi_t<Windows::UI::Xaml::IWindow>::remove_Activated, Activated(value));
}

template <typename D> void consume_Windows_UI_Xaml_IWindow<D>::Activated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IWindow)->remove_Activated(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IWindow<D>::Closed(Windows::UI::Xaml::WindowClosedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IWindow)->add_Closed(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IWindow> consume_Windows_UI_Xaml_IWindow<D>::Closed(auto_revoke_t, Windows::UI::Xaml::WindowClosedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IWindow>(this, &abi_t<Windows::UI::Xaml::IWindow>::remove_Closed, Closed(value));
}

template <typename D> void consume_Windows_UI_Xaml_IWindow<D>::Closed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IWindow)->remove_Closed(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IWindow<D>::SizeChanged(Windows::UI::Xaml::WindowSizeChangedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IWindow)->add_SizeChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IWindow> consume_Windows_UI_Xaml_IWindow<D>::SizeChanged(auto_revoke_t, Windows::UI::Xaml::WindowSizeChangedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IWindow>(this, &abi_t<Windows::UI::Xaml::IWindow>::remove_SizeChanged, SizeChanged(value));
}

template <typename D> void consume_Windows_UI_Xaml_IWindow<D>::SizeChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IWindow)->remove_SizeChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_IWindow<D>::VisibilityChanged(Windows::UI::Xaml::WindowVisibilityChangedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IWindow)->add_VisibilityChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::IWindow> consume_Windows_UI_Xaml_IWindow<D>::VisibilityChanged(auto_revoke_t, Windows::UI::Xaml::WindowVisibilityChangedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::IWindow>(this, &abi_t<Windows::UI::Xaml::IWindow>::remove_VisibilityChanged, VisibilityChanged(value));
}

template <typename D> void consume_Windows_UI_Xaml_IWindow<D>::VisibilityChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IWindow)->remove_VisibilityChanged(get_abi(token)));
}

template <typename D> void consume_Windows_UI_Xaml_IWindow<D>::Activate() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IWindow)->Activate());
}

template <typename D> void consume_Windows_UI_Xaml_IWindow<D>::Close() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IWindow)->Close());
}

template <typename D> void consume_Windows_UI_Xaml_IWindow2<D>::SetTitleBar(Windows::UI::Xaml::UIElement const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IWindow2)->SetTitleBar(get_abi(value)));
}

template <typename D> Windows::UI::Composition::Compositor consume_Windows_UI_Xaml_IWindow3<D>::Compositor() const
{
    Windows::UI::Composition::Compositor value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IWindow3)->get_Compositor(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Window consume_Windows_UI_Xaml_IWindowCreatedEventArgs<D>::Window() const
{
    Windows::UI::Xaml::Window value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IWindowCreatedEventArgs)->get_Window(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Window consume_Windows_UI_Xaml_IWindowStatics<D>::Current() const
{
    Windows::UI::Xaml::Window value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::IWindowStatics)->get_Current(put_abi(value)));
    return value;
}

template <> struct delegate<Windows::UI::Xaml::ApplicationInitializationCallback>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::ApplicationInitializationCallback, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::ApplicationInitializationCallback, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* p) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::UI::Xaml::ApplicationInitializationCallbackParams const*>(&p));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::BindingFailedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::BindingFailedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::BindingFailedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::BindingFailedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::CreateDefaultValueCallback>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::CreateDefaultValueCallback, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::CreateDefaultValueCallback, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void** value) noexcept final
        {
            try
            {
                *value = detach_from<Windows::Foundation::IInspectable>((*this)());
                return S_OK;
            }
            catch (...)
            {
            *value = nullptr;
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::DependencyPropertyChangedCallback>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::DependencyPropertyChangedCallback, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::DependencyPropertyChangedCallback, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* dp) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&dp));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::DependencyPropertyChangedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::DependencyPropertyChangedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::DependencyPropertyChangedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::DependencyPropertyChangedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::DragEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::DragEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::DragEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::DragEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::EnteredBackgroundEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::EnteredBackgroundEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::EnteredBackgroundEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::ApplicationModel::EnteredBackgroundEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::ExceptionRoutedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::ExceptionRoutedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::ExceptionRoutedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::ExceptionRoutedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::LeavingBackgroundEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::LeavingBackgroundEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::LeavingBackgroundEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::ApplicationModel::LeavingBackgroundEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::PropertyChangedCallback>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::PropertyChangedCallback, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::PropertyChangedCallback, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* d, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&d), *reinterpret_cast<Windows::UI::Xaml::DependencyPropertyChangedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::RoutedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::RoutedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::RoutedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::RoutedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::SizeChangedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::SizeChangedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::SizeChangedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::SizeChangedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::SuspendingEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::SuspendingEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::SuspendingEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::ApplicationModel::SuspendingEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::UnhandledExceptionEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::UnhandledExceptionEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::UnhandledExceptionEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::UnhandledExceptionEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::VisualStateChangedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::VisualStateChangedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::VisualStateChangedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::VisualStateChangedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::WindowActivatedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::WindowActivatedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::WindowActivatedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Core::WindowActivatedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::WindowClosedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::WindowClosedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::WindowClosedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Core::CoreWindowEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::WindowSizeChangedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::WindowSizeChangedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::WindowSizeChangedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Core::WindowSizeChangedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::WindowVisibilityChangedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::WindowVisibilityChangedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::WindowVisibilityChangedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Core::VisibilityChangedEventArgs const*>(&e));
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
struct produce<D, Windows::UI::Xaml::IAdaptiveTrigger> : produce_base<D, Windows::UI::Xaml::IAdaptiveTrigger>
{
    HRESULT __stdcall get_MinWindowWidth(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().MinWindowWidth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MinWindowWidth(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MinWindowWidth(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MinWindowHeight(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().MinWindowHeight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MinWindowHeight(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MinWindowHeight(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IAdaptiveTriggerFactory> : produce_base<D, Windows::UI::Xaml::IAdaptiveTriggerFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::AdaptiveTrigger>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IAdaptiveTriggerStatics> : produce_base<D, Windows::UI::Xaml::IAdaptiveTriggerStatics>
{
    HRESULT __stdcall get_MinWindowWidthProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().MinWindowWidthProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MinWindowHeightProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().MinWindowHeightProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IApplication> : produce_base<D, Windows::UI::Xaml::IApplication>
{
    HRESULT __stdcall get_Resources(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::ResourceDictionary>(this->shim().Resources());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Resources(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Resources(*reinterpret_cast<Windows::UI::Xaml::ResourceDictionary const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DebugSettings(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DebugSettings>(this->shim().DebugSettings());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RequestedTheme(Windows::UI::Xaml::ApplicationTheme* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::ApplicationTheme>(this->shim().RequestedTheme());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RequestedTheme(Windows::UI::Xaml::ApplicationTheme value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestedTheme(*reinterpret_cast<Windows::UI::Xaml::ApplicationTheme const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_UnhandledException(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().UnhandledException(*reinterpret_cast<Windows::UI::Xaml::UnhandledExceptionEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_UnhandledException(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UnhandledException(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Suspending(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Suspending(*reinterpret_cast<Windows::UI::Xaml::SuspendingEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Suspending(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Suspending(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Resuming(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Resuming(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Resuming(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Resuming(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Exit() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Exit();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IApplication2> : produce_base<D, Windows::UI::Xaml::IApplication2>
{
    HRESULT __stdcall get_FocusVisualKind(Windows::UI::Xaml::FocusVisualKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::FocusVisualKind>(this->shim().FocusVisualKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FocusVisualKind(Windows::UI::Xaml::FocusVisualKind value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FocusVisualKind(*reinterpret_cast<Windows::UI::Xaml::FocusVisualKind const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RequiresPointerMode(Windows::UI::Xaml::ApplicationRequiresPointerMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::ApplicationRequiresPointerMode>(this->shim().RequiresPointerMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RequiresPointerMode(Windows::UI::Xaml::ApplicationRequiresPointerMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequiresPointerMode(*reinterpret_cast<Windows::UI::Xaml::ApplicationRequiresPointerMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_LeavingBackground(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().LeavingBackground(*reinterpret_cast<Windows::UI::Xaml::LeavingBackgroundEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_LeavingBackground(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LeavingBackground(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_EnteredBackground(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().EnteredBackground(*reinterpret_cast<Windows::UI::Xaml::EnteredBackgroundEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_EnteredBackground(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnteredBackground(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IApplication3> : produce_base<D, Windows::UI::Xaml::IApplication3>
{
    HRESULT __stdcall get_HighContrastAdjustment(Windows::UI::Xaml::ApplicationHighContrastAdjustment* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::ApplicationHighContrastAdjustment>(this->shim().HighContrastAdjustment());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_HighContrastAdjustment(Windows::UI::Xaml::ApplicationHighContrastAdjustment value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HighContrastAdjustment(*reinterpret_cast<Windows::UI::Xaml::ApplicationHighContrastAdjustment const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IApplicationFactory> : produce_base<D, Windows::UI::Xaml::IApplicationFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Application>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IApplicationInitializationCallbackParams> : produce_base<D, Windows::UI::Xaml::IApplicationInitializationCallbackParams>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IApplicationOverrides> : produce_base<D, Windows::UI::Xaml::IApplicationOverrides>
{
    HRESULT __stdcall OnActivated(void* args) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnActivated(*reinterpret_cast<Windows::ApplicationModel::Activation::IActivatedEventArgs const*>(&args));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OnLaunched(void* args) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnLaunched(*reinterpret_cast<Windows::ApplicationModel::Activation::LaunchActivatedEventArgs const*>(&args));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OnFileActivated(void* args) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnFileActivated(*reinterpret_cast<Windows::ApplicationModel::Activation::FileActivatedEventArgs const*>(&args));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OnSearchActivated(void* args) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnSearchActivated(*reinterpret_cast<Windows::ApplicationModel::Activation::SearchActivatedEventArgs const*>(&args));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OnShareTargetActivated(void* args) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnShareTargetActivated(*reinterpret_cast<Windows::ApplicationModel::Activation::ShareTargetActivatedEventArgs const*>(&args));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OnFileOpenPickerActivated(void* args) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnFileOpenPickerActivated(*reinterpret_cast<Windows::ApplicationModel::Activation::FileOpenPickerActivatedEventArgs const*>(&args));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OnFileSavePickerActivated(void* args) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnFileSavePickerActivated(*reinterpret_cast<Windows::ApplicationModel::Activation::FileSavePickerActivatedEventArgs const*>(&args));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OnCachedFileUpdaterActivated(void* args) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnCachedFileUpdaterActivated(*reinterpret_cast<Windows::ApplicationModel::Activation::CachedFileUpdaterActivatedEventArgs const*>(&args));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OnWindowCreated(void* args) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnWindowCreated(*reinterpret_cast<Windows::UI::Xaml::WindowCreatedEventArgs const*>(&args));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IApplicationOverrides2> : produce_base<D, Windows::UI::Xaml::IApplicationOverrides2>
{
    HRESULT __stdcall OnBackgroundActivated(void* args) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnBackgroundActivated(*reinterpret_cast<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs const*>(&args));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IApplicationStatics> : produce_base<D, Windows::UI::Xaml::IApplicationStatics>
{
    HRESULT __stdcall get_Current(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Application>(this->shim().Current());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Start(void* callback) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start(*reinterpret_cast<Windows::UI::Xaml::ApplicationInitializationCallback const*>(&callback));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall LoadComponent(void* component, void* resourceLocator) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LoadComponent(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&component), *reinterpret_cast<Windows::Foundation::Uri const*>(&resourceLocator));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall LoadComponentWithResourceLocation(void* component, void* resourceLocator, Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation componentResourceLocation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LoadComponent(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&component), *reinterpret_cast<Windows::Foundation::Uri const*>(&resourceLocator), *reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation const*>(&componentResourceLocation));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IBindingFailedEventArgs> : produce_base<D, Windows::UI::Xaml::IBindingFailedEventArgs>
{
    HRESULT __stdcall get_Message(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Message());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IBringIntoViewOptions> : produce_base<D, Windows::UI::Xaml::IBringIntoViewOptions>
{
    HRESULT __stdcall get_AnimationDesired(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AnimationDesired());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AnimationDesired(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AnimationDesired(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TargetRect(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::Rect>>(this->shim().TargetRect());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TargetRect(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetRect(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::Rect> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IBringIntoViewOptions2> : produce_base<D, Windows::UI::Xaml::IBringIntoViewOptions2>
{
    HRESULT __stdcall get_HorizontalAlignmentRatio(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().HorizontalAlignmentRatio());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_HorizontalAlignmentRatio(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HorizontalAlignmentRatio(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalAlignmentRatio(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().VerticalAlignmentRatio());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_VerticalAlignmentRatio(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VerticalAlignmentRatio(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalOffset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().HorizontalOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_HorizontalOffset(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HorizontalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalOffset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().VerticalOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_VerticalOffset(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VerticalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IBringIntoViewRequestedEventArgs> : produce_base<D, Windows::UI::Xaml::IBringIntoViewRequestedEventArgs>
{
    HRESULT __stdcall get_TargetElement(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::UIElement>(this->shim().TargetElement());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TargetElement(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetElement(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AnimationDesired(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AnimationDesired());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AnimationDesired(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AnimationDesired(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TargetRect(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Rect>(this->shim().TargetRect());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TargetRect(Windows::Foundation::Rect value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetRect(*reinterpret_cast<Windows::Foundation::Rect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalAlignmentRatio(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().HorizontalAlignmentRatio());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalAlignmentRatio(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().VerticalAlignmentRatio());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalOffset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().HorizontalOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_HorizontalOffset(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HorizontalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalOffset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().VerticalOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_VerticalOffset(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VerticalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

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
};

template <typename D>
struct produce<D, Windows::UI::Xaml::ICornerRadiusHelper> : produce_base<D, Windows::UI::Xaml::ICornerRadiusHelper>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::ICornerRadiusHelperStatics> : produce_base<D, Windows::UI::Xaml::ICornerRadiusHelperStatics>
{
    HRESULT __stdcall FromRadii(double topLeft, double topRight, double bottomRight, double bottomLeft, struct struct_Windows_UI_Xaml_CornerRadius* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::CornerRadius>(this->shim().FromRadii(topLeft, topRight, bottomRight, bottomLeft));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FromUniformRadius(double uniformRadius, struct struct_Windows_UI_Xaml_CornerRadius* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::CornerRadius>(this->shim().FromUniformRadius(uniformRadius));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDataContextChangedEventArgs> : produce_base<D, Windows::UI::Xaml::IDataContextChangedEventArgs>
{
    HRESULT __stdcall get_NewValue(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().NewValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

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
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDataTemplate> : produce_base<D, Windows::UI::Xaml::IDataTemplate>
{
    HRESULT __stdcall LoadContent(void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::DependencyObject>(this->shim().LoadContent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDataTemplateExtension> : produce_base<D, Windows::UI::Xaml::IDataTemplateExtension>
{
    HRESULT __stdcall ResetTemplate() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResetTemplate();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ProcessBinding(uint32_t phase, bool* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().ProcessBinding(phase));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ProcessBindings(void* arg, int32_t* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<int32_t>(this->shim().ProcessBindings(*reinterpret_cast<Windows::UI::Xaml::Controls::ContainerContentChangingEventArgs const*>(&arg)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDataTemplateFactory> : produce_base<D, Windows::UI::Xaml::IDataTemplateFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::DataTemplate>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDataTemplateKey> : produce_base<D, Windows::UI::Xaml::IDataTemplateKey>
{
    HRESULT __stdcall get_DataType(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().DataType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DataType(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DataType(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDataTemplateKeyFactory> : produce_base<D, Windows::UI::Xaml::IDataTemplateKeyFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::DataTemplateKey>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateInstanceWithType(void* dataType, void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::DataTemplateKey>(this->shim().CreateInstanceWithType(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&dataType), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDataTemplateStatics2> : produce_base<D, Windows::UI::Xaml::IDataTemplateStatics2>
{
    HRESULT __stdcall get_ExtensionInstanceProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ExtensionInstanceProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetExtensionInstance(void* element, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::IDataTemplateExtension>(this->shim().GetExtensionInstance(*reinterpret_cast<Windows::UI::Xaml::FrameworkElement const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetExtensionInstance(void* element, void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetExtensionInstance(*reinterpret_cast<Windows::UI::Xaml::FrameworkElement const*>(&element), *reinterpret_cast<Windows::UI::Xaml::IDataTemplateExtension const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDebugSettings> : produce_base<D, Windows::UI::Xaml::IDebugSettings>
{
    HRESULT __stdcall get_EnableFrameRateCounter(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().EnableFrameRateCounter());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_EnableFrameRateCounter(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnableFrameRateCounter(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsBindingTracingEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsBindingTracingEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsBindingTracingEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsBindingTracingEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsOverdrawHeatMapEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsOverdrawHeatMapEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsOverdrawHeatMapEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsOverdrawHeatMapEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_BindingFailed(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().BindingFailed(*reinterpret_cast<Windows::UI::Xaml::BindingFailedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_BindingFailed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BindingFailed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDebugSettings2> : produce_base<D, Windows::UI::Xaml::IDebugSettings2>
{
    HRESULT __stdcall get_EnableRedrawRegions(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().EnableRedrawRegions());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_EnableRedrawRegions(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnableRedrawRegions(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDebugSettings3> : produce_base<D, Windows::UI::Xaml::IDebugSettings3>
{
    HRESULT __stdcall get_IsTextPerformanceVisualizationEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsTextPerformanceVisualizationEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsTextPerformanceVisualizationEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsTextPerformanceVisualizationEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDependencyObject> : produce_base<D, Windows::UI::Xaml::IDependencyObject>
{
    HRESULT __stdcall GetValue(void* dp, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::IInspectable>(this->shim().GetValue(*reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&dp)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetValue(void* dp, void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetValue(*reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&dp), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ClearValue(void* dp) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearValue(*reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&dp));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReadLocalValue(void* dp, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::IInspectable>(this->shim().ReadLocalValue(*reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&dp)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetAnimationBaseValue(void* dp, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::IInspectable>(this->shim().GetAnimationBaseValue(*reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&dp)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Dispatcher(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Core::CoreDispatcher>(this->shim().Dispatcher());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDependencyObject2> : produce_base<D, Windows::UI::Xaml::IDependencyObject2>
{
    HRESULT __stdcall RegisterPropertyChangedCallback(void* dp, void* callback, int64_t* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<int64_t>(this->shim().RegisterPropertyChangedCallback(*reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&dp), *reinterpret_cast<Windows::UI::Xaml::DependencyPropertyChangedCallback const*>(&callback)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UnregisterPropertyChangedCallback(void* dp, int64_t token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UnregisterPropertyChangedCallback(*reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&dp), token);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDependencyObjectCollectionFactory> : produce_base<D, Windows::UI::Xaml::IDependencyObjectCollectionFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::DependencyObjectCollection>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDependencyObjectFactory> : produce_base<D, Windows::UI::Xaml::IDependencyObjectFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::DependencyObject>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDependencyProperty> : produce_base<D, Windows::UI::Xaml::IDependencyProperty>
{
    HRESULT __stdcall GetMetadata(struct struct_Windows_UI_Xaml_Interop_TypeName forType, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::PropertyMetadata>(this->shim().GetMetadata(*reinterpret_cast<Windows::UI::Xaml::Interop::TypeName const*>(&forType)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDependencyPropertyChangedEventArgs> : produce_base<D, Windows::UI::Xaml::IDependencyPropertyChangedEventArgs>
{
    HRESULT __stdcall get_Property(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().Property());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OldValue(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().OldValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NewValue(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().NewValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDependencyPropertyStatics> : produce_base<D, Windows::UI::Xaml::IDependencyPropertyStatics>
{
    HRESULT __stdcall get_UnsetValue(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().UnsetValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Register(HSTRING name, struct struct_Windows_UI_Xaml_Interop_TypeName propertyType, struct struct_Windows_UI_Xaml_Interop_TypeName ownerType, void* typeMetadata, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().Register(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::UI::Xaml::Interop::TypeName const*>(&propertyType), *reinterpret_cast<Windows::UI::Xaml::Interop::TypeName const*>(&ownerType), *reinterpret_cast<Windows::UI::Xaml::PropertyMetadata const*>(&typeMetadata)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RegisterAttached(HSTRING name, struct struct_Windows_UI_Xaml_Interop_TypeName propertyType, struct struct_Windows_UI_Xaml_Interop_TypeName ownerType, void* defaultMetadata, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().RegisterAttached(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::UI::Xaml::Interop::TypeName const*>(&propertyType), *reinterpret_cast<Windows::UI::Xaml::Interop::TypeName const*>(&ownerType), *reinterpret_cast<Windows::UI::Xaml::PropertyMetadata const*>(&defaultMetadata)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDispatcherTimer> : produce_base<D, Windows::UI::Xaml::IDispatcherTimer>
{
    HRESULT __stdcall get_Interval(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Interval());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Interval(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Interval(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
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

    HRESULT __stdcall add_Tick(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Tick(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Tick(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Tick(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Start() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDispatcherTimerFactory> : produce_base<D, Windows::UI::Xaml::IDispatcherTimerFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::DispatcherTimer>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDragEventArgs> : produce_base<D, Windows::UI::Xaml::IDragEventArgs>
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

    HRESULT __stdcall put_Data(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Data(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::DataPackage const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetPosition(void* relativeTo, Windows::Foundation::Point* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::Point>(this->shim().GetPosition(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&relativeTo)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDragEventArgs2> : produce_base<D, Windows::UI::Xaml::IDragEventArgs2>
{
    HRESULT __stdcall get_DataView(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DataPackageView>(this->shim().DataView());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DragUIOverride(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DragUIOverride>(this->shim().DragUIOverride());
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

    HRESULT __stdcall get_AcceptedOperation(Windows::ApplicationModel::DataTransfer::DataPackageOperation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DataPackageOperation>(this->shim().AcceptedOperation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AcceptedOperation(Windows::ApplicationModel::DataTransfer::DataPackageOperation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AcceptedOperation(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::DataPackageOperation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::DragOperationDeferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDragEventArgs3> : produce_base<D, Windows::UI::Xaml::IDragEventArgs3>
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
struct produce<D, Windows::UI::Xaml::IDragOperationDeferral> : produce_base<D, Windows::UI::Xaml::IDragOperationDeferral>
{
    HRESULT __stdcall Complete() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDragStartingEventArgs> : produce_base<D, Windows::UI::Xaml::IDragStartingEventArgs>
{
    HRESULT __stdcall get_Cancel(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Cancel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Cancel(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Cancel(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

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

    HRESULT __stdcall get_DragUI(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DragUI>(this->shim().DragUI());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::DragOperationDeferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetPosition(void* relativeTo, Windows::Foundation::Point* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::Point>(this->shim().GetPosition(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&relativeTo)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDragStartingEventArgs2> : produce_base<D, Windows::UI::Xaml::IDragStartingEventArgs2>
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
struct produce<D, Windows::UI::Xaml::IDragUI> : produce_base<D, Windows::UI::Xaml::IDragUI>
{
    HRESULT __stdcall SetContentFromBitmapImage(void* bitmapImage) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetContentFromBitmapImage(*reinterpret_cast<Windows::UI::Xaml::Media::Imaging::BitmapImage const*>(&bitmapImage));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetContentFromBitmapImageWithAnchorPoint(void* bitmapImage, Windows::Foundation::Point anchorPoint) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetContentFromBitmapImage(*reinterpret_cast<Windows::UI::Xaml::Media::Imaging::BitmapImage const*>(&bitmapImage), *reinterpret_cast<Windows::Foundation::Point const*>(&anchorPoint));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

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

    HRESULT __stdcall SetContentFromDataPackage() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetContentFromDataPackage();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDragUIOverride> : produce_base<D, Windows::UI::Xaml::IDragUIOverride>
{
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

    HRESULT __stdcall SetContentFromBitmapImage(void* bitmapImage) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetContentFromBitmapImage(*reinterpret_cast<Windows::UI::Xaml::Media::Imaging::BitmapImage const*>(&bitmapImage));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetContentFromBitmapImageWithAnchorPoint(void* bitmapImage, Windows::Foundation::Point anchorPoint) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetContentFromBitmapImage(*reinterpret_cast<Windows::UI::Xaml::Media::Imaging::BitmapImage const*>(&bitmapImage), *reinterpret_cast<Windows::Foundation::Point const*>(&anchorPoint));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

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
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDropCompletedEventArgs> : produce_base<D, Windows::UI::Xaml::IDropCompletedEventArgs>
{
    HRESULT __stdcall get_DropResult(Windows::ApplicationModel::DataTransfer::DataPackageOperation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DataPackageOperation>(this->shim().DropResult());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDurationHelper> : produce_base<D, Windows::UI::Xaml::IDurationHelper>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDurationHelperStatics> : produce_base<D, Windows::UI::Xaml::IDurationHelperStatics>
{
    HRESULT __stdcall get_Automatic(struct struct_Windows_UI_Xaml_Duration* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Duration>(this->shim().Automatic());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Forever(struct struct_Windows_UI_Xaml_Duration* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Duration>(this->shim().Forever());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Compare(struct struct_Windows_UI_Xaml_Duration duration1, struct struct_Windows_UI_Xaml_Duration duration2, int32_t* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<int32_t>(this->shim().Compare(*reinterpret_cast<Windows::UI::Xaml::Duration const*>(&duration1), *reinterpret_cast<Windows::UI::Xaml::Duration const*>(&duration2)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FromTimeSpan(Windows::Foundation::TimeSpan timeSpan, struct struct_Windows_UI_Xaml_Duration* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::Duration>(this->shim().FromTimeSpan(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&timeSpan)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetHasTimeSpan(struct struct_Windows_UI_Xaml_Duration target, bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().GetHasTimeSpan(*reinterpret_cast<Windows::UI::Xaml::Duration const*>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Add(struct struct_Windows_UI_Xaml_Duration target, struct struct_Windows_UI_Xaml_Duration duration, struct struct_Windows_UI_Xaml_Duration* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::Duration>(this->shim().Add(*reinterpret_cast<Windows::UI::Xaml::Duration const*>(&target), *reinterpret_cast<Windows::UI::Xaml::Duration const*>(&duration)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Equals(struct struct_Windows_UI_Xaml_Duration target, struct struct_Windows_UI_Xaml_Duration value, bool* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().Equals(*reinterpret_cast<Windows::UI::Xaml::Duration const*>(&target), *reinterpret_cast<Windows::UI::Xaml::Duration const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Subtract(struct struct_Windows_UI_Xaml_Duration target, struct struct_Windows_UI_Xaml_Duration duration, struct struct_Windows_UI_Xaml_Duration* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::Duration>(this->shim().Subtract(*reinterpret_cast<Windows::UI::Xaml::Duration const*>(&target), *reinterpret_cast<Windows::UI::Xaml::Duration const*>(&duration)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IElementSoundPlayer> : produce_base<D, Windows::UI::Xaml::IElementSoundPlayer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IElementSoundPlayerStatics> : produce_base<D, Windows::UI::Xaml::IElementSoundPlayerStatics>
{
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

    HRESULT __stdcall get_State(Windows::UI::Xaml::ElementSoundPlayerState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::ElementSoundPlayerState>(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_State(Windows::UI::Xaml::ElementSoundPlayerState value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().State(*reinterpret_cast<Windows::UI::Xaml::ElementSoundPlayerState const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Play(Windows::UI::Xaml::ElementSoundKind sound) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Play(*reinterpret_cast<Windows::UI::Xaml::ElementSoundKind const*>(&sound));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IElementSoundPlayerStatics2> : produce_base<D, Windows::UI::Xaml::IElementSoundPlayerStatics2>
{
    HRESULT __stdcall get_SpatialAudioMode(Windows::UI::Xaml::ElementSpatialAudioMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::ElementSpatialAudioMode>(this->shim().SpatialAudioMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SpatialAudioMode(Windows::UI::Xaml::ElementSpatialAudioMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SpatialAudioMode(*reinterpret_cast<Windows::UI::Xaml::ElementSpatialAudioMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IEventTrigger> : produce_base<D, Windows::UI::Xaml::IEventTrigger>
{
    HRESULT __stdcall get_RoutedEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().RoutedEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RoutedEvent(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RoutedEvent(*reinterpret_cast<Windows::UI::Xaml::RoutedEvent const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Actions(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::TriggerActionCollection>(this->shim().Actions());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IExceptionRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::IExceptionRoutedEventArgs>
{
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
struct produce<D, Windows::UI::Xaml::IExceptionRoutedEventArgsFactory> : produce_base<D, Windows::UI::Xaml::IExceptionRoutedEventArgsFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IFrameworkElement> : produce_base<D, Windows::UI::Xaml::IFrameworkElement>
{
    HRESULT __stdcall get_Triggers(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::TriggerCollection>(this->shim().Triggers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Resources(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::ResourceDictionary>(this->shim().Resources());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Resources(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Resources(*reinterpret_cast<Windows::UI::Xaml::ResourceDictionary const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Tag(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().Tag());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Tag(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Tag(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
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

    HRESULT __stdcall put_Language(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Language(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ActualWidth(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ActualWidth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ActualHeight(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ActualHeight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Width(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Width());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Width(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Width(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Height(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Height());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Height(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Height(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MinWidth(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().MinWidth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MinWidth(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MinWidth(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxWidth(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().MaxWidth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MaxWidth(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxWidth(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MinHeight(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().MinHeight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MinHeight(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MinHeight(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxHeight(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().MaxHeight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MaxHeight(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxHeight(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalAlignment(Windows::UI::Xaml::HorizontalAlignment* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::HorizontalAlignment>(this->shim().HorizontalAlignment());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_HorizontalAlignment(Windows::UI::Xaml::HorizontalAlignment value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HorizontalAlignment(*reinterpret_cast<Windows::UI::Xaml::HorizontalAlignment const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalAlignment(Windows::UI::Xaml::VerticalAlignment* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::VerticalAlignment>(this->shim().VerticalAlignment());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_VerticalAlignment(Windows::UI::Xaml::VerticalAlignment value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VerticalAlignment(*reinterpret_cast<Windows::UI::Xaml::VerticalAlignment const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Margin(struct struct_Windows_UI_Xaml_Thickness* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Thickness>(this->shim().Margin());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Margin(struct struct_Windows_UI_Xaml_Thickness value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Margin(*reinterpret_cast<Windows::UI::Xaml::Thickness const*>(&value));
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

    HRESULT __stdcall get_BaseUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().BaseUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DataContext(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().DataContext());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DataContext(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DataContext(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Style(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Style>(this->shim().Style());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Style(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Style(*reinterpret_cast<Windows::UI::Xaml::Style const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Parent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyObject>(this->shim().Parent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FlowDirection(Windows::UI::Xaml::FlowDirection* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::FlowDirection>(this->shim().FlowDirection());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FlowDirection(Windows::UI::Xaml::FlowDirection value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FlowDirection(*reinterpret_cast<Windows::UI::Xaml::FlowDirection const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Loaded(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Loaded(*reinterpret_cast<Windows::UI::Xaml::RoutedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Loaded(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Loaded(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Unloaded(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Unloaded(*reinterpret_cast<Windows::UI::Xaml::RoutedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Unloaded(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Unloaded(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SizeChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SizeChanged(*reinterpret_cast<Windows::UI::Xaml::SizeChangedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SizeChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SizeChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_LayoutUpdated(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().LayoutUpdated(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_LayoutUpdated(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LayoutUpdated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindName(HSTRING name, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::IInspectable>(this->shim().FindName(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetBinding(void* dp, void* binding) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetBinding(*reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&dp), *reinterpret_cast<Windows::UI::Xaml::Data::BindingBase const*>(&binding));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IFrameworkElement2> : produce_base<D, Windows::UI::Xaml::IFrameworkElement2>
{
    HRESULT __stdcall get_RequestedTheme(Windows::UI::Xaml::ElementTheme* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::ElementTheme>(this->shim().RequestedTheme());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RequestedTheme(Windows::UI::Xaml::ElementTheme value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestedTheme(*reinterpret_cast<Windows::UI::Xaml::ElementTheme const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_DataContextChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().DataContextChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::DataContextChangedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_DataContextChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DataContextChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetBindingExpression(void* dp, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::Data::BindingExpression>(this->shim().GetBindingExpression(*reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&dp)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IFrameworkElement3> : produce_base<D, Windows::UI::Xaml::IFrameworkElement3>
{
    HRESULT __stdcall add_Loading(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Loading(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Loading(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Loading(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IFrameworkElement4> : produce_base<D, Windows::UI::Xaml::IFrameworkElement4>
{
    HRESULT __stdcall get_AllowFocusOnInteraction(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowFocusOnInteraction());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AllowFocusOnInteraction(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowFocusOnInteraction(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FocusVisualMargin(struct struct_Windows_UI_Xaml_Thickness* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Thickness>(this->shim().FocusVisualMargin());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FocusVisualMargin(struct struct_Windows_UI_Xaml_Thickness value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FocusVisualMargin(*reinterpret_cast<Windows::UI::Xaml::Thickness const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FocusVisualSecondaryThickness(struct struct_Windows_UI_Xaml_Thickness* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Thickness>(this->shim().FocusVisualSecondaryThickness());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FocusVisualSecondaryThickness(struct struct_Windows_UI_Xaml_Thickness value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FocusVisualSecondaryThickness(*reinterpret_cast<Windows::UI::Xaml::Thickness const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FocusVisualPrimaryThickness(struct struct_Windows_UI_Xaml_Thickness* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Thickness>(this->shim().FocusVisualPrimaryThickness());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FocusVisualPrimaryThickness(struct struct_Windows_UI_Xaml_Thickness value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FocusVisualPrimaryThickness(*reinterpret_cast<Windows::UI::Xaml::Thickness const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FocusVisualSecondaryBrush(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().FocusVisualSecondaryBrush());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FocusVisualSecondaryBrush(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FocusVisualSecondaryBrush(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FocusVisualPrimaryBrush(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().FocusVisualPrimaryBrush());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FocusVisualPrimaryBrush(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FocusVisualPrimaryBrush(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AllowFocusWhenDisabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowFocusWhenDisabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AllowFocusWhenDisabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowFocusWhenDisabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IFrameworkElement6> : produce_base<D, Windows::UI::Xaml::IFrameworkElement6>
{
    HRESULT __stdcall get_ActualTheme(Windows::UI::Xaml::ElementTheme* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::ElementTheme>(this->shim().ActualTheme());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ActualThemeChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ActualThemeChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ActualThemeChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ActualThemeChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IFrameworkElementFactory> : produce_base<D, Windows::UI::Xaml::IFrameworkElementFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::FrameworkElement>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IFrameworkElementOverrides> : produce_base<D, Windows::UI::Xaml::IFrameworkElementOverrides>
{
    HRESULT __stdcall MeasureOverride(Windows::Foundation::Size availableSize, Windows::Foundation::Size* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::Size>(this->shim().MeasureOverride(*reinterpret_cast<Windows::Foundation::Size const*>(&availableSize)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ArrangeOverride(Windows::Foundation::Size finalSize, Windows::Foundation::Size* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::Size>(this->shim().ArrangeOverride(*reinterpret_cast<Windows::Foundation::Size const*>(&finalSize)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OnApplyTemplate() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnApplyTemplate();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IFrameworkElementOverrides2> : produce_base<D, Windows::UI::Xaml::IFrameworkElementOverrides2>
{
    HRESULT __stdcall GoToElementStateCore(HSTRING stateName, bool useTransitions, bool* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().GoToElementStateCore(*reinterpret_cast<hstring const*>(&stateName), useTransitions));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IFrameworkElementStatics> : produce_base<D, Windows::UI::Xaml::IFrameworkElementStatics>
{
    HRESULT __stdcall get_TagProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().TagProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LanguageProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().LanguageProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ActualWidthProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ActualWidthProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ActualHeightProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ActualHeightProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WidthProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().WidthProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HeightProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().HeightProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MinWidthProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().MinWidthProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxWidthProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().MaxWidthProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MinHeightProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().MinHeightProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxHeightProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().MaxHeightProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalAlignmentProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().HorizontalAlignmentProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalAlignmentProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().VerticalAlignmentProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MarginProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().MarginProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NameProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().NameProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DataContextProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().DataContextProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StyleProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().StyleProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FlowDirectionProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().FlowDirectionProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IFrameworkElementStatics2> : produce_base<D, Windows::UI::Xaml::IFrameworkElementStatics2>
{
    HRESULT __stdcall get_RequestedThemeProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().RequestedThemeProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IFrameworkElementStatics4> : produce_base<D, Windows::UI::Xaml::IFrameworkElementStatics4>
{
    HRESULT __stdcall get_AllowFocusOnInteractionProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().AllowFocusOnInteractionProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FocusVisualMarginProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().FocusVisualMarginProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FocusVisualSecondaryThicknessProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().FocusVisualSecondaryThicknessProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FocusVisualPrimaryThicknessProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().FocusVisualPrimaryThicknessProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FocusVisualSecondaryBrushProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().FocusVisualSecondaryBrushProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FocusVisualPrimaryBrushProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().FocusVisualPrimaryBrushProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AllowFocusWhenDisabledProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().AllowFocusWhenDisabledProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IFrameworkElementStatics5> : produce_base<D, Windows::UI::Xaml::IFrameworkElementStatics5>
{
    HRESULT __stdcall DeferTree(void* element) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeferTree(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IFrameworkElementStatics6> : produce_base<D, Windows::UI::Xaml::IFrameworkElementStatics6>
{
    HRESULT __stdcall get_ActualThemeProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ActualThemeProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IFrameworkTemplate> : produce_base<D, Windows::UI::Xaml::IFrameworkTemplate>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IFrameworkTemplateFactory> : produce_base<D, Windows::UI::Xaml::IFrameworkTemplateFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::FrameworkTemplate>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IFrameworkView> : produce_base<D, Windows::UI::Xaml::IFrameworkView>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IFrameworkViewSource> : produce_base<D, Windows::UI::Xaml::IFrameworkViewSource>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IGridLengthHelper> : produce_base<D, Windows::UI::Xaml::IGridLengthHelper>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IGridLengthHelperStatics> : produce_base<D, Windows::UI::Xaml::IGridLengthHelperStatics>
{
    HRESULT __stdcall get_Auto(struct struct_Windows_UI_Xaml_GridLength* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::GridLength>(this->shim().Auto());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FromPixels(double pixels, struct struct_Windows_UI_Xaml_GridLength* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::GridLength>(this->shim().FromPixels(pixels));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FromValueAndType(double value, Windows::UI::Xaml::GridUnitType type, struct struct_Windows_UI_Xaml_GridLength* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::GridLength>(this->shim().FromValueAndType(value, *reinterpret_cast<Windows::UI::Xaml::GridUnitType const*>(&type)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetIsAbsolute(struct struct_Windows_UI_Xaml_GridLength target, bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().GetIsAbsolute(*reinterpret_cast<Windows::UI::Xaml::GridLength const*>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetIsAuto(struct struct_Windows_UI_Xaml_GridLength target, bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().GetIsAuto(*reinterpret_cast<Windows::UI::Xaml::GridLength const*>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetIsStar(struct struct_Windows_UI_Xaml_GridLength target, bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().GetIsStar(*reinterpret_cast<Windows::UI::Xaml::GridLength const*>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Equals(struct struct_Windows_UI_Xaml_GridLength target, struct struct_Windows_UI_Xaml_GridLength value, bool* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().Equals(*reinterpret_cast<Windows::UI::Xaml::GridLength const*>(&target), *reinterpret_cast<Windows::UI::Xaml::GridLength const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IMediaFailedRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::IMediaFailedRoutedEventArgs>
{
    HRESULT __stdcall get_ErrorTrace(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ErrorTrace());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IPointHelper> : produce_base<D, Windows::UI::Xaml::IPointHelper>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IPointHelperStatics> : produce_base<D, Windows::UI::Xaml::IPointHelperStatics>
{
    HRESULT __stdcall FromCoordinates(float x, float y, Windows::Foundation::Point* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::Point>(this->shim().FromCoordinates(x, y));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IPropertyMetadata> : produce_base<D, Windows::UI::Xaml::IPropertyMetadata>
{
    HRESULT __stdcall get_DefaultValue(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().DefaultValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CreateDefaultValueCallback(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::CreateDefaultValueCallback>(this->shim().CreateDefaultValueCallback());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IPropertyMetadataFactory> : produce_base<D, Windows::UI::Xaml::IPropertyMetadataFactory>
{
    HRESULT __stdcall CreateInstanceWithDefaultValue(void* defaultValue, void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::PropertyMetadata>(this->shim().CreateInstanceWithDefaultValue(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&defaultValue), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateInstanceWithDefaultValueAndCallback(void* defaultValue, void* propertyChangedCallback, void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::PropertyMetadata>(this->shim().CreateInstanceWithDefaultValueAndCallback(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&defaultValue), *reinterpret_cast<Windows::UI::Xaml::PropertyChangedCallback const*>(&propertyChangedCallback), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IPropertyMetadataStatics> : produce_base<D, Windows::UI::Xaml::IPropertyMetadataStatics>
{
    HRESULT __stdcall CreateWithDefaultValue(void* defaultValue, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::PropertyMetadata>(this->shim().Create(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&defaultValue)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithDefaultValueAndCallback(void* defaultValue, void* propertyChangedCallback, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::PropertyMetadata>(this->shim().Create(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&defaultValue), *reinterpret_cast<Windows::UI::Xaml::PropertyChangedCallback const*>(&propertyChangedCallback)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithFactory(void* createDefaultValueCallback, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::PropertyMetadata>(this->shim().Create(*reinterpret_cast<Windows::UI::Xaml::CreateDefaultValueCallback const*>(&createDefaultValueCallback)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithFactoryAndCallback(void* createDefaultValueCallback, void* propertyChangedCallback, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::PropertyMetadata>(this->shim().Create(*reinterpret_cast<Windows::UI::Xaml::CreateDefaultValueCallback const*>(&createDefaultValueCallback), *reinterpret_cast<Windows::UI::Xaml::PropertyChangedCallback const*>(&propertyChangedCallback)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IPropertyPath> : produce_base<D, Windows::UI::Xaml::IPropertyPath>
{
    HRESULT __stdcall get_Path(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Path());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IPropertyPathFactory> : produce_base<D, Windows::UI::Xaml::IPropertyPathFactory>
{
    HRESULT __stdcall CreateInstance(HSTRING path, void** instance) noexcept final
    {
        try
        {
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::UI::Xaml::PropertyPath>(this->shim().CreateInstance(*reinterpret_cast<hstring const*>(&path)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IRectHelper> : produce_base<D, Windows::UI::Xaml::IRectHelper>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IRectHelperStatics> : produce_base<D, Windows::UI::Xaml::IRectHelperStatics>
{
    HRESULT __stdcall get_Empty(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Rect>(this->shim().Empty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FromCoordinatesAndDimensions(float x, float y, float width, float height, Windows::Foundation::Rect* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::Rect>(this->shim().FromCoordinatesAndDimensions(x, y, width, height));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FromPoints(Windows::Foundation::Point point1, Windows::Foundation::Point point2, Windows::Foundation::Rect* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::Rect>(this->shim().FromPoints(*reinterpret_cast<Windows::Foundation::Point const*>(&point1), *reinterpret_cast<Windows::Foundation::Point const*>(&point2)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FromLocationAndSize(Windows::Foundation::Point location, Windows::Foundation::Size size, Windows::Foundation::Rect* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::Rect>(this->shim().FromLocationAndSize(*reinterpret_cast<Windows::Foundation::Point const*>(&location), *reinterpret_cast<Windows::Foundation::Size const*>(&size)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetIsEmpty(Windows::Foundation::Rect target, bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().GetIsEmpty(*reinterpret_cast<Windows::Foundation::Rect const*>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetBottom(Windows::Foundation::Rect target, float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().GetBottom(*reinterpret_cast<Windows::Foundation::Rect const*>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetLeft(Windows::Foundation::Rect target, float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().GetLeft(*reinterpret_cast<Windows::Foundation::Rect const*>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetRight(Windows::Foundation::Rect target, float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().GetRight(*reinterpret_cast<Windows::Foundation::Rect const*>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetTop(Windows::Foundation::Rect target, float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().GetTop(*reinterpret_cast<Windows::Foundation::Rect const*>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Contains(Windows::Foundation::Rect target, Windows::Foundation::Point point, bool* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().Contains(*reinterpret_cast<Windows::Foundation::Rect const*>(&target), *reinterpret_cast<Windows::Foundation::Point const*>(&point)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Equals(Windows::Foundation::Rect target, Windows::Foundation::Rect value, bool* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().Equals(*reinterpret_cast<Windows::Foundation::Rect const*>(&target), *reinterpret_cast<Windows::Foundation::Rect const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Intersect(Windows::Foundation::Rect target, Windows::Foundation::Rect rect, Windows::Foundation::Rect* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::Rect>(this->shim().Intersect(*reinterpret_cast<Windows::Foundation::Rect const*>(&target), *reinterpret_cast<Windows::Foundation::Rect const*>(&rect)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UnionWithPoint(Windows::Foundation::Rect target, Windows::Foundation::Point point, Windows::Foundation::Rect* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::Rect>(this->shim().Union(*reinterpret_cast<Windows::Foundation::Rect const*>(&target), *reinterpret_cast<Windows::Foundation::Point const*>(&point)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UnionWithRect(Windows::Foundation::Rect target, Windows::Foundation::Rect rect, Windows::Foundation::Rect* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::Rect>(this->shim().Union(*reinterpret_cast<Windows::Foundation::Rect const*>(&target), *reinterpret_cast<Windows::Foundation::Rect const*>(&rect)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IResourceDictionary> : produce_base<D, Windows::UI::Xaml::IResourceDictionary>
{
    HRESULT __stdcall get_Source(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Source());
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
            this->shim().Source(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MergedDictionaries(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::ResourceDictionary>>(this->shim().MergedDictionaries());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ThemeDictionaries(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMap<Windows::Foundation::IInspectable, Windows::Foundation::IInspectable>>(this->shim().ThemeDictionaries());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IResourceDictionaryFactory> : produce_base<D, Windows::UI::Xaml::IResourceDictionaryFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::ResourceDictionary>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IRoutedEvent> : produce_base<D, Windows::UI::Xaml::IRoutedEvent>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::IRoutedEventArgs>
{
    HRESULT __stdcall get_OriginalSource(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().OriginalSource());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IRoutedEventArgsFactory> : produce_base<D, Windows::UI::Xaml::IRoutedEventArgsFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::RoutedEventArgs>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::ISetter> : produce_base<D, Windows::UI::Xaml::ISetter>
{
    HRESULT __stdcall get_Property(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().Property());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Property(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Property(*reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Value(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Value(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::ISetter2> : produce_base<D, Windows::UI::Xaml::ISetter2>
{
    HRESULT __stdcall get_Target(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::TargetPropertyPath>(this->shim().Target());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Target(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Target(*reinterpret_cast<Windows::UI::Xaml::TargetPropertyPath const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::ISetterBase> : produce_base<D, Windows::UI::Xaml::ISetterBase>
{
    HRESULT __stdcall get_IsSealed(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSealed());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::ISetterBaseCollection> : produce_base<D, Windows::UI::Xaml::ISetterBaseCollection>
{
    HRESULT __stdcall get_IsSealed(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSealed());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::ISetterBaseFactory> : produce_base<D, Windows::UI::Xaml::ISetterBaseFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::ISetterFactory> : produce_base<D, Windows::UI::Xaml::ISetterFactory>
{
    HRESULT __stdcall CreateInstance(void* targetProperty, void* value, void** instance) noexcept final
    {
        try
        {
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::UI::Xaml::Setter>(this->shim().CreateInstance(*reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&targetProperty), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::ISizeChangedEventArgs> : produce_base<D, Windows::UI::Xaml::ISizeChangedEventArgs>
{
    HRESULT __stdcall get_PreviousSize(Windows::Foundation::Size* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Size>(this->shim().PreviousSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NewSize(Windows::Foundation::Size* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Size>(this->shim().NewSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::ISizeHelper> : produce_base<D, Windows::UI::Xaml::ISizeHelper>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::ISizeHelperStatics> : produce_base<D, Windows::UI::Xaml::ISizeHelperStatics>
{
    HRESULT __stdcall get_Empty(Windows::Foundation::Size* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Size>(this->shim().Empty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FromDimensions(float width, float height, Windows::Foundation::Size* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::Size>(this->shim().FromDimensions(width, height));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetIsEmpty(Windows::Foundation::Size target, bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().GetIsEmpty(*reinterpret_cast<Windows::Foundation::Size const*>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Equals(Windows::Foundation::Size target, Windows::Foundation::Size value, bool* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().Equals(*reinterpret_cast<Windows::Foundation::Size const*>(&target), *reinterpret_cast<Windows::Foundation::Size const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IStateTrigger> : produce_base<D, Windows::UI::Xaml::IStateTrigger>
{
    HRESULT __stdcall get_IsActive(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsActive());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsActive(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsActive(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IStateTriggerBase> : produce_base<D, Windows::UI::Xaml::IStateTriggerBase>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IStateTriggerBaseFactory> : produce_base<D, Windows::UI::Xaml::IStateTriggerBaseFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::StateTriggerBase>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IStateTriggerBaseProtected> : produce_base<D, Windows::UI::Xaml::IStateTriggerBaseProtected>
{
    HRESULT __stdcall SetActive(bool IsActive) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetActive(IsActive);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IStateTriggerStatics> : produce_base<D, Windows::UI::Xaml::IStateTriggerStatics>
{
    HRESULT __stdcall get_IsActiveProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IsActiveProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IStyle> : produce_base<D, Windows::UI::Xaml::IStyle>
{
    HRESULT __stdcall get_IsSealed(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSealed());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Setters(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::SetterBaseCollection>(this->shim().Setters());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TargetType(struct struct_Windows_UI_Xaml_Interop_TypeName* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Interop::TypeName>(this->shim().TargetType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TargetType(struct struct_Windows_UI_Xaml_Interop_TypeName value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetType(*reinterpret_cast<Windows::UI::Xaml::Interop::TypeName const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BasedOn(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Style>(this->shim().BasedOn());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_BasedOn(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BasedOn(*reinterpret_cast<Windows::UI::Xaml::Style const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Seal() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Seal();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IStyleFactory> : produce_base<D, Windows::UI::Xaml::IStyleFactory>
{
    HRESULT __stdcall CreateInstance(struct struct_Windows_UI_Xaml_Interop_TypeName targetType, void** instance) noexcept final
    {
        try
        {
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::UI::Xaml::Style>(this->shim().CreateInstance(*reinterpret_cast<Windows::UI::Xaml::Interop::TypeName const*>(&targetType)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::ITargetPropertyPath> : produce_base<D, Windows::UI::Xaml::ITargetPropertyPath>
{
    HRESULT __stdcall get_Path(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::PropertyPath>(this->shim().Path());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Path(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Path(*reinterpret_cast<Windows::UI::Xaml::PropertyPath const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Target(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().Target());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Target(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Target(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::ITargetPropertyPathFactory> : produce_base<D, Windows::UI::Xaml::ITargetPropertyPathFactory>
{
    HRESULT __stdcall CreateInstance(void* targetProperty, void** instance) noexcept final
    {
        try
        {
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::UI::Xaml::TargetPropertyPath>(this->shim().CreateInstance(*reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&targetProperty)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IThicknessHelper> : produce_base<D, Windows::UI::Xaml::IThicknessHelper>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IThicknessHelperStatics> : produce_base<D, Windows::UI::Xaml::IThicknessHelperStatics>
{
    HRESULT __stdcall FromLengths(double left, double top, double right, double bottom, struct struct_Windows_UI_Xaml_Thickness* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::Thickness>(this->shim().FromLengths(left, top, right, bottom));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FromUniformLength(double uniformLength, struct struct_Windows_UI_Xaml_Thickness* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::Thickness>(this->shim().FromUniformLength(uniformLength));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::ITriggerAction> : produce_base<D, Windows::UI::Xaml::ITriggerAction>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::ITriggerActionFactory> : produce_base<D, Windows::UI::Xaml::ITriggerActionFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::ITriggerBase> : produce_base<D, Windows::UI::Xaml::ITriggerBase>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::ITriggerBaseFactory> : produce_base<D, Windows::UI::Xaml::ITriggerBaseFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IUIElement> : produce_base<D, Windows::UI::Xaml::IUIElement>
{
    HRESULT __stdcall get_DesiredSize(Windows::Foundation::Size* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Size>(this->shim().DesiredSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AllowDrop(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowDrop());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AllowDrop(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowDrop(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Opacity(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Opacity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Opacity(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Opacity(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Clip(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::RectangleGeometry>(this->shim().Clip());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Clip(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Clip(*reinterpret_cast<Windows::UI::Xaml::Media::RectangleGeometry const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RenderTransform(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Transform>(this->shim().RenderTransform());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RenderTransform(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RenderTransform(*reinterpret_cast<Windows::UI::Xaml::Media::Transform const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Projection(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Projection>(this->shim().Projection());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Projection(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Projection(*reinterpret_cast<Windows::UI::Xaml::Media::Projection const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RenderTransformOrigin(Windows::Foundation::Point* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().RenderTransformOrigin());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RenderTransformOrigin(Windows::Foundation::Point value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RenderTransformOrigin(*reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsHitTestVisible(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsHitTestVisible());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsHitTestVisible(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsHitTestVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Visibility(Windows::UI::Xaml::Visibility* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Visibility>(this->shim().Visibility());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Visibility(Windows::UI::Xaml::Visibility value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Visibility(*reinterpret_cast<Windows::UI::Xaml::Visibility const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RenderSize(Windows::Foundation::Size* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Size>(this->shim().RenderSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UseLayoutRounding(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().UseLayoutRounding());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_UseLayoutRounding(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UseLayoutRounding(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Transitions(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Animation::TransitionCollection>(this->shim().Transitions());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Transitions(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Transitions(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::TransitionCollection const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CacheMode(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::CacheMode>(this->shim().CacheMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CacheMode(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CacheMode(*reinterpret_cast<Windows::UI::Xaml::Media::CacheMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsTapEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsTapEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsTapEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsTapEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsDoubleTapEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsDoubleTapEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsDoubleTapEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsDoubleTapEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsRightTapEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsRightTapEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsRightTapEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsRightTapEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsHoldingEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsHoldingEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsHoldingEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsHoldingEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ManipulationMode(Windows::UI::Xaml::Input::ManipulationModes* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Input::ManipulationModes>(this->shim().ManipulationMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ManipulationMode(Windows::UI::Xaml::Input::ManipulationModes value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ManipulationMode(*reinterpret_cast<Windows::UI::Xaml::Input::ManipulationModes const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PointerCaptures(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Input::Pointer>>(this->shim().PointerCaptures());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_KeyUp(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().KeyUp(*reinterpret_cast<Windows::UI::Xaml::Input::KeyEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_KeyUp(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyUp(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_KeyDown(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().KeyDown(*reinterpret_cast<Windows::UI::Xaml::Input::KeyEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_KeyDown(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyDown(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_GotFocus(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().GotFocus(*reinterpret_cast<Windows::UI::Xaml::RoutedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_GotFocus(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GotFocus(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_LostFocus(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().LostFocus(*reinterpret_cast<Windows::UI::Xaml::RoutedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_LostFocus(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LostFocus(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_DragEnter(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().DragEnter(*reinterpret_cast<Windows::UI::Xaml::DragEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_DragEnter(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DragEnter(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_DragLeave(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().DragLeave(*reinterpret_cast<Windows::UI::Xaml::DragEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_DragLeave(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DragLeave(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_DragOver(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().DragOver(*reinterpret_cast<Windows::UI::Xaml::DragEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_DragOver(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DragOver(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Drop(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Drop(*reinterpret_cast<Windows::UI::Xaml::DragEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Drop(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Drop(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PointerPressed(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PointerPressed(*reinterpret_cast<Windows::UI::Xaml::Input::PointerEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerPressed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerPressed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PointerMoved(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PointerMoved(*reinterpret_cast<Windows::UI::Xaml::Input::PointerEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerMoved(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerMoved(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PointerReleased(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PointerReleased(*reinterpret_cast<Windows::UI::Xaml::Input::PointerEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerReleased(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerReleased(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PointerEntered(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PointerEntered(*reinterpret_cast<Windows::UI::Xaml::Input::PointerEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerEntered(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerEntered(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PointerExited(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PointerExited(*reinterpret_cast<Windows::UI::Xaml::Input::PointerEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerExited(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerExited(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PointerCaptureLost(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PointerCaptureLost(*reinterpret_cast<Windows::UI::Xaml::Input::PointerEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerCaptureLost(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerCaptureLost(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PointerCanceled(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PointerCanceled(*reinterpret_cast<Windows::UI::Xaml::Input::PointerEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerCanceled(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerCanceled(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PointerWheelChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PointerWheelChanged(*reinterpret_cast<Windows::UI::Xaml::Input::PointerEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerWheelChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerWheelChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Tapped(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Tapped(*reinterpret_cast<Windows::UI::Xaml::Input::TappedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Tapped(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Tapped(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_DoubleTapped(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().DoubleTapped(*reinterpret_cast<Windows::UI::Xaml::Input::DoubleTappedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_DoubleTapped(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DoubleTapped(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Holding(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Holding(*reinterpret_cast<Windows::UI::Xaml::Input::HoldingEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Holding(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Holding(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_RightTapped(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().RightTapped(*reinterpret_cast<Windows::UI::Xaml::Input::RightTappedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_RightTapped(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RightTapped(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ManipulationStarting(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ManipulationStarting(*reinterpret_cast<Windows::UI::Xaml::Input::ManipulationStartingEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ManipulationStarting(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ManipulationStarting(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ManipulationInertiaStarting(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ManipulationInertiaStarting(*reinterpret_cast<Windows::UI::Xaml::Input::ManipulationInertiaStartingEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ManipulationInertiaStarting(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ManipulationInertiaStarting(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ManipulationStarted(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ManipulationStarted(*reinterpret_cast<Windows::UI::Xaml::Input::ManipulationStartedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ManipulationStarted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ManipulationStarted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ManipulationDelta(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ManipulationDelta(*reinterpret_cast<Windows::UI::Xaml::Input::ManipulationDeltaEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ManipulationDelta(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ManipulationDelta(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ManipulationCompleted(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ManipulationCompleted(*reinterpret_cast<Windows::UI::Xaml::Input::ManipulationCompletedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ManipulationCompleted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ManipulationCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Measure(Windows::Foundation::Size availableSize) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Measure(*reinterpret_cast<Windows::Foundation::Size const*>(&availableSize));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Arrange(Windows::Foundation::Rect finalRect) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Arrange(*reinterpret_cast<Windows::Foundation::Rect const*>(&finalRect));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CapturePointer(void* value, bool* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().CapturePointer(*reinterpret_cast<Windows::UI::Xaml::Input::Pointer const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReleasePointerCapture(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReleasePointerCapture(*reinterpret_cast<Windows::UI::Xaml::Input::Pointer const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReleasePointerCaptures() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReleasePointerCaptures();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AddHandler(void* routedEvent, void* handler, bool handledEventsToo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddHandler(*reinterpret_cast<Windows::UI::Xaml::RoutedEvent const*>(&routedEvent), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&handler), handledEventsToo);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveHandler(void* routedEvent, void* handler) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveHandler(*reinterpret_cast<Windows::UI::Xaml::RoutedEvent const*>(&routedEvent), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&handler));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TransformToVisual(void* visual, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::Media::GeneralTransform>(this->shim().TransformToVisual(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&visual)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InvalidateMeasure() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InvalidateMeasure();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InvalidateArrange() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InvalidateArrange();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UpdateLayout() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateLayout();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IUIElement2> : produce_base<D, Windows::UI::Xaml::IUIElement2>
{
    HRESULT __stdcall get_CompositeMode(Windows::UI::Xaml::Media::ElementCompositeMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::ElementCompositeMode>(this->shim().CompositeMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CompositeMode(Windows::UI::Xaml::Media::ElementCompositeMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CompositeMode(*reinterpret_cast<Windows::UI::Xaml::Media::ElementCompositeMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CancelDirectManipulations(bool* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().CancelDirectManipulations());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IUIElement3> : produce_base<D, Windows::UI::Xaml::IUIElement3>
{
    HRESULT __stdcall get_Transform3D(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Media3D::Transform3D>(this->shim().Transform3D());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Transform3D(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Transform3D(*reinterpret_cast<Windows::UI::Xaml::Media::Media3D::Transform3D const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CanDrag(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanDrag());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CanDrag(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanDrag(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_DragStarting(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().DragStarting(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DragStartingEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_DragStarting(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DragStarting(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_DropCompleted(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().DropCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DropCompletedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_DropCompleted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DropCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartDragAsync(void* pointerPoint, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation>>(this->shim().StartDragAsync(*reinterpret_cast<Windows::UI::Input::PointerPoint const*>(&pointerPoint)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IUIElement4> : produce_base<D, Windows::UI::Xaml::IUIElement4>
{
    HRESULT __stdcall get_ContextFlyout(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Primitives::FlyoutBase>(this->shim().ContextFlyout());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ContextFlyout(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContextFlyout(*reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::FlyoutBase const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ExitDisplayModeOnAccessKeyInvoked(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ExitDisplayModeOnAccessKeyInvoked());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ExitDisplayModeOnAccessKeyInvoked(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExitDisplayModeOnAccessKeyInvoked(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsAccessKeyScope(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsAccessKeyScope());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsAccessKeyScope(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsAccessKeyScope(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AccessKeyScopeOwner(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyObject>(this->shim().AccessKeyScopeOwner());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AccessKeyScopeOwner(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AccessKeyScopeOwner(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AccessKey(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AccessKey());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AccessKey(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AccessKey(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ContextRequested(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ContextRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::ContextRequestedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ContextRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContextRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ContextCanceled(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ContextCanceled(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::RoutedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ContextCanceled(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContextCanceled(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_AccessKeyDisplayRequested(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().AccessKeyDisplayRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_AccessKeyDisplayRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AccessKeyDisplayRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_AccessKeyDisplayDismissed(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().AccessKeyDisplayDismissed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_AccessKeyDisplayDismissed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AccessKeyDisplayDismissed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_AccessKeyInvoked(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().AccessKeyInvoked(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_AccessKeyInvoked(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AccessKeyInvoked(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IUIElement5> : produce_base<D, Windows::UI::Xaml::IUIElement5>
{
    HRESULT __stdcall get_Lights(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::XamlLight>>(this->shim().Lights());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_KeyTipPlacementMode(Windows::UI::Xaml::Input::KeyTipPlacementMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Input::KeyTipPlacementMode>(this->shim().KeyTipPlacementMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_KeyTipPlacementMode(Windows::UI::Xaml::Input::KeyTipPlacementMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyTipPlacementMode(*reinterpret_cast<Windows::UI::Xaml::Input::KeyTipPlacementMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_KeyTipHorizontalOffset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().KeyTipHorizontalOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_KeyTipHorizontalOffset(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyTipHorizontalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_KeyTipVerticalOffset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().KeyTipVerticalOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_KeyTipVerticalOffset(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyTipVerticalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_XYFocusKeyboardNavigation(Windows::UI::Xaml::Input::XYFocusKeyboardNavigationMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Input::XYFocusKeyboardNavigationMode>(this->shim().XYFocusKeyboardNavigation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_XYFocusKeyboardNavigation(Windows::UI::Xaml::Input::XYFocusKeyboardNavigationMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().XYFocusKeyboardNavigation(*reinterpret_cast<Windows::UI::Xaml::Input::XYFocusKeyboardNavigationMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_XYFocusUpNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Input::XYFocusNavigationStrategy>(this->shim().XYFocusUpNavigationStrategy());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_XYFocusUpNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().XYFocusUpNavigationStrategy(*reinterpret_cast<Windows::UI::Xaml::Input::XYFocusNavigationStrategy const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_XYFocusDownNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Input::XYFocusNavigationStrategy>(this->shim().XYFocusDownNavigationStrategy());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_XYFocusDownNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().XYFocusDownNavigationStrategy(*reinterpret_cast<Windows::UI::Xaml::Input::XYFocusNavigationStrategy const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_XYFocusLeftNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Input::XYFocusNavigationStrategy>(this->shim().XYFocusLeftNavigationStrategy());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_XYFocusLeftNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().XYFocusLeftNavigationStrategy(*reinterpret_cast<Windows::UI::Xaml::Input::XYFocusNavigationStrategy const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_XYFocusRightNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Input::XYFocusNavigationStrategy>(this->shim().XYFocusRightNavigationStrategy());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_XYFocusRightNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().XYFocusRightNavigationStrategy(*reinterpret_cast<Windows::UI::Xaml::Input::XYFocusNavigationStrategy const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HighContrastAdjustment(Windows::UI::Xaml::ElementHighContrastAdjustment* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::ElementHighContrastAdjustment>(this->shim().HighContrastAdjustment());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_HighContrastAdjustment(Windows::UI::Xaml::ElementHighContrastAdjustment value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HighContrastAdjustment(*reinterpret_cast<Windows::UI::Xaml::ElementHighContrastAdjustment const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TabFocusNavigation(Windows::UI::Xaml::Input::KeyboardNavigationMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Input::KeyboardNavigationMode>(this->shim().TabFocusNavigation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TabFocusNavigation(Windows::UI::Xaml::Input::KeyboardNavigationMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TabFocusNavigation(*reinterpret_cast<Windows::UI::Xaml::Input::KeyboardNavigationMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_GettingFocus(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().GettingFocus(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::GettingFocusEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_GettingFocus(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GettingFocus(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_LosingFocus(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().LosingFocus(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::LosingFocusEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_LosingFocus(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LosingFocus(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_NoFocusCandidateFound(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().NoFocusCandidateFound(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_NoFocusCandidateFound(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NoFocusCandidateFound(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartBringIntoView() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartBringIntoView();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartBringIntoViewWithOptions(void* options) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartBringIntoView(*reinterpret_cast<Windows::UI::Xaml::BringIntoViewOptions const*>(&options));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IUIElement7> : produce_base<D, Windows::UI::Xaml::IUIElement7>
{
    HRESULT __stdcall get_KeyboardAccelerators(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Input::KeyboardAccelerator>>(this->shim().KeyboardAccelerators());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_CharacterReceived(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().CharacterReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::CharacterReceivedRoutedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_CharacterReceived(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CharacterReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ProcessKeyboardAccelerators(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ProcessKeyboardAccelerators(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ProcessKeyboardAccelerators(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProcessKeyboardAccelerators(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PreviewKeyDown(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PreviewKeyDown(*reinterpret_cast<Windows::UI::Xaml::Input::KeyEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PreviewKeyDown(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PreviewKeyDown(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PreviewKeyUp(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PreviewKeyUp(*reinterpret_cast<Windows::UI::Xaml::Input::KeyEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PreviewKeyUp(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PreviewKeyUp(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryInvokeKeyboardAccelerator(void* args) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TryInvokeKeyboardAccelerator(*reinterpret_cast<Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs const*>(&args));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IUIElement8> : produce_base<D, Windows::UI::Xaml::IUIElement8>
{
    HRESULT __stdcall get_KeyTipTarget(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyObject>(this->shim().KeyTipTarget());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_KeyTipTarget(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyTipTarget(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_KeyboardAcceleratorPlacementTarget(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyObject>(this->shim().KeyboardAcceleratorPlacementTarget());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_KeyboardAcceleratorPlacementTarget(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyboardAcceleratorPlacementTarget(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_KeyboardAcceleratorPlacementMode(Windows::UI::Xaml::Input::KeyboardAcceleratorPlacementMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Input::KeyboardAcceleratorPlacementMode>(this->shim().KeyboardAcceleratorPlacementMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_KeyboardAcceleratorPlacementMode(Windows::UI::Xaml::Input::KeyboardAcceleratorPlacementMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyboardAcceleratorPlacementMode(*reinterpret_cast<Windows::UI::Xaml::Input::KeyboardAcceleratorPlacementMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_BringIntoViewRequested(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().BringIntoViewRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::BringIntoViewRequestedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_BringIntoViewRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BringIntoViewRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IUIElementFactory> : produce_base<D, Windows::UI::Xaml::IUIElementFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IUIElementOverrides> : produce_base<D, Windows::UI::Xaml::IUIElementOverrides>
{
    HRESULT __stdcall OnCreateAutomationPeer(void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::Automation::Peers::AutomationPeer>(this->shim().OnCreateAutomationPeer());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OnDisconnectVisualChildren() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnDisconnectVisualChildren();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindSubElementsForTouchTargeting(Windows::Foundation::Point point, Windows::Foundation::Rect boundingRect, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IIterable<Windows::Foundation::Point>>>(this->shim().FindSubElementsForTouchTargeting(*reinterpret_cast<Windows::Foundation::Point const*>(&point), *reinterpret_cast<Windows::Foundation::Rect const*>(&boundingRect)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IUIElementOverrides7> : produce_base<D, Windows::UI::Xaml::IUIElementOverrides7>
{
    HRESULT __stdcall GetChildrenInTabFocusOrder(void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::DependencyObject>>(this->shim().GetChildrenInTabFocusOrder());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OnProcessKeyboardAccelerators(void* args) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnProcessKeyboardAccelerators(*reinterpret_cast<Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs const*>(&args));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IUIElementOverrides8> : produce_base<D, Windows::UI::Xaml::IUIElementOverrides8>
{
    HRESULT __stdcall OnKeyboardAcceleratorInvoked(void* args) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnKeyboardAcceleratorInvoked(*reinterpret_cast<Windows::UI::Xaml::Input::KeyboardAcceleratorInvokedEventArgs const*>(&args));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OnBringIntoViewRequested(void* e) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnBringIntoViewRequested(*reinterpret_cast<Windows::UI::Xaml::BringIntoViewRequestedEventArgs const*>(&e));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IUIElementStatics> : produce_base<D, Windows::UI::Xaml::IUIElementStatics>
{
    HRESULT __stdcall get_KeyDownEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().KeyDownEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_KeyUpEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().KeyUpEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PointerEnteredEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().PointerEnteredEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PointerPressedEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().PointerPressedEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PointerMovedEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().PointerMovedEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PointerReleasedEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().PointerReleasedEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PointerExitedEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().PointerExitedEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PointerCaptureLostEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().PointerCaptureLostEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PointerCanceledEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().PointerCanceledEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PointerWheelChangedEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().PointerWheelChangedEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TappedEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().TappedEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DoubleTappedEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().DoubleTappedEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HoldingEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().HoldingEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RightTappedEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().RightTappedEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ManipulationStartingEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().ManipulationStartingEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ManipulationInertiaStartingEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().ManipulationInertiaStartingEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ManipulationStartedEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().ManipulationStartedEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ManipulationDeltaEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().ManipulationDeltaEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ManipulationCompletedEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().ManipulationCompletedEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DragEnterEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().DragEnterEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DragLeaveEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().DragLeaveEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DragOverEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().DragOverEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DropEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().DropEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AllowDropProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().AllowDropProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OpacityProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().OpacityProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ClipProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ClipProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RenderTransformProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().RenderTransformProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ProjectionProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ProjectionProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RenderTransformOriginProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().RenderTransformOriginProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsHitTestVisibleProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IsHitTestVisibleProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VisibilityProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().VisibilityProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UseLayoutRoundingProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().UseLayoutRoundingProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TransitionsProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().TransitionsProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CacheModeProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CacheModeProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsTapEnabledProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IsTapEnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsDoubleTapEnabledProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IsDoubleTapEnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsRightTapEnabledProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IsRightTapEnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsHoldingEnabledProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IsHoldingEnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ManipulationModeProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ManipulationModeProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PointerCapturesProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().PointerCapturesProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IUIElementStatics2> : produce_base<D, Windows::UI::Xaml::IUIElementStatics2>
{
    HRESULT __stdcall get_CompositeModeProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CompositeModeProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IUIElementStatics3> : produce_base<D, Windows::UI::Xaml::IUIElementStatics3>
{
    HRESULT __stdcall get_Transform3DProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().Transform3DProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CanDragProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CanDragProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryStartDirectManipulation(void* value, bool* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().TryStartDirectManipulation(*reinterpret_cast<Windows::UI::Xaml::Input::Pointer const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IUIElementStatics4> : produce_base<D, Windows::UI::Xaml::IUIElementStatics4>
{
    HRESULT __stdcall get_ContextFlyoutProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ContextFlyoutProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ExitDisplayModeOnAccessKeyInvokedProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ExitDisplayModeOnAccessKeyInvokedProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsAccessKeyScopeProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IsAccessKeyScopeProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AccessKeyScopeOwnerProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().AccessKeyScopeOwnerProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AccessKeyProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().AccessKeyProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IUIElementStatics5> : produce_base<D, Windows::UI::Xaml::IUIElementStatics5>
{
    HRESULT __stdcall get_LightsProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().LightsProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_KeyTipPlacementModeProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().KeyTipPlacementModeProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_KeyTipHorizontalOffsetProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().KeyTipHorizontalOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_KeyTipVerticalOffsetProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().KeyTipVerticalOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_XYFocusKeyboardNavigationProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().XYFocusKeyboardNavigationProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_XYFocusUpNavigationStrategyProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().XYFocusUpNavigationStrategyProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_XYFocusDownNavigationStrategyProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().XYFocusDownNavigationStrategyProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_XYFocusLeftNavigationStrategyProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().XYFocusLeftNavigationStrategyProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_XYFocusRightNavigationStrategyProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().XYFocusRightNavigationStrategyProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HighContrastAdjustmentProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().HighContrastAdjustmentProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TabFocusNavigationProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().TabFocusNavigationProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IUIElementStatics6> : produce_base<D, Windows::UI::Xaml::IUIElementStatics6>
{
    HRESULT __stdcall get_GettingFocusEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().GettingFocusEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LosingFocusEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().LosingFocusEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NoFocusCandidateFoundEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().NoFocusCandidateFoundEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IUIElementStatics7> : produce_base<D, Windows::UI::Xaml::IUIElementStatics7>
{
    HRESULT __stdcall get_PreviewKeyDownEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().PreviewKeyDownEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CharacterReceivedEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().CharacterReceivedEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PreviewKeyUpEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().PreviewKeyUpEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IUIElementStatics8> : produce_base<D, Windows::UI::Xaml::IUIElementStatics8>
{
    HRESULT __stdcall get_BringIntoViewRequestedEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().BringIntoViewRequestedEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ContextRequestedEvent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::RoutedEvent>(this->shim().ContextRequestedEvent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_KeyTipTargetProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().KeyTipTargetProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_KeyboardAcceleratorPlacementTargetProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().KeyboardAcceleratorPlacementTargetProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_KeyboardAcceleratorPlacementModeProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().KeyboardAcceleratorPlacementModeProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RegisterAsScrollPort(void* element) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegisterAsScrollPort(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IUnhandledExceptionEventArgs> : produce_base<D, Windows::UI::Xaml::IUnhandledExceptionEventArgs>
{
    HRESULT __stdcall get_Exception(HRESULT* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<HRESULT>(this->shim().Exception());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Message(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Message());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

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
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IVisualState> : produce_base<D, Windows::UI::Xaml::IVisualState>
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

    HRESULT __stdcall get_Storyboard(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Animation::Storyboard>(this->shim().Storyboard());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Storyboard(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Storyboard(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::Storyboard const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IVisualState2> : produce_base<D, Windows::UI::Xaml::IVisualState2>
{
    HRESULT __stdcall get_Setters(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::SetterBaseCollection>(this->shim().Setters());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StateTriggers(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::StateTriggerBase>>(this->shim().StateTriggers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IVisualStateChangedEventArgs> : produce_base<D, Windows::UI::Xaml::IVisualStateChangedEventArgs>
{
    HRESULT __stdcall get_OldState(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::VisualState>(this->shim().OldState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_OldState(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OldState(*reinterpret_cast<Windows::UI::Xaml::VisualState const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NewState(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::VisualState>(this->shim().NewState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_NewState(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NewState(*reinterpret_cast<Windows::UI::Xaml::VisualState const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Control(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Control>(this->shim().Control());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Control(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Control(*reinterpret_cast<Windows::UI::Xaml::Controls::Control const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IVisualStateGroup> : produce_base<D, Windows::UI::Xaml::IVisualStateGroup>
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

    HRESULT __stdcall get_Transitions(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::VisualTransition>>(this->shim().Transitions());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_States(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::VisualState>>(this->shim().States());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentState(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::VisualState>(this->shim().CurrentState());
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
            *token = detach_from<event_token>(this->shim().CurrentStateChanged(*reinterpret_cast<Windows::UI::Xaml::VisualStateChangedEventHandler const*>(&value)));
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

    HRESULT __stdcall add_CurrentStateChanging(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().CurrentStateChanging(*reinterpret_cast<Windows::UI::Xaml::VisualStateChangedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_CurrentStateChanging(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CurrentStateChanging(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IVisualStateManager> : produce_base<D, Windows::UI::Xaml::IVisualStateManager>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IVisualStateManagerFactory> : produce_base<D, Windows::UI::Xaml::IVisualStateManagerFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::VisualStateManager>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IVisualStateManagerOverrides> : produce_base<D, Windows::UI::Xaml::IVisualStateManagerOverrides>
{
    HRESULT __stdcall GoToStateCore(void* control, void* templateRoot, HSTRING stateName, void* group, void* state, bool useTransitions, bool* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().GoToStateCore(*reinterpret_cast<Windows::UI::Xaml::Controls::Control const*>(&control), *reinterpret_cast<Windows::UI::Xaml::FrameworkElement const*>(&templateRoot), *reinterpret_cast<hstring const*>(&stateName), *reinterpret_cast<Windows::UI::Xaml::VisualStateGroup const*>(&group), *reinterpret_cast<Windows::UI::Xaml::VisualState const*>(&state), useTransitions));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IVisualStateManagerProtected> : produce_base<D, Windows::UI::Xaml::IVisualStateManagerProtected>
{
    HRESULT __stdcall RaiseCurrentStateChanging(void* stateGroup, void* oldState, void* newState, void* control) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RaiseCurrentStateChanging(*reinterpret_cast<Windows::UI::Xaml::VisualStateGroup const*>(&stateGroup), *reinterpret_cast<Windows::UI::Xaml::VisualState const*>(&oldState), *reinterpret_cast<Windows::UI::Xaml::VisualState const*>(&newState), *reinterpret_cast<Windows::UI::Xaml::Controls::Control const*>(&control));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RaiseCurrentStateChanged(void* stateGroup, void* oldState, void* newState, void* control) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RaiseCurrentStateChanged(*reinterpret_cast<Windows::UI::Xaml::VisualStateGroup const*>(&stateGroup), *reinterpret_cast<Windows::UI::Xaml::VisualState const*>(&oldState), *reinterpret_cast<Windows::UI::Xaml::VisualState const*>(&newState), *reinterpret_cast<Windows::UI::Xaml::Controls::Control const*>(&control));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IVisualStateManagerStatics> : produce_base<D, Windows::UI::Xaml::IVisualStateManagerStatics>
{
    HRESULT __stdcall GetVisualStateGroups(void* obj, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::VisualStateGroup>>(this->shim().GetVisualStateGroups(*reinterpret_cast<Windows::UI::Xaml::FrameworkElement const*>(&obj)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CustomVisualStateManagerProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CustomVisualStateManagerProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetCustomVisualStateManager(void* obj, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::VisualStateManager>(this->shim().GetCustomVisualStateManager(*reinterpret_cast<Windows::UI::Xaml::FrameworkElement const*>(&obj)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetCustomVisualStateManager(void* obj, void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetCustomVisualStateManager(*reinterpret_cast<Windows::UI::Xaml::FrameworkElement const*>(&obj), *reinterpret_cast<Windows::UI::Xaml::VisualStateManager const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GoToState(void* control, HSTRING stateName, bool useTransitions, bool* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().GoToState(*reinterpret_cast<Windows::UI::Xaml::Controls::Control const*>(&control), *reinterpret_cast<hstring const*>(&stateName), useTransitions));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IVisualTransition> : produce_base<D, Windows::UI::Xaml::IVisualTransition>
{
    HRESULT __stdcall get_GeneratedDuration(struct struct_Windows_UI_Xaml_Duration* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Duration>(this->shim().GeneratedDuration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_GeneratedDuration(struct struct_Windows_UI_Xaml_Duration value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GeneratedDuration(*reinterpret_cast<Windows::UI::Xaml::Duration const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_GeneratedEasingFunction(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Animation::EasingFunctionBase>(this->shim().GeneratedEasingFunction());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_GeneratedEasingFunction(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GeneratedEasingFunction(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::EasingFunctionBase const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_To(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().To());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_To(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().To(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_From(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().From());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_From(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().From(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Storyboard(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Animation::Storyboard>(this->shim().Storyboard());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Storyboard(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Storyboard(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::Storyboard const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IVisualTransitionFactory> : produce_base<D, Windows::UI::Xaml::IVisualTransitionFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::VisualTransition>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IWindow> : produce_base<D, Windows::UI::Xaml::IWindow>
{
    HRESULT __stdcall get_Bounds(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Rect>(this->shim().Bounds());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Visible(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Visible());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Content(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::UIElement>(this->shim().Content());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Content(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Content(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CoreWindow(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Core::CoreWindow>(this->shim().CoreWindow());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Dispatcher(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Core::CoreDispatcher>(this->shim().Dispatcher());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Activated(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Activated(*reinterpret_cast<Windows::UI::Xaml::WindowActivatedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Activated(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Activated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Closed(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Closed(*reinterpret_cast<Windows::UI::Xaml::WindowClosedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Closed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Closed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SizeChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SizeChanged(*reinterpret_cast<Windows::UI::Xaml::WindowSizeChangedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SizeChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SizeChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_VisibilityChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().VisibilityChanged(*reinterpret_cast<Windows::UI::Xaml::WindowVisibilityChangedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_VisibilityChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VisibilityChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Activate() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Activate();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Close() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Close();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IWindow2> : produce_base<D, Windows::UI::Xaml::IWindow2>
{
    HRESULT __stdcall SetTitleBar(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetTitleBar(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IWindow3> : produce_base<D, Windows::UI::Xaml::IWindow3>
{
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
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IWindowCreatedEventArgs> : produce_base<D, Windows::UI::Xaml::IWindowCreatedEventArgs>
{
    HRESULT __stdcall get_Window(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Window>(this->shim().Window());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IWindowStatics> : produce_base<D, Windows::UI::Xaml::IWindowStatics>
{
    HRESULT __stdcall get_Current(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Window>(this->shim().Current());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename T, typename D>
struct WINRT_EBO produce_dispatch_to_overridable<T, D, Windows::UI::Xaml::IApplicationOverrides>
    : produce_dispatch_to_overridable_base<T, D, Windows::UI::Xaml::IApplicationOverrides>
{
    void OnActivated(Windows::ApplicationModel::Activation::IActivatedEventArgs const& args)
    {
        Windows::UI::Xaml::IApplicationOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.OnActivated(args);
        }
        return this->shim().OnActivated(args);
    }
    void OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs const& args)
    {
        Windows::UI::Xaml::IApplicationOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.OnLaunched(args);
        }
        return this->shim().OnLaunched(args);
    }
    void OnFileActivated(Windows::ApplicationModel::Activation::FileActivatedEventArgs const& args)
    {
        Windows::UI::Xaml::IApplicationOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.OnFileActivated(args);
        }
        return this->shim().OnFileActivated(args);
    }
    void OnSearchActivated(Windows::ApplicationModel::Activation::SearchActivatedEventArgs const& args)
    {
        Windows::UI::Xaml::IApplicationOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.OnSearchActivated(args);
        }
        return this->shim().OnSearchActivated(args);
    }
    void OnShareTargetActivated(Windows::ApplicationModel::Activation::ShareTargetActivatedEventArgs const& args)
    {
        Windows::UI::Xaml::IApplicationOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.OnShareTargetActivated(args);
        }
        return this->shim().OnShareTargetActivated(args);
    }
    void OnFileOpenPickerActivated(Windows::ApplicationModel::Activation::FileOpenPickerActivatedEventArgs const& args)
    {
        Windows::UI::Xaml::IApplicationOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.OnFileOpenPickerActivated(args);
        }
        return this->shim().OnFileOpenPickerActivated(args);
    }
    void OnFileSavePickerActivated(Windows::ApplicationModel::Activation::FileSavePickerActivatedEventArgs const& args)
    {
        Windows::UI::Xaml::IApplicationOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.OnFileSavePickerActivated(args);
        }
        return this->shim().OnFileSavePickerActivated(args);
    }
    void OnCachedFileUpdaterActivated(Windows::ApplicationModel::Activation::CachedFileUpdaterActivatedEventArgs const& args)
    {
        Windows::UI::Xaml::IApplicationOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.OnCachedFileUpdaterActivated(args);
        }
        return this->shim().OnCachedFileUpdaterActivated(args);
    }
    void OnWindowCreated(Windows::UI::Xaml::WindowCreatedEventArgs const& args)
    {
        Windows::UI::Xaml::IApplicationOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.OnWindowCreated(args);
        }
        return this->shim().OnWindowCreated(args);
    }
};
template <typename T, typename D>
struct WINRT_EBO produce_dispatch_to_overridable<T, D, Windows::UI::Xaml::IApplicationOverrides2>
    : produce_dispatch_to_overridable_base<T, D, Windows::UI::Xaml::IApplicationOverrides2>
{
    void OnBackgroundActivated(Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs const& args)
    {
        Windows::UI::Xaml::IApplicationOverrides2 overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.OnBackgroundActivated(args);
        }
        return this->shim().OnBackgroundActivated(args);
    }
};
template <typename T, typename D>
struct WINRT_EBO produce_dispatch_to_overridable<T, D, Windows::UI::Xaml::IFrameworkElementOverrides>
    : produce_dispatch_to_overridable_base<T, D, Windows::UI::Xaml::IFrameworkElementOverrides>
{
    Windows::Foundation::Size MeasureOverride(Windows::Foundation::Size const& availableSize)
    {
        Windows::UI::Xaml::IFrameworkElementOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.MeasureOverride(availableSize);
        }
        return this->shim().MeasureOverride(availableSize);
    }
    Windows::Foundation::Size ArrangeOverride(Windows::Foundation::Size const& finalSize)
    {
        Windows::UI::Xaml::IFrameworkElementOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.ArrangeOverride(finalSize);
        }
        return this->shim().ArrangeOverride(finalSize);
    }
    void OnApplyTemplate()
    {
        Windows::UI::Xaml::IFrameworkElementOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.OnApplyTemplate();
        }
        return this->shim().OnApplyTemplate();
    }
};
template <typename T, typename D>
struct WINRT_EBO produce_dispatch_to_overridable<T, D, Windows::UI::Xaml::IFrameworkElementOverrides2>
    : produce_dispatch_to_overridable_base<T, D, Windows::UI::Xaml::IFrameworkElementOverrides2>
{
    bool GoToElementStateCore(hstring const& stateName, bool useTransitions)
    {
        Windows::UI::Xaml::IFrameworkElementOverrides2 overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.GoToElementStateCore(stateName, useTransitions);
        }
        return this->shim().GoToElementStateCore(stateName, useTransitions);
    }
};
template <typename T, typename D>
struct WINRT_EBO produce_dispatch_to_overridable<T, D, Windows::UI::Xaml::IUIElementOverrides>
    : produce_dispatch_to_overridable_base<T, D, Windows::UI::Xaml::IUIElementOverrides>
{
    Windows::UI::Xaml::Automation::Peers::AutomationPeer OnCreateAutomationPeer()
    {
        Windows::UI::Xaml::IUIElementOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.OnCreateAutomationPeer();
        }
        return this->shim().OnCreateAutomationPeer();
    }
    void OnDisconnectVisualChildren()
    {
        Windows::UI::Xaml::IUIElementOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.OnDisconnectVisualChildren();
        }
        return this->shim().OnDisconnectVisualChildren();
    }
    Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IIterable<Windows::Foundation::Point>> FindSubElementsForTouchTargeting(Windows::Foundation::Point const& point, Windows::Foundation::Rect const& boundingRect)
    {
        Windows::UI::Xaml::IUIElementOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.FindSubElementsForTouchTargeting(point, boundingRect);
        }
        return this->shim().FindSubElementsForTouchTargeting(point, boundingRect);
    }
};
template <typename T, typename D>
struct WINRT_EBO produce_dispatch_to_overridable<T, D, Windows::UI::Xaml::IUIElementOverrides7>
    : produce_dispatch_to_overridable_base<T, D, Windows::UI::Xaml::IUIElementOverrides7>
{
    Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::DependencyObject> GetChildrenInTabFocusOrder()
    {
        Windows::UI::Xaml::IUIElementOverrides7 overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.GetChildrenInTabFocusOrder();
        }
        return this->shim().GetChildrenInTabFocusOrder();
    }
    void OnProcessKeyboardAccelerators(Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs const& args)
    {
        Windows::UI::Xaml::IUIElementOverrides7 overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.OnProcessKeyboardAccelerators(args);
        }
        return this->shim().OnProcessKeyboardAccelerators(args);
    }
};
template <typename T, typename D>
struct WINRT_EBO produce_dispatch_to_overridable<T, D, Windows::UI::Xaml::IUIElementOverrides8>
    : produce_dispatch_to_overridable_base<T, D, Windows::UI::Xaml::IUIElementOverrides8>
{
    void OnKeyboardAcceleratorInvoked(Windows::UI::Xaml::Input::KeyboardAcceleratorInvokedEventArgs const& args)
    {
        Windows::UI::Xaml::IUIElementOverrides8 overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.OnKeyboardAcceleratorInvoked(args);
        }
        return this->shim().OnKeyboardAcceleratorInvoked(args);
    }
    void OnBringIntoViewRequested(Windows::UI::Xaml::BringIntoViewRequestedEventArgs const& e)
    {
        Windows::UI::Xaml::IUIElementOverrides8 overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.OnBringIntoViewRequested(e);
        }
        return this->shim().OnBringIntoViewRequested(e);
    }
};
template <typename T, typename D>
struct WINRT_EBO produce_dispatch_to_overridable<T, D, Windows::UI::Xaml::IVisualStateManagerOverrides>
    : produce_dispatch_to_overridable_base<T, D, Windows::UI::Xaml::IVisualStateManagerOverrides>
{
    bool GoToStateCore(Windows::UI::Xaml::Controls::Control const& control, Windows::UI::Xaml::FrameworkElement const& templateRoot, hstring const& stateName, Windows::UI::Xaml::VisualStateGroup const& group, Windows::UI::Xaml::VisualState const& state, bool useTransitions)
    {
        Windows::UI::Xaml::IVisualStateManagerOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.GoToStateCore(control, templateRoot, stateName, group, state, useTransitions);
        }
        return this->shim().GoToStateCore(control, templateRoot, stateName, group, state, useTransitions);
    }
};
}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml {

inline AdaptiveTrigger::AdaptiveTrigger()
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<AdaptiveTrigger, Windows::UI::Xaml::IAdaptiveTriggerFactory>().CreateInstance(outer, inner);
}

inline Windows::UI::Xaml::DependencyProperty AdaptiveTrigger::MinWindowWidthProperty()
{
    return get_activation_factory<AdaptiveTrigger, Windows::UI::Xaml::IAdaptiveTriggerStatics>().MinWindowWidthProperty();
}

inline Windows::UI::Xaml::DependencyProperty AdaptiveTrigger::MinWindowHeightProperty()
{
    return get_activation_factory<AdaptiveTrigger, Windows::UI::Xaml::IAdaptiveTriggerStatics>().MinWindowHeightProperty();
}

inline Application::Application()
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<Application, Windows::UI::Xaml::IApplicationFactory>().CreateInstance(outer, inner);
}

inline Windows::UI::Xaml::Application Application::Current()
{
    return get_activation_factory<Application, Windows::UI::Xaml::IApplicationStatics>().Current();
}

inline void Application::Start(Windows::UI::Xaml::ApplicationInitializationCallback const& callback)
{
    get_activation_factory<Application, Windows::UI::Xaml::IApplicationStatics>().Start(callback);
}

inline void Application::LoadComponent(Windows::Foundation::IInspectable const& component, Windows::Foundation::Uri const& resourceLocator)
{
    get_activation_factory<Application, Windows::UI::Xaml::IApplicationStatics>().LoadComponent(component, resourceLocator);
}

inline void Application::LoadComponent(Windows::Foundation::IInspectable const& component, Windows::Foundation::Uri const& resourceLocator, Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation const& componentResourceLocation)
{
    get_activation_factory<Application, Windows::UI::Xaml::IApplicationStatics>().LoadComponent(component, resourceLocator, componentResourceLocation);
}

inline BringIntoViewOptions::BringIntoViewOptions() :
    BringIntoViewOptions(get_activation_factory<BringIntoViewOptions>().ActivateInstance<BringIntoViewOptions>())
{}

inline Windows::UI::Xaml::CornerRadius CornerRadiusHelper::FromRadii(double topLeft, double topRight, double bottomRight, double bottomLeft)
{
    return get_activation_factory<CornerRadiusHelper, Windows::UI::Xaml::ICornerRadiusHelperStatics>().FromRadii(topLeft, topRight, bottomRight, bottomLeft);
}

inline Windows::UI::Xaml::CornerRadius CornerRadiusHelper::FromUniformRadius(double uniformRadius)
{
    return get_activation_factory<CornerRadiusHelper, Windows::UI::Xaml::ICornerRadiusHelperStatics>().FromUniformRadius(uniformRadius);
}

inline DataTemplate::DataTemplate()
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<DataTemplate, Windows::UI::Xaml::IDataTemplateFactory>().CreateInstance(outer, inner);
}

inline Windows::UI::Xaml::DependencyProperty DataTemplate::ExtensionInstanceProperty()
{
    return get_activation_factory<DataTemplate, Windows::UI::Xaml::IDataTemplateStatics2>().ExtensionInstanceProperty();
}

inline Windows::UI::Xaml::IDataTemplateExtension DataTemplate::GetExtensionInstance(Windows::UI::Xaml::FrameworkElement const& element)
{
    return get_activation_factory<DataTemplate, Windows::UI::Xaml::IDataTemplateStatics2>().GetExtensionInstance(element);
}

inline void DataTemplate::SetExtensionInstance(Windows::UI::Xaml::FrameworkElement const& element, Windows::UI::Xaml::IDataTemplateExtension const& value)
{
    get_activation_factory<DataTemplate, Windows::UI::Xaml::IDataTemplateStatics2>().SetExtensionInstance(element, value);
}

inline DataTemplateKey::DataTemplateKey()
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<DataTemplateKey, Windows::UI::Xaml::IDataTemplateKeyFactory>().CreateInstance(outer, inner);
}

inline DataTemplateKey::DataTemplateKey(Windows::Foundation::IInspectable const& dataType)
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<DataTemplateKey, Windows::UI::Xaml::IDataTemplateKeyFactory>().CreateInstanceWithType(dataType, outer, inner);
}

inline DependencyObjectCollection::DependencyObjectCollection()
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<DependencyObjectCollection, Windows::UI::Xaml::IDependencyObjectCollectionFactory>().CreateInstance(outer, inner);
}

inline Windows::Foundation::IInspectable DependencyProperty::UnsetValue()
{
    return get_activation_factory<DependencyProperty, Windows::UI::Xaml::IDependencyPropertyStatics>().UnsetValue();
}

inline Windows::UI::Xaml::DependencyProperty DependencyProperty::Register(param::hstring const& name, Windows::UI::Xaml::Interop::TypeName const& propertyType, Windows::UI::Xaml::Interop::TypeName const& ownerType, Windows::UI::Xaml::PropertyMetadata const& typeMetadata)
{
    return get_activation_factory<DependencyProperty, Windows::UI::Xaml::IDependencyPropertyStatics>().Register(name, propertyType, ownerType, typeMetadata);
}

inline Windows::UI::Xaml::DependencyProperty DependencyProperty::RegisterAttached(param::hstring const& name, Windows::UI::Xaml::Interop::TypeName const& propertyType, Windows::UI::Xaml::Interop::TypeName const& ownerType, Windows::UI::Xaml::PropertyMetadata const& defaultMetadata)
{
    return get_activation_factory<DependencyProperty, Windows::UI::Xaml::IDependencyPropertyStatics>().RegisterAttached(name, propertyType, ownerType, defaultMetadata);
}

inline DispatcherTimer::DispatcherTimer()
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<DispatcherTimer, Windows::UI::Xaml::IDispatcherTimerFactory>().CreateInstance(outer, inner);
}

inline Windows::UI::Xaml::Duration DurationHelper::Automatic()
{
    return get_activation_factory<DurationHelper, Windows::UI::Xaml::IDurationHelperStatics>().Automatic();
}

inline Windows::UI::Xaml::Duration DurationHelper::Forever()
{
    return get_activation_factory<DurationHelper, Windows::UI::Xaml::IDurationHelperStatics>().Forever();
}

inline int32_t DurationHelper::Compare(Windows::UI::Xaml::Duration const& duration1, Windows::UI::Xaml::Duration const& duration2)
{
    return get_activation_factory<DurationHelper, Windows::UI::Xaml::IDurationHelperStatics>().Compare(duration1, duration2);
}

inline Windows::UI::Xaml::Duration DurationHelper::FromTimeSpan(Windows::Foundation::TimeSpan const& timeSpan)
{
    return get_activation_factory<DurationHelper, Windows::UI::Xaml::IDurationHelperStatics>().FromTimeSpan(timeSpan);
}

inline bool DurationHelper::GetHasTimeSpan(Windows::UI::Xaml::Duration const& target)
{
    return get_activation_factory<DurationHelper, Windows::UI::Xaml::IDurationHelperStatics>().GetHasTimeSpan(target);
}

inline Windows::UI::Xaml::Duration DurationHelper::Add(Windows::UI::Xaml::Duration const& target, Windows::UI::Xaml::Duration const& duration)
{
    return get_activation_factory<DurationHelper, Windows::UI::Xaml::IDurationHelperStatics>().Add(target, duration);
}

inline bool DurationHelper::Equals(Windows::UI::Xaml::Duration const& target, Windows::UI::Xaml::Duration const& value)
{
    return get_activation_factory<DurationHelper, Windows::UI::Xaml::IDurationHelperStatics>().Equals(target, value);
}

inline Windows::UI::Xaml::Duration DurationHelper::Subtract(Windows::UI::Xaml::Duration const& target, Windows::UI::Xaml::Duration const& duration)
{
    return get_activation_factory<DurationHelper, Windows::UI::Xaml::IDurationHelperStatics>().Subtract(target, duration);
}

inline double ElementSoundPlayer::Volume()
{
    return get_activation_factory<ElementSoundPlayer, Windows::UI::Xaml::IElementSoundPlayerStatics>().Volume();
}

inline void ElementSoundPlayer::Volume(double value)
{
    get_activation_factory<ElementSoundPlayer, Windows::UI::Xaml::IElementSoundPlayerStatics>().Volume(value);
}

inline Windows::UI::Xaml::ElementSoundPlayerState ElementSoundPlayer::State()
{
    return get_activation_factory<ElementSoundPlayer, Windows::UI::Xaml::IElementSoundPlayerStatics>().State();
}

inline void ElementSoundPlayer::State(Windows::UI::Xaml::ElementSoundPlayerState const& value)
{
    get_activation_factory<ElementSoundPlayer, Windows::UI::Xaml::IElementSoundPlayerStatics>().State(value);
}

inline void ElementSoundPlayer::Play(Windows::UI::Xaml::ElementSoundKind const& sound)
{
    get_activation_factory<ElementSoundPlayer, Windows::UI::Xaml::IElementSoundPlayerStatics>().Play(sound);
}

inline Windows::UI::Xaml::ElementSpatialAudioMode ElementSoundPlayer::SpatialAudioMode()
{
    return get_activation_factory<ElementSoundPlayer, Windows::UI::Xaml::IElementSoundPlayerStatics2>().SpatialAudioMode();
}

inline void ElementSoundPlayer::SpatialAudioMode(Windows::UI::Xaml::ElementSpatialAudioMode const& value)
{
    get_activation_factory<ElementSoundPlayer, Windows::UI::Xaml::IElementSoundPlayerStatics2>().SpatialAudioMode(value);
}

inline EventTrigger::EventTrigger() :
    EventTrigger(get_activation_factory<EventTrigger>().ActivateInstance<EventTrigger>())
{}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::TagProperty()
{
    return get_activation_factory<FrameworkElement, Windows::UI::Xaml::IFrameworkElementStatics>().TagProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::LanguageProperty()
{
    return get_activation_factory<FrameworkElement, Windows::UI::Xaml::IFrameworkElementStatics>().LanguageProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::ActualWidthProperty()
{
    return get_activation_factory<FrameworkElement, Windows::UI::Xaml::IFrameworkElementStatics>().ActualWidthProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::ActualHeightProperty()
{
    return get_activation_factory<FrameworkElement, Windows::UI::Xaml::IFrameworkElementStatics>().ActualHeightProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::WidthProperty()
{
    return get_activation_factory<FrameworkElement, Windows::UI::Xaml::IFrameworkElementStatics>().WidthProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::HeightProperty()
{
    return get_activation_factory<FrameworkElement, Windows::UI::Xaml::IFrameworkElementStatics>().HeightProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::MinWidthProperty()
{
    return get_activation_factory<FrameworkElement, Windows::UI::Xaml::IFrameworkElementStatics>().MinWidthProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::MaxWidthProperty()
{
    return get_activation_factory<FrameworkElement, Windows::UI::Xaml::IFrameworkElementStatics>().MaxWidthProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::MinHeightProperty()
{
    return get_activation_factory<FrameworkElement, Windows::UI::Xaml::IFrameworkElementStatics>().MinHeightProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::MaxHeightProperty()
{
    return get_activation_factory<FrameworkElement, Windows::UI::Xaml::IFrameworkElementStatics>().MaxHeightProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::HorizontalAlignmentProperty()
{
    return get_activation_factory<FrameworkElement, Windows::UI::Xaml::IFrameworkElementStatics>().HorizontalAlignmentProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::VerticalAlignmentProperty()
{
    return get_activation_factory<FrameworkElement, Windows::UI::Xaml::IFrameworkElementStatics>().VerticalAlignmentProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::MarginProperty()
{
    return get_activation_factory<FrameworkElement, Windows::UI::Xaml::IFrameworkElementStatics>().MarginProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::NameProperty()
{
    return get_activation_factory<FrameworkElement, Windows::UI::Xaml::IFrameworkElementStatics>().NameProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::DataContextProperty()
{
    return get_activation_factory<FrameworkElement, Windows::UI::Xaml::IFrameworkElementStatics>().DataContextProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::StyleProperty()
{
    return get_activation_factory<FrameworkElement, Windows::UI::Xaml::IFrameworkElementStatics>().StyleProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::FlowDirectionProperty()
{
    return get_activation_factory<FrameworkElement, Windows::UI::Xaml::IFrameworkElementStatics>().FlowDirectionProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::RequestedThemeProperty()
{
    return get_activation_factory<FrameworkElement, Windows::UI::Xaml::IFrameworkElementStatics2>().RequestedThemeProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::AllowFocusOnInteractionProperty()
{
    return get_activation_factory<FrameworkElement, Windows::UI::Xaml::IFrameworkElementStatics4>().AllowFocusOnInteractionProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::FocusVisualMarginProperty()
{
    return get_activation_factory<FrameworkElement, Windows::UI::Xaml::IFrameworkElementStatics4>().FocusVisualMarginProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::FocusVisualSecondaryThicknessProperty()
{
    return get_activation_factory<FrameworkElement, Windows::UI::Xaml::IFrameworkElementStatics4>().FocusVisualSecondaryThicknessProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::FocusVisualPrimaryThicknessProperty()
{
    return get_activation_factory<FrameworkElement, Windows::UI::Xaml::IFrameworkElementStatics4>().FocusVisualPrimaryThicknessProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::FocusVisualSecondaryBrushProperty()
{
    return get_activation_factory<FrameworkElement, Windows::UI::Xaml::IFrameworkElementStatics4>().FocusVisualSecondaryBrushProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::FocusVisualPrimaryBrushProperty()
{
    return get_activation_factory<FrameworkElement, Windows::UI::Xaml::IFrameworkElementStatics4>().FocusVisualPrimaryBrushProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::AllowFocusWhenDisabledProperty()
{
    return get_activation_factory<FrameworkElement, Windows::UI::Xaml::IFrameworkElementStatics4>().AllowFocusWhenDisabledProperty();
}

inline void FrameworkElement::DeferTree(Windows::UI::Xaml::DependencyObject const& element)
{
    get_activation_factory<FrameworkElement, Windows::UI::Xaml::IFrameworkElementStatics5>().DeferTree(element);
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::ActualThemeProperty()
{
    return get_activation_factory<FrameworkElement, Windows::UI::Xaml::IFrameworkElementStatics6>().ActualThemeProperty();
}

inline FrameworkView::FrameworkView() :
    FrameworkView(get_activation_factory<FrameworkView>().ActivateInstance<FrameworkView>())
{}

inline FrameworkViewSource::FrameworkViewSource() :
    FrameworkViewSource(get_activation_factory<FrameworkViewSource>().ActivateInstance<FrameworkViewSource>())
{}

inline Windows::UI::Xaml::GridLength GridLengthHelper::Auto()
{
    return get_activation_factory<GridLengthHelper, Windows::UI::Xaml::IGridLengthHelperStatics>().Auto();
}

inline Windows::UI::Xaml::GridLength GridLengthHelper::FromPixels(double pixels)
{
    return get_activation_factory<GridLengthHelper, Windows::UI::Xaml::IGridLengthHelperStatics>().FromPixels(pixels);
}

inline Windows::UI::Xaml::GridLength GridLengthHelper::FromValueAndType(double value, Windows::UI::Xaml::GridUnitType const& type)
{
    return get_activation_factory<GridLengthHelper, Windows::UI::Xaml::IGridLengthHelperStatics>().FromValueAndType(value, type);
}

inline bool GridLengthHelper::GetIsAbsolute(Windows::UI::Xaml::GridLength const& target)
{
    return get_activation_factory<GridLengthHelper, Windows::UI::Xaml::IGridLengthHelperStatics>().GetIsAbsolute(target);
}

inline bool GridLengthHelper::GetIsAuto(Windows::UI::Xaml::GridLength const& target)
{
    return get_activation_factory<GridLengthHelper, Windows::UI::Xaml::IGridLengthHelperStatics>().GetIsAuto(target);
}

inline bool GridLengthHelper::GetIsStar(Windows::UI::Xaml::GridLength const& target)
{
    return get_activation_factory<GridLengthHelper, Windows::UI::Xaml::IGridLengthHelperStatics>().GetIsStar(target);
}

inline bool GridLengthHelper::Equals(Windows::UI::Xaml::GridLength const& target, Windows::UI::Xaml::GridLength const& value)
{
    return get_activation_factory<GridLengthHelper, Windows::UI::Xaml::IGridLengthHelperStatics>().Equals(target, value);
}

inline Windows::Foundation::Point PointHelper::FromCoordinates(float x, float y)
{
    return get_activation_factory<PointHelper, Windows::UI::Xaml::IPointHelperStatics>().FromCoordinates(x, y);
}

inline PropertyMetadata::PropertyMetadata(Windows::Foundation::IInspectable const& defaultValue)
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<PropertyMetadata, Windows::UI::Xaml::IPropertyMetadataFactory>().CreateInstanceWithDefaultValue(defaultValue, outer, inner);
}

inline PropertyMetadata::PropertyMetadata(Windows::Foundation::IInspectable const& defaultValue, Windows::UI::Xaml::PropertyChangedCallback const& propertyChangedCallback)
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<PropertyMetadata, Windows::UI::Xaml::IPropertyMetadataFactory>().CreateInstanceWithDefaultValueAndCallback(defaultValue, propertyChangedCallback, outer, inner);
}

inline Windows::UI::Xaml::PropertyMetadata PropertyMetadata::Create(Windows::Foundation::IInspectable const& defaultValue)
{
    return get_activation_factory<PropertyMetadata, Windows::UI::Xaml::IPropertyMetadataStatics>().Create(defaultValue);
}

inline Windows::UI::Xaml::PropertyMetadata PropertyMetadata::Create(Windows::Foundation::IInspectable const& defaultValue, Windows::UI::Xaml::PropertyChangedCallback const& propertyChangedCallback)
{
    return get_activation_factory<PropertyMetadata, Windows::UI::Xaml::IPropertyMetadataStatics>().Create(defaultValue, propertyChangedCallback);
}

inline Windows::UI::Xaml::PropertyMetadata PropertyMetadata::Create(Windows::UI::Xaml::CreateDefaultValueCallback const& createDefaultValueCallback)
{
    return get_activation_factory<PropertyMetadata, Windows::UI::Xaml::IPropertyMetadataStatics>().Create(createDefaultValueCallback);
}

inline Windows::UI::Xaml::PropertyMetadata PropertyMetadata::Create(Windows::UI::Xaml::CreateDefaultValueCallback const& createDefaultValueCallback, Windows::UI::Xaml::PropertyChangedCallback const& propertyChangedCallback)
{
    return get_activation_factory<PropertyMetadata, Windows::UI::Xaml::IPropertyMetadataStatics>().Create(createDefaultValueCallback, propertyChangedCallback);
}

inline PropertyPath::PropertyPath(param::hstring const& path) :
    PropertyPath(get_activation_factory<PropertyPath, Windows::UI::Xaml::IPropertyPathFactory>().CreateInstance(path))
{}

inline Windows::Foundation::Rect RectHelper::Empty()
{
    return get_activation_factory<RectHelper, Windows::UI::Xaml::IRectHelperStatics>().Empty();
}

inline Windows::Foundation::Rect RectHelper::FromCoordinatesAndDimensions(float x, float y, float width, float height)
{
    return get_activation_factory<RectHelper, Windows::UI::Xaml::IRectHelperStatics>().FromCoordinatesAndDimensions(x, y, width, height);
}

inline Windows::Foundation::Rect RectHelper::FromPoints(Windows::Foundation::Point const& point1, Windows::Foundation::Point const& point2)
{
    return get_activation_factory<RectHelper, Windows::UI::Xaml::IRectHelperStatics>().FromPoints(point1, point2);
}

inline Windows::Foundation::Rect RectHelper::FromLocationAndSize(Windows::Foundation::Point const& location, Windows::Foundation::Size const& size)
{
    return get_activation_factory<RectHelper, Windows::UI::Xaml::IRectHelperStatics>().FromLocationAndSize(location, size);
}

inline bool RectHelper::GetIsEmpty(Windows::Foundation::Rect const& target)
{
    return get_activation_factory<RectHelper, Windows::UI::Xaml::IRectHelperStatics>().GetIsEmpty(target);
}

inline float RectHelper::GetBottom(Windows::Foundation::Rect const& target)
{
    return get_activation_factory<RectHelper, Windows::UI::Xaml::IRectHelperStatics>().GetBottom(target);
}

inline float RectHelper::GetLeft(Windows::Foundation::Rect const& target)
{
    return get_activation_factory<RectHelper, Windows::UI::Xaml::IRectHelperStatics>().GetLeft(target);
}

inline float RectHelper::GetRight(Windows::Foundation::Rect const& target)
{
    return get_activation_factory<RectHelper, Windows::UI::Xaml::IRectHelperStatics>().GetRight(target);
}

inline float RectHelper::GetTop(Windows::Foundation::Rect const& target)
{
    return get_activation_factory<RectHelper, Windows::UI::Xaml::IRectHelperStatics>().GetTop(target);
}

inline bool RectHelper::Contains(Windows::Foundation::Rect const& target, Windows::Foundation::Point const& point)
{
    return get_activation_factory<RectHelper, Windows::UI::Xaml::IRectHelperStatics>().Contains(target, point);
}

inline bool RectHelper::Equals(Windows::Foundation::Rect const& target, Windows::Foundation::Rect const& value)
{
    return get_activation_factory<RectHelper, Windows::UI::Xaml::IRectHelperStatics>().Equals(target, value);
}

inline Windows::Foundation::Rect RectHelper::Intersect(Windows::Foundation::Rect const& target, Windows::Foundation::Rect const& rect)
{
    return get_activation_factory<RectHelper, Windows::UI::Xaml::IRectHelperStatics>().Intersect(target, rect);
}

inline Windows::Foundation::Rect RectHelper::Union(Windows::Foundation::Rect const& target, Windows::Foundation::Point const& point)
{
    return get_activation_factory<RectHelper, Windows::UI::Xaml::IRectHelperStatics>().Union(target, point);
}

inline Windows::Foundation::Rect RectHelper::Union(Windows::Foundation::Rect const& target, Windows::Foundation::Rect const& rect)
{
    return get_activation_factory<RectHelper, Windows::UI::Xaml::IRectHelperStatics>().Union(target, rect);
}

inline ResourceDictionary::ResourceDictionary()
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<ResourceDictionary, Windows::UI::Xaml::IResourceDictionaryFactory>().CreateInstance(outer, inner);
}

inline RoutedEventArgs::RoutedEventArgs()
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<RoutedEventArgs, Windows::UI::Xaml::IRoutedEventArgsFactory>().CreateInstance(outer, inner);
}

inline Setter::Setter() :
    Setter(get_activation_factory<Setter>().ActivateInstance<Setter>())
{}

inline Setter::Setter(Windows::UI::Xaml::DependencyProperty const& targetProperty, Windows::Foundation::IInspectable const& value) :
    Setter(get_activation_factory<Setter, Windows::UI::Xaml::ISetterFactory>().CreateInstance(targetProperty, value))
{}

inline SetterBaseCollection::SetterBaseCollection() :
    SetterBaseCollection(get_activation_factory<SetterBaseCollection>().ActivateInstance<SetterBaseCollection>())
{}

inline Windows::Foundation::Size SizeHelper::Empty()
{
    return get_activation_factory<SizeHelper, Windows::UI::Xaml::ISizeHelperStatics>().Empty();
}

inline Windows::Foundation::Size SizeHelper::FromDimensions(float width, float height)
{
    return get_activation_factory<SizeHelper, Windows::UI::Xaml::ISizeHelperStatics>().FromDimensions(width, height);
}

inline bool SizeHelper::GetIsEmpty(Windows::Foundation::Size const& target)
{
    return get_activation_factory<SizeHelper, Windows::UI::Xaml::ISizeHelperStatics>().GetIsEmpty(target);
}

inline bool SizeHelper::Equals(Windows::Foundation::Size const& target, Windows::Foundation::Size const& value)
{
    return get_activation_factory<SizeHelper, Windows::UI::Xaml::ISizeHelperStatics>().Equals(target, value);
}

inline StateTrigger::StateTrigger() :
    StateTrigger(get_activation_factory<StateTrigger>().ActivateInstance<StateTrigger>())
{}

inline Windows::UI::Xaml::DependencyProperty StateTrigger::IsActiveProperty()
{
    return get_activation_factory<StateTrigger, Windows::UI::Xaml::IStateTriggerStatics>().IsActiveProperty();
}

inline Style::Style() :
    Style(get_activation_factory<Style>().ActivateInstance<Style>())
{}

inline Style::Style(Windows::UI::Xaml::Interop::TypeName const& targetType) :
    Style(get_activation_factory<Style, Windows::UI::Xaml::IStyleFactory>().CreateInstance(targetType))
{}

inline TargetPropertyPath::TargetPropertyPath() :
    TargetPropertyPath(get_activation_factory<TargetPropertyPath>().ActivateInstance<TargetPropertyPath>())
{}

inline TargetPropertyPath::TargetPropertyPath(Windows::UI::Xaml::DependencyProperty const& targetProperty) :
    TargetPropertyPath(get_activation_factory<TargetPropertyPath, Windows::UI::Xaml::ITargetPropertyPathFactory>().CreateInstance(targetProperty))
{}

inline Windows::UI::Xaml::Thickness ThicknessHelper::FromLengths(double left, double top, double right, double bottom)
{
    return get_activation_factory<ThicknessHelper, Windows::UI::Xaml::IThicknessHelperStatics>().FromLengths(left, top, right, bottom);
}

inline Windows::UI::Xaml::Thickness ThicknessHelper::FromUniformLength(double uniformLength)
{
    return get_activation_factory<ThicknessHelper, Windows::UI::Xaml::IThicknessHelperStatics>().FromUniformLength(uniformLength);
}

inline TriggerActionCollection::TriggerActionCollection() :
    TriggerActionCollection(get_activation_factory<TriggerActionCollection>().ActivateInstance<TriggerActionCollection>())
{}

inline Windows::UI::Xaml::RoutedEvent UIElement::KeyDownEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().KeyDownEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::KeyUpEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().KeyUpEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::PointerEnteredEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().PointerEnteredEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::PointerPressedEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().PointerPressedEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::PointerMovedEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().PointerMovedEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::PointerReleasedEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().PointerReleasedEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::PointerExitedEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().PointerExitedEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::PointerCaptureLostEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().PointerCaptureLostEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::PointerCanceledEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().PointerCanceledEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::PointerWheelChangedEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().PointerWheelChangedEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::TappedEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().TappedEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::DoubleTappedEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().DoubleTappedEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::HoldingEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().HoldingEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::RightTappedEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().RightTappedEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::ManipulationStartingEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().ManipulationStartingEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::ManipulationInertiaStartingEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().ManipulationInertiaStartingEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::ManipulationStartedEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().ManipulationStartedEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::ManipulationDeltaEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().ManipulationDeltaEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::ManipulationCompletedEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().ManipulationCompletedEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::DragEnterEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().DragEnterEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::DragLeaveEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().DragLeaveEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::DragOverEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().DragOverEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::DropEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().DropEvent();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::AllowDropProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().AllowDropProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::OpacityProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().OpacityProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::ClipProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().ClipProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::RenderTransformProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().RenderTransformProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::ProjectionProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().ProjectionProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::RenderTransformOriginProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().RenderTransformOriginProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::IsHitTestVisibleProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().IsHitTestVisibleProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::VisibilityProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().VisibilityProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::UseLayoutRoundingProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().UseLayoutRoundingProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::TransitionsProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().TransitionsProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::CacheModeProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().CacheModeProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::IsTapEnabledProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().IsTapEnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::IsDoubleTapEnabledProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().IsDoubleTapEnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::IsRightTapEnabledProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().IsRightTapEnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::IsHoldingEnabledProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().IsHoldingEnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::ManipulationModeProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().ManipulationModeProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::PointerCapturesProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics>().PointerCapturesProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::CompositeModeProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics2>().CompositeModeProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::Transform3DProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics3>().Transform3DProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::CanDragProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics3>().CanDragProperty();
}

inline bool UIElement::TryStartDirectManipulation(Windows::UI::Xaml::Input::Pointer const& value)
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics3>().TryStartDirectManipulation(value);
}

inline Windows::UI::Xaml::DependencyProperty UIElement::ContextFlyoutProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics4>().ContextFlyoutProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::ExitDisplayModeOnAccessKeyInvokedProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics4>().ExitDisplayModeOnAccessKeyInvokedProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::IsAccessKeyScopeProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics4>().IsAccessKeyScopeProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::AccessKeyScopeOwnerProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics4>().AccessKeyScopeOwnerProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::AccessKeyProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics4>().AccessKeyProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::LightsProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics5>().LightsProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::KeyTipPlacementModeProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics5>().KeyTipPlacementModeProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::KeyTipHorizontalOffsetProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics5>().KeyTipHorizontalOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::KeyTipVerticalOffsetProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics5>().KeyTipVerticalOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::XYFocusKeyboardNavigationProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics5>().XYFocusKeyboardNavigationProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::XYFocusUpNavigationStrategyProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics5>().XYFocusUpNavigationStrategyProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::XYFocusDownNavigationStrategyProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics5>().XYFocusDownNavigationStrategyProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::XYFocusLeftNavigationStrategyProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics5>().XYFocusLeftNavigationStrategyProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::XYFocusRightNavigationStrategyProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics5>().XYFocusRightNavigationStrategyProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::HighContrastAdjustmentProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics5>().HighContrastAdjustmentProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::TabFocusNavigationProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics5>().TabFocusNavigationProperty();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::GettingFocusEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics6>().GettingFocusEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::LosingFocusEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics6>().LosingFocusEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::NoFocusCandidateFoundEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics6>().NoFocusCandidateFoundEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::PreviewKeyDownEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics7>().PreviewKeyDownEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::CharacterReceivedEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics7>().CharacterReceivedEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::PreviewKeyUpEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics7>().PreviewKeyUpEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::BringIntoViewRequestedEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics8>().BringIntoViewRequestedEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::ContextRequestedEvent()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics8>().ContextRequestedEvent();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::KeyTipTargetProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics8>().KeyTipTargetProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::KeyboardAcceleratorPlacementTargetProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics8>().KeyboardAcceleratorPlacementTargetProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::KeyboardAcceleratorPlacementModeProperty()
{
    return get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics8>().KeyboardAcceleratorPlacementModeProperty();
}

inline void UIElement::RegisterAsScrollPort(Windows::UI::Xaml::UIElement const& element)
{
    get_activation_factory<UIElement, Windows::UI::Xaml::IUIElementStatics8>().RegisterAsScrollPort(element);
}

inline VisualState::VisualState() :
    VisualState(get_activation_factory<VisualState>().ActivateInstance<VisualState>())
{}

inline VisualStateChangedEventArgs::VisualStateChangedEventArgs() :
    VisualStateChangedEventArgs(get_activation_factory<VisualStateChangedEventArgs>().ActivateInstance<VisualStateChangedEventArgs>())
{}

inline VisualStateGroup::VisualStateGroup() :
    VisualStateGroup(get_activation_factory<VisualStateGroup>().ActivateInstance<VisualStateGroup>())
{}

inline VisualStateManager::VisualStateManager()
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<VisualStateManager, Windows::UI::Xaml::IVisualStateManagerFactory>().CreateInstance(outer, inner);
}

inline Windows::Foundation::Collections::IVector<Windows::UI::Xaml::VisualStateGroup> VisualStateManager::GetVisualStateGroups(Windows::UI::Xaml::FrameworkElement const& obj)
{
    return get_activation_factory<VisualStateManager, Windows::UI::Xaml::IVisualStateManagerStatics>().GetVisualStateGroups(obj);
}

inline Windows::UI::Xaml::DependencyProperty VisualStateManager::CustomVisualStateManagerProperty()
{
    return get_activation_factory<VisualStateManager, Windows::UI::Xaml::IVisualStateManagerStatics>().CustomVisualStateManagerProperty();
}

inline Windows::UI::Xaml::VisualStateManager VisualStateManager::GetCustomVisualStateManager(Windows::UI::Xaml::FrameworkElement const& obj)
{
    return get_activation_factory<VisualStateManager, Windows::UI::Xaml::IVisualStateManagerStatics>().GetCustomVisualStateManager(obj);
}

inline void VisualStateManager::SetCustomVisualStateManager(Windows::UI::Xaml::FrameworkElement const& obj, Windows::UI::Xaml::VisualStateManager const& value)
{
    get_activation_factory<VisualStateManager, Windows::UI::Xaml::IVisualStateManagerStatics>().SetCustomVisualStateManager(obj, value);
}

inline bool VisualStateManager::GoToState(Windows::UI::Xaml::Controls::Control const& control, param::hstring const& stateName, bool useTransitions)
{
    return get_activation_factory<VisualStateManager, Windows::UI::Xaml::IVisualStateManagerStatics>().GoToState(control, stateName, useTransitions);
}

inline VisualTransition::VisualTransition()
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<VisualTransition, Windows::UI::Xaml::IVisualTransitionFactory>().CreateInstance(outer, inner);
}

inline Windows::UI::Xaml::Window Window::Current()
{
    return get_activation_factory<Window, Windows::UI::Xaml::IWindowStatics>().Current();
}

template <typename L> ApplicationInitializationCallback::ApplicationInitializationCallback(L handler) :
    ApplicationInitializationCallback(impl::make_delegate<ApplicationInitializationCallback>(std::forward<L>(handler)))
{}

template <typename F> ApplicationInitializationCallback::ApplicationInitializationCallback(F* handler) :
    ApplicationInitializationCallback([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> ApplicationInitializationCallback::ApplicationInitializationCallback(O* object, M method) :
    ApplicationInitializationCallback([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void ApplicationInitializationCallback::operator()(Windows::UI::Xaml::ApplicationInitializationCallbackParams const& p) const
{
    check_hresult((*(impl::abi_t<ApplicationInitializationCallback>**)this)->Invoke(get_abi(p)));
}

template <typename L> BindingFailedEventHandler::BindingFailedEventHandler(L handler) :
    BindingFailedEventHandler(impl::make_delegate<BindingFailedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> BindingFailedEventHandler::BindingFailedEventHandler(F* handler) :
    BindingFailedEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> BindingFailedEventHandler::BindingFailedEventHandler(O* object, M method) :
    BindingFailedEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void BindingFailedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::BindingFailedEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<BindingFailedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> CreateDefaultValueCallback::CreateDefaultValueCallback(L handler) :
    CreateDefaultValueCallback(impl::make_delegate<CreateDefaultValueCallback>(std::forward<L>(handler)))
{}

template <typename F> CreateDefaultValueCallback::CreateDefaultValueCallback(F* handler) :
    CreateDefaultValueCallback([=](auto&&... args) { return handler(args...); })
{}

template <typename O, typename M> CreateDefaultValueCallback::CreateDefaultValueCallback(O* object, M method) :
    CreateDefaultValueCallback([=](auto&&... args) { return ((*object).*(method))(args...); })
{}

inline Windows::Foundation::IInspectable CreateDefaultValueCallback::operator()() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult((*(impl::abi_t<CreateDefaultValueCallback>**)this)->Invoke(put_abi(value)));
    return value;
}

template <typename L> DependencyPropertyChangedCallback::DependencyPropertyChangedCallback(L handler) :
    DependencyPropertyChangedCallback(impl::make_delegate<DependencyPropertyChangedCallback>(std::forward<L>(handler)))
{}

template <typename F> DependencyPropertyChangedCallback::DependencyPropertyChangedCallback(F* handler) :
    DependencyPropertyChangedCallback([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> DependencyPropertyChangedCallback::DependencyPropertyChangedCallback(O* object, M method) :
    DependencyPropertyChangedCallback([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void DependencyPropertyChangedCallback::operator()(Windows::UI::Xaml::DependencyObject const& sender, Windows::UI::Xaml::DependencyProperty const& dp) const
{
    check_hresult((*(impl::abi_t<DependencyPropertyChangedCallback>**)this)->Invoke(get_abi(sender), get_abi(dp)));
}

template <typename L> DependencyPropertyChangedEventHandler::DependencyPropertyChangedEventHandler(L handler) :
    DependencyPropertyChangedEventHandler(impl::make_delegate<DependencyPropertyChangedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> DependencyPropertyChangedEventHandler::DependencyPropertyChangedEventHandler(F* handler) :
    DependencyPropertyChangedEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> DependencyPropertyChangedEventHandler::DependencyPropertyChangedEventHandler(O* object, M method) :
    DependencyPropertyChangedEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void DependencyPropertyChangedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::DependencyPropertyChangedEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<DependencyPropertyChangedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> DragEventHandler::DragEventHandler(L handler) :
    DragEventHandler(impl::make_delegate<DragEventHandler>(std::forward<L>(handler)))
{}

template <typename F> DragEventHandler::DragEventHandler(F* handler) :
    DragEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> DragEventHandler::DragEventHandler(O* object, M method) :
    DragEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void DragEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::DragEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<DragEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> EnteredBackgroundEventHandler::EnteredBackgroundEventHandler(L handler) :
    EnteredBackgroundEventHandler(impl::make_delegate<EnteredBackgroundEventHandler>(std::forward<L>(handler)))
{}

template <typename F> EnteredBackgroundEventHandler::EnteredBackgroundEventHandler(F* handler) :
    EnteredBackgroundEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> EnteredBackgroundEventHandler::EnteredBackgroundEventHandler(O* object, M method) :
    EnteredBackgroundEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void EnteredBackgroundEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::ApplicationModel::EnteredBackgroundEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<EnteredBackgroundEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> ExceptionRoutedEventHandler::ExceptionRoutedEventHandler(L handler) :
    ExceptionRoutedEventHandler(impl::make_delegate<ExceptionRoutedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> ExceptionRoutedEventHandler::ExceptionRoutedEventHandler(F* handler) :
    ExceptionRoutedEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> ExceptionRoutedEventHandler::ExceptionRoutedEventHandler(O* object, M method) :
    ExceptionRoutedEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void ExceptionRoutedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::ExceptionRoutedEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<ExceptionRoutedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> LeavingBackgroundEventHandler::LeavingBackgroundEventHandler(L handler) :
    LeavingBackgroundEventHandler(impl::make_delegate<LeavingBackgroundEventHandler>(std::forward<L>(handler)))
{}

template <typename F> LeavingBackgroundEventHandler::LeavingBackgroundEventHandler(F* handler) :
    LeavingBackgroundEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> LeavingBackgroundEventHandler::LeavingBackgroundEventHandler(O* object, M method) :
    LeavingBackgroundEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void LeavingBackgroundEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::ApplicationModel::LeavingBackgroundEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<LeavingBackgroundEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> PropertyChangedCallback::PropertyChangedCallback(L handler) :
    PropertyChangedCallback(impl::make_delegate<PropertyChangedCallback>(std::forward<L>(handler)))
{}

template <typename F> PropertyChangedCallback::PropertyChangedCallback(F* handler) :
    PropertyChangedCallback([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> PropertyChangedCallback::PropertyChangedCallback(O* object, M method) :
    PropertyChangedCallback([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void PropertyChangedCallback::operator()(Windows::UI::Xaml::DependencyObject const& d, Windows::UI::Xaml::DependencyPropertyChangedEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<PropertyChangedCallback>**)this)->Invoke(get_abi(d), get_abi(e)));
}

template <typename L> RoutedEventHandler::RoutedEventHandler(L handler) :
    RoutedEventHandler(impl::make_delegate<RoutedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> RoutedEventHandler::RoutedEventHandler(F* handler) :
    RoutedEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> RoutedEventHandler::RoutedEventHandler(O* object, M method) :
    RoutedEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void RoutedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<RoutedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> SizeChangedEventHandler::SizeChangedEventHandler(L handler) :
    SizeChangedEventHandler(impl::make_delegate<SizeChangedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> SizeChangedEventHandler::SizeChangedEventHandler(F* handler) :
    SizeChangedEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> SizeChangedEventHandler::SizeChangedEventHandler(O* object, M method) :
    SizeChangedEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void SizeChangedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::SizeChangedEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<SizeChangedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> SuspendingEventHandler::SuspendingEventHandler(L handler) :
    SuspendingEventHandler(impl::make_delegate<SuspendingEventHandler>(std::forward<L>(handler)))
{}

template <typename F> SuspendingEventHandler::SuspendingEventHandler(F* handler) :
    SuspendingEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> SuspendingEventHandler::SuspendingEventHandler(O* object, M method) :
    SuspendingEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void SuspendingEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::ApplicationModel::SuspendingEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<SuspendingEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> UnhandledExceptionEventHandler::UnhandledExceptionEventHandler(L handler) :
    UnhandledExceptionEventHandler(impl::make_delegate<UnhandledExceptionEventHandler>(std::forward<L>(handler)))
{}

template <typename F> UnhandledExceptionEventHandler::UnhandledExceptionEventHandler(F* handler) :
    UnhandledExceptionEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> UnhandledExceptionEventHandler::UnhandledExceptionEventHandler(O* object, M method) :
    UnhandledExceptionEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void UnhandledExceptionEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::UnhandledExceptionEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<UnhandledExceptionEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> VisualStateChangedEventHandler::VisualStateChangedEventHandler(L handler) :
    VisualStateChangedEventHandler(impl::make_delegate<VisualStateChangedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> VisualStateChangedEventHandler::VisualStateChangedEventHandler(F* handler) :
    VisualStateChangedEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> VisualStateChangedEventHandler::VisualStateChangedEventHandler(O* object, M method) :
    VisualStateChangedEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void VisualStateChangedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::VisualStateChangedEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<VisualStateChangedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> WindowActivatedEventHandler::WindowActivatedEventHandler(L handler) :
    WindowActivatedEventHandler(impl::make_delegate<WindowActivatedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> WindowActivatedEventHandler::WindowActivatedEventHandler(F* handler) :
    WindowActivatedEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> WindowActivatedEventHandler::WindowActivatedEventHandler(O* object, M method) :
    WindowActivatedEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void WindowActivatedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Core::WindowActivatedEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<WindowActivatedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> WindowClosedEventHandler::WindowClosedEventHandler(L handler) :
    WindowClosedEventHandler(impl::make_delegate<WindowClosedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> WindowClosedEventHandler::WindowClosedEventHandler(F* handler) :
    WindowClosedEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> WindowClosedEventHandler::WindowClosedEventHandler(O* object, M method) :
    WindowClosedEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void WindowClosedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Core::CoreWindowEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<WindowClosedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> WindowSizeChangedEventHandler::WindowSizeChangedEventHandler(L handler) :
    WindowSizeChangedEventHandler(impl::make_delegate<WindowSizeChangedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> WindowSizeChangedEventHandler::WindowSizeChangedEventHandler(F* handler) :
    WindowSizeChangedEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> WindowSizeChangedEventHandler::WindowSizeChangedEventHandler(O* object, M method) :
    WindowSizeChangedEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void WindowSizeChangedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Core::WindowSizeChangedEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<WindowSizeChangedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> WindowVisibilityChangedEventHandler::WindowVisibilityChangedEventHandler(L handler) :
    WindowVisibilityChangedEventHandler(impl::make_delegate<WindowVisibilityChangedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> WindowVisibilityChangedEventHandler::WindowVisibilityChangedEventHandler(F* handler) :
    WindowVisibilityChangedEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> WindowVisibilityChangedEventHandler::WindowVisibilityChangedEventHandler(O* object, M method) :
    WindowVisibilityChangedEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void WindowVisibilityChangedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Core::VisibilityChangedEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<WindowVisibilityChangedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename D> void IApplicationOverridesT<D>::OnActivated(Windows::ApplicationModel::Activation::IActivatedEventArgs const& args) const
{
    return shim().template try_as<IApplicationOverrides>().OnActivated(args);
}

template <typename D> void IApplicationOverridesT<D>::OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs const& args) const
{
    return shim().template try_as<IApplicationOverrides>().OnLaunched(args);
}

template <typename D> void IApplicationOverridesT<D>::OnFileActivated(Windows::ApplicationModel::Activation::FileActivatedEventArgs const& args) const
{
    return shim().template try_as<IApplicationOverrides>().OnFileActivated(args);
}

template <typename D> void IApplicationOverridesT<D>::OnSearchActivated(Windows::ApplicationModel::Activation::SearchActivatedEventArgs const& args) const
{
    return shim().template try_as<IApplicationOverrides>().OnSearchActivated(args);
}

template <typename D> void IApplicationOverridesT<D>::OnShareTargetActivated(Windows::ApplicationModel::Activation::ShareTargetActivatedEventArgs const& args) const
{
    return shim().template try_as<IApplicationOverrides>().OnShareTargetActivated(args);
}

template <typename D> void IApplicationOverridesT<D>::OnFileOpenPickerActivated(Windows::ApplicationModel::Activation::FileOpenPickerActivatedEventArgs const& args) const
{
    return shim().template try_as<IApplicationOverrides>().OnFileOpenPickerActivated(args);
}

template <typename D> void IApplicationOverridesT<D>::OnFileSavePickerActivated(Windows::ApplicationModel::Activation::FileSavePickerActivatedEventArgs const& args) const
{
    return shim().template try_as<IApplicationOverrides>().OnFileSavePickerActivated(args);
}

template <typename D> void IApplicationOverridesT<D>::OnCachedFileUpdaterActivated(Windows::ApplicationModel::Activation::CachedFileUpdaterActivatedEventArgs const& args) const
{
    return shim().template try_as<IApplicationOverrides>().OnCachedFileUpdaterActivated(args);
}

template <typename D> void IApplicationOverridesT<D>::OnWindowCreated(Windows::UI::Xaml::WindowCreatedEventArgs const& args) const
{
    return shim().template try_as<IApplicationOverrides>().OnWindowCreated(args);
}

template <typename D> void IApplicationOverrides2T<D>::OnBackgroundActivated(Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs const& args) const
{
    return shim().template try_as<IApplicationOverrides2>().OnBackgroundActivated(args);
}

template <typename D> Windows::Foundation::Size IFrameworkElementOverridesT<D>::MeasureOverride(Windows::Foundation::Size const& availableSize) const
{
    return shim().template try_as<IFrameworkElementOverrides>().MeasureOverride(availableSize);
}

template <typename D> Windows::Foundation::Size IFrameworkElementOverridesT<D>::ArrangeOverride(Windows::Foundation::Size const& finalSize) const
{
    return shim().template try_as<IFrameworkElementOverrides>().ArrangeOverride(finalSize);
}

template <typename D> void IFrameworkElementOverridesT<D>::OnApplyTemplate() const
{
    return shim().template try_as<IFrameworkElementOverrides>().OnApplyTemplate();
}

template <typename D> bool IFrameworkElementOverrides2T<D>::GoToElementStateCore(param::hstring const& stateName, bool useTransitions) const
{
    return shim().template try_as<IFrameworkElementOverrides2>().GoToElementStateCore(stateName, useTransitions);
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationPeer IUIElementOverridesT<D>::OnCreateAutomationPeer() const
{
    return shim().template try_as<IUIElementOverrides>().OnCreateAutomationPeer();
}

template <typename D> void IUIElementOverridesT<D>::OnDisconnectVisualChildren() const
{
    return shim().template try_as<IUIElementOverrides>().OnDisconnectVisualChildren();
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IIterable<Windows::Foundation::Point>> IUIElementOverridesT<D>::FindSubElementsForTouchTargeting(Windows::Foundation::Point const& point, Windows::Foundation::Rect const& boundingRect) const
{
    return shim().template try_as<IUIElementOverrides>().FindSubElementsForTouchTargeting(point, boundingRect);
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::DependencyObject> IUIElementOverrides7T<D>::GetChildrenInTabFocusOrder() const
{
    return shim().template try_as<IUIElementOverrides7>().GetChildrenInTabFocusOrder();
}

template <typename D> void IUIElementOverrides7T<D>::OnProcessKeyboardAccelerators(Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs const& args) const
{
    return shim().template try_as<IUIElementOverrides7>().OnProcessKeyboardAccelerators(args);
}

template <typename D> void IUIElementOverrides8T<D>::OnKeyboardAcceleratorInvoked(Windows::UI::Xaml::Input::KeyboardAcceleratorInvokedEventArgs const& args) const
{
    return shim().template try_as<IUIElementOverrides8>().OnKeyboardAcceleratorInvoked(args);
}

template <typename D> void IUIElementOverrides8T<D>::OnBringIntoViewRequested(Windows::UI::Xaml::BringIntoViewRequestedEventArgs const& e) const
{
    return shim().template try_as<IUIElementOverrides8>().OnBringIntoViewRequested(e);
}

template <typename D> bool IVisualStateManagerOverridesT<D>::GoToStateCore(Windows::UI::Xaml::Controls::Control const& control, Windows::UI::Xaml::FrameworkElement const& templateRoot, param::hstring const& stateName, Windows::UI::Xaml::VisualStateGroup const& group, Windows::UI::Xaml::VisualState const& state, bool useTransitions) const
{
    return shim().template try_as<IVisualStateManagerOverrides>().GoToStateCore(control, templateRoot, stateName, group, state, useTransitions);
}

template <typename D, typename... Interfaces>
struct AdaptiveTriggerT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::IAdaptiveTrigger, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IStateTriggerBase, Windows::UI::Xaml::IStateTriggerBaseProtected>
{
    using composable = AdaptiveTrigger;

protected:
    AdaptiveTriggerT()
    {
        get_activation_factory<Windows::UI::Xaml::AdaptiveTrigger, Windows::UI::Xaml::IAdaptiveTriggerFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct ApplicationT :
    implements<D, Windows::UI::Xaml::IApplicationOverrides, Windows::UI::Xaml::IApplicationOverrides2, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::IApplication, Windows::UI::Xaml::IApplication2, Windows::UI::Xaml::IApplication3>,
    Windows::UI::Xaml::IApplicationOverridesT<D>, Windows::UI::Xaml::IApplicationOverrides2T<D>
{
    using composable = Application;

protected:
    ApplicationT()
    {
        get_activation_factory<Windows::UI::Xaml::Application, Windows::UI::Xaml::IApplicationFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct DataTemplateT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::IDataTemplate, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkTemplate>
{
    using composable = DataTemplate;

protected:
    DataTemplateT()
    {
        get_activation_factory<Windows::UI::Xaml::DataTemplate, Windows::UI::Xaml::IDataTemplateFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct DataTemplateKeyT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::IDataTemplateKey>
{
    using composable = DataTemplateKey;

protected:
    DataTemplateKeyT()
    {
        get_activation_factory<Windows::UI::Xaml::DataTemplateKey, Windows::UI::Xaml::IDataTemplateKeyFactory>().CreateInstance(*this, this->m_inner);
    }
    DataTemplateKeyT(Windows::Foundation::IInspectable const& dataType)
    {
        get_activation_factory<Windows::UI::Xaml::DataTemplateKey, Windows::UI::Xaml::IDataTemplateKeyFactory>().CreateInstanceWithType(dataType, *this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct DependencyObjectT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    using composable = DependencyObject;

protected:
    DependencyObjectT()
    {
        get_activation_factory<Windows::UI::Xaml::DependencyObject, Windows::UI::Xaml::IDependencyObjectFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct DependencyObjectCollectionT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
    impl::require<D, Windows::Foundation::Collections::IObservableVector<Windows::UI::Xaml::DependencyObject>, Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::DependencyObject>, Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject>, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    using composable = DependencyObjectCollection;

protected:
    DependencyObjectCollectionT()
    {
        get_activation_factory<Windows::UI::Xaml::DependencyObjectCollection, Windows::UI::Xaml::IDependencyObjectCollectionFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct DispatcherTimerT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::IDispatcherTimer>
{
    using composable = DispatcherTimer;

protected:
    DispatcherTimerT()
    {
        get_activation_factory<Windows::UI::Xaml::DispatcherTimer, Windows::UI::Xaml::IDispatcherTimerFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct FrameworkElementT :
    implements<D, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8>,
    Windows::UI::Xaml::IFrameworkElementOverridesT<D>, Windows::UI::Xaml::IFrameworkElementOverrides2T<D>, Windows::UI::Xaml::IUIElementOverridesT<D>, Windows::UI::Xaml::IUIElementOverrides7T<D>, Windows::UI::Xaml::IUIElementOverrides8T<D>
{
    using composable = FrameworkElement;

protected:
    FrameworkElementT()
    {
        get_activation_factory<Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::IFrameworkElementFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct FrameworkTemplateT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::IFrameworkTemplate, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    using composable = FrameworkTemplate;

protected:
    FrameworkTemplateT()
    {
        get_activation_factory<Windows::UI::Xaml::FrameworkTemplate, Windows::UI::Xaml::IFrameworkTemplateFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct PropertyMetadataT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::IPropertyMetadata>
{
    using composable = PropertyMetadata;

protected:
    PropertyMetadataT(Windows::Foundation::IInspectable const& defaultValue)
    {
        get_activation_factory<Windows::UI::Xaml::PropertyMetadata, Windows::UI::Xaml::IPropertyMetadataFactory>().CreateInstanceWithDefaultValue(defaultValue, *this, this->m_inner);
    }
    PropertyMetadataT(Windows::Foundation::IInspectable const& defaultValue, Windows::UI::Xaml::PropertyChangedCallback const& propertyChangedCallback)
    {
        get_activation_factory<Windows::UI::Xaml::PropertyMetadata, Windows::UI::Xaml::IPropertyMetadataFactory>().CreateInstanceWithDefaultValueAndCallback(defaultValue, propertyChangedCallback, *this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct ResourceDictionaryT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::IResourceDictionary, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<Windows::Foundation::IInspectable, Windows::Foundation::IInspectable>>, Windows::Foundation::Collections::IMap<Windows::Foundation::IInspectable, Windows::Foundation::IInspectable>, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    using composable = ResourceDictionary;

protected:
    ResourceDictionaryT()
    {
        get_activation_factory<Windows::UI::Xaml::ResourceDictionary, Windows::UI::Xaml::IResourceDictionaryFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct RoutedEventArgsT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::IRoutedEventArgs>
{
    using composable = RoutedEventArgs;

protected:
    RoutedEventArgsT()
    {
        get_activation_factory<Windows::UI::Xaml::RoutedEventArgs, Windows::UI::Xaml::IRoutedEventArgsFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct StateTriggerBaseT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::IStateTriggerBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IStateTriggerBaseProtected>
{
    using composable = StateTriggerBase;

protected:
    StateTriggerBaseT()
    {
        get_activation_factory<Windows::UI::Xaml::StateTriggerBase, Windows::UI::Xaml::IStateTriggerBaseFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct VisualStateManagerT :
    implements<D, Windows::UI::Xaml::IVisualStateManagerOverrides, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::IVisualStateManager, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IVisualStateManagerProtected>,
    Windows::UI::Xaml::IVisualStateManagerOverridesT<D>
{
    using composable = VisualStateManager;

protected:
    VisualStateManagerT()
    {
        get_activation_factory<Windows::UI::Xaml::VisualStateManager, Windows::UI::Xaml::IVisualStateManagerFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct VisualTransitionT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::IVisualTransition, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    using composable = VisualTransition;

protected:
    VisualTransitionT()
    {
        get_activation_factory<Windows::UI::Xaml::VisualTransition, Windows::UI::Xaml::IVisualTransitionFactory>().CreateInstance(*this, this->m_inner);
    }
};

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Xaml::IAdaptiveTrigger> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IAdaptiveTrigger> {};
template<> struct hash<winrt::Windows::UI::Xaml::IAdaptiveTriggerFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IAdaptiveTriggerFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::IAdaptiveTriggerStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IAdaptiveTriggerStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::IApplication> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IApplication> {};
template<> struct hash<winrt::Windows::UI::Xaml::IApplication2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IApplication2> {};
template<> struct hash<winrt::Windows::UI::Xaml::IApplication3> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IApplication3> {};
template<> struct hash<winrt::Windows::UI::Xaml::IApplicationFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IApplicationFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::IApplicationInitializationCallbackParams> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IApplicationInitializationCallbackParams> {};
template<> struct hash<winrt::Windows::UI::Xaml::IApplicationOverrides> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IApplicationOverrides> {};
template<> struct hash<winrt::Windows::UI::Xaml::IApplicationOverrides2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IApplicationOverrides2> {};
template<> struct hash<winrt::Windows::UI::Xaml::IApplicationStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IApplicationStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::IBindingFailedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IBindingFailedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::IBringIntoViewOptions> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IBringIntoViewOptions> {};
template<> struct hash<winrt::Windows::UI::Xaml::IBringIntoViewOptions2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IBringIntoViewOptions2> {};
template<> struct hash<winrt::Windows::UI::Xaml::IBringIntoViewRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IBringIntoViewRequestedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::ICornerRadiusHelper> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::ICornerRadiusHelper> {};
template<> struct hash<winrt::Windows::UI::Xaml::ICornerRadiusHelperStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::ICornerRadiusHelperStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::IDataContextChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IDataContextChangedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::IDataTemplate> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IDataTemplate> {};
template<> struct hash<winrt::Windows::UI::Xaml::IDataTemplateExtension> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IDataTemplateExtension> {};
template<> struct hash<winrt::Windows::UI::Xaml::IDataTemplateFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IDataTemplateFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::IDataTemplateKey> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IDataTemplateKey> {};
template<> struct hash<winrt::Windows::UI::Xaml::IDataTemplateKeyFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IDataTemplateKeyFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::IDataTemplateStatics2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IDataTemplateStatics2> {};
template<> struct hash<winrt::Windows::UI::Xaml::IDebugSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IDebugSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::IDebugSettings2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IDebugSettings2> {};
template<> struct hash<winrt::Windows::UI::Xaml::IDebugSettings3> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IDebugSettings3> {};
template<> struct hash<winrt::Windows::UI::Xaml::IDependencyObject> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IDependencyObject> {};
template<> struct hash<winrt::Windows::UI::Xaml::IDependencyObject2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IDependencyObject2> {};
template<> struct hash<winrt::Windows::UI::Xaml::IDependencyObjectCollectionFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IDependencyObjectCollectionFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::IDependencyObjectFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IDependencyObjectFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::IDependencyProperty> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IDependencyProperty> {};
template<> struct hash<winrt::Windows::UI::Xaml::IDependencyPropertyChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IDependencyPropertyChangedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::IDependencyPropertyStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IDependencyPropertyStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::IDispatcherTimer> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IDispatcherTimer> {};
template<> struct hash<winrt::Windows::UI::Xaml::IDispatcherTimerFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IDispatcherTimerFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::IDragEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IDragEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::IDragEventArgs2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IDragEventArgs2> {};
template<> struct hash<winrt::Windows::UI::Xaml::IDragEventArgs3> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IDragEventArgs3> {};
template<> struct hash<winrt::Windows::UI::Xaml::IDragOperationDeferral> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IDragOperationDeferral> {};
template<> struct hash<winrt::Windows::UI::Xaml::IDragStartingEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IDragStartingEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::IDragStartingEventArgs2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IDragStartingEventArgs2> {};
template<> struct hash<winrt::Windows::UI::Xaml::IDragUI> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IDragUI> {};
template<> struct hash<winrt::Windows::UI::Xaml::IDragUIOverride> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IDragUIOverride> {};
template<> struct hash<winrt::Windows::UI::Xaml::IDropCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IDropCompletedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::IDurationHelper> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IDurationHelper> {};
template<> struct hash<winrt::Windows::UI::Xaml::IDurationHelperStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IDurationHelperStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::IElementSoundPlayer> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IElementSoundPlayer> {};
template<> struct hash<winrt::Windows::UI::Xaml::IElementSoundPlayerStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IElementSoundPlayerStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::IElementSoundPlayerStatics2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IElementSoundPlayerStatics2> {};
template<> struct hash<winrt::Windows::UI::Xaml::IEventTrigger> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IEventTrigger> {};
template<> struct hash<winrt::Windows::UI::Xaml::IExceptionRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IExceptionRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::IExceptionRoutedEventArgsFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IExceptionRoutedEventArgsFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::IFrameworkElement> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IFrameworkElement> {};
template<> struct hash<winrt::Windows::UI::Xaml::IFrameworkElement2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IFrameworkElement2> {};
template<> struct hash<winrt::Windows::UI::Xaml::IFrameworkElement3> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IFrameworkElement3> {};
template<> struct hash<winrt::Windows::UI::Xaml::IFrameworkElement4> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IFrameworkElement4> {};
template<> struct hash<winrt::Windows::UI::Xaml::IFrameworkElement6> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IFrameworkElement6> {};
template<> struct hash<winrt::Windows::UI::Xaml::IFrameworkElementFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IFrameworkElementFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::IFrameworkElementOverrides> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IFrameworkElementOverrides> {};
template<> struct hash<winrt::Windows::UI::Xaml::IFrameworkElementOverrides2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IFrameworkElementOverrides2> {};
template<> struct hash<winrt::Windows::UI::Xaml::IFrameworkElementStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IFrameworkElementStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::IFrameworkElementStatics2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IFrameworkElementStatics2> {};
template<> struct hash<winrt::Windows::UI::Xaml::IFrameworkElementStatics4> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IFrameworkElementStatics4> {};
template<> struct hash<winrt::Windows::UI::Xaml::IFrameworkElementStatics5> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IFrameworkElementStatics5> {};
template<> struct hash<winrt::Windows::UI::Xaml::IFrameworkElementStatics6> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IFrameworkElementStatics6> {};
template<> struct hash<winrt::Windows::UI::Xaml::IFrameworkTemplate> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IFrameworkTemplate> {};
template<> struct hash<winrt::Windows::UI::Xaml::IFrameworkTemplateFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IFrameworkTemplateFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::IFrameworkView> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IFrameworkView> {};
template<> struct hash<winrt::Windows::UI::Xaml::IFrameworkViewSource> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IFrameworkViewSource> {};
template<> struct hash<winrt::Windows::UI::Xaml::IGridLengthHelper> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IGridLengthHelper> {};
template<> struct hash<winrt::Windows::UI::Xaml::IGridLengthHelperStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IGridLengthHelperStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::IMediaFailedRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IMediaFailedRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::IPointHelper> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IPointHelper> {};
template<> struct hash<winrt::Windows::UI::Xaml::IPointHelperStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IPointHelperStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::IPropertyMetadata> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IPropertyMetadata> {};
template<> struct hash<winrt::Windows::UI::Xaml::IPropertyMetadataFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IPropertyMetadataFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::IPropertyMetadataStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IPropertyMetadataStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::IPropertyPath> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IPropertyPath> {};
template<> struct hash<winrt::Windows::UI::Xaml::IPropertyPathFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IPropertyPathFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::IRectHelper> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IRectHelper> {};
template<> struct hash<winrt::Windows::UI::Xaml::IRectHelperStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IRectHelperStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::IResourceDictionary> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IResourceDictionary> {};
template<> struct hash<winrt::Windows::UI::Xaml::IResourceDictionaryFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IResourceDictionaryFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::IRoutedEvent> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IRoutedEvent> {};
template<> struct hash<winrt::Windows::UI::Xaml::IRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::IRoutedEventArgsFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IRoutedEventArgsFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::ISetter> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::ISetter> {};
template<> struct hash<winrt::Windows::UI::Xaml::ISetter2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::ISetter2> {};
template<> struct hash<winrt::Windows::UI::Xaml::ISetterBase> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::ISetterBase> {};
template<> struct hash<winrt::Windows::UI::Xaml::ISetterBaseCollection> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::ISetterBaseCollection> {};
template<> struct hash<winrt::Windows::UI::Xaml::ISetterBaseFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::ISetterBaseFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::ISetterFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::ISetterFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::ISizeChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::ISizeChangedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::ISizeHelper> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::ISizeHelper> {};
template<> struct hash<winrt::Windows::UI::Xaml::ISizeHelperStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::ISizeHelperStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::IStateTrigger> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IStateTrigger> {};
template<> struct hash<winrt::Windows::UI::Xaml::IStateTriggerBase> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IStateTriggerBase> {};
template<> struct hash<winrt::Windows::UI::Xaml::IStateTriggerBaseFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IStateTriggerBaseFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::IStateTriggerBaseProtected> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IStateTriggerBaseProtected> {};
template<> struct hash<winrt::Windows::UI::Xaml::IStateTriggerStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IStateTriggerStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::IStyle> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IStyle> {};
template<> struct hash<winrt::Windows::UI::Xaml::IStyleFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IStyleFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::ITargetPropertyPath> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::ITargetPropertyPath> {};
template<> struct hash<winrt::Windows::UI::Xaml::ITargetPropertyPathFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::ITargetPropertyPathFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::IThicknessHelper> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IThicknessHelper> {};
template<> struct hash<winrt::Windows::UI::Xaml::IThicknessHelperStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IThicknessHelperStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::ITriggerAction> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::ITriggerAction> {};
template<> struct hash<winrt::Windows::UI::Xaml::ITriggerActionFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::ITriggerActionFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::ITriggerBase> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::ITriggerBase> {};
template<> struct hash<winrt::Windows::UI::Xaml::ITriggerBaseFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::ITriggerBaseFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::IUIElement> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IUIElement> {};
template<> struct hash<winrt::Windows::UI::Xaml::IUIElement2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IUIElement2> {};
template<> struct hash<winrt::Windows::UI::Xaml::IUIElement3> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IUIElement3> {};
template<> struct hash<winrt::Windows::UI::Xaml::IUIElement4> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IUIElement4> {};
template<> struct hash<winrt::Windows::UI::Xaml::IUIElement5> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IUIElement5> {};
template<> struct hash<winrt::Windows::UI::Xaml::IUIElement7> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IUIElement7> {};
template<> struct hash<winrt::Windows::UI::Xaml::IUIElement8> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IUIElement8> {};
template<> struct hash<winrt::Windows::UI::Xaml::IUIElementFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IUIElementFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::IUIElementOverrides> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IUIElementOverrides> {};
template<> struct hash<winrt::Windows::UI::Xaml::IUIElementOverrides7> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IUIElementOverrides7> {};
template<> struct hash<winrt::Windows::UI::Xaml::IUIElementOverrides8> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IUIElementOverrides8> {};
template<> struct hash<winrt::Windows::UI::Xaml::IUIElementStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IUIElementStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::IUIElementStatics2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IUIElementStatics2> {};
template<> struct hash<winrt::Windows::UI::Xaml::IUIElementStatics3> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IUIElementStatics3> {};
template<> struct hash<winrt::Windows::UI::Xaml::IUIElementStatics4> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IUIElementStatics4> {};
template<> struct hash<winrt::Windows::UI::Xaml::IUIElementStatics5> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IUIElementStatics5> {};
template<> struct hash<winrt::Windows::UI::Xaml::IUIElementStatics6> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IUIElementStatics6> {};
template<> struct hash<winrt::Windows::UI::Xaml::IUIElementStatics7> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IUIElementStatics7> {};
template<> struct hash<winrt::Windows::UI::Xaml::IUIElementStatics8> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IUIElementStatics8> {};
template<> struct hash<winrt::Windows::UI::Xaml::IUnhandledExceptionEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IUnhandledExceptionEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::IVisualState> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IVisualState> {};
template<> struct hash<winrt::Windows::UI::Xaml::IVisualState2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IVisualState2> {};
template<> struct hash<winrt::Windows::UI::Xaml::IVisualStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IVisualStateChangedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::IVisualStateGroup> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IVisualStateGroup> {};
template<> struct hash<winrt::Windows::UI::Xaml::IVisualStateManager> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IVisualStateManager> {};
template<> struct hash<winrt::Windows::UI::Xaml::IVisualStateManagerFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IVisualStateManagerFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::IVisualStateManagerOverrides> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IVisualStateManagerOverrides> {};
template<> struct hash<winrt::Windows::UI::Xaml::IVisualStateManagerProtected> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IVisualStateManagerProtected> {};
template<> struct hash<winrt::Windows::UI::Xaml::IVisualStateManagerStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IVisualStateManagerStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::IVisualTransition> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IVisualTransition> {};
template<> struct hash<winrt::Windows::UI::Xaml::IVisualTransitionFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IVisualTransitionFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::IWindow> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IWindow> {};
template<> struct hash<winrt::Windows::UI::Xaml::IWindow2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IWindow2> {};
template<> struct hash<winrt::Windows::UI::Xaml::IWindow3> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IWindow3> {};
template<> struct hash<winrt::Windows::UI::Xaml::IWindowCreatedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IWindowCreatedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::IWindowStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::IWindowStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::AdaptiveTrigger> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::AdaptiveTrigger> {};
template<> struct hash<winrt::Windows::UI::Xaml::Application> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Application> {};
template<> struct hash<winrt::Windows::UI::Xaml::ApplicationInitializationCallbackParams> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::ApplicationInitializationCallbackParams> {};
template<> struct hash<winrt::Windows::UI::Xaml::BindingFailedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::BindingFailedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::BringIntoViewOptions> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::BringIntoViewOptions> {};
template<> struct hash<winrt::Windows::UI::Xaml::BringIntoViewRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::BringIntoViewRequestedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::CornerRadiusHelper> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::CornerRadiusHelper> {};
template<> struct hash<winrt::Windows::UI::Xaml::DataContextChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::DataContextChangedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::DataTemplate> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::DataTemplate> {};
template<> struct hash<winrt::Windows::UI::Xaml::DataTemplateKey> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::DataTemplateKey> {};
template<> struct hash<winrt::Windows::UI::Xaml::DebugSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::DebugSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::DependencyObject> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::DependencyObject> {};
template<> struct hash<winrt::Windows::UI::Xaml::DependencyObjectCollection> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::DependencyObjectCollection> {};
template<> struct hash<winrt::Windows::UI::Xaml::DependencyProperty> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::DependencyProperty> {};
template<> struct hash<winrt::Windows::UI::Xaml::DependencyPropertyChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::DependencyPropertyChangedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::DispatcherTimer> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::DispatcherTimer> {};
template<> struct hash<winrt::Windows::UI::Xaml::DragEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::DragEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::DragOperationDeferral> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::DragOperationDeferral> {};
template<> struct hash<winrt::Windows::UI::Xaml::DragStartingEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::DragStartingEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::DragUI> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::DragUI> {};
template<> struct hash<winrt::Windows::UI::Xaml::DragUIOverride> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::DragUIOverride> {};
template<> struct hash<winrt::Windows::UI::Xaml::DropCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::DropCompletedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::DurationHelper> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::DurationHelper> {};
template<> struct hash<winrt::Windows::UI::Xaml::ElementSoundPlayer> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::ElementSoundPlayer> {};
template<> struct hash<winrt::Windows::UI::Xaml::EventTrigger> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::EventTrigger> {};
template<> struct hash<winrt::Windows::UI::Xaml::ExceptionRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::ExceptionRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::FrameworkElement> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::FrameworkElement> {};
template<> struct hash<winrt::Windows::UI::Xaml::FrameworkTemplate> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::FrameworkTemplate> {};
template<> struct hash<winrt::Windows::UI::Xaml::FrameworkView> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::FrameworkView> {};
template<> struct hash<winrt::Windows::UI::Xaml::FrameworkViewSource> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::FrameworkViewSource> {};
template<> struct hash<winrt::Windows::UI::Xaml::GridLengthHelper> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::GridLengthHelper> {};
template<> struct hash<winrt::Windows::UI::Xaml::MediaFailedRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::MediaFailedRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::PointHelper> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::PointHelper> {};
template<> struct hash<winrt::Windows::UI::Xaml::PropertyMetadata> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::PropertyMetadata> {};
template<> struct hash<winrt::Windows::UI::Xaml::PropertyPath> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::PropertyPath> {};
template<> struct hash<winrt::Windows::UI::Xaml::RectHelper> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::RectHelper> {};
template<> struct hash<winrt::Windows::UI::Xaml::ResourceDictionary> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::ResourceDictionary> {};
template<> struct hash<winrt::Windows::UI::Xaml::RoutedEvent> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::RoutedEvent> {};
template<> struct hash<winrt::Windows::UI::Xaml::RoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::RoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Setter> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Setter> {};
template<> struct hash<winrt::Windows::UI::Xaml::SetterBase> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::SetterBase> {};
template<> struct hash<winrt::Windows::UI::Xaml::SetterBaseCollection> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::SetterBaseCollection> {};
template<> struct hash<winrt::Windows::UI::Xaml::SizeChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::SizeChangedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::SizeHelper> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::SizeHelper> {};
template<> struct hash<winrt::Windows::UI::Xaml::StateTrigger> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::StateTrigger> {};
template<> struct hash<winrt::Windows::UI::Xaml::StateTriggerBase> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::StateTriggerBase> {};
template<> struct hash<winrt::Windows::UI::Xaml::Style> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Style> {};
template<> struct hash<winrt::Windows::UI::Xaml::TargetPropertyPath> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::TargetPropertyPath> {};
template<> struct hash<winrt::Windows::UI::Xaml::ThicknessHelper> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::ThicknessHelper> {};
template<> struct hash<winrt::Windows::UI::Xaml::TriggerAction> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::TriggerAction> {};
template<> struct hash<winrt::Windows::UI::Xaml::TriggerActionCollection> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::TriggerActionCollection> {};
template<> struct hash<winrt::Windows::UI::Xaml::TriggerBase> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::TriggerBase> {};
template<> struct hash<winrt::Windows::UI::Xaml::TriggerCollection> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::TriggerCollection> {};
template<> struct hash<winrt::Windows::UI::Xaml::UIElement> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::UIElement> {};
template<> struct hash<winrt::Windows::UI::Xaml::UnhandledExceptionEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::UnhandledExceptionEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::VisualState> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::VisualState> {};
template<> struct hash<winrt::Windows::UI::Xaml::VisualStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::VisualStateChangedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::VisualStateGroup> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::VisualStateGroup> {};
template<> struct hash<winrt::Windows::UI::Xaml::VisualStateManager> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::VisualStateManager> {};
template<> struct hash<winrt::Windows::UI::Xaml::VisualTransition> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::VisualTransition> {};
template<> struct hash<winrt::Windows::UI::Xaml::Window> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Window> {};
template<> struct hash<winrt::Windows::UI::Xaml::WindowCreatedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::WindowCreatedEventArgs> {};

}

WINRT_WARNING_POP
