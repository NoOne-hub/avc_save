﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserActivities {

struct UserActivity;
struct UserActivityChannel;
struct UserActivitySession;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserActivities::Core {

struct ICoreUserActivityManagerStatics;
struct CoreUserActivityManager;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::UserActivities::Core::ICoreUserActivityManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserActivities::Core::CoreUserActivityManager>{ using type = class_category; };
template <> struct name<Windows::ApplicationModel::UserActivities::Core::ICoreUserActivityManagerStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserActivities.Core.ICoreUserActivityManagerStatics" }; };
template <> struct name<Windows::ApplicationModel::UserActivities::Core::CoreUserActivityManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserActivities.Core.CoreUserActivityManager" }; };
template <> struct guid<Windows::ApplicationModel::UserActivities::Core::ICoreUserActivityManagerStatics>{ static constexpr GUID value{ 0xCA3ADB02,0xA4BE,0x4D4D,{ 0xBF,0xA8,0x67,0x95,0xF4,0x26,0x4E,0xFB } }; };

template <typename D>
struct consume_Windows_ApplicationModel_UserActivities_Core_ICoreUserActivityManagerStatics
{
    Windows::ApplicationModel::UserActivities::UserActivitySession CreateUserActivitySessionInBackground(Windows::ApplicationModel::UserActivities::UserActivity const& activity) const;
    Windows::Foundation::IAsyncAction DeleteUserActivitySessionsInTimeRangeAsync(Windows::ApplicationModel::UserActivities::UserActivityChannel const& channel, Windows::Foundation::DateTime const& startTime, Windows::Foundation::DateTime const& endTime) const;
};
template <> struct consume<Windows::ApplicationModel::UserActivities::Core::ICoreUserActivityManagerStatics> { template <typename D> using type = consume_Windows_ApplicationModel_UserActivities_Core_ICoreUserActivityManagerStatics<D>; };

template <> struct abi<Windows::ApplicationModel::UserActivities::Core::ICoreUserActivityManagerStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall CreateUserActivitySessionInBackground(void* activity, void** result) noexcept = 0;
    virtual HRESULT __stdcall DeleteUserActivitySessionsInTimeRangeAsync(void* channel, Windows::Foundation::DateTime startTime, Windows::Foundation::DateTime endTime, void** operation) noexcept = 0;
};};

}
