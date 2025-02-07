﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer {

struct DataPackage;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStream;

}

WINRT_EXPORT namespace winrt::Windows::System {

enum class VirtualKey;

}

WINRT_EXPORT namespace winrt::Windows::UI {

struct Color;

}

WINRT_EXPORT namespace winrt::Windows::UI::Core {

enum class CoreAcceleratorKeyEventType;
struct CorePhysicalKeyStatus;

}

WINRT_EXPORT namespace winrt::Windows::Web {

struct IUriToStreamResolver;

}

WINRT_EXPORT namespace winrt::Windows::Web::Http {

struct HttpRequestMessage;

}

WINRT_EXPORT namespace winrt::Windows::Web::UI {

struct IWebViewControl;
struct WebViewControlContentLoadingEventArgs;
struct WebViewControlDOMContentLoadedEventArgs;
struct WebViewControlDeferredPermissionRequest;
struct WebViewControlLongRunningScriptDetectedEventArgs;
struct WebViewControlNavigationCompletedEventArgs;
struct WebViewControlNavigationStartingEventArgs;
struct WebViewControlNewWindowRequestedEventArgs;
struct WebViewControlPermissionRequestedEventArgs;
struct WebViewControlScriptNotifyEventArgs;
struct WebViewControlSettings;
struct WebViewControlUnsupportedUriSchemeIdentifiedEventArgs;
struct WebViewControlUnviewableContentIdentifiedEventArgs;
struct WebViewControlWebResourceRequestedEventArgs;

}

WINRT_EXPORT namespace winrt::Windows::Web::UI {

struct IWebViewControl;

}

WINRT_EXPORT namespace winrt::Windows::Web::UI::Interop {

enum class WebViewControlAcceleratorKeyRoutingStage : int32_t
{
    Tunneling = 0,
    Bubbling = 1,
};

enum class WebViewControlMoveFocusReason : int32_t
{
    Programmatic = 0,
    Next = 1,
    Previous = 2,
};

enum class WebViewControlProcessCapabilityState : int32_t
{
    Default = 0,
    Disabled = 1,
    Enabled = 2,
};

struct IWebViewControlAcceleratorKeyPressedEventArgs;
struct IWebViewControlMoveFocusRequestedEventArgs;
struct IWebViewControlProcess;
struct IWebViewControlProcessFactory;
struct IWebViewControlProcessOptions;
struct IWebViewControlSite;
struct WebViewControl;
struct WebViewControlAcceleratorKeyPressedEventArgs;
struct WebViewControlMoveFocusRequestedEventArgs;
struct WebViewControlProcess;
struct WebViewControlProcessOptions;

}

namespace winrt::impl {

template <> struct category<Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Web::UI::Interop::IWebViewControlMoveFocusRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Web::UI::Interop::IWebViewControlProcess>{ using type = interface_category; };
template <> struct category<Windows::Web::UI::Interop::IWebViewControlProcessFactory>{ using type = interface_category; };
template <> struct category<Windows::Web::UI::Interop::IWebViewControlProcessOptions>{ using type = interface_category; };
template <> struct category<Windows::Web::UI::Interop::IWebViewControlSite>{ using type = interface_category; };
template <> struct category<Windows::Web::UI::Interop::WebViewControl>{ using type = class_category; };
template <> struct category<Windows::Web::UI::Interop::WebViewControlAcceleratorKeyPressedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Web::UI::Interop::WebViewControlMoveFocusRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Web::UI::Interop::WebViewControlProcess>{ using type = class_category; };
template <> struct category<Windows::Web::UI::Interop::WebViewControlProcessOptions>{ using type = class_category; };
template <> struct category<Windows::Web::UI::Interop::WebViewControlAcceleratorKeyRoutingStage>{ using type = enum_category; };
template <> struct category<Windows::Web::UI::Interop::WebViewControlMoveFocusReason>{ using type = enum_category; };
template <> struct category<Windows::Web::UI::Interop::WebViewControlProcessCapabilityState>{ using type = enum_category; };
template <> struct name<Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs>{ static constexpr auto & value{ L"Windows.Web.UI.Interop.IWebViewControlAcceleratorKeyPressedEventArgs" }; };
template <> struct name<Windows::Web::UI::Interop::IWebViewControlMoveFocusRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Web.UI.Interop.IWebViewControlMoveFocusRequestedEventArgs" }; };
template <> struct name<Windows::Web::UI::Interop::IWebViewControlProcess>{ static constexpr auto & value{ L"Windows.Web.UI.Interop.IWebViewControlProcess" }; };
template <> struct name<Windows::Web::UI::Interop::IWebViewControlProcessFactory>{ static constexpr auto & value{ L"Windows.Web.UI.Interop.IWebViewControlProcessFactory" }; };
template <> struct name<Windows::Web::UI::Interop::IWebViewControlProcessOptions>{ static constexpr auto & value{ L"Windows.Web.UI.Interop.IWebViewControlProcessOptions" }; };
template <> struct name<Windows::Web::UI::Interop::IWebViewControlSite>{ static constexpr auto & value{ L"Windows.Web.UI.Interop.IWebViewControlSite" }; };
template <> struct name<Windows::Web::UI::Interop::WebViewControl>{ static constexpr auto & value{ L"Windows.Web.UI.Interop.WebViewControl" }; };
template <> struct name<Windows::Web::UI::Interop::WebViewControlAcceleratorKeyPressedEventArgs>{ static constexpr auto & value{ L"Windows.Web.UI.Interop.WebViewControlAcceleratorKeyPressedEventArgs" }; };
template <> struct name<Windows::Web::UI::Interop::WebViewControlMoveFocusRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Web.UI.Interop.WebViewControlMoveFocusRequestedEventArgs" }; };
template <> struct name<Windows::Web::UI::Interop::WebViewControlProcess>{ static constexpr auto & value{ L"Windows.Web.UI.Interop.WebViewControlProcess" }; };
template <> struct name<Windows::Web::UI::Interop::WebViewControlProcessOptions>{ static constexpr auto & value{ L"Windows.Web.UI.Interop.WebViewControlProcessOptions" }; };
template <> struct name<Windows::Web::UI::Interop::WebViewControlAcceleratorKeyRoutingStage>{ static constexpr auto & value{ L"Windows.Web.UI.Interop.WebViewControlAcceleratorKeyRoutingStage" }; };
template <> struct name<Windows::Web::UI::Interop::WebViewControlMoveFocusReason>{ static constexpr auto & value{ L"Windows.Web.UI.Interop.WebViewControlMoveFocusReason" }; };
template <> struct name<Windows::Web::UI::Interop::WebViewControlProcessCapabilityState>{ static constexpr auto & value{ L"Windows.Web.UI.Interop.WebViewControlProcessCapabilityState" }; };
template <> struct guid<Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs>{ static constexpr GUID value{ 0x77A2A53E,0x7C74,0x437D,{ 0xA2,0x90,0x3A,0xC0,0xD8,0xCD,0x56,0x55 } }; };
template <> struct guid<Windows::Web::UI::Interop::IWebViewControlMoveFocusRequestedEventArgs>{ static constexpr GUID value{ 0x6B2A340D,0x4BD0,0x405E,{ 0xB7,0xC1,0x1E,0x72,0xA4,0x92,0xF4,0x46 } }; };
template <> struct guid<Windows::Web::UI::Interop::IWebViewControlProcess>{ static constexpr GUID value{ 0x02C723EC,0x98D6,0x424A,{ 0xB6,0x3E,0xC6,0x13,0x6C,0x36,0xA0,0xF2 } }; };
template <> struct guid<Windows::Web::UI::Interop::IWebViewControlProcessFactory>{ static constexpr GUID value{ 0x47B65CF9,0xA2D2,0x453C,{ 0xB0,0x97,0xF6,0x77,0x9D,0x4B,0x8E,0x02 } }; };
template <> struct guid<Windows::Web::UI::Interop::IWebViewControlProcessOptions>{ static constexpr GUID value{ 0x1CCA72A7,0x3BD6,0x4826,{ 0x82,0x61,0x6C,0x81,0x89,0x50,0x5D,0x89 } }; };
template <> struct guid<Windows::Web::UI::Interop::IWebViewControlSite>{ static constexpr GUID value{ 0x133F47C6,0x12DC,0x4898,{ 0xBD,0x47,0x04,0x96,0x7D,0xE6,0x48,0xBA } }; };
template <> struct default_interface<Windows::Web::UI::Interop::WebViewControl>{ using type = Windows::Web::UI::IWebViewControl; };
template <> struct default_interface<Windows::Web::UI::Interop::WebViewControlAcceleratorKeyPressedEventArgs>{ using type = Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs; };
template <> struct default_interface<Windows::Web::UI::Interop::WebViewControlMoveFocusRequestedEventArgs>{ using type = Windows::Web::UI::Interop::IWebViewControlMoveFocusRequestedEventArgs; };
template <> struct default_interface<Windows::Web::UI::Interop::WebViewControlProcess>{ using type = Windows::Web::UI::Interop::IWebViewControlProcess; };
template <> struct default_interface<Windows::Web::UI::Interop::WebViewControlProcessOptions>{ using type = Windows::Web::UI::Interop::IWebViewControlProcessOptions; };

template <typename D>
struct consume_Windows_Web_UI_Interop_IWebViewControlAcceleratorKeyPressedEventArgs
{
    Windows::UI::Core::CoreAcceleratorKeyEventType EventType() const;
    Windows::System::VirtualKey VirtualKey() const;
    Windows::UI::Core::CorePhysicalKeyStatus KeyStatus() const;
    Windows::Web::UI::Interop::WebViewControlAcceleratorKeyRoutingStage RoutingStage() const;
    bool Handled() const;
    void Handled(bool value) const;
};
template <> struct consume<Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs> { template <typename D> using type = consume_Windows_Web_UI_Interop_IWebViewControlAcceleratorKeyPressedEventArgs<D>; };

template <typename D>
struct consume_Windows_Web_UI_Interop_IWebViewControlMoveFocusRequestedEventArgs
{
    Windows::Web::UI::Interop::WebViewControlMoveFocusReason Reason() const;
};
template <> struct consume<Windows::Web::UI::Interop::IWebViewControlMoveFocusRequestedEventArgs> { template <typename D> using type = consume_Windows_Web_UI_Interop_IWebViewControlMoveFocusRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_Web_UI_Interop_IWebViewControlProcess
{
    uint32_t ProcessId() const;
    hstring EnterpriseId() const;
    bool IsPrivateNetworkClientServerCapabilityEnabled() const;
    Windows::Foundation::IAsyncOperation<Windows::Web::UI::Interop::WebViewControl> CreateWebViewControlAsync(int64_t hostWindowHandle, Windows::Foundation::Rect const& bounds) const;
    Windows::Foundation::Collections::IVectorView<Windows::Web::UI::Interop::WebViewControl> GetWebViewControls() const;
    void Terminate() const;
    event_token ProcessExited(Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControlProcess, Windows::Foundation::IInspectable> const& handler) const;
    using ProcessExited_revoker = event_revoker<Windows::Web::UI::Interop::IWebViewControlProcess>;
    ProcessExited_revoker ProcessExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControlProcess, Windows::Foundation::IInspectable> const& handler) const;
    void ProcessExited(event_token const& token) const;
};
template <> struct consume<Windows::Web::UI::Interop::IWebViewControlProcess> { template <typename D> using type = consume_Windows_Web_UI_Interop_IWebViewControlProcess<D>; };

template <typename D>
struct consume_Windows_Web_UI_Interop_IWebViewControlProcessFactory
{
    Windows::Web::UI::Interop::WebViewControlProcess CreateWithOptions(Windows::Web::UI::Interop::WebViewControlProcessOptions const& processOptions) const;
};
template <> struct consume<Windows::Web::UI::Interop::IWebViewControlProcessFactory> { template <typename D> using type = consume_Windows_Web_UI_Interop_IWebViewControlProcessFactory<D>; };

template <typename D>
struct consume_Windows_Web_UI_Interop_IWebViewControlProcessOptions
{
    void EnterpriseId(param::hstring const& value) const;
    hstring EnterpriseId() const;
    void PrivateNetworkClientServerCapability(Windows::Web::UI::Interop::WebViewControlProcessCapabilityState const& value) const;
    Windows::Web::UI::Interop::WebViewControlProcessCapabilityState PrivateNetworkClientServerCapability() const;
};
template <> struct consume<Windows::Web::UI::Interop::IWebViewControlProcessOptions> { template <typename D> using type = consume_Windows_Web_UI_Interop_IWebViewControlProcessOptions<D>; };

template <typename D>
struct consume_Windows_Web_UI_Interop_IWebViewControlSite
{
    Windows::Web::UI::Interop::WebViewControlProcess Process() const;
    void Scale(double value) const;
    double Scale() const;
    void Bounds(Windows::Foundation::Rect const& value) const;
    Windows::Foundation::Rect Bounds() const;
    void IsVisible(bool value) const;
    bool IsVisible() const;
    void Close() const;
    void MoveFocus(Windows::Web::UI::Interop::WebViewControlMoveFocusReason const& reason) const;
    event_token MoveFocusRequested(Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControl, Windows::Web::UI::Interop::WebViewControlMoveFocusRequestedEventArgs> const& handler) const;
    using MoveFocusRequested_revoker = event_revoker<Windows::Web::UI::Interop::IWebViewControlSite>;
    MoveFocusRequested_revoker MoveFocusRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControl, Windows::Web::UI::Interop::WebViewControlMoveFocusRequestedEventArgs> const& handler) const;
    void MoveFocusRequested(event_token const& token) const;
    event_token AcceleratorKeyPressed(Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControl, Windows::Web::UI::Interop::WebViewControlAcceleratorKeyPressedEventArgs> const& handler) const;
    using AcceleratorKeyPressed_revoker = event_revoker<Windows::Web::UI::Interop::IWebViewControlSite>;
    AcceleratorKeyPressed_revoker AcceleratorKeyPressed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControl, Windows::Web::UI::Interop::WebViewControlAcceleratorKeyPressedEventArgs> const& handler) const;
    void AcceleratorKeyPressed(event_token const& token) const;
};
template <> struct consume<Windows::Web::UI::Interop::IWebViewControlSite> { template <typename D> using type = consume_Windows_Web_UI_Interop_IWebViewControlSite<D>; };

template <> struct abi<Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_EventType(Windows::UI::Core::CoreAcceleratorKeyEventType* value) noexcept = 0;
    virtual HRESULT __stdcall get_VirtualKey(Windows::System::VirtualKey* value) noexcept = 0;
    virtual HRESULT __stdcall get_KeyStatus(struct struct_Windows_UI_Core_CorePhysicalKeyStatus* value) noexcept = 0;
    virtual HRESULT __stdcall get_RoutingStage(Windows::Web::UI::Interop::WebViewControlAcceleratorKeyRoutingStage* value) noexcept = 0;
    virtual HRESULT __stdcall get_Handled(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_Handled(bool value) noexcept = 0;
};};

template <> struct abi<Windows::Web::UI::Interop::IWebViewControlMoveFocusRequestedEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Reason(Windows::Web::UI::Interop::WebViewControlMoveFocusReason* value) noexcept = 0;
};};

template <> struct abi<Windows::Web::UI::Interop::IWebViewControlProcess>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_ProcessId(uint32_t* value) noexcept = 0;
    virtual HRESULT __stdcall get_EnterpriseId(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall get_IsPrivateNetworkClientServerCapabilityEnabled(bool* value) noexcept = 0;
    virtual HRESULT __stdcall CreateWebViewControlAsync(int64_t hostWindowHandle, Windows::Foundation::Rect bounds, void** operation) noexcept = 0;
    virtual HRESULT __stdcall GetWebViewControls(void** result) noexcept = 0;
    virtual HRESULT __stdcall Terminate() noexcept = 0;
    virtual HRESULT __stdcall add_ProcessExited(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_ProcessExited(event_token token) noexcept = 0;
};};

template <> struct abi<Windows::Web::UI::Interop::IWebViewControlProcessFactory>{ struct type : IInspectable
{
    virtual HRESULT __stdcall CreateWithOptions(void* processOptions, void** result) noexcept = 0;
};};

template <> struct abi<Windows::Web::UI::Interop::IWebViewControlProcessOptions>{ struct type : IInspectable
{
    virtual HRESULT __stdcall put_EnterpriseId(HSTRING value) noexcept = 0;
    virtual HRESULT __stdcall get_EnterpriseId(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall put_PrivateNetworkClientServerCapability(Windows::Web::UI::Interop::WebViewControlProcessCapabilityState value) noexcept = 0;
    virtual HRESULT __stdcall get_PrivateNetworkClientServerCapability(Windows::Web::UI::Interop::WebViewControlProcessCapabilityState* value) noexcept = 0;
};};

template <> struct abi<Windows::Web::UI::Interop::IWebViewControlSite>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Process(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_Scale(double value) noexcept = 0;
    virtual HRESULT __stdcall get_Scale(double* value) noexcept = 0;
    virtual HRESULT __stdcall put_Bounds(Windows::Foundation::Rect value) noexcept = 0;
    virtual HRESULT __stdcall get_Bounds(Windows::Foundation::Rect* value) noexcept = 0;
    virtual HRESULT __stdcall put_IsVisible(bool value) noexcept = 0;
    virtual HRESULT __stdcall get_IsVisible(bool* value) noexcept = 0;
    virtual HRESULT __stdcall Close() noexcept = 0;
    virtual HRESULT __stdcall MoveFocus(Windows::Web::UI::Interop::WebViewControlMoveFocusReason reason) noexcept = 0;
    virtual HRESULT __stdcall add_MoveFocusRequested(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_MoveFocusRequested(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_AcceleratorKeyPressed(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_AcceleratorKeyPressed(event_token token) noexcept = 0;
};};

}
