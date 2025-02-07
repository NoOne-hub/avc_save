﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI {

struct Color;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml {

enum class ElementSoundMode;
enum class HorizontalAlignment;
enum class VerticalAlignment;
enum class Visibility;
struct DataTemplate;
struct DependencyObject;
struct DependencyProperty;
struct FrameworkElement;
struct GridLength;
struct RoutedEventHandler;
struct Thickness;
struct UIElement;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls {

enum class ClickMode;
enum class ColorPickerHsvChannel;
enum class ColorSpectrumComponents;
enum class ColorSpectrumShape;
enum class LightDismissOverlayMode;
enum class Orientation;
struct ColorChangedEventArgs;
struct Control;
struct SelectionChangedEventHandler;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Input {

struct ICommand;
struct ProcessKeyboardAcceleratorEventArgs;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Interop {

struct TypeName;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media {

struct Brush;
struct ImageSource;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media::Animation {

struct TransitionCollection;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls::Primitives {

enum class AnimationDirection : int32_t
{
    Left = 0,
    Top = 1,
    Right = 2,
    Bottom = 3,
};

enum class ComponentResourceLocation : int32_t
{
    Application = 0,
    Nested = 1,
};

enum class EdgeTransitionLocation : int32_t
{
    Left = 0,
    Top = 1,
    Right = 2,
    Bottom = 3,
};

enum class FlyoutPlacementMode : int32_t
{
    Top = 0,
    Bottom = 1,
    Left = 2,
    Right = 3,
    Full = 4,
};

enum class GeneratorDirection : int32_t
{
    Forward = 0,
    Backward = 1,
};

enum class GroupHeaderPlacement : int32_t
{
    Top = 0,
    Left = 1,
};

enum class ListViewItemPresenterCheckMode : int32_t
{
    Inline = 0,
    Overlay = 1,
};

enum class PlacementMode : int32_t
{
    Bottom = 2,
    Left = 9,
    Mouse = 7,
    Right = 4,
    Top = 10,
};

enum class ScrollEventType : int32_t
{
    SmallDecrement = 0,
    SmallIncrement = 1,
    LargeDecrement = 2,
    LargeIncrement = 3,
    ThumbPosition = 4,
    ThumbTrack = 5,
    First = 6,
    Last = 7,
    EndScroll = 8,
};

enum class ScrollingIndicatorMode : int32_t
{
    None = 0,
    TouchIndicator = 1,
    MouseIndicator = 2,
};

enum class SliderSnapsTo : int32_t
{
    StepValues = 0,
    Ticks = 1,
};

enum class SnapPointsAlignment : int32_t
{
    Near = 0,
    Center = 1,
    Far = 2,
};

enum class TickPlacement : int32_t
{
    None = 0,
    TopLeft = 1,
    BottomRight = 2,
    Outside = 3,
    Inline = 4,
};

struct IAppBarButtonTemplateSettings;
struct IAppBarTemplateSettings;
struct IAppBarToggleButtonTemplateSettings;
struct IButtonBase;
struct IButtonBaseFactory;
struct IButtonBaseStatics;
struct ICalendarPanel;
struct ICalendarViewTemplateSettings;
struct ICarouselPanel;
struct ICarouselPanelFactory;
struct IColorPickerSlider;
struct IColorPickerSliderFactory;
struct IColorPickerSliderStatics;
struct IColorSpectrum;
struct IColorSpectrumFactory;
struct IColorSpectrumStatics;
struct IComboBoxTemplateSettings;
struct IComboBoxTemplateSettings2;
struct ICommandBarTemplateSettings;
struct ICommandBarTemplateSettings2;
struct ICommandBarTemplateSettings3;
struct IDragCompletedEventArgs;
struct IDragCompletedEventArgsFactory;
struct IDragDeltaEventArgs;
struct IDragDeltaEventArgsFactory;
struct IDragStartedEventArgs;
struct IDragStartedEventArgsFactory;
struct IFlyoutBase;
struct IFlyoutBase2;
struct IFlyoutBase3;
struct IFlyoutBase4;
struct IFlyoutBaseClosingEventArgs;
struct IFlyoutBaseFactory;
struct IFlyoutBaseOverrides;
struct IFlyoutBaseOverrides4;
struct IFlyoutBaseStatics;
struct IFlyoutBaseStatics2;
struct IFlyoutBaseStatics3;
struct IGeneratorPositionHelper;
struct IGeneratorPositionHelperStatics;
struct IGridViewItemPresenter;
struct IGridViewItemPresenterFactory;
struct IGridViewItemPresenterStatics;
struct IGridViewItemTemplateSettings;
struct IItemsChangedEventArgs;
struct IJumpListItemBackgroundConverter;
struct IJumpListItemBackgroundConverterStatics;
struct IJumpListItemForegroundConverter;
struct IJumpListItemForegroundConverterStatics;
struct ILayoutInformation;
struct ILayoutInformationStatics;
struct ILayoutInformationStatics2;
struct IListViewItemPresenter;
struct IListViewItemPresenter2;
struct IListViewItemPresenter3;
struct IListViewItemPresenterFactory;
struct IListViewItemPresenterStatics;
struct IListViewItemPresenterStatics2;
struct IListViewItemPresenterStatics3;
struct IListViewItemTemplateSettings;
struct ILoopingSelector;
struct ILoopingSelectorItem;
struct ILoopingSelectorPanel;
struct ILoopingSelectorStatics;
struct IMenuFlyoutItemTemplateSettings;
struct IMenuFlyoutPresenterTemplateSettings;
struct IOrientedVirtualizingPanel;
struct IOrientedVirtualizingPanelFactory;
struct IPickerFlyoutBase;
struct IPickerFlyoutBaseFactory;
struct IPickerFlyoutBaseOverrides;
struct IPickerFlyoutBaseStatics;
struct IPivotHeaderItem;
struct IPivotHeaderItemFactory;
struct IPivotHeaderPanel;
struct IPivotPanel;
struct IPopup;
struct IPopup2;
struct IPopupStatics;
struct IPopupStatics2;
struct IProgressBarTemplateSettings;
struct IProgressRingTemplateSettings;
struct IRangeBase;
struct IRangeBaseFactory;
struct IRangeBaseOverrides;
struct IRangeBaseStatics;
struct IRangeBaseValueChangedEventArgs;
struct IRepeatButton;
struct IRepeatButtonStatics;
struct IScrollBar;
struct IScrollBarStatics;
struct IScrollEventArgs;
struct IScrollSnapPointsInfo;
struct ISelector;
struct ISelectorFactory;
struct ISelectorItem;
struct ISelectorItemFactory;
struct ISelectorItemStatics;
struct ISelectorStatics;
struct ISettingsFlyoutTemplateSettings;
struct ISplitViewTemplateSettings;
struct IThumb;
struct IThumbStatics;
struct ITickBar;
struct ITickBarStatics;
struct IToggleButton;
struct IToggleButtonFactory;
struct IToggleButtonOverrides;
struct IToggleButtonStatics;
struct IToggleSwitchTemplateSettings;
struct IToolTipTemplateSettings;
struct AppBarButtonTemplateSettings;
struct AppBarTemplateSettings;
struct AppBarToggleButtonTemplateSettings;
struct ButtonBase;
struct CalendarPanel;
struct CalendarViewTemplateSettings;
struct CarouselPanel;
struct ColorPickerSlider;
struct ColorSpectrum;
struct ComboBoxTemplateSettings;
struct CommandBarTemplateSettings;
struct DragCompletedEventArgs;
struct DragDeltaEventArgs;
struct DragStartedEventArgs;
struct FlyoutBase;
struct FlyoutBaseClosingEventArgs;
struct GeneratorPositionHelper;
struct GridViewItemPresenter;
struct GridViewItemTemplateSettings;
struct ItemsChangedEventArgs;
struct JumpListItemBackgroundConverter;
struct JumpListItemForegroundConverter;
struct LayoutInformation;
struct ListViewItemPresenter;
struct ListViewItemTemplateSettings;
struct LoopingSelector;
struct LoopingSelectorItem;
struct LoopingSelectorPanel;
struct MenuFlyoutItemTemplateSettings;
struct MenuFlyoutPresenterTemplateSettings;
struct OrientedVirtualizingPanel;
struct PickerFlyoutBase;
struct PivotHeaderItem;
struct PivotHeaderPanel;
struct PivotPanel;
struct Popup;
struct ProgressBarTemplateSettings;
struct ProgressRingTemplateSettings;
struct RangeBase;
struct RangeBaseValueChangedEventArgs;
struct RepeatButton;
struct ScrollBar;
struct ScrollEventArgs;
struct Selector;
struct SelectorItem;
struct SettingsFlyoutTemplateSettings;
struct SplitViewTemplateSettings;
struct Thumb;
struct TickBar;
struct ToggleButton;
struct ToggleSwitchTemplateSettings;
struct ToolTipTemplateSettings;
struct GeneratorPosition;
struct DragCompletedEventHandler;
struct DragDeltaEventHandler;
struct DragStartedEventHandler;
struct ItemsChangedEventHandler;
struct RangeBaseValueChangedEventHandler;
struct ScrollEventHandler;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IButtonBase>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IButtonBaseFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ICalendarPanel>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ICarouselPanel>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ICarouselPanelFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IColorPickerSlider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IColorSpectrum>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IColorSpectrumFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings3>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgsFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgsFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgsFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics3>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelperStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverterStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverterStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ILayoutInformation>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter3>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics3>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ILoopingSelector>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutItemTemplateSettings>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanelFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItemFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPivotPanel>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPopup>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPopup2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPopupStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPopupStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IRangeBase>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IRangeBaseFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IRepeatButton>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IRepeatButtonStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IScrollBar>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IScrollBarStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ISelector>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ISelectorFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ISelectorItem>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ISelectorItemFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ISelectorItemStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ISelectorStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IThumb>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IThumbStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ITickBar>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ITickBarStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IToggleButton>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IToggleButtonFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IToggleButtonStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::AppBarButtonTemplateSettings>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::AppBarTemplateSettings>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::AppBarToggleButtonTemplateSettings>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ButtonBase>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::CalendarPanel>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::CalendarViewTemplateSettings>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::CarouselPanel>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ColorPickerSlider>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ColorSpectrum>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ComboBoxTemplateSettings>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::CommandBarTemplateSettings>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::FlyoutBase>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::GeneratorPositionHelper>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::GridViewItemTemplateSettings>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::JumpListItemBackgroundConverter>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::JumpListItemForegroundConverter>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::LayoutInformation>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ListViewItemTemplateSettings>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::LoopingSelector>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::LoopingSelectorItem>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::LoopingSelectorPanel>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::MenuFlyoutItemTemplateSettings>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::MenuFlyoutPresenterTemplateSettings>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::OrientedVirtualizingPanel>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::PivotHeaderItem>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::PivotHeaderPanel>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::PivotPanel>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::Popup>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ProgressBarTemplateSettings>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ProgressRingTemplateSettings>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::RangeBase>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::RepeatButton>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ScrollBar>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::Selector>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::SelectorItem>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::SettingsFlyoutTemplateSettings>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::SplitViewTemplateSettings>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::Thumb>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::TickBar>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ToggleButton>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ToggleSwitchTemplateSettings>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ToolTipTemplateSettings>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::AnimationDirection>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::GeneratorDirection>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::GroupHeaderPlacement>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::PlacementMode>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ScrollEventType>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::SliderSnapsTo>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::TickPlacement>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::GeneratorPosition>{ using type = struct_category<int32_t,int32_t>; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler>{ using type = delegate_category; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IAppBarButtonTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IAppBarTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IAppBarToggleButtonTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IButtonBase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IButtonBase" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IButtonBaseFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IButtonBaseFactory" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IButtonBaseStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ICalendarPanel>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ICalendarPanel" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ICalendarViewTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ICarouselPanel>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ICarouselPanel" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ICarouselPanelFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ICarouselPanelFactory" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IColorPickerSlider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IColorPickerSlider" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IColorPickerSliderFactory" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IColorPickerSliderStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IColorSpectrum>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IColorSpectrum" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IColorSpectrumFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IColorSpectrumFactory" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IColorSpectrumStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IComboBoxTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IComboBoxTemplateSettings2" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ICommandBarTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ICommandBarTemplateSettings2" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings3>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ICommandBarTemplateSettings3" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IDragCompletedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgsFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IDragCompletedEventArgsFactory" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IDragDeltaEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgsFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IDragDeltaEventArgsFactory" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IDragStartedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgsFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IDragStartedEventArgsFactory" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBase" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBase2" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBase3" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBase4" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseClosingEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseFactory" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseOverrides" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseOverrides4" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseStatics2" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics3>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseStatics3" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IGeneratorPositionHelper" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelperStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IGeneratorPositionHelperStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IGridViewItemPresenter" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IGridViewItemPresenterFactory" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IGridViewItemPresenterStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IGridViewItemTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IItemsChangedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IJumpListItemBackgroundConverter" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverterStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IJumpListItemBackgroundConverterStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IJumpListItemForegroundConverter" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverterStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IJumpListItemForegroundConverterStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ILayoutInformation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ILayoutInformation" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ILayoutInformationStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ILayoutInformationStatics2" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IListViewItemPresenter" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IListViewItemPresenter2" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter3>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IListViewItemPresenter3" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IListViewItemPresenterFactory" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IListViewItemPresenterStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IListViewItemPresenterStatics2" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics3>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IListViewItemPresenterStatics3" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IListViewItemTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ILoopingSelector>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ILoopingSelector" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ILoopingSelectorItem" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ILoopingSelectorPanel" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ILoopingSelectorStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutItemTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IMenuFlyoutItemTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IMenuFlyoutPresenterTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IOrientedVirtualizingPanel" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanelFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IOrientedVirtualizingPanelFactory" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IPickerFlyoutBase" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IPickerFlyoutBaseFactory" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IPickerFlyoutBaseOverrides" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IPickerFlyoutBaseStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IPivotHeaderItem" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItemFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IPivotHeaderItemFactory" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IPivotHeaderPanel" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IPivotPanel>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IPivotPanel" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IPopup>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IPopup" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IPopup2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IPopup2" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IPopupStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IPopupStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IPopupStatics2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IPopupStatics2" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IProgressBarTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IProgressRingTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IRangeBase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IRangeBase" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IRangeBaseFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IRangeBaseFactory" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IRangeBaseOverrides" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IRangeBaseStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IRangeBaseValueChangedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IRepeatButton>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IRepeatButton" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IRepeatButtonStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IRepeatButtonStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IScrollBar>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IScrollBar" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IScrollBarStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IScrollBarStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IScrollEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IScrollSnapPointsInfo" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ISelector>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ISelector" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ISelectorFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ISelectorFactory" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ISelectorItem>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ISelectorItem" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ISelectorItemFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ISelectorItemFactory" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ISelectorItemStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ISelectorItemStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ISelectorStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ISelectorStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ISettingsFlyoutTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ISplitViewTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IThumb>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IThumb" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IThumbStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IThumbStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ITickBar>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ITickBar" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ITickBarStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ITickBarStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IToggleButton>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IToggleButton" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IToggleButtonFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IToggleButtonFactory" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IToggleButtonOverrides" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IToggleButtonStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IToggleButtonStatics" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IToggleSwitchTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.IToolTipTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::AppBarButtonTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.AppBarButtonTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::AppBarTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.AppBarTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::AppBarToggleButtonTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.AppBarToggleButtonTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ButtonBase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ButtonBase" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::CalendarPanel>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.CalendarPanel" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::CalendarViewTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.CalendarViewTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::CarouselPanel>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.CarouselPanel" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ColorPickerSlider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ColorPickerSlider" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ColorSpectrum>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ColorSpectrum" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ComboBoxTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ComboBoxTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::CommandBarTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.CommandBarTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.DragCompletedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.DragDeltaEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.DragStartedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::FlyoutBase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.FlyoutBase" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.FlyoutBaseClosingEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::GeneratorPositionHelper>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.GeneratorPositionHelper" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.GridViewItemPresenter" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::GridViewItemTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.GridViewItemTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ItemsChangedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::JumpListItemBackgroundConverter>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.JumpListItemBackgroundConverter" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::JumpListItemForegroundConverter>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.JumpListItemForegroundConverter" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::LayoutInformation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.LayoutInformation" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ListViewItemPresenter" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ListViewItemTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ListViewItemTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::LoopingSelector>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.LoopingSelector" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::LoopingSelectorItem>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.LoopingSelectorItem" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::LoopingSelectorPanel>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.LoopingSelectorPanel" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::MenuFlyoutItemTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.MenuFlyoutItemTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::MenuFlyoutPresenterTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.MenuFlyoutPresenterTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::OrientedVirtualizingPanel>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.OrientedVirtualizingPanel" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.PickerFlyoutBase" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::PivotHeaderItem>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.PivotHeaderItem" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::PivotHeaderPanel>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.PivotHeaderPanel" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::PivotPanel>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.PivotPanel" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::Popup>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.Popup" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ProgressBarTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ProgressBarTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ProgressRingTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ProgressRingTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::RangeBase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.RangeBase" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.RangeBaseValueChangedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::RepeatButton>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.RepeatButton" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ScrollBar>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ScrollBar" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ScrollEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::Selector>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.Selector" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::SelectorItem>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.SelectorItem" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::SettingsFlyoutTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.SettingsFlyoutTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::SplitViewTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.SplitViewTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::Thumb>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.Thumb" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::TickBar>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.TickBar" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ToggleButton>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ToggleButton" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ToggleSwitchTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ToggleSwitchTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ToolTipTemplateSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ToolTipTemplateSettings" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::AnimationDirection>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.AnimationDirection" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ComponentResourceLocation" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.EdgeTransitionLocation" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.FlyoutPlacementMode" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::GeneratorDirection>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.GeneratorDirection" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::GroupHeaderPlacement>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.GroupHeaderPlacement" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ListViewItemPresenterCheckMode" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::PlacementMode>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.PlacementMode" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ScrollEventType>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ScrollEventType" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ScrollingIndicatorMode" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::SliderSnapsTo>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.SliderSnapsTo" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.SnapPointsAlignment" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::TickPlacement>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.TickPlacement" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::GeneratorPosition>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.GeneratorPosition" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.DragCompletedEventHandler" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.DragDeltaEventHandler" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.DragStartedEventHandler" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ItemsChangedEventHandler" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.RangeBaseValueChangedEventHandler" }; };
template <> struct name<Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.Controls.Primitives.ScrollEventHandler" }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings>{ static constexpr GUID value{ 0xCBC9B39D,0x0C95,0x4951,{ 0xBF,0xF2,0x13,0x96,0x36,0x91,0xC3,0x66 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings>{ static constexpr GUID value{ 0xBCC2A863,0xEB35,0x423C,{ 0x83,0x89,0xD7,0x82,0x7B,0xE3,0xBF,0x67 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings>{ static constexpr GUID value{ 0xAAF99C48,0xD8F4,0x40D9,{ 0x9F,0xA3,0x3A,0x64,0xF0,0xFE,0xC5,0xD8 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IButtonBase>{ static constexpr GUID value{ 0xFA002C1A,0x494E,0x46CF,{ 0x91,0xD4,0xE1,0x4A,0x8D,0x79,0x86,0x74 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IButtonBaseFactory>{ static constexpr GUID value{ 0x389B7C71,0x5220,0x42B2,{ 0x99,0x92,0x26,0x90,0xC1,0xA6,0x70,0x2F } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics>{ static constexpr GUID value{ 0x67EF17E1,0xFE37,0x474F,{ 0x9E,0x97,0x3B,0x5E,0x0B,0x30,0xF2,0xDF } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::ICalendarPanel>{ static constexpr GUID value{ 0xFCD55A2D,0x02D3,0x4EE6,{ 0x9A,0x90,0x9D,0xF3,0xEA,0xD0,0x09,0x94 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings>{ static constexpr GUID value{ 0x56C71483,0x64E1,0x477C,{ 0x8A,0x0B,0xCB,0x2F,0x33,0x34,0xB9,0xB0 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::ICarouselPanel>{ static constexpr GUID value{ 0xDEAB78B2,0x373B,0x4151,{ 0x87,0x85,0xE5,0x44,0xD0,0xD9,0x36,0x2B } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::ICarouselPanelFactory>{ static constexpr GUID value{ 0xC1109404,0x9AE1,0x440E,{ 0xA0,0xDD,0xBB,0xB6,0xE2,0x29,0x3C,0xBE } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IColorPickerSlider>{ static constexpr GUID value{ 0x94394D83,0xE0DF,0x4C5F,{ 0xBB,0xCD,0x81,0x55,0xF4,0x02,0x04,0x40 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderFactory>{ static constexpr GUID value{ 0x06D879A2,0x8C07,0x4B1E,{ 0xA9,0x40,0x9F,0xBC,0xE8,0xF4,0x96,0x39 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderStatics>{ static constexpr GUID value{ 0x22EAFC6A,0x9FE3,0x4EEE,{ 0x87,0x34,0xA1,0x39,0x8E,0xC4,0x41,0x3A } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IColorSpectrum>{ static constexpr GUID value{ 0xCE46F271,0xF509,0x4F98,{ 0x82,0x88,0xE4,0x94,0x2F,0xB3,0x85,0xDF } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IColorSpectrumFactory>{ static constexpr GUID value{ 0x90C7E61E,0x904D,0x42AB,{ 0xB4,0x4F,0xE6,0x8D,0xBF,0x0C,0xDE,0xE9 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics>{ static constexpr GUID value{ 0x906BEE7C,0x2CEE,0x4E90,{ 0x96,0x8B,0xF0,0xA5,0xBD,0x69,0x1B,0x4A } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings>{ static constexpr GUID value{ 0x83285C4E,0x17F6,0x4AA3,{ 0xB6,0x1B,0xE8,0x7C,0x71,0x86,0x04,0xEA } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings2>{ static constexpr GUID value{ 0x00E90CD7,0x68BE,0x449D,{ 0xB5,0xA7,0x76,0xE2,0x6F,0x70,0x3E,0x9B } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings>{ static constexpr GUID value{ 0x61C8F92C,0x05AA,0x414A,{ 0xA2,0xAE,0x48,0x2C,0x5A,0x46,0xC0,0x8E } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings2>{ static constexpr GUID value{ 0xFBB24F93,0xC2E2,0x4177,{ 0xA2,0xB6,0x3C,0xD7,0x05,0x07,0x3C,0xF6 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings3>{ static constexpr GUID value{ 0x3BD71EBA,0x3403,0x4BFE,{ 0x84,0x2D,0x2C,0xE8,0xC5,0x11,0xD2,0x45 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs>{ static constexpr GUID value{ 0xB04F29A1,0xBD16,0x48F6,{ 0xA5,0x11,0x9C,0x27,0x63,0x64,0x13,0x31 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgsFactory>{ static constexpr GUID value{ 0x36A7D99D,0x148C,0x495F,{ 0xA0,0xFC,0xAF,0xC8,0x71,0xD6,0x2F,0x33 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs>{ static constexpr GUID value{ 0x2C2DD73C,0x2806,0x49FC,{ 0xAA,0xE9,0x6D,0x79,0x2B,0x57,0x2B,0x6A } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgsFactory>{ static constexpr GUID value{ 0x46E7A1EF,0xAE15,0x44A6,{ 0x8A,0x04,0x95,0xB0,0xBF,0x9A,0xB8,0x76 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs>{ static constexpr GUID value{ 0x9F915DD0,0xA124,0x4366,{ 0xBD,0x85,0x24,0x08,0x21,0x4A,0xEE,0xD4 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgsFactory>{ static constexpr GUID value{ 0x5EEFE579,0xC706,0x4781,{ 0xA3,0x08,0xC9,0xE7,0xF4,0xC6,0xA1,0xD7 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>{ static constexpr GUID value{ 0x723EEA0B,0xD12E,0x430D,{ 0xA9,0xF0,0x9B,0xB3,0x2B,0xBF,0x99,0x13 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2>{ static constexpr GUID value{ 0xF82B435E,0x65B3,0x41C6,{ 0xA9,0xE2,0x77,0xB6,0x7B,0xC4,0xC0,0x0C } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3>{ static constexpr GUID value{ 0xA89C9712,0x48E0,0x4240,{ 0x95,0xB9,0x0D,0xFD,0x08,0x26,0xA8,0xD3 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4>{ static constexpr GUID value{ 0xE3897D69,0xA37F,0x4828,{ 0x9B,0x70,0x0E,0xF6,0x7C,0x03,0xB5,0xF8 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs>{ static constexpr GUID value{ 0xD075852D,0xB09A,0x4FD1,{ 0xB0,0x05,0xDB,0x2B,0xA0,0x12,0x06,0xFB } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseFactory>{ static constexpr GUID value{ 0x1C3363D7,0xFCA7,0x407E,{ 0x92,0x0E,0x70,0xE1,0x5E,0x9F,0x0B,0xF1 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides>{ static constexpr GUID value{ 0x101DEC86,0x6F4D,0x45A4,{ 0x9D,0x0E,0x3E,0xCE,0x6F,0x16,0x97,0x7E } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4>{ static constexpr GUID value{ 0xA6BFD04D,0x5FF3,0x4418,{ 0xAD,0xD8,0x40,0x42,0xA8,0x8D,0x2D,0xA5 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>{ static constexpr GUID value{ 0xE2D795E3,0x85C0,0x4DE2,{ 0xBA,0xC1,0x52,0x94,0xCA,0x01,0x1A,0x78 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2>{ static constexpr GUID value{ 0xA8E913FE,0x2D60,0x4307,{ 0xAA,0xD9,0x56,0xB4,0x50,0x12,0x1B,0x58 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics3>{ static constexpr GUID value{ 0x7BA92E4F,0xDD16,0x4BE4,{ 0x99,0xDB,0xBD,0x9D,0x44,0x06,0xC0,0xF8 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper>{ static constexpr GUID value{ 0xCD40318D,0x7745,0x40D9,{ 0xAB,0x9D,0xAB,0xBD,0xA4,0xA7,0xFF,0xEA } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelperStatics>{ static constexpr GUID value{ 0xAD4095CD,0x60EC,0x4588,{ 0x8D,0x60,0x39,0xD2,0x90,0x97,0xA4,0xDF } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter>{ static constexpr GUID value{ 0x214F9010,0x56E2,0x4821,{ 0x8A,0x1C,0x23,0x05,0x70,0x9A,0xF9,0x4B } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterFactory>{ static constexpr GUID value{ 0x53C12178,0x63BB,0x4A65,{ 0xA3,0xF1,0xAB,0x11,0x4C,0xFC,0x6F,0xFE } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>{ static constexpr GUID value{ 0xE958F8C4,0x277E,0x4A72,{ 0xA0,0x1E,0x9E,0x16,0x88,0x98,0x01,0x78 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings>{ static constexpr GUID value{ 0x9E30BAAF,0x165D,0x4267,{ 0xA4,0x5E,0x1A,0x43,0xA7,0x57,0x06,0xAC } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs>{ static constexpr GUID value{ 0xE8B45568,0x7D10,0x421E,{ 0xBE,0x29,0x81,0x83,0x9A,0x91,0xDE,0x20 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter>{ static constexpr GUID value{ 0x81177858,0xD224,0x410C,{ 0xB1,0x6C,0xC5,0xB6,0xBB,0x61,0x88,0xB2 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverterStatics>{ static constexpr GUID value{ 0x20E7C3DD,0x6F27,0x4808,{ 0xB0,0xBE,0x83,0xE0,0xE9,0xB5,0xCC,0x45 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter>{ static constexpr GUID value{ 0x1590ED38,0xC504,0x4796,{ 0xA6,0x3A,0x5B,0xFC,0x9E,0xEF,0xAA,0xE8 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverterStatics>{ static constexpr GUID value{ 0x474E7352,0x210C,0x4673,{ 0xAC,0x6A,0x41,0x3F,0x0E,0x2C,0x77,0x50 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::ILayoutInformation>{ static constexpr GUID value{ 0xB5384C9B,0xC8CF,0x41B3,{ 0xBF,0x16,0x18,0xC8,0x42,0x0E,0x72,0xC9 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics>{ static constexpr GUID value{ 0xCF06CF99,0x58E9,0x4682,{ 0x83,0x26,0x50,0xCA,0xAB,0x65,0xED,0x7C } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics2>{ static constexpr GUID value{ 0x760315B5,0x6D4E,0x4939,{ 0xAC,0x61,0x63,0x98,0x63,0xCE,0xA3,0x6B } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter>{ static constexpr GUID value{ 0xFC8946BD,0xA3A2,0x4969,{ 0x81,0x74,0x25,0xB5,0xD3,0xC2,0x80,0x33 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2>{ static constexpr GUID value{ 0xF5DC5496,0xE122,0x4C57,{ 0xA6,0x25,0xAC,0x4B,0x08,0xFB,0x2D,0x4C } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter3>{ static constexpr GUID value{ 0x36620013,0x0390,0x4E30,{ 0xAD,0x97,0x87,0x44,0x40,0x4F,0x70,0x10 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterFactory>{ static constexpr GUID value{ 0xE0777CFD,0xF7E4,0x4A67,{ 0x9A,0xC0,0xA9,0x94,0xFC,0xAC,0xD0,0x20 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>{ static constexpr GUID value{ 0x6504A55A,0x15DD,0x42FB,{ 0xAA,0x5D,0x2D,0x8C,0xE2,0xE9,0xC2,0x94 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2>{ static constexpr GUID value{ 0x4CB3B945,0xD24D,0x42A3,{ 0x9E,0x83,0xA8,0x6D,0x06,0x18,0xBF,0x1B } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics3>{ static constexpr GUID value{ 0xC3D3D11E,0xFA26,0x4CE7,{ 0xA4,0xED,0xFF,0x94,0x8F,0x01,0xB7,0xC0 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings>{ static constexpr GUID value{ 0x67AF84BF,0x8279,0x4686,{ 0x93,0x26,0xCD,0x18,0x9F,0x27,0x57,0x5D } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::ILoopingSelector>{ static constexpr GUID value{ 0x4C9A3E04,0x4827,0x49D9,{ 0x88,0x06,0x09,0x39,0x57,0xB0,0xFD,0x21 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem>{ static constexpr GUID value{ 0xC69714B9,0x27C6,0x4433,{ 0x9D,0x7C,0x0D,0xBF,0xB2,0xF4,0x34,0x4F } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel>{ static constexpr GUID value{ 0x40A9BA70,0x1011,0x4778,{ 0x87,0xF7,0x6B,0xFD,0x20,0xD6,0x37,0x7D } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics>{ static constexpr GUID value{ 0x03E8BAFA,0x8C7D,0x4FC5,{ 0xB9,0x2A,0xF0,0x49,0xFB,0x93,0x3C,0xC5 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutItemTemplateSettings>{ static constexpr GUID value{ 0x56AD1809,0x3A16,0x4147,{ 0x81,0xCB,0xD0,0xB3,0x5C,0x83,0x4E,0x0F } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings>{ static constexpr GUID value{ 0xD68FD00D,0x629D,0x4349,{ 0xAC,0x51,0xB8,0x77,0xC8,0x09,0x83,0xB8 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel>{ static constexpr GUID value{ 0xF077B577,0x39BD,0x46EE,{ 0xBD,0xD7,0x08,0x26,0xBE,0xED,0x71,0xB8 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanelFactory>{ static constexpr GUID value{ 0x7B8EAEAF,0xF92F,0x439D,{ 0x9E,0xBF,0xE9,0x91,0x9F,0x56,0xC9,0x4D } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase>{ static constexpr GUID value{ 0xE33574EA,0x1076,0x44D1,{ 0x93,0x83,0xDC,0x24,0xAC,0x5C,0xFF,0x2A } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseFactory>{ static constexpr GUID value{ 0x7EC27A53,0x9502,0x4BEB,{ 0xB3,0x42,0x00,0x56,0x6C,0x8F,0x16,0xB0 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides>{ static constexpr GUID value{ 0x5BFC4F4A,0x4822,0x47B4,{ 0xA9,0x58,0x77,0xC2,0x0B,0xA1,0x20,0xD3 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseStatics>{ static constexpr GUID value{ 0x5A4D0AC5,0x89AE,0x40E5,{ 0xA7,0xF1,0xBB,0x70,0x23,0x55,0xAD,0xF3 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem>{ static constexpr GUID value{ 0x594572C2,0x82AA,0x410B,{ 0x9E,0x55,0xFD,0x8E,0x2C,0x98,0x86,0x2D } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItemFactory>{ static constexpr GUID value{ 0x14308B37,0x185B,0x4117,{ 0xBC,0x77,0xDD,0xA2,0xEB,0x26,0x1B,0x99 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel>{ static constexpr GUID value{ 0x21484EBC,0x9241,0x4203,{ 0xBD,0x37,0x6C,0x08,0xFB,0x09,0x66,0x12 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IPivotPanel>{ static constexpr GUID value{ 0xAD4EBE80,0x22A9,0x4CA3,{ 0x92,0x12,0x27,0x73,0xB6,0x35,0x9F,0xF3 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IPopup>{ static constexpr GUID value{ 0x62418240,0xE6D3,0x4705,{ 0xA1,0xDC,0x39,0x15,0x64,0x56,0xEE,0x29 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IPopup2>{ static constexpr GUID value{ 0x376A8C4C,0xAAC0,0x4B20,{ 0x96,0x6A,0x0B,0x93,0x64,0xFE,0xB4,0xB5 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IPopupStatics>{ static constexpr GUID value{ 0x5AE3BF1A,0x6E34,0x40D6,{ 0x8A,0x7F,0xCA,0x82,0x2A,0xAF,0x59,0xE3 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IPopupStatics2>{ static constexpr GUID value{ 0x2B9AE9EC,0x55EF,0x43B6,{ 0xB4,0x59,0x12,0xE4,0x0F,0xFA,0x43,0x02 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings>{ static constexpr GUID value{ 0x3FE2EA2A,0xE3F2,0x4C2B,{ 0x94,0x88,0x91,0x8D,0x77,0xD2,0xBB,0xE4 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings>{ static constexpr GUID value{ 0xB9B675EC,0xC723,0x42E6,{ 0x83,0xE9,0x98,0x26,0x27,0x2B,0xDC,0x0E } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IRangeBase>{ static constexpr GUID value{ 0xFA002C1A,0x494E,0x46CF,{ 0x91,0xD4,0xE1,0x4A,0x8D,0x79,0x86,0x75 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IRangeBaseFactory>{ static constexpr GUID value{ 0x389B7C71,0x5220,0x42B2,{ 0x99,0x92,0x26,0x90,0xC1,0xA6,0x70,0x30 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides>{ static constexpr GUID value{ 0x4291AF39,0x7F0B,0x4BC2,{ 0x99,0xC4,0x06,0xE7,0x06,0x26,0x82,0xD8 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics>{ static constexpr GUID value{ 0x67EF17E1,0xFE37,0x474F,{ 0x9E,0x97,0x3B,0x5E,0x0B,0x30,0xF2,0xE0 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs>{ static constexpr GUID value{ 0xA1921777,0xD5C1,0x4F9C,{ 0xA7,0xB0,0x04,0x01,0xB7,0xE6,0xDC,0x5C } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IRepeatButton>{ static constexpr GUID value{ 0x02200DF9,0x021A,0x484A,{ 0xA9,0x3B,0x0F,0x31,0x02,0x03,0x14,0xE5 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IRepeatButtonStatics>{ static constexpr GUID value{ 0x3914AC4E,0xF462,0x4F73,{ 0x81,0x97,0xE8,0x84,0x66,0x39,0xC6,0x82 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IScrollBar>{ static constexpr GUID value{ 0xF57AE6CA,0xD1A6,0x4B90,{ 0xA4,0xE9,0x54,0xDF,0x1B,0xA8,0xD2,0xEC } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IScrollBarStatics>{ static constexpr GUID value{ 0x45EAF38D,0xB814,0x48CF,{ 0x97,0xF2,0x53,0x9E,0xB1,0x6D,0xFD,0x4D } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs>{ static constexpr GUID value{ 0xC57E5168,0x3AFE,0x448D,{ 0xB7,0x52,0x2F,0x36,0x4C,0x75,0xD7,0x43 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo>{ static constexpr GUID value{ 0x1B5D1336,0xE61B,0x4D51,{ 0xBE,0x41,0xFD,0x8D,0xDC,0x55,0xC5,0x8C } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::ISelector>{ static constexpr GUID value{ 0xE30EB3A5,0xB36B,0x42DC,{ 0x85,0x27,0xCD,0x25,0x13,0x6C,0x08,0x3C } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::ISelectorFactory>{ static constexpr GUID value{ 0xC9BE2995,0xD136,0x4600,{ 0xB1,0x87,0x8A,0xD5,0x60,0x79,0xB4,0x8A } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::ISelectorItem>{ static constexpr GUID value{ 0x541C8D6C,0x0283,0x4581,{ 0xB9,0x45,0x2A,0x64,0xC2,0x8A,0x06,0x46 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::ISelectorItemFactory>{ static constexpr GUID value{ 0xB9363945,0xC86A,0x4B1E,{ 0x94,0x40,0x18,0x79,0x37,0x8D,0x53,0x13 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::ISelectorItemStatics>{ static constexpr GUID value{ 0x2A353AB8,0xCBE9,0x4303,{ 0x92,0xE7,0xC8,0x90,0x6E,0x21,0x83,0x92 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::ISelectorStatics>{ static constexpr GUID value{ 0x13300B06,0xBD10,0x4E09,{ 0xBF,0xF7,0x71,0xEF,0xB8,0xBB,0xB4,0x2B } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings>{ static constexpr GUID value{ 0xBCF14C10,0xCEA7,0x43F1,{ 0x9D,0x68,0x57,0x60,0x5D,0xED,0x69,0xD4 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings>{ static constexpr GUID value{ 0xC16AB5A7,0x4996,0x4443,{ 0xB1,0x99,0x6B,0x6B,0x89,0x12,0x4E,0xAB } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IThumb>{ static constexpr GUID value{ 0xE8B2B281,0x0D6A,0x45CF,{ 0xB3,0x33,0x24,0x02,0xB0,0x37,0xF0,0x99 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IThumbStatics>{ static constexpr GUID value{ 0x955024EB,0x36F3,0x4672,{ 0xA1,0x86,0xBA,0xAF,0x62,0x6A,0xC4,0xAD } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::ITickBar>{ static constexpr GUID value{ 0x994683FA,0xF1F6,0x487D,{ 0xA5,0xAC,0xC1,0x59,0x21,0xBF,0xA9,0x95 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::ITickBarStatics>{ static constexpr GUID value{ 0x2C6D7E40,0x799D,0x4A54,{ 0xBE,0x09,0x1F,0xEF,0xC6,0x1D,0x01,0x8E } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IToggleButton>{ static constexpr GUID value{ 0x589877FB,0x0FC7,0x4036,{ 0x9D,0x8B,0x12,0x7D,0xFA,0x75,0xC1,0x6D } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IToggleButtonFactory>{ static constexpr GUID value{ 0xD56AA2FC,0xFC7F,0x449C,{ 0x98,0x55,0x7A,0x10,0x55,0xD6,0x68,0xA8 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides>{ static constexpr GUID value{ 0xD20E4C28,0xF18B,0x491A,{ 0x9A,0x45,0xF1,0xA0,0x4A,0x93,0x69,0xA4 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IToggleButtonStatics>{ static constexpr GUID value{ 0xAF1EAB12,0x0128,0x4F67,{ 0x9C,0x5A,0x82,0x32,0x0C,0x44,0x5D,0x19 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings>{ static constexpr GUID value{ 0x02B7BDCD,0x628A,0x4363,{ 0x86,0xE0,0x51,0xD6,0xE2,0xE8,0x9E,0x58 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings>{ static constexpr GUID value{ 0xD4388247,0x0EC4,0x4506,{ 0xAF,0xFD,0xAF,0xAC,0x22,0x25,0xB4,0x8C } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler>{ static constexpr GUID value{ 0x36B28888,0x19AC,0x4B4E,{ 0x91,0x37,0xA6,0xCF,0x2B,0x02,0x38,0x83 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler>{ static constexpr GUID value{ 0x4AC24F9F,0xAC28,0x49E9,{ 0x91,0x89,0xDC,0xCF,0xFE,0xB6,0x64,0x72 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler>{ static constexpr GUID value{ 0xD2EEA48A,0xC65A,0x495D,{ 0xA2,0xF1,0x72,0xC6,0x69,0x89,0x14,0x2D } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventHandler>{ static constexpr GUID value{ 0x178257BE,0xA304,0x482F,{ 0x8B,0xF0,0xB9,0xD2,0xE3,0x96,0x12,0xA3 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler>{ static constexpr GUID value{ 0xE3906FD9,0x4D1B,0x4AC8,{ 0xA4,0x3C,0xC3,0xB9,0x08,0x74,0x27,0x99 } }; };
template <> struct guid<Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler>{ static constexpr GUID value{ 0x8860B0A4,0xA383,0x4C83,{ 0xB3,0x06,0xA1,0xC3,0x9D,0x7D,0xB8,0x7F } }; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::AppBarButtonTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::AppBarTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::AppBarToggleButtonTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ButtonBase>{ using type = Windows::UI::Xaml::Controls::Primitives::IButtonBase; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::CalendarPanel>{ using type = Windows::UI::Xaml::Controls::Primitives::ICalendarPanel; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::CalendarViewTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::CarouselPanel>{ using type = Windows::UI::Xaml::Controls::Primitives::ICarouselPanel; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ColorPickerSlider>{ using type = Windows::UI::Xaml::Controls::Primitives::IColorPickerSlider; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ColorSpectrum>{ using type = Windows::UI::Xaml::Controls::Primitives::IColorSpectrum; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ComboBoxTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::CommandBarTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs>{ using type = Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs>{ using type = Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs>{ using type = Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::FlyoutBase>{ using type = Windows::UI::Xaml::Controls::Primitives::IFlyoutBase; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs>{ using type = Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::GeneratorPositionHelper>{ using type = Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>{ using type = Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::GridViewItemTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventArgs>{ using type = Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::JumpListItemBackgroundConverter>{ using type = Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::JumpListItemForegroundConverter>{ using type = Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::LayoutInformation>{ using type = Windows::UI::Xaml::Controls::Primitives::ILayoutInformation; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>{ using type = Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ListViewItemTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::LoopingSelector>{ using type = Windows::UI::Xaml::Controls::Primitives::ILoopingSelector; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::LoopingSelectorItem>{ using type = Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::LoopingSelectorPanel>{ using type = Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::MenuFlyoutItemTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutItemTemplateSettings; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::MenuFlyoutPresenterTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::OrientedVirtualizingPanel>{ using type = Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase>{ using type = Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::PivotHeaderItem>{ using type = Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::PivotHeaderPanel>{ using type = Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::PivotPanel>{ using type = Windows::UI::Xaml::Controls::Primitives::IPivotPanel; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::Popup>{ using type = Windows::UI::Xaml::Controls::Primitives::IPopup; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ProgressBarTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ProgressRingTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::RangeBase>{ using type = Windows::UI::Xaml::Controls::Primitives::IRangeBase; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs>{ using type = Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::RepeatButton>{ using type = Windows::UI::Xaml::Controls::Primitives::IRepeatButton; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ScrollBar>{ using type = Windows::UI::Xaml::Controls::Primitives::IScrollBar; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs>{ using type = Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::Selector>{ using type = Windows::UI::Xaml::Controls::Primitives::ISelector; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::SelectorItem>{ using type = Windows::UI::Xaml::Controls::Primitives::ISelectorItem; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::SettingsFlyoutTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::SplitViewTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::Thumb>{ using type = Windows::UI::Xaml::Controls::Primitives::IThumb; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::TickBar>{ using type = Windows::UI::Xaml::Controls::Primitives::ITickBar; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ToggleButton>{ using type = Windows::UI::Xaml::Controls::Primitives::IToggleButton; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ToggleSwitchTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings; };
template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ToolTipTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IAppBarButtonTemplateSettings
{
    double KeyboardAcceleratorTextMinWidth() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IAppBarButtonTemplateSettings<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IAppBarTemplateSettings
{
    Windows::Foundation::Rect ClipRect() const;
    double CompactVerticalDelta() const;
    Windows::UI::Xaml::Thickness CompactRootMargin() const;
    double MinimalVerticalDelta() const;
    Windows::UI::Xaml::Thickness MinimalRootMargin() const;
    double HiddenVerticalDelta() const;
    Windows::UI::Xaml::Thickness HiddenRootMargin() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IAppBarTemplateSettings<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IAppBarToggleButtonTemplateSettings
{
    double KeyboardAcceleratorTextMinWidth() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IAppBarToggleButtonTemplateSettings<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IButtonBase
{
    Windows::UI::Xaml::Controls::ClickMode ClickMode() const;
    void ClickMode(Windows::UI::Xaml::Controls::ClickMode const& value) const;
    bool IsPointerOver() const;
    bool IsPressed() const;
    Windows::UI::Xaml::Input::ICommand Command() const;
    void Command(Windows::UI::Xaml::Input::ICommand const& value) const;
    Windows::Foundation::IInspectable CommandParameter() const;
    void CommandParameter(Windows::Foundation::IInspectable const& value) const;
    event_token Click(Windows::UI::Xaml::RoutedEventHandler const& value) const;
    using Click_revoker = event_revoker<Windows::UI::Xaml::Controls::Primitives::IButtonBase>;
    Click_revoker Click(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& value) const;
    void Click(event_token const& token) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IButtonBase> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IButtonBase<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IButtonBaseFactory
{
    Windows::UI::Xaml::Controls::Primitives::ButtonBase CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IButtonBaseFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IButtonBaseFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IButtonBaseStatics
{
    Windows::UI::Xaml::DependencyProperty ClickModeProperty() const;
    Windows::UI::Xaml::DependencyProperty IsPointerOverProperty() const;
    Windows::UI::Xaml::DependencyProperty IsPressedProperty() const;
    Windows::UI::Xaml::DependencyProperty CommandProperty() const;
    Windows::UI::Xaml::DependencyProperty CommandParameterProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IButtonBaseStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_ICalendarPanel
{
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ICalendarPanel> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ICalendarPanel<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_ICalendarViewTemplateSettings
{
    double MinViewWidth() const;
    hstring HeaderText() const;
    hstring WeekDay1() const;
    hstring WeekDay2() const;
    hstring WeekDay3() const;
    hstring WeekDay4() const;
    hstring WeekDay5() const;
    hstring WeekDay6() const;
    hstring WeekDay7() const;
    bool HasMoreContentAfter() const;
    bool HasMoreContentBefore() const;
    bool HasMoreViews() const;
    Windows::Foundation::Rect ClipRect() const;
    double CenterX() const;
    double CenterY() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ICalendarViewTemplateSettings<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel
{
    bool CanVerticallyScroll() const;
    void CanVerticallyScroll(bool value) const;
    bool CanHorizontallyScroll() const;
    void CanHorizontallyScroll(bool value) const;
    double ExtentWidth() const;
    double ExtentHeight() const;
    double ViewportWidth() const;
    double ViewportHeight() const;
    double HorizontalOffset() const;
    double VerticalOffset() const;
    Windows::Foundation::IInspectable ScrollOwner() const;
    void ScrollOwner(Windows::Foundation::IInspectable const& value) const;
    void LineUp() const;
    void LineDown() const;
    void LineLeft() const;
    void LineRight() const;
    void PageUp() const;
    void PageDown() const;
    void PageLeft() const;
    void PageRight() const;
    void MouseWheelUp() const;
    void MouseWheelDown() const;
    void MouseWheelLeft() const;
    void MouseWheelRight() const;
    void SetHorizontalOffset(double offset) const;
    void SetVerticalOffset(double offset) const;
    Windows::Foundation::Rect MakeVisible(Windows::UI::Xaml::UIElement const& visual, Windows::Foundation::Rect const& rectangle) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ICarouselPanel> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanelFactory
{
    Windows::UI::Xaml::Controls::Primitives::CarouselPanel CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ICarouselPanelFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanelFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IColorPickerSlider
{
    Windows::UI::Xaml::Controls::ColorPickerHsvChannel ColorChannel() const;
    void ColorChannel(Windows::UI::Xaml::Controls::ColorPickerHsvChannel const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IColorPickerSlider> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IColorPickerSlider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IColorPickerSliderFactory
{
    Windows::UI::Xaml::Controls::Primitives::ColorPickerSlider CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IColorPickerSliderFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IColorPickerSliderStatics
{
    Windows::UI::Xaml::DependencyProperty ColorChannelProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IColorPickerSliderStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrum
{
    Windows::UI::Color Color() const;
    void Color(Windows::UI::Color const& value) const;
    Windows::Foundation::Numerics::float4 HsvColor() const;
    void HsvColor(Windows::Foundation::Numerics::float4 const& value) const;
    int32_t MinHue() const;
    void MinHue(int32_t value) const;
    int32_t MaxHue() const;
    void MaxHue(int32_t value) const;
    int32_t MinSaturation() const;
    void MinSaturation(int32_t value) const;
    int32_t MaxSaturation() const;
    void MaxSaturation(int32_t value) const;
    int32_t MinValue() const;
    void MinValue(int32_t value) const;
    int32_t MaxValue() const;
    void MaxValue(int32_t value) const;
    Windows::UI::Xaml::Controls::ColorSpectrumShape Shape() const;
    void Shape(Windows::UI::Xaml::Controls::ColorSpectrumShape const& value) const;
    Windows::UI::Xaml::Controls::ColorSpectrumComponents Components() const;
    void Components(Windows::UI::Xaml::Controls::ColorSpectrumComponents const& value) const;
    event_token ColorChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Primitives::ColorSpectrum, Windows::UI::Xaml::Controls::ColorChangedEventArgs> const& value) const;
    using ColorChanged_revoker = event_revoker<Windows::UI::Xaml::Controls::Primitives::IColorSpectrum>;
    ColorChanged_revoker ColorChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Primitives::ColorSpectrum, Windows::UI::Xaml::Controls::ColorChangedEventArgs> const& value) const;
    void ColorChanged(event_token const& token) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IColorSpectrum> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrum<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrumFactory
{
    Windows::UI::Xaml::Controls::Primitives::ColorSpectrum CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IColorSpectrumFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrumFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrumStatics
{
    Windows::UI::Xaml::DependencyProperty ColorProperty() const;
    Windows::UI::Xaml::DependencyProperty HsvColorProperty() const;
    Windows::UI::Xaml::DependencyProperty MinHueProperty() const;
    Windows::UI::Xaml::DependencyProperty MaxHueProperty() const;
    Windows::UI::Xaml::DependencyProperty MinSaturationProperty() const;
    Windows::UI::Xaml::DependencyProperty MaxSaturationProperty() const;
    Windows::UI::Xaml::DependencyProperty MinValueProperty() const;
    Windows::UI::Xaml::DependencyProperty MaxValueProperty() const;
    Windows::UI::Xaml::DependencyProperty ShapeProperty() const;
    Windows::UI::Xaml::DependencyProperty ComponentsProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrumStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IComboBoxTemplateSettings
{
    double DropDownOpenedHeight() const;
    double DropDownClosedHeight() const;
    double DropDownOffset() const;
    Windows::UI::Xaml::Controls::Primitives::AnimationDirection SelectedItemDirection() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IComboBoxTemplateSettings<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IComboBoxTemplateSettings2
{
    double DropDownContentMinWidth() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings2> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IComboBoxTemplateSettings2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings
{
    double ContentHeight() const;
    Windows::Foundation::Rect OverflowContentClipRect() const;
    double OverflowContentMinWidth() const;
    double OverflowContentMaxHeight() const;
    double OverflowContentHorizontalOffset() const;
    double OverflowContentHeight() const;
    double NegativeOverflowContentHeight() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings2
{
    double OverflowContentMaxWidth() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings2> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings3
{
    Windows::UI::Xaml::Visibility EffectiveOverflowButtonVisibility() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings3> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings3<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IDragCompletedEventArgs
{
    double HorizontalChange() const;
    double VerticalChange() const;
    bool Canceled() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IDragCompletedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IDragCompletedEventArgsFactory
{
    Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs CreateInstanceWithHorizontalChangeVerticalChangeAndCanceled(double horizontalChange, double verticalChange, bool canceled, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgsFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IDragCompletedEventArgsFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IDragDeltaEventArgs
{
    double HorizontalChange() const;
    double VerticalChange() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IDragDeltaEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IDragDeltaEventArgsFactory
{
    Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs CreateInstanceWithHorizontalChangeAndVerticalChange(double horizontalChange, double verticalChange, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgsFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IDragDeltaEventArgsFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IDragStartedEventArgs
{
    double HorizontalOffset() const;
    double VerticalOffset() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IDragStartedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IDragStartedEventArgsFactory
{
    Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs CreateInstanceWithHorizontalOffsetAndVerticalOffset(double horizontalOffset, double verticalOffset, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgsFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IDragStartedEventArgsFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase
{
    Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode Placement() const;
    void Placement(Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode const& value) const;
    event_token Opened(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const;
    using Opened_revoker = event_revoker<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>;
    Opened_revoker Opened(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const;
    void Opened(event_token const& token) const;
    event_token Closed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const;
    using Closed_revoker = event_revoker<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>;
    Closed_revoker Closed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const;
    void Closed(event_token const& token) const;
    event_token Opening(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const;
    using Opening_revoker = event_revoker<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>;
    Opening_revoker Opening(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const;
    void Opening(event_token const& token) const;
    void ShowAt(Windows::UI::Xaml::FrameworkElement const& placementTarget) const;
    void Hide() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase2
{
    Windows::UI::Xaml::FrameworkElement Target() const;
    bool AllowFocusOnInteraction() const;
    void AllowFocusOnInteraction(bool value) const;
    Windows::UI::Xaml::Controls::LightDismissOverlayMode LightDismissOverlayMode() const;
    void LightDismissOverlayMode(Windows::UI::Xaml::Controls::LightDismissOverlayMode const& value) const;
    bool AllowFocusWhenDisabled() const;
    void AllowFocusWhenDisabled(bool value) const;
    Windows::UI::Xaml::ElementSoundMode ElementSoundMode() const;
    void ElementSoundMode(Windows::UI::Xaml::ElementSoundMode const& value) const;
    event_token Closing(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Primitives::FlyoutBase, Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs> const& value) const;
    using Closing_revoker = event_revoker<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2>;
    Closing_revoker Closing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Primitives::FlyoutBase, Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs> const& value) const;
    void Closing(event_token const& token) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase3
{
    Windows::UI::Xaml::DependencyObject OverlayInputPassThroughElement() const;
    void OverlayInputPassThroughElement(Windows::UI::Xaml::DependencyObject const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase3<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase4
{
    void TryInvokeKeyboardAccelerator(Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs const& args) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase4<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseClosingEventArgs
{
    bool Cancel() const;
    void Cancel(bool value) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseClosingEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseFactory
{
    Windows::UI::Xaml::Controls::Primitives::FlyoutBase CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseOverrides
{
    Windows::UI::Xaml::Controls::Control CreatePresenter() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseOverrides<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseOverrides4
{
    void OnProcessKeyboardAccelerators(Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs const& args) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseOverrides4<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics
{
    Windows::UI::Xaml::DependencyProperty PlacementProperty() const;
    Windows::UI::Xaml::DependencyProperty AttachedFlyoutProperty() const;
    Windows::UI::Xaml::Controls::Primitives::FlyoutBase GetAttachedFlyout(Windows::UI::Xaml::FrameworkElement const& element) const;
    void SetAttachedFlyout(Windows::UI::Xaml::FrameworkElement const& element, Windows::UI::Xaml::Controls::Primitives::FlyoutBase const& value) const;
    void ShowAttachedFlyout(Windows::UI::Xaml::FrameworkElement const& flyoutOwner) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics2
{
    Windows::UI::Xaml::DependencyProperty AllowFocusOnInteractionProperty() const;
    Windows::UI::Xaml::DependencyProperty LightDismissOverlayModeProperty() const;
    Windows::UI::Xaml::DependencyProperty AllowFocusWhenDisabledProperty() const;
    Windows::UI::Xaml::DependencyProperty ElementSoundModeProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics3
{
    Windows::UI::Xaml::DependencyProperty OverlayInputPassThroughElementProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics3> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics3<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IGeneratorPositionHelper
{
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IGeneratorPositionHelper<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IGeneratorPositionHelperStatics
{
    Windows::UI::Xaml::Controls::Primitives::GeneratorPosition FromIndexAndOffset(int32_t index, int32_t offset) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelperStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IGeneratorPositionHelperStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter
{
    bool SelectionCheckMarkVisualEnabled() const;
    void SelectionCheckMarkVisualEnabled(bool value) const;
    Windows::UI::Xaml::Media::Brush CheckHintBrush() const;
    void CheckHintBrush(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Media::Brush CheckSelectingBrush() const;
    void CheckSelectingBrush(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Media::Brush CheckBrush() const;
    void CheckBrush(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Media::Brush DragBackground() const;
    void DragBackground(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Media::Brush DragForeground() const;
    void DragForeground(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Media::Brush FocusBorderBrush() const;
    void FocusBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Media::Brush PlaceholderBackground() const;
    void PlaceholderBackground(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Media::Brush PointerOverBackground() const;
    void PointerOverBackground(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Media::Brush SelectedBackground() const;
    void SelectedBackground(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Media::Brush SelectedForeground() const;
    void SelectedForeground(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Media::Brush SelectedPointerOverBackground() const;
    void SelectedPointerOverBackground(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Media::Brush SelectedPointerOverBorderBrush() const;
    void SelectedPointerOverBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Thickness SelectedBorderThickness() const;
    void SelectedBorderThickness(Windows::UI::Xaml::Thickness const& value) const;
    double DisabledOpacity() const;
    void DisabledOpacity(double value) const;
    double DragOpacity() const;
    void DragOpacity(double value) const;
    double ReorderHintOffset() const;
    void ReorderHintOffset(double value) const;
    [[deprecated("Use ContentPresenter.HorizontalContentAlignment instead of GridViewItemPresenterHorizontalContentAlignment. For more info, see MSDN.")]] Windows::UI::Xaml::HorizontalAlignment GridViewItemPresenterHorizontalContentAlignment() const;
    [[deprecated("Use ContentPresenter.HorizontalContentAlignment instead of GridViewItemPresenterHorizontalContentAlignment. For more info, see MSDN.")]] void GridViewItemPresenterHorizontalContentAlignment(Windows::UI::Xaml::HorizontalAlignment const& value) const;
    [[deprecated("Use ContentPresenter.VerticalContentAlignment instead of GridViewItemPresenterVerticalContentAlignment. For more info, see MSDN.")]] Windows::UI::Xaml::VerticalAlignment GridViewItemPresenterVerticalContentAlignment() const;
    [[deprecated("Use ContentPresenter.VerticalContentAlignment instead of GridViewItemPresenterVerticalContentAlignment. For more info, see MSDN.")]] void GridViewItemPresenterVerticalContentAlignment(Windows::UI::Xaml::VerticalAlignment const& value) const;
    [[deprecated("Use ContentPresenter.Padding instead of GridViewItemPresenterPadding. For more info, see MSDN.")]] Windows::UI::Xaml::Thickness GridViewItemPresenterPadding() const;
    [[deprecated("Use ContentPresenter.Padding instead of GridViewItemPresenterPadding. For more info, see MSDN.")]] void GridViewItemPresenterPadding(Windows::UI::Xaml::Thickness const& value) const;
    Windows::UI::Xaml::Thickness PointerOverBackgroundMargin() const;
    void PointerOverBackgroundMargin(Windows::UI::Xaml::Thickness const& value) const;
    Windows::UI::Xaml::Thickness ContentMargin() const;
    void ContentMargin(Windows::UI::Xaml::Thickness const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterFactory
{
    Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterStatics
{
    Windows::UI::Xaml::DependencyProperty SelectionCheckMarkVisualEnabledProperty() const;
    Windows::UI::Xaml::DependencyProperty CheckHintBrushProperty() const;
    Windows::UI::Xaml::DependencyProperty CheckSelectingBrushProperty() const;
    Windows::UI::Xaml::DependencyProperty CheckBrushProperty() const;
    Windows::UI::Xaml::DependencyProperty DragBackgroundProperty() const;
    Windows::UI::Xaml::DependencyProperty DragForegroundProperty() const;
    Windows::UI::Xaml::DependencyProperty FocusBorderBrushProperty() const;
    Windows::UI::Xaml::DependencyProperty PlaceholderBackgroundProperty() const;
    Windows::UI::Xaml::DependencyProperty PointerOverBackgroundProperty() const;
    Windows::UI::Xaml::DependencyProperty SelectedBackgroundProperty() const;
    Windows::UI::Xaml::DependencyProperty SelectedForegroundProperty() const;
    Windows::UI::Xaml::DependencyProperty SelectedPointerOverBackgroundProperty() const;
    Windows::UI::Xaml::DependencyProperty SelectedPointerOverBorderBrushProperty() const;
    Windows::UI::Xaml::DependencyProperty SelectedBorderThicknessProperty() const;
    Windows::UI::Xaml::DependencyProperty DisabledOpacityProperty() const;
    Windows::UI::Xaml::DependencyProperty DragOpacityProperty() const;
    Windows::UI::Xaml::DependencyProperty ReorderHintOffsetProperty() const;
    [[deprecated("Use ContentPresenter.HorizontalContentAlignment instead of GridViewItemPresenterHorizontalContentAlignment. For more info, see MSDN.")]] Windows::UI::Xaml::DependencyProperty GridViewItemPresenterHorizontalContentAlignmentProperty() const;
    [[deprecated("Use ContentPresenter.VerticalContentAlignment instead of GridViewItemPresenterVerticalContentAlignment. For more info, see MSDN.")]] Windows::UI::Xaml::DependencyProperty GridViewItemPresenterVerticalContentAlignmentProperty() const;
    [[deprecated("Use ContentPresenter.Padding instead of GridViewItemPresenterPadding. For more info, see MSDN.")]] Windows::UI::Xaml::DependencyProperty GridViewItemPresenterPaddingProperty() const;
    Windows::UI::Xaml::DependencyProperty PointerOverBackgroundMarginProperty() const;
    Windows::UI::Xaml::DependencyProperty ContentMarginProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemTemplateSettings
{
    int32_t DragItemsCount() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemTemplateSettings<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IItemsChangedEventArgs
{
    int32_t Action() const;
    Windows::UI::Xaml::Controls::Primitives::GeneratorPosition Position() const;
    Windows::UI::Xaml::Controls::Primitives::GeneratorPosition OldPosition() const;
    int32_t ItemCount() const;
    int32_t ItemUICount() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IItemsChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemBackgroundConverter
{
    Windows::UI::Xaml::Media::Brush Enabled() const;
    void Enabled(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Media::Brush Disabled() const;
    void Disabled(Windows::UI::Xaml::Media::Brush const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemBackgroundConverter<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemBackgroundConverterStatics
{
    Windows::UI::Xaml::DependencyProperty EnabledProperty() const;
    Windows::UI::Xaml::DependencyProperty DisabledProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverterStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemBackgroundConverterStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemForegroundConverter
{
    Windows::UI::Xaml::Media::Brush Enabled() const;
    void Enabled(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Media::Brush Disabled() const;
    void Disabled(Windows::UI::Xaml::Media::Brush const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemForegroundConverter<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemForegroundConverterStatics
{
    Windows::UI::Xaml::DependencyProperty EnabledProperty() const;
    Windows::UI::Xaml::DependencyProperty DisabledProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverterStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemForegroundConverterStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_ILayoutInformation
{
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ILayoutInformation> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ILayoutInformation<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_ILayoutInformationStatics
{
    Windows::UI::Xaml::UIElement GetLayoutExceptionElement(Windows::Foundation::IInspectable const& dispatcher) const;
    Windows::Foundation::Rect GetLayoutSlot(Windows::UI::Xaml::FrameworkElement const& element) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ILayoutInformationStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_ILayoutInformationStatics2
{
    Windows::Foundation::Size GetAvailableSize(Windows::UI::Xaml::UIElement const& element) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics2> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ILayoutInformationStatics2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter
{
    bool SelectionCheckMarkVisualEnabled() const;
    void SelectionCheckMarkVisualEnabled(bool value) const;
    Windows::UI::Xaml::Media::Brush CheckHintBrush() const;
    void CheckHintBrush(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Media::Brush CheckSelectingBrush() const;
    void CheckSelectingBrush(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Media::Brush CheckBrush() const;
    void CheckBrush(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Media::Brush DragBackground() const;
    void DragBackground(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Media::Brush DragForeground() const;
    void DragForeground(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Media::Brush FocusBorderBrush() const;
    void FocusBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Media::Brush PlaceholderBackground() const;
    void PlaceholderBackground(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Media::Brush PointerOverBackground() const;
    void PointerOverBackground(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Media::Brush SelectedBackground() const;
    void SelectedBackground(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Media::Brush SelectedForeground() const;
    void SelectedForeground(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Media::Brush SelectedPointerOverBackground() const;
    void SelectedPointerOverBackground(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Media::Brush SelectedPointerOverBorderBrush() const;
    void SelectedPointerOverBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Thickness SelectedBorderThickness() const;
    void SelectedBorderThickness(Windows::UI::Xaml::Thickness const& value) const;
    double DisabledOpacity() const;
    void DisabledOpacity(double value) const;
    double DragOpacity() const;
    void DragOpacity(double value) const;
    double ReorderHintOffset() const;
    void ReorderHintOffset(double value) const;
    [[deprecated("Use ContentPresenter.HorizontalContentAlignment instead of ListViewItemPresenterHorizontalContentAlignment. For more info, see MSDN.")]] Windows::UI::Xaml::HorizontalAlignment ListViewItemPresenterHorizontalContentAlignment() const;
    [[deprecated("Use ContentPresenter.HorizontalContentAlignment instead of ListViewItemPresenterHorizontalContentAlignment. For more info, see MSDN.")]] void ListViewItemPresenterHorizontalContentAlignment(Windows::UI::Xaml::HorizontalAlignment const& value) const;
    [[deprecated("Use ContentPresenter.VerticalContentAlignment instead of ListViewItemPresenterVerticalContentAlignment. For more info, see MSDN.")]] Windows::UI::Xaml::VerticalAlignment ListViewItemPresenterVerticalContentAlignment() const;
    [[deprecated("Use ContentPresenter.VerticalContentAlignment instead of ListViewItemPresenterVerticalContentAlignment. For more info, see MSDN.")]] void ListViewItemPresenterVerticalContentAlignment(Windows::UI::Xaml::VerticalAlignment const& value) const;
    [[deprecated("Use ContentPresenter.Padding instead of GridViewItemPresenterPadding. For more info, see MSDN.")]] Windows::UI::Xaml::Thickness ListViewItemPresenterPadding() const;
    [[deprecated("Use ContentPresenter.Padding instead of GridViewItemPresenterPadding. For more info, see MSDN.")]] void ListViewItemPresenterPadding(Windows::UI::Xaml::Thickness const& value) const;
    Windows::UI::Xaml::Thickness PointerOverBackgroundMargin() const;
    void PointerOverBackgroundMargin(Windows::UI::Xaml::Thickness const& value) const;
    Windows::UI::Xaml::Thickness ContentMargin() const;
    void ContentMargin(Windows::UI::Xaml::Thickness const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter2
{
    Windows::UI::Xaml::Media::Brush SelectedPressedBackground() const;
    void SelectedPressedBackground(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Media::Brush PressedBackground() const;
    void PressedBackground(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Media::Brush CheckBoxBrush() const;
    void CheckBoxBrush(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Media::Brush FocusSecondaryBorderBrush() const;
    void FocusSecondaryBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode CheckMode() const;
    void CheckMode(Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode const& value) const;
    Windows::UI::Xaml::Media::Brush PointerOverForeground() const;
    void PointerOverForeground(Windows::UI::Xaml::Media::Brush const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter3
{
    Windows::UI::Xaml::Media::Brush RevealBackground() const;
    void RevealBackground(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Media::Brush RevealBorderBrush() const;
    void RevealBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Thickness RevealBorderThickness() const;
    void RevealBorderThickness(Windows::UI::Xaml::Thickness const& value) const;
    bool RevealBackgroundShowsAboveContent() const;
    void RevealBackgroundShowsAboveContent(bool value) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter3> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter3<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterFactory
{
    Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics
{
    Windows::UI::Xaml::DependencyProperty SelectionCheckMarkVisualEnabledProperty() const;
    Windows::UI::Xaml::DependencyProperty CheckHintBrushProperty() const;
    Windows::UI::Xaml::DependencyProperty CheckSelectingBrushProperty() const;
    Windows::UI::Xaml::DependencyProperty CheckBrushProperty() const;
    Windows::UI::Xaml::DependencyProperty DragBackgroundProperty() const;
    Windows::UI::Xaml::DependencyProperty DragForegroundProperty() const;
    Windows::UI::Xaml::DependencyProperty FocusBorderBrushProperty() const;
    Windows::UI::Xaml::DependencyProperty PlaceholderBackgroundProperty() const;
    Windows::UI::Xaml::DependencyProperty PointerOverBackgroundProperty() const;
    Windows::UI::Xaml::DependencyProperty SelectedBackgroundProperty() const;
    Windows::UI::Xaml::DependencyProperty SelectedForegroundProperty() const;
    Windows::UI::Xaml::DependencyProperty SelectedPointerOverBackgroundProperty() const;
    Windows::UI::Xaml::DependencyProperty SelectedPointerOverBorderBrushProperty() const;
    Windows::UI::Xaml::DependencyProperty SelectedBorderThicknessProperty() const;
    Windows::UI::Xaml::DependencyProperty DisabledOpacityProperty() const;
    Windows::UI::Xaml::DependencyProperty DragOpacityProperty() const;
    Windows::UI::Xaml::DependencyProperty ReorderHintOffsetProperty() const;
    [[deprecated("Use ContentPresenter.HorizontalContentAlignment instead of ListViewItemPresenterHorizontalContentAlignment. For more info, see MSDN.")]] Windows::UI::Xaml::DependencyProperty ListViewItemPresenterHorizontalContentAlignmentProperty() const;
    [[deprecated("Use ContentPresenter.VerticalContentAlignment instead of ListViewItemPresenterVerticalContentAlignment. For more info, see MSDN.")]] Windows::UI::Xaml::DependencyProperty ListViewItemPresenterVerticalContentAlignmentProperty() const;
    [[deprecated("Use ContentPresenter.Padding instead of GridViewItemPresenterPadding. For more info, see MSDN.")]] Windows::UI::Xaml::DependencyProperty ListViewItemPresenterPaddingProperty() const;
    Windows::UI::Xaml::DependencyProperty PointerOverBackgroundMarginProperty() const;
    Windows::UI::Xaml::DependencyProperty ContentMarginProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics2
{
    Windows::UI::Xaml::DependencyProperty SelectedPressedBackgroundProperty() const;
    Windows::UI::Xaml::DependencyProperty PressedBackgroundProperty() const;
    Windows::UI::Xaml::DependencyProperty CheckBoxBrushProperty() const;
    Windows::UI::Xaml::DependencyProperty FocusSecondaryBorderBrushProperty() const;
    Windows::UI::Xaml::DependencyProperty CheckModeProperty() const;
    Windows::UI::Xaml::DependencyProperty PointerOverForegroundProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics3
{
    Windows::UI::Xaml::DependencyProperty RevealBackgroundProperty() const;
    Windows::UI::Xaml::DependencyProperty RevealBorderBrushProperty() const;
    Windows::UI::Xaml::DependencyProperty RevealBorderThicknessProperty() const;
    Windows::UI::Xaml::DependencyProperty RevealBackgroundShowsAboveContentProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics3> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics3<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemTemplateSettings
{
    int32_t DragItemsCount() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemTemplateSettings<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelector
{
    bool ShouldLoop() const;
    void ShouldLoop(bool value) const;
    Windows::Foundation::Collections::IVector<Windows::Foundation::IInspectable> Items() const;
    void Items(param::vector<Windows::Foundation::IInspectable> const& value) const;
    int32_t SelectedIndex() const;
    void SelectedIndex(int32_t value) const;
    Windows::Foundation::IInspectable SelectedItem() const;
    void SelectedItem(Windows::Foundation::IInspectable const& value) const;
    int32_t ItemWidth() const;
    void ItemWidth(int32_t value) const;
    int32_t ItemHeight() const;
    void ItemHeight(int32_t value) const;
    Windows::UI::Xaml::DataTemplate ItemTemplate() const;
    void ItemTemplate(Windows::UI::Xaml::DataTemplate const& value) const;
    event_token SelectionChanged(Windows::UI::Xaml::Controls::SelectionChangedEventHandler const& value) const;
    using SelectionChanged_revoker = event_revoker<Windows::UI::Xaml::Controls::Primitives::ILoopingSelector>;
    SelectionChanged_revoker SelectionChanged(auto_revoke_t, Windows::UI::Xaml::Controls::SelectionChangedEventHandler const& value) const;
    void SelectionChanged(event_token const& token) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ILoopingSelector> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelector<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelectorItem
{
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelectorItem<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelectorPanel
{
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelectorPanel<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelectorStatics
{
    Windows::UI::Xaml::DependencyProperty ShouldLoopProperty() const;
    Windows::UI::Xaml::DependencyProperty ItemsProperty() const;
    Windows::UI::Xaml::DependencyProperty SelectedIndexProperty() const;
    Windows::UI::Xaml::DependencyProperty SelectedItemProperty() const;
    Windows::UI::Xaml::DependencyProperty ItemWidthProperty() const;
    Windows::UI::Xaml::DependencyProperty ItemHeightProperty() const;
    Windows::UI::Xaml::DependencyProperty ItemTemplateProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelectorStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IMenuFlyoutItemTemplateSettings
{
    double KeyboardAcceleratorTextMinWidth() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutItemTemplateSettings> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IMenuFlyoutItemTemplateSettings<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IMenuFlyoutPresenterTemplateSettings
{
    double FlyoutContentMinWidth() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IMenuFlyoutPresenterTemplateSettings<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel
{
    bool CanVerticallyScroll() const;
    void CanVerticallyScroll(bool value) const;
    bool CanHorizontallyScroll() const;
    void CanHorizontallyScroll(bool value) const;
    double ExtentWidth() const;
    double ExtentHeight() const;
    double ViewportWidth() const;
    double ViewportHeight() const;
    double HorizontalOffset() const;
    double VerticalOffset() const;
    Windows::Foundation::IInspectable ScrollOwner() const;
    void ScrollOwner(Windows::Foundation::IInspectable const& value) const;
    void LineUp() const;
    void LineDown() const;
    void LineLeft() const;
    void LineRight() const;
    void PageUp() const;
    void PageDown() const;
    void PageLeft() const;
    void PageRight() const;
    void MouseWheelUp() const;
    void MouseWheelDown() const;
    void MouseWheelLeft() const;
    void MouseWheelRight() const;
    void SetHorizontalOffset(double offset) const;
    void SetVerticalOffset(double offset) const;
    Windows::Foundation::Rect MakeVisible(Windows::UI::Xaml::UIElement const& visual, Windows::Foundation::Rect const& rectangle) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanelFactory
{
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanelFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanelFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBase
{
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBase<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBaseFactory
{
    Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBaseFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBaseOverrides
{
    void OnConfirmed() const;
    bool ShouldShowConfirmationButtons() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBaseOverrides<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBaseStatics
{
    Windows::UI::Xaml::DependencyProperty TitleProperty() const;
    hstring GetTitle(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetTitle(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBaseStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IPivotHeaderItem
{
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPivotHeaderItem<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IPivotHeaderItemFactory
{
    Windows::UI::Xaml::Controls::Primitives::PivotHeaderItem CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItemFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPivotHeaderItemFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IPivotHeaderPanel
{
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPivotHeaderPanel<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IPivotPanel
{
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPivotPanel> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPivotPanel<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IPopup
{
    Windows::UI::Xaml::UIElement Child() const;
    void Child(Windows::UI::Xaml::UIElement const& value) const;
    bool IsOpen() const;
    void IsOpen(bool value) const;
    double HorizontalOffset() const;
    void HorizontalOffset(double value) const;
    double VerticalOffset() const;
    void VerticalOffset(double value) const;
    Windows::UI::Xaml::Media::Animation::TransitionCollection ChildTransitions() const;
    void ChildTransitions(Windows::UI::Xaml::Media::Animation::TransitionCollection const& value) const;
    bool IsLightDismissEnabled() const;
    void IsLightDismissEnabled(bool value) const;
    event_token Opened(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const;
    using Opened_revoker = event_revoker<Windows::UI::Xaml::Controls::Primitives::IPopup>;
    Opened_revoker Opened(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const;
    void Opened(event_token const& token) const;
    event_token Closed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const;
    using Closed_revoker = event_revoker<Windows::UI::Xaml::Controls::Primitives::IPopup>;
    Closed_revoker Closed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const;
    void Closed(event_token const& token) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPopup> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPopup<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IPopup2
{
    Windows::UI::Xaml::Controls::LightDismissOverlayMode LightDismissOverlayMode() const;
    void LightDismissOverlayMode(Windows::UI::Xaml::Controls::LightDismissOverlayMode const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPopup2> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPopup2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IPopupStatics
{
    Windows::UI::Xaml::DependencyProperty ChildProperty() const;
    Windows::UI::Xaml::DependencyProperty IsOpenProperty() const;
    Windows::UI::Xaml::DependencyProperty HorizontalOffsetProperty() const;
    Windows::UI::Xaml::DependencyProperty VerticalOffsetProperty() const;
    Windows::UI::Xaml::DependencyProperty ChildTransitionsProperty() const;
    Windows::UI::Xaml::DependencyProperty IsLightDismissEnabledProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPopupStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPopupStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IPopupStatics2
{
    Windows::UI::Xaml::DependencyProperty LightDismissOverlayModeProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPopupStatics2> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPopupStatics2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IProgressBarTemplateSettings
{
    double EllipseDiameter() const;
    double EllipseOffset() const;
    double EllipseAnimationWellPosition() const;
    double EllipseAnimationEndPosition() const;
    double ContainerAnimationStartPosition() const;
    double ContainerAnimationEndPosition() const;
    double IndicatorLengthDelta() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IProgressBarTemplateSettings<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IProgressRingTemplateSettings
{
    double EllipseDiameter() const;
    Windows::UI::Xaml::Thickness EllipseOffset() const;
    double MaxSideLength() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IProgressRingTemplateSettings<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IRangeBase
{
    double Minimum() const;
    void Minimum(double value) const;
    double Maximum() const;
    void Maximum(double value) const;
    double SmallChange() const;
    void SmallChange(double value) const;
    double LargeChange() const;
    void LargeChange(double value) const;
    double Value() const;
    void Value(double value) const;
    event_token ValueChanged(Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler const& value) const;
    using ValueChanged_revoker = event_revoker<Windows::UI::Xaml::Controls::Primitives::IRangeBase>;
    ValueChanged_revoker ValueChanged(auto_revoke_t, Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler const& value) const;
    void ValueChanged(event_token const& token) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IRangeBase> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IRangeBase<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseFactory
{
    Windows::UI::Xaml::Controls::Primitives::RangeBase CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IRangeBaseFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseOverrides
{
    void OnMinimumChanged(double oldMinimum, double newMinimum) const;
    void OnMaximumChanged(double oldMaximum, double newMaximum) const;
    void OnValueChanged(double oldValue, double newValue) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseOverrides<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseStatics
{
    Windows::UI::Xaml::DependencyProperty MinimumProperty() const;
    Windows::UI::Xaml::DependencyProperty MaximumProperty() const;
    Windows::UI::Xaml::DependencyProperty SmallChangeProperty() const;
    Windows::UI::Xaml::DependencyProperty LargeChangeProperty() const;
    Windows::UI::Xaml::DependencyProperty ValueProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseValueChangedEventArgs
{
    double OldValue() const;
    double NewValue() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseValueChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IRepeatButton
{
    int32_t Delay() const;
    void Delay(int32_t value) const;
    int32_t Interval() const;
    void Interval(int32_t value) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IRepeatButton> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IRepeatButton<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IRepeatButtonStatics
{
    Windows::UI::Xaml::DependencyProperty DelayProperty() const;
    Windows::UI::Xaml::DependencyProperty IntervalProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IRepeatButtonStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IRepeatButtonStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IScrollBar
{
    Windows::UI::Xaml::Controls::Orientation Orientation() const;
    void Orientation(Windows::UI::Xaml::Controls::Orientation const& value) const;
    double ViewportSize() const;
    void ViewportSize(double value) const;
    Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode IndicatorMode() const;
    void IndicatorMode(Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode const& value) const;
    event_token Scroll(Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler const& value) const;
    using Scroll_revoker = event_revoker<Windows::UI::Xaml::Controls::Primitives::IScrollBar>;
    Scroll_revoker Scroll(auto_revoke_t, Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler const& value) const;
    void Scroll(event_token const& token) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IScrollBar> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IScrollBar<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IScrollBarStatics
{
    Windows::UI::Xaml::DependencyProperty OrientationProperty() const;
    Windows::UI::Xaml::DependencyProperty ViewportSizeProperty() const;
    Windows::UI::Xaml::DependencyProperty IndicatorModeProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IScrollBarStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IScrollBarStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IScrollEventArgs
{
    double NewValue() const;
    Windows::UI::Xaml::Controls::Primitives::ScrollEventType ScrollEventType() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IScrollEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IScrollSnapPointsInfo
{
    bool AreHorizontalSnapPointsRegular() const;
    bool AreVerticalSnapPointsRegular() const;
    event_token HorizontalSnapPointsChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const;
    using HorizontalSnapPointsChanged_revoker = event_revoker<Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo>;
    HorizontalSnapPointsChanged_revoker HorizontalSnapPointsChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const;
    void HorizontalSnapPointsChanged(event_token const& token) const;
    event_token VerticalSnapPointsChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const;
    using VerticalSnapPointsChanged_revoker = event_revoker<Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo>;
    VerticalSnapPointsChanged_revoker VerticalSnapPointsChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const;
    void VerticalSnapPointsChanged(event_token const& token) const;
    Windows::Foundation::Collections::IVectorView<float> GetIrregularSnapPoints(Windows::UI::Xaml::Controls::Orientation const& orientation, Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment const& alignment) const;
    float GetRegularSnapPoints(Windows::UI::Xaml::Controls::Orientation const& orientation, Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment const& alignment, float& offset) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IScrollSnapPointsInfo<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_ISelector
{
    int32_t SelectedIndex() const;
    void SelectedIndex(int32_t value) const;
    Windows::Foundation::IInspectable SelectedItem() const;
    void SelectedItem(Windows::Foundation::IInspectable const& value) const;
    Windows::Foundation::IInspectable SelectedValue() const;
    void SelectedValue(Windows::Foundation::IInspectable const& value) const;
    hstring SelectedValuePath() const;
    void SelectedValuePath(param::hstring const& value) const;
    Windows::Foundation::IReference<bool> IsSynchronizedWithCurrentItem() const;
    void IsSynchronizedWithCurrentItem(optional<bool> const& value) const;
    event_token SelectionChanged(Windows::UI::Xaml::Controls::SelectionChangedEventHandler const& value) const;
    using SelectionChanged_revoker = event_revoker<Windows::UI::Xaml::Controls::Primitives::ISelector>;
    SelectionChanged_revoker SelectionChanged(auto_revoke_t, Windows::UI::Xaml::Controls::SelectionChangedEventHandler const& value) const;
    void SelectionChanged(event_token const& token) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ISelector> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ISelector<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_ISelectorFactory
{
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ISelectorFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ISelectorFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_ISelectorItem
{
    bool IsSelected() const;
    void IsSelected(bool value) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ISelectorItem> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ISelectorItem<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_ISelectorItemFactory
{
    Windows::UI::Xaml::Controls::Primitives::SelectorItem CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ISelectorItemFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ISelectorItemFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_ISelectorItemStatics
{
    Windows::UI::Xaml::DependencyProperty IsSelectedProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ISelectorItemStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ISelectorItemStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_ISelectorStatics
{
    Windows::UI::Xaml::DependencyProperty SelectedIndexProperty() const;
    Windows::UI::Xaml::DependencyProperty SelectedItemProperty() const;
    Windows::UI::Xaml::DependencyProperty SelectedValueProperty() const;
    Windows::UI::Xaml::DependencyProperty SelectedValuePathProperty() const;
    Windows::UI::Xaml::DependencyProperty IsSynchronizedWithCurrentItemProperty() const;
    bool GetIsSelectionActive(Windows::UI::Xaml::DependencyObject const& element) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ISelectorStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ISelectorStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_ISettingsFlyoutTemplateSettings
{
    Windows::UI::Xaml::Media::Brush HeaderBackground() const;
    Windows::UI::Xaml::Media::Brush HeaderForeground() const;
    Windows::UI::Xaml::Media::Brush BorderBrush() const;
    Windows::UI::Xaml::Thickness BorderThickness() const;
    Windows::UI::Xaml::Media::ImageSource IconSource() const;
    Windows::UI::Xaml::Media::Animation::TransitionCollection ContentTransitions() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ISettingsFlyoutTemplateSettings<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_ISplitViewTemplateSettings
{
    double OpenPaneLength() const;
    double NegativeOpenPaneLength() const;
    double OpenPaneLengthMinusCompactLength() const;
    double NegativeOpenPaneLengthMinusCompactLength() const;
    Windows::UI::Xaml::GridLength OpenPaneGridLength() const;
    Windows::UI::Xaml::GridLength CompactPaneGridLength() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ISplitViewTemplateSettings<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IThumb
{
    bool IsDragging() const;
    event_token DragStarted(Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler const& value) const;
    using DragStarted_revoker = event_revoker<Windows::UI::Xaml::Controls::Primitives::IThumb>;
    DragStarted_revoker DragStarted(auto_revoke_t, Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler const& value) const;
    void DragStarted(event_token const& token) const;
    event_token DragDelta(Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler const& value) const;
    using DragDelta_revoker = event_revoker<Windows::UI::Xaml::Controls::Primitives::IThumb>;
    DragDelta_revoker DragDelta(auto_revoke_t, Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler const& value) const;
    void DragDelta(event_token const& token) const;
    event_token DragCompleted(Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler const& value) const;
    using DragCompleted_revoker = event_revoker<Windows::UI::Xaml::Controls::Primitives::IThumb>;
    DragCompleted_revoker DragCompleted(auto_revoke_t, Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler const& value) const;
    void DragCompleted(event_token const& token) const;
    void CancelDrag() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IThumb> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IThumb<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IThumbStatics
{
    Windows::UI::Xaml::DependencyProperty IsDraggingProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IThumbStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IThumbStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_ITickBar
{
    Windows::UI::Xaml::Media::Brush Fill() const;
    void Fill(Windows::UI::Xaml::Media::Brush const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ITickBar> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ITickBar<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_ITickBarStatics
{
    Windows::UI::Xaml::DependencyProperty FillProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ITickBarStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ITickBarStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IToggleButton
{
    Windows::Foundation::IReference<bool> IsChecked() const;
    void IsChecked(optional<bool> const& value) const;
    bool IsThreeState() const;
    void IsThreeState(bool value) const;
    event_token Checked(Windows::UI::Xaml::RoutedEventHandler const& value) const;
    using Checked_revoker = event_revoker<Windows::UI::Xaml::Controls::Primitives::IToggleButton>;
    Checked_revoker Checked(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& value) const;
    void Checked(event_token const& token) const;
    event_token Unchecked(Windows::UI::Xaml::RoutedEventHandler const& value) const;
    using Unchecked_revoker = event_revoker<Windows::UI::Xaml::Controls::Primitives::IToggleButton>;
    Unchecked_revoker Unchecked(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& value) const;
    void Unchecked(event_token const& token) const;
    event_token Indeterminate(Windows::UI::Xaml::RoutedEventHandler const& value) const;
    using Indeterminate_revoker = event_revoker<Windows::UI::Xaml::Controls::Primitives::IToggleButton>;
    Indeterminate_revoker Indeterminate(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& value) const;
    void Indeterminate(event_token const& token) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IToggleButton> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IToggleButton<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IToggleButtonFactory
{
    Windows::UI::Xaml::Controls::Primitives::ToggleButton CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IToggleButtonFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IToggleButtonFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IToggleButtonOverrides
{
    void OnToggle() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IToggleButtonOverrides<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IToggleButtonStatics
{
    Windows::UI::Xaml::DependencyProperty IsCheckedProperty() const;
    Windows::UI::Xaml::DependencyProperty IsThreeStateProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IToggleButtonStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IToggleButtonStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IToggleSwitchTemplateSettings
{
    double KnobCurrentToOnOffset() const;
    double KnobCurrentToOffOffset() const;
    double KnobOnToOffOffset() const;
    double KnobOffToOnOffset() const;
    double CurtainCurrentToOnOffset() const;
    double CurtainCurrentToOffOffset() const;
    double CurtainOnToOffOffset() const;
    double CurtainOffToOnOffset() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IToggleSwitchTemplateSettings<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Controls_Primitives_IToolTipTemplateSettings
{
    double FromHorizontalOffset() const;
    double FromVerticalOffset() const;
};
template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings> { template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IToolTipTemplateSettings<D>; };

struct struct_Windows_UI_Xaml_Controls_Primitives_GeneratorPosition
{
    int32_t Index;
    int32_t Offset;
};
template <> struct abi<Windows::UI::Xaml::Controls::Primitives::GeneratorPosition>{ using type = struct_Windows_UI_Xaml_Controls_Primitives_GeneratorPosition; };


template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_KeyboardAcceleratorTextMinWidth(double* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_ClipRect(Windows::Foundation::Rect* value) noexcept = 0;
    virtual HRESULT __stdcall get_CompactVerticalDelta(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_CompactRootMargin(struct struct_Windows_UI_Xaml_Thickness* value) noexcept = 0;
    virtual HRESULT __stdcall get_MinimalVerticalDelta(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_MinimalRootMargin(struct struct_Windows_UI_Xaml_Thickness* value) noexcept = 0;
    virtual HRESULT __stdcall get_HiddenVerticalDelta(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_HiddenRootMargin(struct struct_Windows_UI_Xaml_Thickness* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_KeyboardAcceleratorTextMinWidth(double* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IButtonBase>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_ClickMode(Windows::UI::Xaml::Controls::ClickMode* value) noexcept = 0;
    virtual HRESULT __stdcall put_ClickMode(Windows::UI::Xaml::Controls::ClickMode value) noexcept = 0;
    virtual HRESULT __stdcall get_IsPointerOver(bool* value) noexcept = 0;
    virtual HRESULT __stdcall get_IsPressed(bool* value) noexcept = 0;
    virtual HRESULT __stdcall get_Command(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_Command(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_CommandParameter(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_CommandParameter(void* value) noexcept = 0;
    virtual HRESULT __stdcall add_Click(void* value, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_Click(event_token token) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IButtonBaseFactory>{ struct type : IInspectable
{
    virtual HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_ClickModeProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_IsPointerOverProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_IsPressedProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_CommandProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_CommandParameterProperty(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ICalendarPanel>{ struct type : IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_MinViewWidth(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_HeaderText(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall get_WeekDay1(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall get_WeekDay2(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall get_WeekDay3(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall get_WeekDay4(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall get_WeekDay5(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall get_WeekDay6(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall get_WeekDay7(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall get_HasMoreContentAfter(bool* value) noexcept = 0;
    virtual HRESULT __stdcall get_HasMoreContentBefore(bool* value) noexcept = 0;
    virtual HRESULT __stdcall get_HasMoreViews(bool* value) noexcept = 0;
    virtual HRESULT __stdcall get_ClipRect(Windows::Foundation::Rect* value) noexcept = 0;
    virtual HRESULT __stdcall get_CenterX(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_CenterY(double* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ICarouselPanel>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_CanVerticallyScroll(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_CanVerticallyScroll(bool value) noexcept = 0;
    virtual HRESULT __stdcall get_CanHorizontallyScroll(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_CanHorizontallyScroll(bool value) noexcept = 0;
    virtual HRESULT __stdcall get_ExtentWidth(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_ExtentHeight(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_ViewportWidth(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_ViewportHeight(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_HorizontalOffset(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_VerticalOffset(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_ScrollOwner(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_ScrollOwner(void* value) noexcept = 0;
    virtual HRESULT __stdcall LineUp() noexcept = 0;
    virtual HRESULT __stdcall LineDown() noexcept = 0;
    virtual HRESULT __stdcall LineLeft() noexcept = 0;
    virtual HRESULT __stdcall LineRight() noexcept = 0;
    virtual HRESULT __stdcall PageUp() noexcept = 0;
    virtual HRESULT __stdcall PageDown() noexcept = 0;
    virtual HRESULT __stdcall PageLeft() noexcept = 0;
    virtual HRESULT __stdcall PageRight() noexcept = 0;
    virtual HRESULT __stdcall MouseWheelUp() noexcept = 0;
    virtual HRESULT __stdcall MouseWheelDown() noexcept = 0;
    virtual HRESULT __stdcall MouseWheelLeft() noexcept = 0;
    virtual HRESULT __stdcall MouseWheelRight() noexcept = 0;
    virtual HRESULT __stdcall SetHorizontalOffset(double offset) noexcept = 0;
    virtual HRESULT __stdcall SetVerticalOffset(double offset) noexcept = 0;
    virtual HRESULT __stdcall MakeVisible(void* visual, Windows::Foundation::Rect rectangle, Windows::Foundation::Rect* returnValue) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ICarouselPanelFactory>{ struct type : IInspectable
{
    virtual HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IColorPickerSlider>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_ColorChannel(Windows::UI::Xaml::Controls::ColorPickerHsvChannel* result) noexcept = 0;
    virtual HRESULT __stdcall put_ColorChannel(Windows::UI::Xaml::Controls::ColorPickerHsvChannel value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderFactory>{ struct type : IInspectable
{
    virtual HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_ColorChannelProperty(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IColorSpectrum>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Color(struct struct_Windows_UI_Color* result) noexcept = 0;
    virtual HRESULT __stdcall put_Color(struct struct_Windows_UI_Color value) noexcept = 0;
    virtual HRESULT __stdcall get_HsvColor(Windows::Foundation::Numerics::float4* result) noexcept = 0;
    virtual HRESULT __stdcall put_HsvColor(Windows::Foundation::Numerics::float4 value) noexcept = 0;
    virtual HRESULT __stdcall get_MinHue(int32_t* result) noexcept = 0;
    virtual HRESULT __stdcall put_MinHue(int32_t value) noexcept = 0;
    virtual HRESULT __stdcall get_MaxHue(int32_t* result) noexcept = 0;
    virtual HRESULT __stdcall put_MaxHue(int32_t value) noexcept = 0;
    virtual HRESULT __stdcall get_MinSaturation(int32_t* result) noexcept = 0;
    virtual HRESULT __stdcall put_MinSaturation(int32_t value) noexcept = 0;
    virtual HRESULT __stdcall get_MaxSaturation(int32_t* result) noexcept = 0;
    virtual HRESULT __stdcall put_MaxSaturation(int32_t value) noexcept = 0;
    virtual HRESULT __stdcall get_MinValue(int32_t* result) noexcept = 0;
    virtual HRESULT __stdcall put_MinValue(int32_t value) noexcept = 0;
    virtual HRESULT __stdcall get_MaxValue(int32_t* result) noexcept = 0;
    virtual HRESULT __stdcall put_MaxValue(int32_t value) noexcept = 0;
    virtual HRESULT __stdcall get_Shape(Windows::UI::Xaml::Controls::ColorSpectrumShape* result) noexcept = 0;
    virtual HRESULT __stdcall put_Shape(Windows::UI::Xaml::Controls::ColorSpectrumShape value) noexcept = 0;
    virtual HRESULT __stdcall get_Components(Windows::UI::Xaml::Controls::ColorSpectrumComponents* result) noexcept = 0;
    virtual HRESULT __stdcall put_Components(Windows::UI::Xaml::Controls::ColorSpectrumComponents value) noexcept = 0;
    virtual HRESULT __stdcall add_ColorChanged(void* value, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_ColorChanged(event_token token) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IColorSpectrumFactory>{ struct type : IInspectable
{
    virtual HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_ColorProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_HsvColorProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_MinHueProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_MaxHueProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_MinSaturationProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_MaxSaturationProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_MinValueProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_MaxValueProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_ShapeProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_ComponentsProperty(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_DropDownOpenedHeight(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_DropDownClosedHeight(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_DropDownOffset(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedItemDirection(Windows::UI::Xaml::Controls::Primitives::AnimationDirection* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings2>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_DropDownContentMinWidth(double* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_ContentHeight(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_OverflowContentClipRect(Windows::Foundation::Rect* value) noexcept = 0;
    virtual HRESULT __stdcall get_OverflowContentMinWidth(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_OverflowContentMaxHeight(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_OverflowContentHorizontalOffset(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_OverflowContentHeight(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_NegativeOverflowContentHeight(double* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings2>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_OverflowContentMaxWidth(double* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings3>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_EffectiveOverflowButtonVisibility(Windows::UI::Xaml::Visibility* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_HorizontalChange(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_VerticalChange(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_Canceled(bool* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgsFactory>{ struct type : IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithHorizontalChangeVerticalChangeAndCanceled(double horizontalChange, double verticalChange, bool canceled, void* outer, void** inner, void** instance) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_HorizontalChange(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_VerticalChange(double* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgsFactory>{ struct type : IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithHorizontalChangeAndVerticalChange(double horizontalChange, double verticalChange, void* outer, void** inner, void** instance) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_HorizontalOffset(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_VerticalOffset(double* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgsFactory>{ struct type : IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithHorizontalOffsetAndVerticalOffset(double horizontalOffset, double verticalOffset, void* outer, void** inner, void** instance) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Placement(Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode* value) noexcept = 0;
    virtual HRESULT __stdcall put_Placement(Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode value) noexcept = 0;
    virtual HRESULT __stdcall add_Opened(void* value, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_Opened(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_Closed(void* value, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_Closed(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_Opening(void* value, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_Opening(event_token token) noexcept = 0;
    virtual HRESULT __stdcall ShowAt(void* placementTarget) noexcept = 0;
    virtual HRESULT __stdcall Hide() noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Target(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_AllowFocusOnInteraction(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_AllowFocusOnInteraction(bool value) noexcept = 0;
    virtual HRESULT __stdcall get_LightDismissOverlayMode(Windows::UI::Xaml::Controls::LightDismissOverlayMode* value) noexcept = 0;
    virtual HRESULT __stdcall put_LightDismissOverlayMode(Windows::UI::Xaml::Controls::LightDismissOverlayMode value) noexcept = 0;
    virtual HRESULT __stdcall get_AllowFocusWhenDisabled(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_AllowFocusWhenDisabled(bool value) noexcept = 0;
    virtual HRESULT __stdcall get_ElementSoundMode(Windows::UI::Xaml::ElementSoundMode* value) noexcept = 0;
    virtual HRESULT __stdcall put_ElementSoundMode(Windows::UI::Xaml::ElementSoundMode value) noexcept = 0;
    virtual HRESULT __stdcall add_Closing(void* value, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_Closing(event_token token) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_OverlayInputPassThroughElement(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_OverlayInputPassThroughElement(void* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4>{ struct type : IInspectable
{
    virtual HRESULT __stdcall TryInvokeKeyboardAccelerator(void* args) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Cancel(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_Cancel(bool value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseFactory>{ struct type : IInspectable
{
    virtual HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides>{ struct type : IInspectable
{
    virtual HRESULT __stdcall CreatePresenter(void** returnValue) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4>{ struct type : IInspectable
{
    virtual HRESULT __stdcall OnProcessKeyboardAccelerators(void* args) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_PlacementProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_AttachedFlyoutProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall GetAttachedFlyout(void* element, void** value) noexcept = 0;
    virtual HRESULT __stdcall SetAttachedFlyout(void* element, void* value) noexcept = 0;
    virtual HRESULT __stdcall ShowAttachedFlyout(void* flyoutOwner) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_AllowFocusOnInteractionProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_LightDismissOverlayModeProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_AllowFocusWhenDisabledProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_ElementSoundModeProperty(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics3>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_OverlayInputPassThroughElementProperty(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper>{ struct type : IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelperStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall FromIndexAndOffset(int32_t index, int32_t offset, struct struct_Windows_UI_Xaml_Controls_Primitives_GeneratorPosition* returnValue) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_SelectionCheckMarkVisualEnabled(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_SelectionCheckMarkVisualEnabled(bool value) noexcept = 0;
    virtual HRESULT __stdcall get_CheckHintBrush(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_CheckHintBrush(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_CheckSelectingBrush(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_CheckSelectingBrush(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_CheckBrush(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_CheckBrush(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_DragBackground(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_DragBackground(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_DragForeground(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_DragForeground(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_FocusBorderBrush(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_FocusBorderBrush(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_PlaceholderBackground(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_PlaceholderBackground(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_PointerOverBackground(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_PointerOverBackground(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedBackground(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_SelectedBackground(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedForeground(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_SelectedForeground(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedPointerOverBackground(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_SelectedPointerOverBackground(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedPointerOverBorderBrush(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_SelectedPointerOverBorderBrush(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedBorderThickness(struct struct_Windows_UI_Xaml_Thickness* value) noexcept = 0;
    virtual HRESULT __stdcall put_SelectedBorderThickness(struct struct_Windows_UI_Xaml_Thickness value) noexcept = 0;
    virtual HRESULT __stdcall get_DisabledOpacity(double* value) noexcept = 0;
    virtual HRESULT __stdcall put_DisabledOpacity(double value) noexcept = 0;
    virtual HRESULT __stdcall get_DragOpacity(double* value) noexcept = 0;
    virtual HRESULT __stdcall put_DragOpacity(double value) noexcept = 0;
    virtual HRESULT __stdcall get_ReorderHintOffset(double* value) noexcept = 0;
    virtual HRESULT __stdcall put_ReorderHintOffset(double value) noexcept = 0;
    virtual HRESULT __stdcall get_GridViewItemPresenterHorizontalContentAlignment(Windows::UI::Xaml::HorizontalAlignment* value) noexcept = 0;
    virtual HRESULT __stdcall put_GridViewItemPresenterHorizontalContentAlignment(Windows::UI::Xaml::HorizontalAlignment value) noexcept = 0;
    virtual HRESULT __stdcall get_GridViewItemPresenterVerticalContentAlignment(Windows::UI::Xaml::VerticalAlignment* value) noexcept = 0;
    virtual HRESULT __stdcall put_GridViewItemPresenterVerticalContentAlignment(Windows::UI::Xaml::VerticalAlignment value) noexcept = 0;
    virtual HRESULT __stdcall get_GridViewItemPresenterPadding(struct struct_Windows_UI_Xaml_Thickness* value) noexcept = 0;
    virtual HRESULT __stdcall put_GridViewItemPresenterPadding(struct struct_Windows_UI_Xaml_Thickness value) noexcept = 0;
    virtual HRESULT __stdcall get_PointerOverBackgroundMargin(struct struct_Windows_UI_Xaml_Thickness* value) noexcept = 0;
    virtual HRESULT __stdcall put_PointerOverBackgroundMargin(struct struct_Windows_UI_Xaml_Thickness value) noexcept = 0;
    virtual HRESULT __stdcall get_ContentMargin(struct struct_Windows_UI_Xaml_Thickness* value) noexcept = 0;
    virtual HRESULT __stdcall put_ContentMargin(struct struct_Windows_UI_Xaml_Thickness value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterFactory>{ struct type : IInspectable
{
    virtual HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_SelectionCheckMarkVisualEnabledProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_CheckHintBrushProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_CheckSelectingBrushProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_CheckBrushProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_DragBackgroundProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_DragForegroundProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_FocusBorderBrushProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_PlaceholderBackgroundProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_PointerOverBackgroundProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedBackgroundProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedForegroundProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedPointerOverBackgroundProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedPointerOverBorderBrushProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedBorderThicknessProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_DisabledOpacityProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_DragOpacityProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_ReorderHintOffsetProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_GridViewItemPresenterHorizontalContentAlignmentProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_GridViewItemPresenterVerticalContentAlignmentProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_GridViewItemPresenterPaddingProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_PointerOverBackgroundMarginProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_ContentMarginProperty(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_DragItemsCount(int32_t* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Action(int32_t* value) noexcept = 0;
    virtual HRESULT __stdcall get_Position(struct struct_Windows_UI_Xaml_Controls_Primitives_GeneratorPosition* value) noexcept = 0;
    virtual HRESULT __stdcall get_OldPosition(struct struct_Windows_UI_Xaml_Controls_Primitives_GeneratorPosition* value) noexcept = 0;
    virtual HRESULT __stdcall get_ItemCount(int32_t* value) noexcept = 0;
    virtual HRESULT __stdcall get_ItemUICount(int32_t* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Enabled(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_Enabled(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_Disabled(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_Disabled(void* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverterStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_EnabledProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_DisabledProperty(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Enabled(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_Enabled(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_Disabled(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_Disabled(void* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverterStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_EnabledProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_DisabledProperty(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ILayoutInformation>{ struct type : IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall GetLayoutExceptionElement(void* dispatcher, void** element) noexcept = 0;
    virtual HRESULT __stdcall GetLayoutSlot(void* element, Windows::Foundation::Rect* slot) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics2>{ struct type : IInspectable
{
    virtual HRESULT __stdcall GetAvailableSize(void* element, Windows::Foundation::Size* availableSize) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_SelectionCheckMarkVisualEnabled(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_SelectionCheckMarkVisualEnabled(bool value) noexcept = 0;
    virtual HRESULT __stdcall get_CheckHintBrush(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_CheckHintBrush(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_CheckSelectingBrush(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_CheckSelectingBrush(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_CheckBrush(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_CheckBrush(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_DragBackground(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_DragBackground(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_DragForeground(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_DragForeground(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_FocusBorderBrush(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_FocusBorderBrush(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_PlaceholderBackground(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_PlaceholderBackground(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_PointerOverBackground(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_PointerOverBackground(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedBackground(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_SelectedBackground(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedForeground(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_SelectedForeground(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedPointerOverBackground(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_SelectedPointerOverBackground(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedPointerOverBorderBrush(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_SelectedPointerOverBorderBrush(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedBorderThickness(struct struct_Windows_UI_Xaml_Thickness* value) noexcept = 0;
    virtual HRESULT __stdcall put_SelectedBorderThickness(struct struct_Windows_UI_Xaml_Thickness value) noexcept = 0;
    virtual HRESULT __stdcall get_DisabledOpacity(double* value) noexcept = 0;
    virtual HRESULT __stdcall put_DisabledOpacity(double value) noexcept = 0;
    virtual HRESULT __stdcall get_DragOpacity(double* value) noexcept = 0;
    virtual HRESULT __stdcall put_DragOpacity(double value) noexcept = 0;
    virtual HRESULT __stdcall get_ReorderHintOffset(double* value) noexcept = 0;
    virtual HRESULT __stdcall put_ReorderHintOffset(double value) noexcept = 0;
    virtual HRESULT __stdcall get_ListViewItemPresenterHorizontalContentAlignment(Windows::UI::Xaml::HorizontalAlignment* value) noexcept = 0;
    virtual HRESULT __stdcall put_ListViewItemPresenterHorizontalContentAlignment(Windows::UI::Xaml::HorizontalAlignment value) noexcept = 0;
    virtual HRESULT __stdcall get_ListViewItemPresenterVerticalContentAlignment(Windows::UI::Xaml::VerticalAlignment* value) noexcept = 0;
    virtual HRESULT __stdcall put_ListViewItemPresenterVerticalContentAlignment(Windows::UI::Xaml::VerticalAlignment value) noexcept = 0;
    virtual HRESULT __stdcall get_ListViewItemPresenterPadding(struct struct_Windows_UI_Xaml_Thickness* value) noexcept = 0;
    virtual HRESULT __stdcall put_ListViewItemPresenterPadding(struct struct_Windows_UI_Xaml_Thickness value) noexcept = 0;
    virtual HRESULT __stdcall get_PointerOverBackgroundMargin(struct struct_Windows_UI_Xaml_Thickness* value) noexcept = 0;
    virtual HRESULT __stdcall put_PointerOverBackgroundMargin(struct struct_Windows_UI_Xaml_Thickness value) noexcept = 0;
    virtual HRESULT __stdcall get_ContentMargin(struct struct_Windows_UI_Xaml_Thickness* value) noexcept = 0;
    virtual HRESULT __stdcall put_ContentMargin(struct struct_Windows_UI_Xaml_Thickness value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_SelectedPressedBackground(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_SelectedPressedBackground(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_PressedBackground(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_PressedBackground(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_CheckBoxBrush(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_CheckBoxBrush(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_FocusSecondaryBorderBrush(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_FocusSecondaryBorderBrush(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_CheckMode(Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode* value) noexcept = 0;
    virtual HRESULT __stdcall put_CheckMode(Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode value) noexcept = 0;
    virtual HRESULT __stdcall get_PointerOverForeground(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_PointerOverForeground(void* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter3>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_RevealBackground(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_RevealBackground(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_RevealBorderBrush(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_RevealBorderBrush(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_RevealBorderThickness(struct struct_Windows_UI_Xaml_Thickness* value) noexcept = 0;
    virtual HRESULT __stdcall put_RevealBorderThickness(struct struct_Windows_UI_Xaml_Thickness value) noexcept = 0;
    virtual HRESULT __stdcall get_RevealBackgroundShowsAboveContent(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_RevealBackgroundShowsAboveContent(bool value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterFactory>{ struct type : IInspectable
{
    virtual HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_SelectionCheckMarkVisualEnabledProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_CheckHintBrushProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_CheckSelectingBrushProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_CheckBrushProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_DragBackgroundProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_DragForegroundProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_FocusBorderBrushProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_PlaceholderBackgroundProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_PointerOverBackgroundProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedBackgroundProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedForegroundProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedPointerOverBackgroundProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedPointerOverBorderBrushProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedBorderThicknessProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_DisabledOpacityProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_DragOpacityProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_ReorderHintOffsetProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_ListViewItemPresenterHorizontalContentAlignmentProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_ListViewItemPresenterVerticalContentAlignmentProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_ListViewItemPresenterPaddingProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_PointerOverBackgroundMarginProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_ContentMarginProperty(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_SelectedPressedBackgroundProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_PressedBackgroundProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_CheckBoxBrushProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_FocusSecondaryBorderBrushProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_CheckModeProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_PointerOverForegroundProperty(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics3>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_RevealBackgroundProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_RevealBorderBrushProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_RevealBorderThicknessProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_RevealBackgroundShowsAboveContentProperty(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_DragItemsCount(int32_t* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ILoopingSelector>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_ShouldLoop(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_ShouldLoop(bool value) noexcept = 0;
    virtual HRESULT __stdcall get_Items(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_Items(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedIndex(int32_t* value) noexcept = 0;
    virtual HRESULT __stdcall put_SelectedIndex(int32_t value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedItem(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_SelectedItem(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_ItemWidth(int32_t* value) noexcept = 0;
    virtual HRESULT __stdcall put_ItemWidth(int32_t value) noexcept = 0;
    virtual HRESULT __stdcall get_ItemHeight(int32_t* value) noexcept = 0;
    virtual HRESULT __stdcall put_ItemHeight(int32_t value) noexcept = 0;
    virtual HRESULT __stdcall get_ItemTemplate(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_ItemTemplate(void* value) noexcept = 0;
    virtual HRESULT __stdcall add_SelectionChanged(void* value, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_SelectionChanged(event_token token) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem>{ struct type : IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel>{ struct type : IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_ShouldLoopProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_ItemsProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedIndexProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedItemProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_ItemWidthProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_ItemHeightProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_ItemTemplateProperty(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutItemTemplateSettings>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_KeyboardAcceleratorTextMinWidth(double* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_FlyoutContentMinWidth(double* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_CanVerticallyScroll(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_CanVerticallyScroll(bool value) noexcept = 0;
    virtual HRESULT __stdcall get_CanHorizontallyScroll(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_CanHorizontallyScroll(bool value) noexcept = 0;
    virtual HRESULT __stdcall get_ExtentWidth(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_ExtentHeight(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_ViewportWidth(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_ViewportHeight(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_HorizontalOffset(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_VerticalOffset(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_ScrollOwner(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_ScrollOwner(void* value) noexcept = 0;
    virtual HRESULT __stdcall LineUp() noexcept = 0;
    virtual HRESULT __stdcall LineDown() noexcept = 0;
    virtual HRESULT __stdcall LineLeft() noexcept = 0;
    virtual HRESULT __stdcall LineRight() noexcept = 0;
    virtual HRESULT __stdcall PageUp() noexcept = 0;
    virtual HRESULT __stdcall PageDown() noexcept = 0;
    virtual HRESULT __stdcall PageLeft() noexcept = 0;
    virtual HRESULT __stdcall PageRight() noexcept = 0;
    virtual HRESULT __stdcall MouseWheelUp() noexcept = 0;
    virtual HRESULT __stdcall MouseWheelDown() noexcept = 0;
    virtual HRESULT __stdcall MouseWheelLeft() noexcept = 0;
    virtual HRESULT __stdcall MouseWheelRight() noexcept = 0;
    virtual HRESULT __stdcall SetHorizontalOffset(double offset) noexcept = 0;
    virtual HRESULT __stdcall SetVerticalOffset(double offset) noexcept = 0;
    virtual HRESULT __stdcall MakeVisible(void* visual, Windows::Foundation::Rect rectangle, Windows::Foundation::Rect* returnValue) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanelFactory>{ struct type : IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase>{ struct type : IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseFactory>{ struct type : IInspectable
{
    virtual HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides>{ struct type : IInspectable
{
    virtual HRESULT __stdcall OnConfirmed() noexcept = 0;
    virtual HRESULT __stdcall ShouldShowConfirmationButtons(bool* returnValue) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_TitleProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall GetTitle(void* element, HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall SetTitle(void* element, HSTRING value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem>{ struct type : IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItemFactory>{ struct type : IInspectable
{
    virtual HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel>{ struct type : IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPivotPanel>{ struct type : IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPopup>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Child(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_Child(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_IsOpen(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_IsOpen(bool value) noexcept = 0;
    virtual HRESULT __stdcall get_HorizontalOffset(double* value) noexcept = 0;
    virtual HRESULT __stdcall put_HorizontalOffset(double value) noexcept = 0;
    virtual HRESULT __stdcall get_VerticalOffset(double* value) noexcept = 0;
    virtual HRESULT __stdcall put_VerticalOffset(double value) noexcept = 0;
    virtual HRESULT __stdcall get_ChildTransitions(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_ChildTransitions(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_IsLightDismissEnabled(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_IsLightDismissEnabled(bool value) noexcept = 0;
    virtual HRESULT __stdcall add_Opened(void* value, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_Opened(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_Closed(void* value, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_Closed(event_token token) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPopup2>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_LightDismissOverlayMode(Windows::UI::Xaml::Controls::LightDismissOverlayMode* value) noexcept = 0;
    virtual HRESULT __stdcall put_LightDismissOverlayMode(Windows::UI::Xaml::Controls::LightDismissOverlayMode value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPopupStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_ChildProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_IsOpenProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_HorizontalOffsetProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_VerticalOffsetProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_ChildTransitionsProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_IsLightDismissEnabledProperty(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPopupStatics2>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_LightDismissOverlayModeProperty(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_EllipseDiameter(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_EllipseOffset(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_EllipseAnimationWellPosition(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_EllipseAnimationEndPosition(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_ContainerAnimationStartPosition(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_ContainerAnimationEndPosition(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_IndicatorLengthDelta(double* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_EllipseDiameter(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_EllipseOffset(struct struct_Windows_UI_Xaml_Thickness* value) noexcept = 0;
    virtual HRESULT __stdcall get_MaxSideLength(double* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IRangeBase>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Minimum(double* value) noexcept = 0;
    virtual HRESULT __stdcall put_Minimum(double value) noexcept = 0;
    virtual HRESULT __stdcall get_Maximum(double* value) noexcept = 0;
    virtual HRESULT __stdcall put_Maximum(double value) noexcept = 0;
    virtual HRESULT __stdcall get_SmallChange(double* value) noexcept = 0;
    virtual HRESULT __stdcall put_SmallChange(double value) noexcept = 0;
    virtual HRESULT __stdcall get_LargeChange(double* value) noexcept = 0;
    virtual HRESULT __stdcall put_LargeChange(double value) noexcept = 0;
    virtual HRESULT __stdcall get_Value(double* value) noexcept = 0;
    virtual HRESULT __stdcall put_Value(double value) noexcept = 0;
    virtual HRESULT __stdcall add_ValueChanged(void* value, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_ValueChanged(event_token token) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IRangeBaseFactory>{ struct type : IInspectable
{
    virtual HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides>{ struct type : IInspectable
{
    virtual HRESULT __stdcall OnMinimumChanged(double oldMinimum, double newMinimum) noexcept = 0;
    virtual HRESULT __stdcall OnMaximumChanged(double oldMaximum, double newMaximum) noexcept = 0;
    virtual HRESULT __stdcall OnValueChanged(double oldValue, double newValue) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_MinimumProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_MaximumProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_SmallChangeProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_LargeChangeProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_ValueProperty(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_OldValue(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_NewValue(double* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IRepeatButton>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Delay(int32_t* value) noexcept = 0;
    virtual HRESULT __stdcall put_Delay(int32_t value) noexcept = 0;
    virtual HRESULT __stdcall get_Interval(int32_t* value) noexcept = 0;
    virtual HRESULT __stdcall put_Interval(int32_t value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IRepeatButtonStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_DelayProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_IntervalProperty(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IScrollBar>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Orientation(Windows::UI::Xaml::Controls::Orientation* value) noexcept = 0;
    virtual HRESULT __stdcall put_Orientation(Windows::UI::Xaml::Controls::Orientation value) noexcept = 0;
    virtual HRESULT __stdcall get_ViewportSize(double* value) noexcept = 0;
    virtual HRESULT __stdcall put_ViewportSize(double value) noexcept = 0;
    virtual HRESULT __stdcall get_IndicatorMode(Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode* value) noexcept = 0;
    virtual HRESULT __stdcall put_IndicatorMode(Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode value) noexcept = 0;
    virtual HRESULT __stdcall add_Scroll(void* value, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_Scroll(event_token token) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IScrollBarStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_OrientationProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_ViewportSizeProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_IndicatorModeProperty(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_NewValue(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_ScrollEventType(Windows::UI::Xaml::Controls::Primitives::ScrollEventType* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_AreHorizontalSnapPointsRegular(bool* value) noexcept = 0;
    virtual HRESULT __stdcall get_AreVerticalSnapPointsRegular(bool* value) noexcept = 0;
    virtual HRESULT __stdcall add_HorizontalSnapPointsChanged(void* value, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_HorizontalSnapPointsChanged(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_VerticalSnapPointsChanged(void* value, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_VerticalSnapPointsChanged(event_token token) noexcept = 0;
    virtual HRESULT __stdcall GetIrregularSnapPoints(Windows::UI::Xaml::Controls::Orientation orientation, Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment alignment, void** returnValue) noexcept = 0;
    virtual HRESULT __stdcall GetRegularSnapPoints(Windows::UI::Xaml::Controls::Orientation orientation, Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment alignment, float* offset, float* returnValue) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ISelector>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_SelectedIndex(int32_t* value) noexcept = 0;
    virtual HRESULT __stdcall put_SelectedIndex(int32_t value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedItem(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_SelectedItem(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedValue(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_SelectedValue(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedValuePath(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall put_SelectedValuePath(HSTRING value) noexcept = 0;
    virtual HRESULT __stdcall get_IsSynchronizedWithCurrentItem(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_IsSynchronizedWithCurrentItem(void* value) noexcept = 0;
    virtual HRESULT __stdcall add_SelectionChanged(void* value, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_SelectionChanged(event_token token) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ISelectorFactory>{ struct type : IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ISelectorItem>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_IsSelected(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_IsSelected(bool value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ISelectorItemFactory>{ struct type : IInspectable
{
    virtual HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ISelectorItemStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_IsSelectedProperty(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ISelectorStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_SelectedIndexProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedItemProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedValueProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_SelectedValuePathProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_IsSynchronizedWithCurrentItemProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall GetIsSelectionActive(void* element, bool* returnValue) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_HeaderBackground(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_HeaderForeground(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_BorderBrush(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_BorderThickness(struct struct_Windows_UI_Xaml_Thickness* value) noexcept = 0;
    virtual HRESULT __stdcall get_IconSource(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_ContentTransitions(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_OpenPaneLength(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_NegativeOpenPaneLength(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_OpenPaneLengthMinusCompactLength(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_NegativeOpenPaneLengthMinusCompactLength(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_OpenPaneGridLength(struct struct_Windows_UI_Xaml_GridLength* value) noexcept = 0;
    virtual HRESULT __stdcall get_CompactPaneGridLength(struct struct_Windows_UI_Xaml_GridLength* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IThumb>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_IsDragging(bool* value) noexcept = 0;
    virtual HRESULT __stdcall add_DragStarted(void* value, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_DragStarted(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_DragDelta(void* value, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_DragDelta(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_DragCompleted(void* value, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_DragCompleted(event_token token) noexcept = 0;
    virtual HRESULT __stdcall CancelDrag() noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IThumbStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_IsDraggingProperty(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ITickBar>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Fill(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_Fill(void* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ITickBarStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_FillProperty(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IToggleButton>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_IsChecked(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_IsChecked(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_IsThreeState(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_IsThreeState(bool value) noexcept = 0;
    virtual HRESULT __stdcall add_Checked(void* value, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_Checked(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_Unchecked(void* value, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_Unchecked(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_Indeterminate(void* value, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_Indeterminate(event_token token) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IToggleButtonFactory>{ struct type : IInspectable
{
    virtual HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides>{ struct type : IInspectable
{
    virtual HRESULT __stdcall OnToggle() noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IToggleButtonStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_IsCheckedProperty(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_IsThreeStateProperty(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_KnobCurrentToOnOffset(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_KnobCurrentToOffOffset(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_KnobOnToOffOffset(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_KnobOffToOnOffset(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_CurtainCurrentToOnOffset(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_CurtainCurrentToOffOffset(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_CurtainOnToOffOffset(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_CurtainOffToOnOffset(double* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_FromHorizontalOffset(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_FromVerticalOffset(double* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler>{ struct type : IUnknown
{
    virtual HRESULT __stdcall Invoke(void* sender, void* e) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler>{ struct type : IUnknown
{
    virtual HRESULT __stdcall Invoke(void* sender, void* e) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler>{ struct type : IUnknown
{
    virtual HRESULT __stdcall Invoke(void* sender, void* e) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventHandler>{ struct type : IUnknown
{
    virtual HRESULT __stdcall Invoke(void* sender, void* e) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler>{ struct type : IUnknown
{
    virtual HRESULT __stdcall Invoke(void* sender, void* e) noexcept = 0;
};};

template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler>{ struct type : IUnknown
{
    virtual HRESULT __stdcall Invoke(void* sender, void* e) noexcept = 0;
};};

}
