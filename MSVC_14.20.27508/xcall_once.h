// xcall_once.h internal header
#pragma once
#ifndef _XCALL_ONCE_H
#define _XCALL_ONCE_H
#ifndef RC_INVOKED

#include <yvals.h>

#pragma pack(push, _CRT_PACKING)
#pragma warning(push, _STL_WARNING_LEVEL)
#pragma warning(disable : _STL_DISABLED_WARNINGS)
_STL_DISABLE_CLANG_WARNINGS
#pragma push_macro("new")
#undef new

_STD_BEGIN
// STRUCT once_flag
struct once_flag { // opaque data structure for call_once()
    constexpr once_flag() noexcept : _Opaque(nullptr) { // default construct
    }

    once_flag(const once_flag&) = delete;
    once_flag& operator=(const once_flag&) = delete;

    void* _Opaque;
};

using _Execute_once_fp_t = int(__stdcall*)(void*, void*, void**);

_CRTIMP2_PURE int __CLRCALL_PURE_OR_CDECL _Execute_once(
    once_flag& _Flag, _Execute_once_fp_t _Callback, void* _Pv) noexcept;

_STD_END

#pragma pop_macro("new")
_STL_RESTORE_CLANG_WARNINGS
#pragma warning(pop)
#pragma pack(pop)
#endif // RC_INVOKED
#endif // _XCALL_ONCE_H

/*
 * Copyright (c) by P.J. Plauger. All rights reserved.
 * Consult your license regarding permissions and restrictions.
V6.50:0009 */
