﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Devices.Input.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.UI.Core.2.h"
#include "winrt/impl/Windows.UI.Input.2.h"
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/Windows.UI.Xaml.Input.2.h"
#include "winrt/Windows.UI.Xaml.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_UI_Xaml_Input_IAccessKeyDisplayRequestedEventArgs<D>::PressedKeys() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs)->get_PressedKeys(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Input_IAccessKeyInvokedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IAccessKeyInvokedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs)->put_Handled(value));
}

template <typename D> bool consume_Windows_UI_Xaml_Input_IAccessKeyManagerStatics<D>::IsDisplayModeEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IAccessKeyManagerStatics)->get_IsDisplayModeEnabled(&value));
    return value;
}

template <typename D> event_token consume_Windows_UI_Xaml_Input_IAccessKeyManagerStatics<D>::IsDisplayModeEnabledChanged(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IAccessKeyManagerStatics)->add_IsDisplayModeEnabledChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Input::IAccessKeyManagerStatics> consume_Windows_UI_Xaml_Input_IAccessKeyManagerStatics<D>::IsDisplayModeEnabledChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Input::IAccessKeyManagerStatics>(this, &abi_t<Windows::UI::Xaml::Input::IAccessKeyManagerStatics>::remove_IsDisplayModeEnabledChanged, IsDisplayModeEnabledChanged(value));
}

template <typename D> void consume_Windows_UI_Xaml_Input_IAccessKeyManagerStatics<D>::IsDisplayModeEnabledChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IAccessKeyManagerStatics)->remove_IsDisplayModeEnabledChanged(get_abi(token)));
}

template <typename D> void consume_Windows_UI_Xaml_Input_IAccessKeyManagerStatics<D>::ExitDisplayMode() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IAccessKeyManagerStatics)->ExitDisplayMode());
}

template <typename D> bool consume_Windows_UI_Xaml_Input_IAccessKeyManagerStatics2<D>::AreKeyTipsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IAccessKeyManagerStatics2)->get_AreKeyTipsEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IAccessKeyManagerStatics2<D>::AreKeyTipsEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IAccessKeyManagerStatics2)->put_AreKeyTipsEnabled(value));
}

template <typename D> char16_t consume_Windows_UI_Xaml_Input_ICharacterReceivedRoutedEventArgs<D>::Character() const
{
    char16_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::ICharacterReceivedRoutedEventArgs)->get_Character(&value));
    return value;
}

template <typename D> Windows::UI::Core::CorePhysicalKeyStatus consume_Windows_UI_Xaml_Input_ICharacterReceivedRoutedEventArgs<D>::KeyStatus() const
{
    Windows::UI::Core::CorePhysicalKeyStatus value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::ICharacterReceivedRoutedEventArgs)->get_KeyStatus(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Input_ICharacterReceivedRoutedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::ICharacterReceivedRoutedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_ICharacterReceivedRoutedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::ICharacterReceivedRoutedEventArgs)->put_Handled(value));
}

template <typename D> event_token consume_Windows_UI_Xaml_Input_ICommand<D>::CanExecuteChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::ICommand)->add_CanExecuteChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Input::ICommand> consume_Windows_UI_Xaml_Input_ICommand<D>::CanExecuteChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Input::ICommand>(this, &abi_t<Windows::UI::Xaml::Input::ICommand>::remove_CanExecuteChanged, CanExecuteChanged(value));
}

template <typename D> void consume_Windows_UI_Xaml_Input_ICommand<D>::CanExecuteChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::ICommand)->remove_CanExecuteChanged(get_abi(token)));
}

template <typename D> bool consume_Windows_UI_Xaml_Input_ICommand<D>::CanExecute(Windows::Foundation::IInspectable const& parameter) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::ICommand)->CanExecute(get_abi(parameter), &returnValue));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_Input_ICommand<D>::Execute(Windows::Foundation::IInspectable const& parameter) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::ICommand)->Execute(get_abi(parameter)));
}

template <typename D> bool consume_Windows_UI_Xaml_Input_IContextRequestedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IContextRequestedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IContextRequestedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IContextRequestedEventArgs)->put_Handled(value));
}

template <typename D> bool consume_Windows_UI_Xaml_Input_IContextRequestedEventArgs<D>::TryGetPosition(Windows::UI::Xaml::UIElement const& relativeTo, Windows::Foundation::Point& point) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IContextRequestedEventArgs)->TryGetPosition(get_abi(relativeTo), put_abi(point), &returnValue));
    return returnValue;
}

template <typename D> Windows::Devices::Input::PointerDeviceType consume_Windows_UI_Xaml_Input_IDoubleTappedRoutedEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs)->get_PointerDeviceType(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Input_IDoubleTappedRoutedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IDoubleTappedRoutedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs)->put_Handled(value));
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Input_IDoubleTappedRoutedEventArgs<D>::GetPosition(Windows::UI::Xaml::UIElement const& relativeTo) const
{
    Windows::Foundation::Point returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs)->GetPosition(get_abi(relativeTo), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_Input_IFindNextElementOptions<D>::SearchRoot() const
{
    Windows::UI::Xaml::DependencyObject value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IFindNextElementOptions)->get_SearchRoot(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IFindNextElementOptions<D>::SearchRoot(Windows::UI::Xaml::DependencyObject const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IFindNextElementOptions)->put_SearchRoot(get_abi(value)));
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Xaml_Input_IFindNextElementOptions<D>::ExclusionRect() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IFindNextElementOptions)->get_ExclusionRect(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IFindNextElementOptions<D>::ExclusionRect(Windows::Foundation::Rect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IFindNextElementOptions)->put_ExclusionRect(get_abi(value)));
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Xaml_Input_IFindNextElementOptions<D>::HintRect() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IFindNextElementOptions)->get_HintRect(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IFindNextElementOptions<D>::HintRect(Windows::Foundation::Rect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IFindNextElementOptions)->put_HintRect(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Input::XYFocusNavigationStrategyOverride consume_Windows_UI_Xaml_Input_IFindNextElementOptions<D>::XYFocusNavigationStrategyOverride() const
{
    Windows::UI::Xaml::Input::XYFocusNavigationStrategyOverride value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IFindNextElementOptions)->get_XYFocusNavigationStrategyOverride(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IFindNextElementOptions<D>::XYFocusNavigationStrategyOverride(Windows::UI::Xaml::Input::XYFocusNavigationStrategyOverride const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IFindNextElementOptions)->put_XYFocusNavigationStrategyOverride(get_abi(value)));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Input_IFocusManagerStatics<D>::GetFocusedElement() const
{
    Windows::Foundation::IInspectable returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IFocusManagerStatics)->GetFocusedElement(put_abi(returnValue)));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Input_IFocusManagerStatics2<D>::TryMoveFocus(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IFocusManagerStatics2)->TryMoveFocus(get_abi(focusNavigationDirection), &returnValue));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::UIElement consume_Windows_UI_Xaml_Input_IFocusManagerStatics3<D>::FindNextFocusableElement(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection) const
{
    Windows::UI::Xaml::UIElement result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IFocusManagerStatics3)->FindNextFocusableElement(get_abi(focusNavigationDirection), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Xaml::UIElement consume_Windows_UI_Xaml_Input_IFocusManagerStatics3<D>::FindNextFocusableElement(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection, Windows::Foundation::Rect const& hintRect) const
{
    Windows::UI::Xaml::UIElement result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IFocusManagerStatics3)->FindNextFocusableElementWithHint(get_abi(focusNavigationDirection), get_abi(hintRect), put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_UI_Xaml_Input_IFocusManagerStatics4<D>::TryMoveFocus(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection, Windows::UI::Xaml::Input::FindNextElementOptions const& focusNavigationOptions) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IFocusManagerStatics4)->TryMoveFocusWithOptions(get_abi(focusNavigationDirection), get_abi(focusNavigationOptions), &returnValue));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_Input_IFocusManagerStatics4<D>::FindNextElement(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection) const
{
    Windows::UI::Xaml::DependencyObject returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IFocusManagerStatics4)->FindNextElement(get_abi(focusNavigationDirection), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_Input_IFocusManagerStatics4<D>::FindFirstFocusableElement(Windows::UI::Xaml::DependencyObject const& searchScope) const
{
    Windows::UI::Xaml::DependencyObject returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IFocusManagerStatics4)->FindFirstFocusableElement(get_abi(searchScope), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_Input_IFocusManagerStatics4<D>::FindLastFocusableElement(Windows::UI::Xaml::DependencyObject const& searchScope) const
{
    Windows::UI::Xaml::DependencyObject returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IFocusManagerStatics4)->FindLastFocusableElement(get_abi(searchScope), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_Input_IFocusManagerStatics4<D>::FindNextElement(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection, Windows::UI::Xaml::Input::FindNextElementOptions const& focusNavigationOptions) const
{
    Windows::UI::Xaml::DependencyObject returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IFocusManagerStatics4)->FindNextElementWithOptions(get_abi(focusNavigationDirection), get_abi(focusNavigationOptions), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Input::FocusMovementResult> consume_Windows_UI_Xaml_Input_IFocusManagerStatics5<D>::TryFocusAsync(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FocusState const& value) const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Input::FocusMovementResult> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IFocusManagerStatics5)->TryFocusAsync(get_abi(element), get_abi(value), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Input::FocusMovementResult> consume_Windows_UI_Xaml_Input_IFocusManagerStatics5<D>::TryMoveFocusAsync(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection) const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Input::FocusMovementResult> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IFocusManagerStatics5)->TryMoveFocusAsync(get_abi(focusNavigationDirection), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Input::FocusMovementResult> consume_Windows_UI_Xaml_Input_IFocusManagerStatics5<D>::TryMoveFocusAsync(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection, Windows::UI::Xaml::Input::FindNextElementOptions const& focusNavigationOptions) const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Input::FocusMovementResult> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IFocusManagerStatics5)->TryMoveFocusWithOptionsAsync(get_abi(focusNavigationDirection), get_abi(focusNavigationOptions), put_abi(returnValue)));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Input_IFocusMovementResult<D>::Succeeded() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IFocusMovementResult)->get_Succeeded(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_Input_IGettingFocusEventArgs<D>::OldFocusedElement() const
{
    Windows::UI::Xaml::DependencyObject value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IGettingFocusEventArgs)->get_OldFocusedElement(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_Input_IGettingFocusEventArgs<D>::NewFocusedElement() const
{
    Windows::UI::Xaml::DependencyObject value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IGettingFocusEventArgs)->get_NewFocusedElement(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IGettingFocusEventArgs<D>::NewFocusedElement(Windows::UI::Xaml::DependencyObject const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IGettingFocusEventArgs)->put_NewFocusedElement(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::FocusState consume_Windows_UI_Xaml_Input_IGettingFocusEventArgs<D>::FocusState() const
{
    Windows::UI::Xaml::FocusState value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IGettingFocusEventArgs)->get_FocusState(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Input::FocusNavigationDirection consume_Windows_UI_Xaml_Input_IGettingFocusEventArgs<D>::Direction() const
{
    Windows::UI::Xaml::Input::FocusNavigationDirection value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IGettingFocusEventArgs)->get_Direction(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Input_IGettingFocusEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IGettingFocusEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IGettingFocusEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IGettingFocusEventArgs)->put_Handled(value));
}

template <typename D> Windows::UI::Xaml::Input::FocusInputDeviceKind consume_Windows_UI_Xaml_Input_IGettingFocusEventArgs<D>::InputDevice() const
{
    Windows::UI::Xaml::Input::FocusInputDeviceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IGettingFocusEventArgs)->get_InputDevice(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Input_IGettingFocusEventArgs<D>::Cancel() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IGettingFocusEventArgs)->get_Cancel(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IGettingFocusEventArgs<D>::Cancel(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IGettingFocusEventArgs)->put_Cancel(value));
}

template <typename D> bool consume_Windows_UI_Xaml_Input_IGettingFocusEventArgs2<D>::TryCancel() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IGettingFocusEventArgs2)->TryCancel(&returnValue));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Input_IGettingFocusEventArgs2<D>::TrySetNewFocusedElement(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IGettingFocusEventArgs2)->TrySetNewFocusedElement(get_abi(element), &returnValue));
    return returnValue;
}

template <typename D> Windows::Devices::Input::PointerDeviceType consume_Windows_UI_Xaml_Input_IHoldingRoutedEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IHoldingRoutedEventArgs)->get_PointerDeviceType(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::HoldingState consume_Windows_UI_Xaml_Input_IHoldingRoutedEventArgs<D>::HoldingState() const
{
    Windows::UI::Input::HoldingState value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IHoldingRoutedEventArgs)->get_HoldingState(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Input_IHoldingRoutedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IHoldingRoutedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IHoldingRoutedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IHoldingRoutedEventArgs)->put_Handled(value));
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Input_IHoldingRoutedEventArgs<D>::GetPosition(Windows::UI::Xaml::UIElement const& relativeTo) const
{
    Windows::Foundation::Point returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IHoldingRoutedEventArgs)->GetPosition(get_abi(relativeTo), put_abi(returnValue)));
    return returnValue;
}

template <typename D> double consume_Windows_UI_Xaml_Input_IInertiaExpansionBehavior<D>::DesiredDeceleration() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IInertiaExpansionBehavior)->get_DesiredDeceleration(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IInertiaExpansionBehavior<D>::DesiredDeceleration(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IInertiaExpansionBehavior)->put_DesiredDeceleration(value));
}

template <typename D> double consume_Windows_UI_Xaml_Input_IInertiaExpansionBehavior<D>::DesiredExpansion() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IInertiaExpansionBehavior)->get_DesiredExpansion(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IInertiaExpansionBehavior<D>::DesiredExpansion(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IInertiaExpansionBehavior)->put_DesiredExpansion(value));
}

template <typename D> double consume_Windows_UI_Xaml_Input_IInertiaRotationBehavior<D>::DesiredDeceleration() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IInertiaRotationBehavior)->get_DesiredDeceleration(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IInertiaRotationBehavior<D>::DesiredDeceleration(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IInertiaRotationBehavior)->put_DesiredDeceleration(value));
}

template <typename D> double consume_Windows_UI_Xaml_Input_IInertiaRotationBehavior<D>::DesiredRotation() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IInertiaRotationBehavior)->get_DesiredRotation(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IInertiaRotationBehavior<D>::DesiredRotation(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IInertiaRotationBehavior)->put_DesiredRotation(value));
}

template <typename D> double consume_Windows_UI_Xaml_Input_IInertiaTranslationBehavior<D>::DesiredDeceleration() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IInertiaTranslationBehavior)->get_DesiredDeceleration(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IInertiaTranslationBehavior<D>::DesiredDeceleration(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IInertiaTranslationBehavior)->put_DesiredDeceleration(value));
}

template <typename D> double consume_Windows_UI_Xaml_Input_IInertiaTranslationBehavior<D>::DesiredDisplacement() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IInertiaTranslationBehavior)->get_DesiredDisplacement(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IInertiaTranslationBehavior<D>::DesiredDisplacement(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IInertiaTranslationBehavior)->put_DesiredDisplacement(value));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Input::InputScopeName> consume_Windows_UI_Xaml_Input_IInputScope<D>::Names() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Input::InputScopeName> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IInputScope)->get_Names(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Input::InputScopeNameValue consume_Windows_UI_Xaml_Input_IInputScopeName<D>::NameValue() const
{
    Windows::UI::Xaml::Input::InputScopeNameValue value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IInputScopeName)->get_NameValue(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IInputScopeName<D>::NameValue(Windows::UI::Xaml::Input::InputScopeNameValue const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IInputScopeName)->put_NameValue(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Input::InputScopeName consume_Windows_UI_Xaml_Input_IInputScopeNameFactory<D>::CreateInstance(Windows::UI::Xaml::Input::InputScopeNameValue const& nameValue) const
{
    Windows::UI::Xaml::Input::InputScopeName instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IInputScopeNameFactory)->CreateInstance(get_abi(nameValue), put_abi(instance)));
    return instance;
}

template <typename D> Windows::System::VirtualKey consume_Windows_UI_Xaml_Input_IKeyRoutedEventArgs<D>::Key() const
{
    Windows::System::VirtualKey value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IKeyRoutedEventArgs)->get_Key(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Core::CorePhysicalKeyStatus consume_Windows_UI_Xaml_Input_IKeyRoutedEventArgs<D>::KeyStatus() const
{
    Windows::UI::Core::CorePhysicalKeyStatus value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IKeyRoutedEventArgs)->get_KeyStatus(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Input_IKeyRoutedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IKeyRoutedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IKeyRoutedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IKeyRoutedEventArgs)->put_Handled(value));
}

template <typename D> Windows::System::VirtualKey consume_Windows_UI_Xaml_Input_IKeyRoutedEventArgs2<D>::OriginalKey() const
{
    Windows::System::VirtualKey value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IKeyRoutedEventArgs2)->get_OriginalKey(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Input_IKeyRoutedEventArgs3<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IKeyRoutedEventArgs3)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::System::VirtualKey consume_Windows_UI_Xaml_Input_IKeyboardAccelerator<D>::Key() const
{
    Windows::System::VirtualKey value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IKeyboardAccelerator)->get_Key(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IKeyboardAccelerator<D>::Key(Windows::System::VirtualKey const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IKeyboardAccelerator)->put_Key(get_abi(value)));
}

template <typename D> Windows::System::VirtualKeyModifiers consume_Windows_UI_Xaml_Input_IKeyboardAccelerator<D>::Modifiers() const
{
    Windows::System::VirtualKeyModifiers value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IKeyboardAccelerator)->get_Modifiers(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IKeyboardAccelerator<D>::Modifiers(Windows::System::VirtualKeyModifiers const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IKeyboardAccelerator)->put_Modifiers(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_Input_IKeyboardAccelerator<D>::IsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IKeyboardAccelerator)->get_IsEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IKeyboardAccelerator<D>::IsEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IKeyboardAccelerator)->put_IsEnabled(value));
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_Input_IKeyboardAccelerator<D>::ScopeOwner() const
{
    Windows::UI::Xaml::DependencyObject value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IKeyboardAccelerator)->get_ScopeOwner(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IKeyboardAccelerator<D>::ScopeOwner(Windows::UI::Xaml::DependencyObject const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IKeyboardAccelerator)->put_ScopeOwner(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Input_IKeyboardAccelerator<D>::Invoked(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Input::KeyboardAccelerator, Windows::UI::Xaml::Input::KeyboardAcceleratorInvokedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IKeyboardAccelerator)->add_Invoked(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Input::IKeyboardAccelerator> consume_Windows_UI_Xaml_Input_IKeyboardAccelerator<D>::Invoked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Input::KeyboardAccelerator, Windows::UI::Xaml::Input::KeyboardAcceleratorInvokedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Input::IKeyboardAccelerator>(this, &abi_t<Windows::UI::Xaml::Input::IKeyboardAccelerator>::remove_Invoked, Invoked(value));
}

template <typename D> void consume_Windows_UI_Xaml_Input_IKeyboardAccelerator<D>::Invoked(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IKeyboardAccelerator)->remove_Invoked(get_abi(token)));
}

template <typename D> Windows::UI::Xaml::Input::KeyboardAccelerator consume_Windows_UI_Xaml_Input_IKeyboardAcceleratorFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Input::KeyboardAccelerator instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IKeyboardAcceleratorFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> bool consume_Windows_UI_Xaml_Input_IKeyboardAcceleratorInvokedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IKeyboardAcceleratorInvokedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IKeyboardAcceleratorInvokedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IKeyboardAcceleratorInvokedEventArgs)->put_Handled(value));
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_Input_IKeyboardAcceleratorInvokedEventArgs<D>::Element() const
{
    Windows::UI::Xaml::DependencyObject value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IKeyboardAcceleratorInvokedEventArgs)->get_Element(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Input::KeyboardAccelerator consume_Windows_UI_Xaml_Input_IKeyboardAcceleratorInvokedEventArgs2<D>::KeyboardAccelerator() const
{
    Windows::UI::Xaml::Input::KeyboardAccelerator value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IKeyboardAcceleratorInvokedEventArgs2)->get_KeyboardAccelerator(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Input_IKeyboardAcceleratorStatics<D>::KeyProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IKeyboardAcceleratorStatics)->get_KeyProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Input_IKeyboardAcceleratorStatics<D>::ModifiersProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IKeyboardAcceleratorStatics)->get_ModifiersProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Input_IKeyboardAcceleratorStatics<D>::IsEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IKeyboardAcceleratorStatics)->get_IsEnabledProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Input_IKeyboardAcceleratorStatics<D>::ScopeOwnerProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IKeyboardAcceleratorStatics)->get_ScopeOwnerProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_Input_ILosingFocusEventArgs<D>::OldFocusedElement() const
{
    Windows::UI::Xaml::DependencyObject value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::ILosingFocusEventArgs)->get_OldFocusedElement(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_Input_ILosingFocusEventArgs<D>::NewFocusedElement() const
{
    Windows::UI::Xaml::DependencyObject value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::ILosingFocusEventArgs)->get_NewFocusedElement(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_ILosingFocusEventArgs<D>::NewFocusedElement(Windows::UI::Xaml::DependencyObject const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::ILosingFocusEventArgs)->put_NewFocusedElement(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::FocusState consume_Windows_UI_Xaml_Input_ILosingFocusEventArgs<D>::FocusState() const
{
    Windows::UI::Xaml::FocusState value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::ILosingFocusEventArgs)->get_FocusState(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Input::FocusNavigationDirection consume_Windows_UI_Xaml_Input_ILosingFocusEventArgs<D>::Direction() const
{
    Windows::UI::Xaml::Input::FocusNavigationDirection value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::ILosingFocusEventArgs)->get_Direction(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Input_ILosingFocusEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::ILosingFocusEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_ILosingFocusEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::ILosingFocusEventArgs)->put_Handled(value));
}

template <typename D> Windows::UI::Xaml::Input::FocusInputDeviceKind consume_Windows_UI_Xaml_Input_ILosingFocusEventArgs<D>::InputDevice() const
{
    Windows::UI::Xaml::Input::FocusInputDeviceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::ILosingFocusEventArgs)->get_InputDevice(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Input_ILosingFocusEventArgs<D>::Cancel() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::ILosingFocusEventArgs)->get_Cancel(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_ILosingFocusEventArgs<D>::Cancel(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::ILosingFocusEventArgs)->put_Cancel(value));
}

template <typename D> bool consume_Windows_UI_Xaml_Input_ILosingFocusEventArgs2<D>::TryCancel() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::ILosingFocusEventArgs2)->TryCancel(&returnValue));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Input_ILosingFocusEventArgs2<D>::TrySetNewFocusedElement(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::ILosingFocusEventArgs2)->TrySetNewFocusedElement(get_abi(element), &returnValue));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::UIElement consume_Windows_UI_Xaml_Input_IManipulationCompletedRoutedEventArgs<D>::Container() const
{
    Windows::UI::Xaml::UIElement value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs)->get_Container(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Input_IManipulationCompletedRoutedEventArgs<D>::Position() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs)->get_Position(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Input_IManipulationCompletedRoutedEventArgs<D>::IsInertial() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs)->get_IsInertial(&value));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationDelta consume_Windows_UI_Xaml_Input_IManipulationCompletedRoutedEventArgs<D>::Cumulative() const
{
    Windows::UI::Input::ManipulationDelta value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs)->get_Cumulative(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationVelocities consume_Windows_UI_Xaml_Input_IManipulationCompletedRoutedEventArgs<D>::Velocities() const
{
    Windows::UI::Input::ManipulationVelocities value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs)->get_Velocities(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Input_IManipulationCompletedRoutedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IManipulationCompletedRoutedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs)->put_Handled(value));
}

template <typename D> Windows::Devices::Input::PointerDeviceType consume_Windows_UI_Xaml_Input_IManipulationCompletedRoutedEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs)->get_PointerDeviceType(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::UIElement consume_Windows_UI_Xaml_Input_IManipulationDeltaRoutedEventArgs<D>::Container() const
{
    Windows::UI::Xaml::UIElement value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs)->get_Container(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Input_IManipulationDeltaRoutedEventArgs<D>::Position() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs)->get_Position(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Input_IManipulationDeltaRoutedEventArgs<D>::IsInertial() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs)->get_IsInertial(&value));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationDelta consume_Windows_UI_Xaml_Input_IManipulationDeltaRoutedEventArgs<D>::Delta() const
{
    Windows::UI::Input::ManipulationDelta value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs)->get_Delta(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationDelta consume_Windows_UI_Xaml_Input_IManipulationDeltaRoutedEventArgs<D>::Cumulative() const
{
    Windows::UI::Input::ManipulationDelta value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs)->get_Cumulative(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationVelocities consume_Windows_UI_Xaml_Input_IManipulationDeltaRoutedEventArgs<D>::Velocities() const
{
    Windows::UI::Input::ManipulationVelocities value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs)->get_Velocities(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Input_IManipulationDeltaRoutedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IManipulationDeltaRoutedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs)->put_Handled(value));
}

template <typename D> Windows::Devices::Input::PointerDeviceType consume_Windows_UI_Xaml_Input_IManipulationDeltaRoutedEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs)->get_PointerDeviceType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IManipulationDeltaRoutedEventArgs<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs)->Complete());
}

template <typename D> Windows::UI::Xaml::UIElement consume_Windows_UI_Xaml_Input_IManipulationInertiaStartingRoutedEventArgs<D>::Container() const
{
    Windows::UI::Xaml::UIElement value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs)->get_Container(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Input::InertiaExpansionBehavior consume_Windows_UI_Xaml_Input_IManipulationInertiaStartingRoutedEventArgs<D>::ExpansionBehavior() const
{
    Windows::UI::Xaml::Input::InertiaExpansionBehavior value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs)->get_ExpansionBehavior(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IManipulationInertiaStartingRoutedEventArgs<D>::ExpansionBehavior(Windows::UI::Xaml::Input::InertiaExpansionBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs)->put_ExpansionBehavior(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Input::InertiaRotationBehavior consume_Windows_UI_Xaml_Input_IManipulationInertiaStartingRoutedEventArgs<D>::RotationBehavior() const
{
    Windows::UI::Xaml::Input::InertiaRotationBehavior value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs)->get_RotationBehavior(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IManipulationInertiaStartingRoutedEventArgs<D>::RotationBehavior(Windows::UI::Xaml::Input::InertiaRotationBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs)->put_RotationBehavior(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Input::InertiaTranslationBehavior consume_Windows_UI_Xaml_Input_IManipulationInertiaStartingRoutedEventArgs<D>::TranslationBehavior() const
{
    Windows::UI::Xaml::Input::InertiaTranslationBehavior value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs)->get_TranslationBehavior(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IManipulationInertiaStartingRoutedEventArgs<D>::TranslationBehavior(Windows::UI::Xaml::Input::InertiaTranslationBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs)->put_TranslationBehavior(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_Input_IManipulationInertiaStartingRoutedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IManipulationInertiaStartingRoutedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs)->put_Handled(value));
}

template <typename D> Windows::Devices::Input::PointerDeviceType consume_Windows_UI_Xaml_Input_IManipulationInertiaStartingRoutedEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs)->get_PointerDeviceType(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationDelta consume_Windows_UI_Xaml_Input_IManipulationInertiaStartingRoutedEventArgs<D>::Delta() const
{
    Windows::UI::Input::ManipulationDelta value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs)->get_Delta(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationDelta consume_Windows_UI_Xaml_Input_IManipulationInertiaStartingRoutedEventArgs<D>::Cumulative() const
{
    Windows::UI::Input::ManipulationDelta value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs)->get_Cumulative(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationVelocities consume_Windows_UI_Xaml_Input_IManipulationInertiaStartingRoutedEventArgs<D>::Velocities() const
{
    Windows::UI::Input::ManipulationVelocities value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs)->get_Velocities(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Input_IManipulationPivot<D>::Center() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationPivot)->get_Center(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IManipulationPivot<D>::Center(Windows::Foundation::Point const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationPivot)->put_Center(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Input_IManipulationPivot<D>::Radius() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationPivot)->get_Radius(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IManipulationPivot<D>::Radius(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationPivot)->put_Radius(value));
}

template <typename D> Windows::UI::Xaml::Input::ManipulationPivot consume_Windows_UI_Xaml_Input_IManipulationPivotFactory<D>::CreateInstanceWithCenterAndRadius(Windows::Foundation::Point const& center, double radius) const
{
    Windows::UI::Xaml::Input::ManipulationPivot instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationPivotFactory)->CreateInstanceWithCenterAndRadius(get_abi(center), radius, put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::UIElement consume_Windows_UI_Xaml_Input_IManipulationStartedRoutedEventArgs<D>::Container() const
{
    Windows::UI::Xaml::UIElement value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs)->get_Container(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Input_IManipulationStartedRoutedEventArgs<D>::Position() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs)->get_Position(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Input_IManipulationStartedRoutedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IManipulationStartedRoutedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs)->put_Handled(value));
}

template <typename D> Windows::Devices::Input::PointerDeviceType consume_Windows_UI_Xaml_Input_IManipulationStartedRoutedEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs)->get_PointerDeviceType(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationDelta consume_Windows_UI_Xaml_Input_IManipulationStartedRoutedEventArgs<D>::Cumulative() const
{
    Windows::UI::Input::ManipulationDelta value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs)->get_Cumulative(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IManipulationStartedRoutedEventArgs<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs)->Complete());
}

template <typename D> Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs consume_Windows_UI_Xaml_Input_IManipulationStartedRoutedEventArgsFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgsFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Input::ManipulationModes consume_Windows_UI_Xaml_Input_IManipulationStartingRoutedEventArgs<D>::Mode() const
{
    Windows::UI::Xaml::Input::ManipulationModes value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationStartingRoutedEventArgs)->get_Mode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IManipulationStartingRoutedEventArgs<D>::Mode(Windows::UI::Xaml::Input::ManipulationModes const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationStartingRoutedEventArgs)->put_Mode(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::UIElement consume_Windows_UI_Xaml_Input_IManipulationStartingRoutedEventArgs<D>::Container() const
{
    Windows::UI::Xaml::UIElement value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationStartingRoutedEventArgs)->get_Container(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IManipulationStartingRoutedEventArgs<D>::Container(Windows::UI::Xaml::UIElement const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationStartingRoutedEventArgs)->put_Container(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Input::ManipulationPivot consume_Windows_UI_Xaml_Input_IManipulationStartingRoutedEventArgs<D>::Pivot() const
{
    Windows::UI::Xaml::Input::ManipulationPivot value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationStartingRoutedEventArgs)->get_Pivot(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IManipulationStartingRoutedEventArgs<D>::Pivot(Windows::UI::Xaml::Input::ManipulationPivot const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationStartingRoutedEventArgs)->put_Pivot(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_Input_IManipulationStartingRoutedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationStartingRoutedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IManipulationStartingRoutedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IManipulationStartingRoutedEventArgs)->put_Handled(value));
}

template <typename D> Windows::UI::Xaml::Input::FocusNavigationDirection consume_Windows_UI_Xaml_Input_INoFocusCandidateFoundEventArgs<D>::Direction() const
{
    Windows::UI::Xaml::Input::FocusNavigationDirection value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::INoFocusCandidateFoundEventArgs)->get_Direction(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Input_INoFocusCandidateFoundEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::INoFocusCandidateFoundEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_INoFocusCandidateFoundEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::INoFocusCandidateFoundEventArgs)->put_Handled(value));
}

template <typename D> Windows::UI::Xaml::Input::FocusInputDeviceKind consume_Windows_UI_Xaml_Input_INoFocusCandidateFoundEventArgs<D>::InputDevice() const
{
    Windows::UI::Xaml::Input::FocusInputDeviceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::INoFocusCandidateFoundEventArgs)->get_InputDevice(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_UI_Xaml_Input_IPointer<D>::PointerId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IPointer)->get_PointerId(&value));
    return value;
}

template <typename D> Windows::Devices::Input::PointerDeviceType consume_Windows_UI_Xaml_Input_IPointer<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IPointer)->get_PointerDeviceType(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Input_IPointer<D>::IsInContact() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IPointer)->get_IsInContact(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Input_IPointer<D>::IsInRange() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IPointer)->get_IsInRange(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Input::Pointer consume_Windows_UI_Xaml_Input_IPointerRoutedEventArgs<D>::Pointer() const
{
    Windows::UI::Xaml::Input::Pointer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IPointerRoutedEventArgs)->get_Pointer(put_abi(value)));
    return value;
}

template <typename D> Windows::System::VirtualKeyModifiers consume_Windows_UI_Xaml_Input_IPointerRoutedEventArgs<D>::KeyModifiers() const
{
    Windows::System::VirtualKeyModifiers value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IPointerRoutedEventArgs)->get_KeyModifiers(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Input_IPointerRoutedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IPointerRoutedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IPointerRoutedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IPointerRoutedEventArgs)->put_Handled(value));
}

template <typename D> Windows::UI::Input::PointerPoint consume_Windows_UI_Xaml_Input_IPointerRoutedEventArgs<D>::GetCurrentPoint(Windows::UI::Xaml::UIElement const& relativeTo) const
{
    Windows::UI::Input::PointerPoint returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IPointerRoutedEventArgs)->GetCurrentPoint(get_abi(relativeTo), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> consume_Windows_UI_Xaml_Input_IPointerRoutedEventArgs<D>::GetIntermediatePoints(Windows::UI::Xaml::UIElement const& relativeTo) const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IPointerRoutedEventArgs)->GetIntermediatePoints(get_abi(relativeTo), put_abi(returnValue)));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Input_IPointerRoutedEventArgs2<D>::IsGenerated() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IPointerRoutedEventArgs2)->get_IsGenerated(&value));
    return value;
}

template <typename D> Windows::System::VirtualKey consume_Windows_UI_Xaml_Input_IProcessKeyboardAcceleratorEventArgs<D>::Key() const
{
    Windows::System::VirtualKey value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IProcessKeyboardAcceleratorEventArgs)->get_Key(put_abi(value)));
    return value;
}

template <typename D> Windows::System::VirtualKeyModifiers consume_Windows_UI_Xaml_Input_IProcessKeyboardAcceleratorEventArgs<D>::Modifiers() const
{
    Windows::System::VirtualKeyModifiers value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IProcessKeyboardAcceleratorEventArgs)->get_Modifiers(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Input_IProcessKeyboardAcceleratorEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IProcessKeyboardAcceleratorEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IProcessKeyboardAcceleratorEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IProcessKeyboardAcceleratorEventArgs)->put_Handled(value));
}

template <typename D> Windows::Devices::Input::PointerDeviceType consume_Windows_UI_Xaml_Input_IRightTappedRoutedEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs)->get_PointerDeviceType(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Input_IRightTappedRoutedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_IRightTappedRoutedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs)->put_Handled(value));
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Input_IRightTappedRoutedEventArgs<D>::GetPosition(Windows::UI::Xaml::UIElement const& relativeTo) const
{
    Windows::Foundation::Point returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs)->GetPosition(get_abi(relativeTo), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Devices::Input::PointerDeviceType consume_Windows_UI_Xaml_Input_ITappedRoutedEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::ITappedRoutedEventArgs)->get_PointerDeviceType(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Input_ITappedRoutedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::ITappedRoutedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Input_ITappedRoutedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::ITappedRoutedEventArgs)->put_Handled(value));
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Input_ITappedRoutedEventArgs<D>::GetPosition(Windows::UI::Xaml::UIElement const& relativeTo) const
{
    Windows::Foundation::Point returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Input::ITappedRoutedEventArgs)->GetPosition(get_abi(relativeTo), put_abi(returnValue)));
    return returnValue;
}

template <> struct delegate<Windows::UI::Xaml::Input::DoubleTappedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Input::DoubleTappedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Input::DoubleTappedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::Input::HoldingEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Input::HoldingEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Input::HoldingEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Input::HoldingRoutedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::Input::KeyEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Input::KeyEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Input::KeyEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Input::KeyRoutedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::Input::ManipulationCompletedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Input::ManipulationCompletedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Input::ManipulationCompletedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::Input::ManipulationDeltaEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Input::ManipulationDeltaEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Input::ManipulationDeltaEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::Input::ManipulationInertiaStartingEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Input::ManipulationInertiaStartingEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Input::ManipulationInertiaStartingEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::Input::ManipulationStartedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Input::ManipulationStartedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Input::ManipulationStartedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::Input::ManipulationStartingEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Input::ManipulationStartingEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Input::ManipulationStartingEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::Input::PointerEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Input::PointerEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Input::PointerEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Input::PointerRoutedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::Input::RightTappedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Input::RightTappedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Input::RightTappedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Input::RightTappedRoutedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::Input::TappedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Input::TappedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Input::TappedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Input::TappedRoutedEventArgs const*>(&e));
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
struct produce<D, Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs>
{
    HRESULT __stdcall get_PressedKeys(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PressedKeys());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs>
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
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IAccessKeyManager> : produce_base<D, Windows::UI::Xaml::Input::IAccessKeyManager>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IAccessKeyManagerStatics> : produce_base<D, Windows::UI::Xaml::Input::IAccessKeyManagerStatics>
{
    HRESULT __stdcall get_IsDisplayModeEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsDisplayModeEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_IsDisplayModeEnabledChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().IsDisplayModeEnabledChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_IsDisplayModeEnabledChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsDisplayModeEnabledChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ExitDisplayMode() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExitDisplayMode();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IAccessKeyManagerStatics2> : produce_base<D, Windows::UI::Xaml::Input::IAccessKeyManagerStatics2>
{
    HRESULT __stdcall get_AreKeyTipsEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AreKeyTipsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AreKeyTipsEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AreKeyTipsEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::ICharacterReceivedRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::ICharacterReceivedRoutedEventArgs>
{
    HRESULT __stdcall get_Character(char16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<char16_t>(this->shim().Character());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_KeyStatus(struct struct_Windows_UI_Core_CorePhysicalKeyStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Core::CorePhysicalKeyStatus>(this->shim().KeyStatus());
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
struct produce<D, Windows::UI::Xaml::Input::ICommand> : produce_base<D, Windows::UI::Xaml::Input::ICommand>
{
    HRESULT __stdcall add_CanExecuteChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().CanExecuteChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_CanExecuteChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanExecuteChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CanExecute(void* parameter, bool* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().CanExecute(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&parameter)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Execute(void* parameter) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Execute(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&parameter));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IContextRequestedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IContextRequestedEventArgs>
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

    HRESULT __stdcall TryGetPosition(void* relativeTo, Windows::Foundation::Point* point, bool* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().TryGetPosition(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&relativeTo), *reinterpret_cast<Windows::Foundation::Point*>(point)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs>
{
    HRESULT __stdcall get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Input::PointerDeviceType>(this->shim().PointerDeviceType());
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
struct produce<D, Windows::UI::Xaml::Input::IFindNextElementOptions> : produce_base<D, Windows::UI::Xaml::Input::IFindNextElementOptions>
{
    HRESULT __stdcall get_SearchRoot(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyObject>(this->shim().SearchRoot());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SearchRoot(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SearchRoot(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ExclusionRect(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Rect>(this->shim().ExclusionRect());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ExclusionRect(Windows::Foundation::Rect value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExclusionRect(*reinterpret_cast<Windows::Foundation::Rect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HintRect(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Rect>(this->shim().HintRect());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_HintRect(Windows::Foundation::Rect value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HintRect(*reinterpret_cast<Windows::Foundation::Rect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_XYFocusNavigationStrategyOverride(Windows::UI::Xaml::Input::XYFocusNavigationStrategyOverride* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Input::XYFocusNavigationStrategyOverride>(this->shim().XYFocusNavigationStrategyOverride());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_XYFocusNavigationStrategyOverride(Windows::UI::Xaml::Input::XYFocusNavigationStrategyOverride value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().XYFocusNavigationStrategyOverride(*reinterpret_cast<Windows::UI::Xaml::Input::XYFocusNavigationStrategyOverride const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IFocusManager> : produce_base<D, Windows::UI::Xaml::Input::IFocusManager>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IFocusManagerStatics> : produce_base<D, Windows::UI::Xaml::Input::IFocusManagerStatics>
{
    HRESULT __stdcall GetFocusedElement(void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::IInspectable>(this->shim().GetFocusedElement());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IFocusManagerStatics2> : produce_base<D, Windows::UI::Xaml::Input::IFocusManagerStatics2>
{
    HRESULT __stdcall TryMoveFocus(Windows::UI::Xaml::Input::FocusNavigationDirection focusNavigationDirection, bool* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().TryMoveFocus(*reinterpret_cast<Windows::UI::Xaml::Input::FocusNavigationDirection const*>(&focusNavigationDirection)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IFocusManagerStatics3> : produce_base<D, Windows::UI::Xaml::Input::IFocusManagerStatics3>
{
    HRESULT __stdcall FindNextFocusableElement(Windows::UI::Xaml::Input::FocusNavigationDirection focusNavigationDirection, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::UIElement>(this->shim().FindNextFocusableElement(*reinterpret_cast<Windows::UI::Xaml::Input::FocusNavigationDirection const*>(&focusNavigationDirection)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindNextFocusableElementWithHint(Windows::UI::Xaml::Input::FocusNavigationDirection focusNavigationDirection, Windows::Foundation::Rect hintRect, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::UIElement>(this->shim().FindNextFocusableElement(*reinterpret_cast<Windows::UI::Xaml::Input::FocusNavigationDirection const*>(&focusNavigationDirection), *reinterpret_cast<Windows::Foundation::Rect const*>(&hintRect)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IFocusManagerStatics4> : produce_base<D, Windows::UI::Xaml::Input::IFocusManagerStatics4>
{
    HRESULT __stdcall TryMoveFocusWithOptions(Windows::UI::Xaml::Input::FocusNavigationDirection focusNavigationDirection, void* focusNavigationOptions, bool* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().TryMoveFocus(*reinterpret_cast<Windows::UI::Xaml::Input::FocusNavigationDirection const*>(&focusNavigationDirection), *reinterpret_cast<Windows::UI::Xaml::Input::FindNextElementOptions const*>(&focusNavigationOptions)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindNextElement(Windows::UI::Xaml::Input::FocusNavigationDirection focusNavigationDirection, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::DependencyObject>(this->shim().FindNextElement(*reinterpret_cast<Windows::UI::Xaml::Input::FocusNavigationDirection const*>(&focusNavigationDirection)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindFirstFocusableElement(void* searchScope, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::DependencyObject>(this->shim().FindFirstFocusableElement(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&searchScope)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindLastFocusableElement(void* searchScope, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::DependencyObject>(this->shim().FindLastFocusableElement(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&searchScope)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindNextElementWithOptions(Windows::UI::Xaml::Input::FocusNavigationDirection focusNavigationDirection, void* focusNavigationOptions, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::DependencyObject>(this->shim().FindNextElement(*reinterpret_cast<Windows::UI::Xaml::Input::FocusNavigationDirection const*>(&focusNavigationDirection), *reinterpret_cast<Windows::UI::Xaml::Input::FindNextElementOptions const*>(&focusNavigationOptions)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IFocusManagerStatics5> : produce_base<D, Windows::UI::Xaml::Input::IFocusManagerStatics5>
{
    HRESULT __stdcall TryFocusAsync(void* element, Windows::UI::Xaml::FocusState value, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Input::FocusMovementResult>>(this->shim().TryFocusAsync(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<Windows::UI::Xaml::FocusState const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryMoveFocusAsync(Windows::UI::Xaml::Input::FocusNavigationDirection focusNavigationDirection, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Input::FocusMovementResult>>(this->shim().TryMoveFocusAsync(*reinterpret_cast<Windows::UI::Xaml::Input::FocusNavigationDirection const*>(&focusNavigationDirection)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryMoveFocusWithOptionsAsync(Windows::UI::Xaml::Input::FocusNavigationDirection focusNavigationDirection, void* focusNavigationOptions, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Input::FocusMovementResult>>(this->shim().TryMoveFocusAsync(*reinterpret_cast<Windows::UI::Xaml::Input::FocusNavigationDirection const*>(&focusNavigationDirection), *reinterpret_cast<Windows::UI::Xaml::Input::FindNextElementOptions const*>(&focusNavigationOptions)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IFocusMovementResult> : produce_base<D, Windows::UI::Xaml::Input::IFocusMovementResult>
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
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IGettingFocusEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IGettingFocusEventArgs>
{
    HRESULT __stdcall get_OldFocusedElement(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyObject>(this->shim().OldFocusedElement());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NewFocusedElement(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyObject>(this->shim().NewFocusedElement());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_NewFocusedElement(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NewFocusedElement(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FocusState(Windows::UI::Xaml::FocusState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::FocusState>(this->shim().FocusState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Direction(Windows::UI::Xaml::Input::FocusNavigationDirection* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Input::FocusNavigationDirection>(this->shim().Direction());
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

    HRESULT __stdcall get_InputDevice(Windows::UI::Xaml::Input::FocusInputDeviceKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Input::FocusInputDeviceKind>(this->shim().InputDevice());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

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
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IGettingFocusEventArgs2> : produce_base<D, Windows::UI::Xaml::Input::IGettingFocusEventArgs2>
{
    HRESULT __stdcall TryCancel(bool* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().TryCancel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TrySetNewFocusedElement(void* element, bool* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().TrySetNewFocusedElement(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IHoldingRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IHoldingRoutedEventArgs>
{
    HRESULT __stdcall get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Input::PointerDeviceType>(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HoldingState(Windows::UI::Input::HoldingState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::HoldingState>(this->shim().HoldingState());
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
struct produce<D, Windows::UI::Xaml::Input::IInertiaExpansionBehavior> : produce_base<D, Windows::UI::Xaml::Input::IInertiaExpansionBehavior>
{
    HRESULT __stdcall get_DesiredDeceleration(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().DesiredDeceleration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredDeceleration(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredDeceleration(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredExpansion(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().DesiredExpansion());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredExpansion(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredExpansion(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IInertiaRotationBehavior> : produce_base<D, Windows::UI::Xaml::Input::IInertiaRotationBehavior>
{
    HRESULT __stdcall get_DesiredDeceleration(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().DesiredDeceleration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredDeceleration(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredDeceleration(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredRotation(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().DesiredRotation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredRotation(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredRotation(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IInertiaTranslationBehavior> : produce_base<D, Windows::UI::Xaml::Input::IInertiaTranslationBehavior>
{
    HRESULT __stdcall get_DesiredDeceleration(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().DesiredDeceleration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredDeceleration(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredDeceleration(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredDisplacement(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().DesiredDisplacement());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredDisplacement(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredDisplacement(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IInputScope> : produce_base<D, Windows::UI::Xaml::Input::IInputScope>
{
    HRESULT __stdcall get_Names(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Input::InputScopeName>>(this->shim().Names());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IInputScopeName> : produce_base<D, Windows::UI::Xaml::Input::IInputScopeName>
{
    HRESULT __stdcall get_NameValue(Windows::UI::Xaml::Input::InputScopeNameValue* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Input::InputScopeNameValue>(this->shim().NameValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_NameValue(Windows::UI::Xaml::Input::InputScopeNameValue value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NameValue(*reinterpret_cast<Windows::UI::Xaml::Input::InputScopeNameValue const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IInputScopeNameFactory> : produce_base<D, Windows::UI::Xaml::Input::IInputScopeNameFactory>
{
    HRESULT __stdcall CreateInstance(Windows::UI::Xaml::Input::InputScopeNameValue nameValue, void** instance) noexcept final
    {
        try
        {
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::UI::Xaml::Input::InputScopeName>(this->shim().CreateInstance(*reinterpret_cast<Windows::UI::Xaml::Input::InputScopeNameValue const*>(&nameValue)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IKeyRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IKeyRoutedEventArgs>
{
    HRESULT __stdcall get_Key(Windows::System::VirtualKey* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::VirtualKey>(this->shim().Key());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_KeyStatus(struct struct_Windows_UI_Core_CorePhysicalKeyStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Core::CorePhysicalKeyStatus>(this->shim().KeyStatus());
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
struct produce<D, Windows::UI::Xaml::Input::IKeyRoutedEventArgs2> : produce_base<D, Windows::UI::Xaml::Input::IKeyRoutedEventArgs2>
{
    HRESULT __stdcall get_OriginalKey(Windows::System::VirtualKey* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::VirtualKey>(this->shim().OriginalKey());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IKeyRoutedEventArgs3> : produce_base<D, Windows::UI::Xaml::Input::IKeyRoutedEventArgs3>
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
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IKeyboardAccelerator> : produce_base<D, Windows::UI::Xaml::Input::IKeyboardAccelerator>
{
    HRESULT __stdcall get_Key(Windows::System::VirtualKey* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::VirtualKey>(this->shim().Key());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Key(Windows::System::VirtualKey value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Key(*reinterpret_cast<Windows::System::VirtualKey const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Modifiers(Windows::System::VirtualKeyModifiers* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::VirtualKeyModifiers>(this->shim().Modifiers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Modifiers(Windows::System::VirtualKeyModifiers value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Modifiers(*reinterpret_cast<Windows::System::VirtualKeyModifiers const*>(&value));
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

    HRESULT __stdcall get_ScopeOwner(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyObject>(this->shim().ScopeOwner());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ScopeOwner(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScopeOwner(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Invoked(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Invoked(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Input::KeyboardAccelerator, Windows::UI::Xaml::Input::KeyboardAcceleratorInvokedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Invoked(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Invoked(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IKeyboardAcceleratorFactory> : produce_base<D, Windows::UI::Xaml::Input::IKeyboardAcceleratorFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Input::KeyboardAccelerator>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
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
struct produce<D, Windows::UI::Xaml::Input::IKeyboardAcceleratorInvokedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IKeyboardAcceleratorInvokedEventArgs>
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

    HRESULT __stdcall get_Element(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyObject>(this->shim().Element());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IKeyboardAcceleratorInvokedEventArgs2> : produce_base<D, Windows::UI::Xaml::Input::IKeyboardAcceleratorInvokedEventArgs2>
{
    HRESULT __stdcall get_KeyboardAccelerator(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Input::KeyboardAccelerator>(this->shim().KeyboardAccelerator());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IKeyboardAcceleratorStatics> : produce_base<D, Windows::UI::Xaml::Input::IKeyboardAcceleratorStatics>
{
    HRESULT __stdcall get_KeyProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().KeyProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ModifiersProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ModifiersProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsEnabledProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IsEnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ScopeOwnerProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ScopeOwnerProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::ILosingFocusEventArgs> : produce_base<D, Windows::UI::Xaml::Input::ILosingFocusEventArgs>
{
    HRESULT __stdcall get_OldFocusedElement(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyObject>(this->shim().OldFocusedElement());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NewFocusedElement(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyObject>(this->shim().NewFocusedElement());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_NewFocusedElement(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NewFocusedElement(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FocusState(Windows::UI::Xaml::FocusState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::FocusState>(this->shim().FocusState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Direction(Windows::UI::Xaml::Input::FocusNavigationDirection* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Input::FocusNavigationDirection>(this->shim().Direction());
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

    HRESULT __stdcall get_InputDevice(Windows::UI::Xaml::Input::FocusInputDeviceKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Input::FocusInputDeviceKind>(this->shim().InputDevice());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

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
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::ILosingFocusEventArgs2> : produce_base<D, Windows::UI::Xaml::Input::ILosingFocusEventArgs2>
{
    HRESULT __stdcall TryCancel(bool* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().TryCancel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TrySetNewFocusedElement(void* element, bool* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().TrySetNewFocusedElement(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs>
{
    HRESULT __stdcall get_Container(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::UIElement>(this->shim().Container());
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

    HRESULT __stdcall get_IsInertial(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsInertial());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Cumulative(struct struct_Windows_UI_Input_ManipulationDelta* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::ManipulationDelta>(this->shim().Cumulative());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Velocities(struct struct_Windows_UI_Input_ManipulationVelocities* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::ManipulationVelocities>(this->shim().Velocities());
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

    HRESULT __stdcall get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Input::PointerDeviceType>(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs>
{
    HRESULT __stdcall get_Container(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::UIElement>(this->shim().Container());
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

    HRESULT __stdcall get_IsInertial(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsInertial());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Delta(struct struct_Windows_UI_Input_ManipulationDelta* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::ManipulationDelta>(this->shim().Delta());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Cumulative(struct struct_Windows_UI_Input_ManipulationDelta* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::ManipulationDelta>(this->shim().Cumulative());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Velocities(struct struct_Windows_UI_Input_ManipulationVelocities* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::ManipulationVelocities>(this->shim().Velocities());
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

    HRESULT __stdcall get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Input::PointerDeviceType>(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

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
struct produce<D, Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs>
{
    HRESULT __stdcall get_Container(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::UIElement>(this->shim().Container());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ExpansionBehavior(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Input::InertiaExpansionBehavior>(this->shim().ExpansionBehavior());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ExpansionBehavior(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExpansionBehavior(*reinterpret_cast<Windows::UI::Xaml::Input::InertiaExpansionBehavior const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RotationBehavior(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Input::InertiaRotationBehavior>(this->shim().RotationBehavior());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RotationBehavior(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationBehavior(*reinterpret_cast<Windows::UI::Xaml::Input::InertiaRotationBehavior const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TranslationBehavior(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Input::InertiaTranslationBehavior>(this->shim().TranslationBehavior());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TranslationBehavior(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TranslationBehavior(*reinterpret_cast<Windows::UI::Xaml::Input::InertiaTranslationBehavior const*>(&value));
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

    HRESULT __stdcall get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Input::PointerDeviceType>(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Delta(struct struct_Windows_UI_Input_ManipulationDelta* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::ManipulationDelta>(this->shim().Delta());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Cumulative(struct struct_Windows_UI_Input_ManipulationDelta* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::ManipulationDelta>(this->shim().Cumulative());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Velocities(struct struct_Windows_UI_Input_ManipulationVelocities* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::ManipulationVelocities>(this->shim().Velocities());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IManipulationPivot> : produce_base<D, Windows::UI::Xaml::Input::IManipulationPivot>
{
    HRESULT __stdcall get_Center(Windows::Foundation::Point* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().Center());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Center(Windows::Foundation::Point value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Center(*reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Radius(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Radius());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Radius(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Radius(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IManipulationPivotFactory> : produce_base<D, Windows::UI::Xaml::Input::IManipulationPivotFactory>
{
    HRESULT __stdcall CreateInstanceWithCenterAndRadius(Windows::Foundation::Point center, double radius, void** instance) noexcept final
    {
        try
        {
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::UI::Xaml::Input::ManipulationPivot>(this->shim().CreateInstanceWithCenterAndRadius(*reinterpret_cast<Windows::Foundation::Point const*>(&center), radius));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs>
{
    HRESULT __stdcall get_Container(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::UIElement>(this->shim().Container());
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

    HRESULT __stdcall get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Input::PointerDeviceType>(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Cumulative(struct struct_Windows_UI_Input_ManipulationDelta* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::ManipulationDelta>(this->shim().Cumulative());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

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
struct produce<D, Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgsFactory> : produce_base<D, Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgsFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
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
struct produce<D, Windows::UI::Xaml::Input::IManipulationStartingRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IManipulationStartingRoutedEventArgs>
{
    HRESULT __stdcall get_Mode(Windows::UI::Xaml::Input::ManipulationModes* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Input::ManipulationModes>(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Mode(Windows::UI::Xaml::Input::ManipulationModes value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mode(*reinterpret_cast<Windows::UI::Xaml::Input::ManipulationModes const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Container(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::UIElement>(this->shim().Container());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Container(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Container(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Pivot(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Input::ManipulationPivot>(this->shim().Pivot());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Pivot(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Pivot(*reinterpret_cast<Windows::UI::Xaml::Input::ManipulationPivot const*>(&value));
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
struct produce<D, Windows::UI::Xaml::Input::INoFocusCandidateFoundEventArgs> : produce_base<D, Windows::UI::Xaml::Input::INoFocusCandidateFoundEventArgs>
{
    HRESULT __stdcall get_Direction(Windows::UI::Xaml::Input::FocusNavigationDirection* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Input::FocusNavigationDirection>(this->shim().Direction());
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

    HRESULT __stdcall get_InputDevice(Windows::UI::Xaml::Input::FocusInputDeviceKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Input::FocusInputDeviceKind>(this->shim().InputDevice());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IPointer> : produce_base<D, Windows::UI::Xaml::Input::IPointer>
{
    HRESULT __stdcall get_PointerId(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().PointerId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Input::PointerDeviceType>(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsInContact(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsInContact());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsInRange(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsInRange());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IPointerRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IPointerRoutedEventArgs>
{
    HRESULT __stdcall get_Pointer(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Input::Pointer>(this->shim().Pointer());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_KeyModifiers(Windows::System::VirtualKeyModifiers* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::VirtualKeyModifiers>(this->shim().KeyModifiers());
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

    HRESULT __stdcall GetCurrentPoint(void* relativeTo, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Input::PointerPoint>(this->shim().GetCurrentPoint(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&relativeTo)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetIntermediatePoints(void* relativeTo, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint>>(this->shim().GetIntermediatePoints(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&relativeTo)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IPointerRoutedEventArgs2> : produce_base<D, Windows::UI::Xaml::Input::IPointerRoutedEventArgs2>
{
    HRESULT __stdcall get_IsGenerated(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsGenerated());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IProcessKeyboardAcceleratorEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IProcessKeyboardAcceleratorEventArgs>
{
    HRESULT __stdcall get_Key(Windows::System::VirtualKey* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::VirtualKey>(this->shim().Key());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Modifiers(Windows::System::VirtualKeyModifiers* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::VirtualKeyModifiers>(this->shim().Modifiers());
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
struct produce<D, Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs>
{
    HRESULT __stdcall get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Input::PointerDeviceType>(this->shim().PointerDeviceType());
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
struct produce<D, Windows::UI::Xaml::Input::ITappedRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::ITappedRoutedEventArgs>
{
    HRESULT __stdcall get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Input::PointerDeviceType>(this->shim().PointerDeviceType());
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

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Input {

inline AccessKeyDisplayDismissedEventArgs::AccessKeyDisplayDismissedEventArgs() :
    AccessKeyDisplayDismissedEventArgs(get_activation_factory<AccessKeyDisplayDismissedEventArgs>().ActivateInstance<AccessKeyDisplayDismissedEventArgs>())
{}

inline AccessKeyDisplayRequestedEventArgs::AccessKeyDisplayRequestedEventArgs() :
    AccessKeyDisplayRequestedEventArgs(get_activation_factory<AccessKeyDisplayRequestedEventArgs>().ActivateInstance<AccessKeyDisplayRequestedEventArgs>())
{}

inline AccessKeyInvokedEventArgs::AccessKeyInvokedEventArgs() :
    AccessKeyInvokedEventArgs(get_activation_factory<AccessKeyInvokedEventArgs>().ActivateInstance<AccessKeyInvokedEventArgs>())
{}

inline bool AccessKeyManager::IsDisplayModeEnabled()
{
    return get_activation_factory<AccessKeyManager, Windows::UI::Xaml::Input::IAccessKeyManagerStatics>().IsDisplayModeEnabled();
}

inline event_token AccessKeyManager::IsDisplayModeEnabledChanged(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Foundation::IInspectable> const& value)
{
    return get_activation_factory<AccessKeyManager, Windows::UI::Xaml::Input::IAccessKeyManagerStatics>().IsDisplayModeEnabledChanged(value);
}

inline factory_event_revoker<Windows::UI::Xaml::Input::IAccessKeyManagerStatics> AccessKeyManager::IsDisplayModeEnabledChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Foundation::IInspectable> const& value)
{
    auto factory = get_activation_factory<AccessKeyManager, Windows::UI::Xaml::Input::IAccessKeyManagerStatics>();
    return { factory, &impl::abi_t<Windows::UI::Xaml::Input::IAccessKeyManagerStatics>::remove_IsDisplayModeEnabledChanged, factory.IsDisplayModeEnabledChanged(value) };
}

inline void AccessKeyManager::IsDisplayModeEnabledChanged(event_token const& token)
{
    get_activation_factory<AccessKeyManager, Windows::UI::Xaml::Input::IAccessKeyManagerStatics>().IsDisplayModeEnabledChanged(token);
}

inline void AccessKeyManager::ExitDisplayMode()
{
    get_activation_factory<AccessKeyManager, Windows::UI::Xaml::Input::IAccessKeyManagerStatics>().ExitDisplayMode();
}

inline bool AccessKeyManager::AreKeyTipsEnabled()
{
    return get_activation_factory<AccessKeyManager, Windows::UI::Xaml::Input::IAccessKeyManagerStatics2>().AreKeyTipsEnabled();
}

inline void AccessKeyManager::AreKeyTipsEnabled(bool value)
{
    get_activation_factory<AccessKeyManager, Windows::UI::Xaml::Input::IAccessKeyManagerStatics2>().AreKeyTipsEnabled(value);
}

inline ContextRequestedEventArgs::ContextRequestedEventArgs() :
    ContextRequestedEventArgs(get_activation_factory<ContextRequestedEventArgs>().ActivateInstance<ContextRequestedEventArgs>())
{}

inline DoubleTappedRoutedEventArgs::DoubleTappedRoutedEventArgs() :
    DoubleTappedRoutedEventArgs(get_activation_factory<DoubleTappedRoutedEventArgs>().ActivateInstance<DoubleTappedRoutedEventArgs>())
{}

inline FindNextElementOptions::FindNextElementOptions() :
    FindNextElementOptions(get_activation_factory<FindNextElementOptions>().ActivateInstance<FindNextElementOptions>())
{}

inline Windows::Foundation::IInspectable FocusManager::GetFocusedElement()
{
    return get_activation_factory<FocusManager, Windows::UI::Xaml::Input::IFocusManagerStatics>().GetFocusedElement();
}

inline bool FocusManager::TryMoveFocus(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection)
{
    return get_activation_factory<FocusManager, Windows::UI::Xaml::Input::IFocusManagerStatics2>().TryMoveFocus(focusNavigationDirection);
}

inline Windows::UI::Xaml::UIElement FocusManager::FindNextFocusableElement(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection)
{
    return get_activation_factory<FocusManager, Windows::UI::Xaml::Input::IFocusManagerStatics3>().FindNextFocusableElement(focusNavigationDirection);
}

inline Windows::UI::Xaml::UIElement FocusManager::FindNextFocusableElement(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection, Windows::Foundation::Rect const& hintRect)
{
    return get_activation_factory<FocusManager, Windows::UI::Xaml::Input::IFocusManagerStatics3>().FindNextFocusableElement(focusNavigationDirection, hintRect);
}

inline bool FocusManager::TryMoveFocus(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection, Windows::UI::Xaml::Input::FindNextElementOptions const& focusNavigationOptions)
{
    return get_activation_factory<FocusManager, Windows::UI::Xaml::Input::IFocusManagerStatics4>().TryMoveFocus(focusNavigationDirection, focusNavigationOptions);
}

inline Windows::UI::Xaml::DependencyObject FocusManager::FindNextElement(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection)
{
    return get_activation_factory<FocusManager, Windows::UI::Xaml::Input::IFocusManagerStatics4>().FindNextElement(focusNavigationDirection);
}

inline Windows::UI::Xaml::DependencyObject FocusManager::FindFirstFocusableElement(Windows::UI::Xaml::DependencyObject const& searchScope)
{
    return get_activation_factory<FocusManager, Windows::UI::Xaml::Input::IFocusManagerStatics4>().FindFirstFocusableElement(searchScope);
}

inline Windows::UI::Xaml::DependencyObject FocusManager::FindLastFocusableElement(Windows::UI::Xaml::DependencyObject const& searchScope)
{
    return get_activation_factory<FocusManager, Windows::UI::Xaml::Input::IFocusManagerStatics4>().FindLastFocusableElement(searchScope);
}

inline Windows::UI::Xaml::DependencyObject FocusManager::FindNextElement(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection, Windows::UI::Xaml::Input::FindNextElementOptions const& focusNavigationOptions)
{
    return get_activation_factory<FocusManager, Windows::UI::Xaml::Input::IFocusManagerStatics4>().FindNextElement(focusNavigationDirection, focusNavigationOptions);
}

inline Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Input::FocusMovementResult> FocusManager::TryFocusAsync(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FocusState const& value)
{
    return get_activation_factory<FocusManager, Windows::UI::Xaml::Input::IFocusManagerStatics5>().TryFocusAsync(element, value);
}

inline Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Input::FocusMovementResult> FocusManager::TryMoveFocusAsync(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection)
{
    return get_activation_factory<FocusManager, Windows::UI::Xaml::Input::IFocusManagerStatics5>().TryMoveFocusAsync(focusNavigationDirection);
}

inline Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Input::FocusMovementResult> FocusManager::TryMoveFocusAsync(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection, Windows::UI::Xaml::Input::FindNextElementOptions const& focusNavigationOptions)
{
    return get_activation_factory<FocusManager, Windows::UI::Xaml::Input::IFocusManagerStatics5>().TryMoveFocusAsync(focusNavigationDirection, focusNavigationOptions);
}

inline HoldingRoutedEventArgs::HoldingRoutedEventArgs() :
    HoldingRoutedEventArgs(get_activation_factory<HoldingRoutedEventArgs>().ActivateInstance<HoldingRoutedEventArgs>())
{}

inline InputScope::InputScope() :
    InputScope(get_activation_factory<InputScope>().ActivateInstance<InputScope>())
{}

inline InputScopeName::InputScopeName() :
    InputScopeName(get_activation_factory<InputScopeName>().ActivateInstance<InputScopeName>())
{}

inline InputScopeName::InputScopeName(Windows::UI::Xaml::Input::InputScopeNameValue const& nameValue) :
    InputScopeName(get_activation_factory<InputScopeName, Windows::UI::Xaml::Input::IInputScopeNameFactory>().CreateInstance(nameValue))
{}

inline KeyboardAccelerator::KeyboardAccelerator()
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<KeyboardAccelerator, Windows::UI::Xaml::Input::IKeyboardAcceleratorFactory>().CreateInstance(outer, inner);
}

inline Windows::UI::Xaml::DependencyProperty KeyboardAccelerator::KeyProperty()
{
    return get_activation_factory<KeyboardAccelerator, Windows::UI::Xaml::Input::IKeyboardAcceleratorStatics>().KeyProperty();
}

inline Windows::UI::Xaml::DependencyProperty KeyboardAccelerator::ModifiersProperty()
{
    return get_activation_factory<KeyboardAccelerator, Windows::UI::Xaml::Input::IKeyboardAcceleratorStatics>().ModifiersProperty();
}

inline Windows::UI::Xaml::DependencyProperty KeyboardAccelerator::IsEnabledProperty()
{
    return get_activation_factory<KeyboardAccelerator, Windows::UI::Xaml::Input::IKeyboardAcceleratorStatics>().IsEnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty KeyboardAccelerator::ScopeOwnerProperty()
{
    return get_activation_factory<KeyboardAccelerator, Windows::UI::Xaml::Input::IKeyboardAcceleratorStatics>().ScopeOwnerProperty();
}

inline ManipulationCompletedRoutedEventArgs::ManipulationCompletedRoutedEventArgs() :
    ManipulationCompletedRoutedEventArgs(get_activation_factory<ManipulationCompletedRoutedEventArgs>().ActivateInstance<ManipulationCompletedRoutedEventArgs>())
{}

inline ManipulationDeltaRoutedEventArgs::ManipulationDeltaRoutedEventArgs() :
    ManipulationDeltaRoutedEventArgs(get_activation_factory<ManipulationDeltaRoutedEventArgs>().ActivateInstance<ManipulationDeltaRoutedEventArgs>())
{}

inline ManipulationInertiaStartingRoutedEventArgs::ManipulationInertiaStartingRoutedEventArgs() :
    ManipulationInertiaStartingRoutedEventArgs(get_activation_factory<ManipulationInertiaStartingRoutedEventArgs>().ActivateInstance<ManipulationInertiaStartingRoutedEventArgs>())
{}

inline ManipulationPivot::ManipulationPivot() :
    ManipulationPivot(get_activation_factory<ManipulationPivot>().ActivateInstance<ManipulationPivot>())
{}

inline ManipulationPivot::ManipulationPivot(Windows::Foundation::Point const& center, double radius) :
    ManipulationPivot(get_activation_factory<ManipulationPivot, Windows::UI::Xaml::Input::IManipulationPivotFactory>().CreateInstanceWithCenterAndRadius(center, radius))
{}

inline ManipulationStartedRoutedEventArgs::ManipulationStartedRoutedEventArgs()
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<ManipulationStartedRoutedEventArgs, Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgsFactory>().CreateInstance(outer, inner);
}

inline ManipulationStartingRoutedEventArgs::ManipulationStartingRoutedEventArgs() :
    ManipulationStartingRoutedEventArgs(get_activation_factory<ManipulationStartingRoutedEventArgs>().ActivateInstance<ManipulationStartingRoutedEventArgs>())
{}

inline RightTappedRoutedEventArgs::RightTappedRoutedEventArgs() :
    RightTappedRoutedEventArgs(get_activation_factory<RightTappedRoutedEventArgs>().ActivateInstance<RightTappedRoutedEventArgs>())
{}

inline TappedRoutedEventArgs::TappedRoutedEventArgs() :
    TappedRoutedEventArgs(get_activation_factory<TappedRoutedEventArgs>().ActivateInstance<TappedRoutedEventArgs>())
{}

template <typename L> DoubleTappedEventHandler::DoubleTappedEventHandler(L handler) :
    DoubleTappedEventHandler(impl::make_delegate<DoubleTappedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> DoubleTappedEventHandler::DoubleTappedEventHandler(F* handler) :
    DoubleTappedEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> DoubleTappedEventHandler::DoubleTappedEventHandler(O* object, M method) :
    DoubleTappedEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void DoubleTappedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<DoubleTappedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> HoldingEventHandler::HoldingEventHandler(L handler) :
    HoldingEventHandler(impl::make_delegate<HoldingEventHandler>(std::forward<L>(handler)))
{}

template <typename F> HoldingEventHandler::HoldingEventHandler(F* handler) :
    HoldingEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> HoldingEventHandler::HoldingEventHandler(O* object, M method) :
    HoldingEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void HoldingEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Input::HoldingRoutedEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<HoldingEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> KeyEventHandler::KeyEventHandler(L handler) :
    KeyEventHandler(impl::make_delegate<KeyEventHandler>(std::forward<L>(handler)))
{}

template <typename F> KeyEventHandler::KeyEventHandler(F* handler) :
    KeyEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> KeyEventHandler::KeyEventHandler(O* object, M method) :
    KeyEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void KeyEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Input::KeyRoutedEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<KeyEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> ManipulationCompletedEventHandler::ManipulationCompletedEventHandler(L handler) :
    ManipulationCompletedEventHandler(impl::make_delegate<ManipulationCompletedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> ManipulationCompletedEventHandler::ManipulationCompletedEventHandler(F* handler) :
    ManipulationCompletedEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> ManipulationCompletedEventHandler::ManipulationCompletedEventHandler(O* object, M method) :
    ManipulationCompletedEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void ManipulationCompletedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<ManipulationCompletedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> ManipulationDeltaEventHandler::ManipulationDeltaEventHandler(L handler) :
    ManipulationDeltaEventHandler(impl::make_delegate<ManipulationDeltaEventHandler>(std::forward<L>(handler)))
{}

template <typename F> ManipulationDeltaEventHandler::ManipulationDeltaEventHandler(F* handler) :
    ManipulationDeltaEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> ManipulationDeltaEventHandler::ManipulationDeltaEventHandler(O* object, M method) :
    ManipulationDeltaEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void ManipulationDeltaEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<ManipulationDeltaEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> ManipulationInertiaStartingEventHandler::ManipulationInertiaStartingEventHandler(L handler) :
    ManipulationInertiaStartingEventHandler(impl::make_delegate<ManipulationInertiaStartingEventHandler>(std::forward<L>(handler)))
{}

template <typename F> ManipulationInertiaStartingEventHandler::ManipulationInertiaStartingEventHandler(F* handler) :
    ManipulationInertiaStartingEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> ManipulationInertiaStartingEventHandler::ManipulationInertiaStartingEventHandler(O* object, M method) :
    ManipulationInertiaStartingEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void ManipulationInertiaStartingEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<ManipulationInertiaStartingEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> ManipulationStartedEventHandler::ManipulationStartedEventHandler(L handler) :
    ManipulationStartedEventHandler(impl::make_delegate<ManipulationStartedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> ManipulationStartedEventHandler::ManipulationStartedEventHandler(F* handler) :
    ManipulationStartedEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> ManipulationStartedEventHandler::ManipulationStartedEventHandler(O* object, M method) :
    ManipulationStartedEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void ManipulationStartedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<ManipulationStartedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> ManipulationStartingEventHandler::ManipulationStartingEventHandler(L handler) :
    ManipulationStartingEventHandler(impl::make_delegate<ManipulationStartingEventHandler>(std::forward<L>(handler)))
{}

template <typename F> ManipulationStartingEventHandler::ManipulationStartingEventHandler(F* handler) :
    ManipulationStartingEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> ManipulationStartingEventHandler::ManipulationStartingEventHandler(O* object, M method) :
    ManipulationStartingEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void ManipulationStartingEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<ManipulationStartingEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> PointerEventHandler::PointerEventHandler(L handler) :
    PointerEventHandler(impl::make_delegate<PointerEventHandler>(std::forward<L>(handler)))
{}

template <typename F> PointerEventHandler::PointerEventHandler(F* handler) :
    PointerEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> PointerEventHandler::PointerEventHandler(O* object, M method) :
    PointerEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void PointerEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<PointerEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> RightTappedEventHandler::RightTappedEventHandler(L handler) :
    RightTappedEventHandler(impl::make_delegate<RightTappedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> RightTappedEventHandler::RightTappedEventHandler(F* handler) :
    RightTappedEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> RightTappedEventHandler::RightTappedEventHandler(O* object, M method) :
    RightTappedEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void RightTappedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Input::RightTappedRoutedEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<RightTappedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> TappedEventHandler::TappedEventHandler(L handler) :
    TappedEventHandler(impl::make_delegate<TappedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> TappedEventHandler::TappedEventHandler(F* handler) :
    TappedEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> TappedEventHandler::TappedEventHandler(O* object, M method) :
    TappedEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void TappedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<TappedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename D, typename... Interfaces>
struct KeyboardAcceleratorT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Input::IKeyboardAccelerator, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    using composable = KeyboardAccelerator;

protected:
    KeyboardAcceleratorT()
    {
        get_activation_factory<Windows::UI::Xaml::Input::KeyboardAccelerator, Windows::UI::Xaml::Input::IKeyboardAcceleratorFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct ManipulationStartedRoutedEventArgsT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    using composable = ManipulationStartedRoutedEventArgs;

protected:
    ManipulationStartedRoutedEventArgsT()
    {
        get_activation_factory<Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs, Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgsFactory>().CreateInstance(*this, this->m_inner);
    }
};

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IAccessKeyManager> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IAccessKeyManager> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IAccessKeyManagerStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IAccessKeyManagerStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IAccessKeyManagerStatics2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IAccessKeyManagerStatics2> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::ICharacterReceivedRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::ICharacterReceivedRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::ICommand> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::ICommand> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IContextRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IContextRequestedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IFindNextElementOptions> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IFindNextElementOptions> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IFocusManager> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IFocusManager> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IFocusManagerStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IFocusManagerStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IFocusManagerStatics2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IFocusManagerStatics2> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IFocusManagerStatics3> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IFocusManagerStatics3> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IFocusManagerStatics4> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IFocusManagerStatics4> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IFocusManagerStatics5> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IFocusManagerStatics5> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IFocusMovementResult> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IFocusMovementResult> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IGettingFocusEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IGettingFocusEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IGettingFocusEventArgs2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IGettingFocusEventArgs2> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IHoldingRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IHoldingRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IInertiaExpansionBehavior> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IInertiaExpansionBehavior> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IInertiaRotationBehavior> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IInertiaRotationBehavior> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IInertiaTranslationBehavior> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IInertiaTranslationBehavior> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IInputScope> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IInputScope> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IInputScopeName> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IInputScopeName> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IInputScopeNameFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IInputScopeNameFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IKeyRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IKeyRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IKeyRoutedEventArgs2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IKeyRoutedEventArgs2> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IKeyRoutedEventArgs3> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IKeyRoutedEventArgs3> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IKeyboardAccelerator> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IKeyboardAccelerator> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IKeyboardAcceleratorFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IKeyboardAcceleratorFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IKeyboardAcceleratorInvokedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IKeyboardAcceleratorInvokedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IKeyboardAcceleratorInvokedEventArgs2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IKeyboardAcceleratorInvokedEventArgs2> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IKeyboardAcceleratorStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IKeyboardAcceleratorStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::ILosingFocusEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::ILosingFocusEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::ILosingFocusEventArgs2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::ILosingFocusEventArgs2> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IManipulationPivot> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IManipulationPivot> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IManipulationPivotFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IManipulationPivotFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgsFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgsFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IManipulationStartingRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IManipulationStartingRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::INoFocusCandidateFoundEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::INoFocusCandidateFoundEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IPointer> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IPointer> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IPointerRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IPointerRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IPointerRoutedEventArgs2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IPointerRoutedEventArgs2> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IProcessKeyboardAcceleratorEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IProcessKeyboardAcceleratorEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::ITappedRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::ITappedRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::AccessKeyManager> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::AccessKeyManager> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::CharacterReceivedRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::CharacterReceivedRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::ContextRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::ContextRequestedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::FindNextElementOptions> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::FindNextElementOptions> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::FocusManager> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::FocusManager> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::FocusMovementResult> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::FocusMovementResult> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::GettingFocusEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::GettingFocusEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::HoldingRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::HoldingRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::InertiaExpansionBehavior> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::InertiaExpansionBehavior> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::InertiaRotationBehavior> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::InertiaRotationBehavior> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::InertiaTranslationBehavior> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::InertiaTranslationBehavior> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::InputScope> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::InputScope> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::InputScopeName> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::InputScopeName> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::KeyRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::KeyRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::KeyboardAccelerator> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::KeyboardAccelerator> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::KeyboardAcceleratorInvokedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::KeyboardAcceleratorInvokedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::LosingFocusEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::LosingFocusEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::ManipulationPivot> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::ManipulationPivot> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::Pointer> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::Pointer> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::RightTappedRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::RightTappedRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Input::TappedRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Input::TappedRoutedEventArgs> {};

}

WINRT_WARNING_POP
