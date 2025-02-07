﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Media.Playlists.1.h"

WINRT_EXPORT namespace winrt::Windows::Media::Playlists {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::Media::Playlists {

struct WINRT_EBO Playlist :
    Windows::Media::Playlists::IPlaylist
{
    Playlist(std::nullptr_t) noexcept {}
    Playlist();
    static Windows::Foundation::IAsyncOperation<Windows::Media::Playlists::Playlist> LoadAsync(Windows::Storage::IStorageFile const& file);
};

}
