﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Pickers.Provider.2.h"
#include "winrt/Windows.Storage.Pickers.h"

namespace winrt::impl {

template <typename D> Windows::Storage::Pickers::Provider::AddFileResult consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::AddFile(param::hstring const& id, Windows::Storage::IStorageFile const& file) const
{
    Windows::Storage::Pickers::Provider::AddFileResult addResult{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::IFileOpenPickerUI)->AddFile(get_abi(id), get_abi(file), put_abi(addResult)));
    return addResult;
}

template <typename D> void consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::RemoveFile(param::hstring const& id) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::IFileOpenPickerUI)->RemoveFile(get_abi(id)));
}

template <typename D> bool consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::ContainsFile(param::hstring const& id) const
{
    bool isContained{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::IFileOpenPickerUI)->ContainsFile(get_abi(id), &isContained));
    return isContained;
}

template <typename D> bool consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::CanAddFile(Windows::Storage::IStorageFile const& file) const
{
    bool canAdd{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::IFileOpenPickerUI)->CanAddFile(get_abi(file), &canAdd));
    return canAdd;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::AllowedFileTypes() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::IFileOpenPickerUI)->get_AllowedFileTypes(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Pickers::Provider::FileSelectionMode consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::SelectionMode() const
{
    Windows::Storage::Pickers::Provider::FileSelectionMode value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::IFileOpenPickerUI)->get_SelectionMode(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::SettingsIdentifier() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::IFileOpenPickerUI)->get_SettingsIdentifier(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::IFileOpenPickerUI)->get_Title(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::Title(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::IFileOpenPickerUI)->put_Title(get_abi(value)));
}

template <typename D> event_token consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::FileRemoved(Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::FileRemovedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::IFileOpenPickerUI)->add_FileRemoved(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Storage::Pickers::Provider::IFileOpenPickerUI> consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::FileRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::FileRemovedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Storage::Pickers::Provider::IFileOpenPickerUI>(this, &abi_t<Windows::Storage::Pickers::Provider::IFileOpenPickerUI>::remove_FileRemoved, FileRemoved(handler));
}

template <typename D> void consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::FileRemoved(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::IFileOpenPickerUI)->remove_FileRemoved(get_abi(token)));
}

template <typename D> event_token consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::Closing(Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::PickerClosingEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::IFileOpenPickerUI)->add_Closing(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Storage::Pickers::Provider::IFileOpenPickerUI> consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::Closing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::PickerClosingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Storage::Pickers::Provider::IFileOpenPickerUI>(this, &abi_t<Windows::Storage::Pickers::Provider::IFileOpenPickerUI>::remove_Closing, Closing(handler));
}

template <typename D> void consume_Windows_Storage_Pickers_Provider_IFileOpenPickerUI<D>::Closing(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::IFileOpenPickerUI)->remove_Closing(get_abi(token)));
}

template <typename D> hstring consume_Windows_Storage_Pickers_Provider_IFileRemovedEventArgs<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::IFileRemovedEventArgs)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_Pickers_Provider_IFileSavePickerUI<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::IFileSavePickerUI)->get_Title(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_Provider_IFileSavePickerUI<D>::Title(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::IFileSavePickerUI)->put_Title(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Storage_Pickers_Provider_IFileSavePickerUI<D>::AllowedFileTypes() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::IFileSavePickerUI)->get_AllowedFileTypes(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_Pickers_Provider_IFileSavePickerUI<D>::SettingsIdentifier() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::IFileSavePickerUI)->get_SettingsIdentifier(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_Pickers_Provider_IFileSavePickerUI<D>::FileName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::IFileSavePickerUI)->get_FileName(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Pickers::Provider::SetFileNameResult consume_Windows_Storage_Pickers_Provider_IFileSavePickerUI<D>::TrySetFileName(param::hstring const& value) const
{
    Windows::Storage::Pickers::Provider::SetFileNameResult result{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::IFileSavePickerUI)->TrySetFileName(get_abi(value), put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Storage_Pickers_Provider_IFileSavePickerUI<D>::FileNameChanged(Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::IFileSavePickerUI)->add_FileNameChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Storage::Pickers::Provider::IFileSavePickerUI> consume_Windows_Storage_Pickers_Provider_IFileSavePickerUI<D>::FileNameChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Storage::Pickers::Provider::IFileSavePickerUI>(this, &abi_t<Windows::Storage::Pickers::Provider::IFileSavePickerUI>::remove_FileNameChanged, FileNameChanged(handler));
}

template <typename D> void consume_Windows_Storage_Pickers_Provider_IFileSavePickerUI<D>::FileNameChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::IFileSavePickerUI)->remove_FileNameChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Storage_Pickers_Provider_IFileSavePickerUI<D>::TargetFileRequested(Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::IFileSavePickerUI)->add_TargetFileRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Storage::Pickers::Provider::IFileSavePickerUI> consume_Windows_Storage_Pickers_Provider_IFileSavePickerUI<D>::TargetFileRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Storage::Pickers::Provider::IFileSavePickerUI>(this, &abi_t<Windows::Storage::Pickers::Provider::IFileSavePickerUI>::remove_TargetFileRequested, TargetFileRequested(handler));
}

template <typename D> void consume_Windows_Storage_Pickers_Provider_IFileSavePickerUI<D>::TargetFileRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::IFileSavePickerUI)->remove_TargetFileRequested(get_abi(token)));
}

template <typename D> void consume_Windows_Storage_Pickers_Provider_IPickerClosingDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::IPickerClosingDeferral)->Complete());
}

template <typename D> Windows::Storage::Pickers::Provider::PickerClosingOperation consume_Windows_Storage_Pickers_Provider_IPickerClosingEventArgs<D>::ClosingOperation() const
{
    Windows::Storage::Pickers::Provider::PickerClosingOperation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::IPickerClosingEventArgs)->get_ClosingOperation(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Storage_Pickers_Provider_IPickerClosingEventArgs<D>::IsCanceled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::IPickerClosingEventArgs)->get_IsCanceled(&value));
    return value;
}

template <typename D> Windows::Storage::Pickers::Provider::PickerClosingDeferral consume_Windows_Storage_Pickers_Provider_IPickerClosingOperation<D>::GetDeferral() const
{
    Windows::Storage::Pickers::Provider::PickerClosingDeferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::IPickerClosingOperation)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Storage_Pickers_Provider_IPickerClosingOperation<D>::Deadline() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::IPickerClosingOperation)->get_Deadline(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::IStorageFile consume_Windows_Storage_Pickers_Provider_ITargetFileRequest<D>::TargetFile() const
{
    Windows::Storage::IStorageFile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::ITargetFileRequest)->get_TargetFile(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_Provider_ITargetFileRequest<D>::TargetFile(Windows::Storage::IStorageFile const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::ITargetFileRequest)->put_TargetFile(get_abi(value)));
}

template <typename D> Windows::Storage::Pickers::Provider::TargetFileRequestDeferral consume_Windows_Storage_Pickers_Provider_ITargetFileRequest<D>::GetDeferral() const
{
    Windows::Storage::Pickers::Provider::TargetFileRequestDeferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::ITargetFileRequest)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_Provider_ITargetFileRequestDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::ITargetFileRequestDeferral)->Complete());
}

template <typename D> Windows::Storage::Pickers::Provider::TargetFileRequest consume_Windows_Storage_Pickers_Provider_ITargetFileRequestedEventArgs<D>::Request() const
{
    Windows::Storage::Pickers::Provider::TargetFileRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::Provider::ITargetFileRequestedEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Storage::Pickers::Provider::IFileOpenPickerUI> : produce_base<D, Windows::Storage::Pickers::Provider::IFileOpenPickerUI>
{
    HRESULT __stdcall AddFile(HSTRING id, void* file, Windows::Storage::Pickers::Provider::AddFileResult* addResult) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *addResult = detach_from<Windows::Storage::Pickers::Provider::AddFileResult>(this->shim().AddFile(*reinterpret_cast<hstring const*>(&id), *reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveFile(HSTRING id) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveFile(*reinterpret_cast<hstring const*>(&id));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ContainsFile(HSTRING id, bool* isContained) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *isContained = detach_from<bool>(this->shim().ContainsFile(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CanAddFile(void* file, bool* canAdd) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canAdd = detach_from<bool>(this->shim().CanAddFile(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AllowedFileTypes(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().AllowedFileTypes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectionMode(Windows::Storage::Pickers::Provider::FileSelectionMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Pickers::Provider::FileSelectionMode>(this->shim().SelectionMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SettingsIdentifier(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SettingsIdentifier());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

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

    HRESULT __stdcall add_FileRemoved(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().FileRemoved(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::FileRemovedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_FileRemoved(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FileRemoved(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Closing(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Closing(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::PickerClosingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Closing(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Closing(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::Provider::IFileRemovedEventArgs> : produce_base<D, Windows::Storage::Pickers::Provider::IFileRemovedEventArgs>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::Provider::IFileSavePickerUI> : produce_base<D, Windows::Storage::Pickers::Provider::IFileSavePickerUI>
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

    HRESULT __stdcall get_AllowedFileTypes(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().AllowedFileTypes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SettingsIdentifier(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SettingsIdentifier());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FileName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FileName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TrySetFileName(HSTRING value, Windows::Storage::Pickers::Provider::SetFileNameResult* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Storage::Pickers::Provider::SetFileNameResult>(this->shim().TrySetFileName(*reinterpret_cast<hstring const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_FileNameChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().FileNameChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_FileNameChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FileNameChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_TargetFileRequested(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().TargetFileRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_TargetFileRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetFileRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::Provider::IPickerClosingDeferral> : produce_base<D, Windows::Storage::Pickers::Provider::IPickerClosingDeferral>
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
struct produce<D, Windows::Storage::Pickers::Provider::IPickerClosingEventArgs> : produce_base<D, Windows::Storage::Pickers::Provider::IPickerClosingEventArgs>
{
    HRESULT __stdcall get_ClosingOperation(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Pickers::Provider::PickerClosingOperation>(this->shim().ClosingOperation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsCanceled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCanceled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::Provider::IPickerClosingOperation> : produce_base<D, Windows::Storage::Pickers::Provider::IPickerClosingOperation>
{
    HRESULT __stdcall GetDeferral(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Pickers::Provider::PickerClosingDeferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Deadline(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().Deadline());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::Provider::ITargetFileRequest> : produce_base<D, Windows::Storage::Pickers::Provider::ITargetFileRequest>
{
    HRESULT __stdcall get_TargetFile(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::IStorageFile>(this->shim().TargetFile());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TargetFile(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetFile(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&value));
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
            *value = detach_from<Windows::Storage::Pickers::Provider::TargetFileRequestDeferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::Provider::ITargetFileRequestDeferral> : produce_base<D, Windows::Storage::Pickers::Provider::ITargetFileRequestDeferral>
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
struct produce<D, Windows::Storage::Pickers::Provider::ITargetFileRequestedEventArgs> : produce_base<D, Windows::Storage::Pickers::Provider::ITargetFileRequestedEventArgs>
{
    HRESULT __stdcall get_Request(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Pickers::Provider::TargetFileRequest>(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Storage::Pickers::Provider {

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Storage::Pickers::Provider::IFileOpenPickerUI> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::IFileOpenPickerUI> {};
template<> struct hash<winrt::Windows::Storage::Pickers::Provider::IFileRemovedEventArgs> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::IFileRemovedEventArgs> {};
template<> struct hash<winrt::Windows::Storage::Pickers::Provider::IFileSavePickerUI> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::IFileSavePickerUI> {};
template<> struct hash<winrt::Windows::Storage::Pickers::Provider::IPickerClosingDeferral> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::IPickerClosingDeferral> {};
template<> struct hash<winrt::Windows::Storage::Pickers::Provider::IPickerClosingEventArgs> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::IPickerClosingEventArgs> {};
template<> struct hash<winrt::Windows::Storage::Pickers::Provider::IPickerClosingOperation> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::IPickerClosingOperation> {};
template<> struct hash<winrt::Windows::Storage::Pickers::Provider::ITargetFileRequest> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::ITargetFileRequest> {};
template<> struct hash<winrt::Windows::Storage::Pickers::Provider::ITargetFileRequestDeferral> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::ITargetFileRequestDeferral> {};
template<> struct hash<winrt::Windows::Storage::Pickers::Provider::ITargetFileRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::ITargetFileRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Storage::Pickers::Provider::FileOpenPickerUI> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::FileOpenPickerUI> {};
template<> struct hash<winrt::Windows::Storage::Pickers::Provider::FileRemovedEventArgs> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::FileRemovedEventArgs> {};
template<> struct hash<winrt::Windows::Storage::Pickers::Provider::FileSavePickerUI> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::FileSavePickerUI> {};
template<> struct hash<winrt::Windows::Storage::Pickers::Provider::PickerClosingDeferral> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::PickerClosingDeferral> {};
template<> struct hash<winrt::Windows::Storage::Pickers::Provider::PickerClosingEventArgs> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::PickerClosingEventArgs> {};
template<> struct hash<winrt::Windows::Storage::Pickers::Provider::PickerClosingOperation> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::PickerClosingOperation> {};
template<> struct hash<winrt::Windows::Storage::Pickers::Provider::TargetFileRequest> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::TargetFileRequest> {};
template<> struct hash<winrt::Windows::Storage::Pickers::Provider::TargetFileRequestDeferral> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::TargetFileRequestDeferral> {};
template<> struct hash<winrt::Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs> {};

}

WINRT_WARNING_POP
