﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.Graphics.Imaging.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.ApplicationModel.Preview.Notes.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Preview::Notes {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Preview::Notes {

struct WINRT_EBO NotePlacementChangedPreviewEventArgs :
    Windows::ApplicationModel::Preview::Notes::INotePlacementChangedPreviewEventArgs
{
    NotePlacementChangedPreviewEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO NoteVisibilityChangedPreviewEventArgs :
    Windows::ApplicationModel::Preview::Notes::INoteVisibilityChangedPreviewEventArgs
{
    NoteVisibilityChangedPreviewEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO NotesWindowManagerPreview :
    Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview,
    impl::require<NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview2>
{
    NotesWindowManagerPreview(std::nullptr_t) noexcept {}
    using impl::consume_t<NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview2>::ShowNoteRelativeTo;
    using Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview::ShowNoteRelativeTo;
    using impl::consume_t<NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview2>::ShowNoteWithPlacement;
    using Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview::ShowNoteWithPlacement;
    static Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview GetForCurrentApp();
};

struct WINRT_EBO NotesWindowManagerPreviewShowNoteOptions :
    Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewShowNoteOptions
{
    NotesWindowManagerPreviewShowNoteOptions(std::nullptr_t) noexcept {}
    NotesWindowManagerPreviewShowNoteOptions();
};

}
