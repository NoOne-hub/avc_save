// xlocinfo.h internal header for Microsoft
#pragma once
#ifndef _XLOCINFO
#define _XLOCINFO
#ifndef RC_INVOKED
#include <yvals.h>

#include <ctype.h>
#include <locale.h>
#include <stdio.h> // TRANSITION, VSO#661721
#include <wchar.h>

#pragma pack(push, _CRT_PACKING)
#pragma warning(push, _STL_WARNING_LEVEL)
#pragma warning(disable : _STL_DISABLED_WARNINGS)
_STL_DISABLE_CLANG_WARNINGS
#pragma push_macro("new")
#undef new

#if !defined(MRTDLL) || !defined(_CRTBLD)
#ifndef _M_CEE_PURE
_EXTERN_C
#endif // _M_CEE_PURE
#endif // !MRTDLL || !_CRTBLD

// CTYPE CODE BITS
#define _XB 0x000 // extra blank
#define _XA 0x100 // extra alphabetic
#define _XS 0x000 // extra space
#define _BB _CONTROL // BEL, BS, etc.
#define _CN _SPACE // CR, FF, HT, NL, VT
#define _DI _DIGIT // '0'-'9'
#define _LO _LOWER // 'a'-'z'
#define _PU _PUNCT // punctuation
#define _SP _BLANK // space
#define _UP _UPPER // 'A'-'Z'
#define _XD _HEX // '0'-'9', 'A'-'F', 'a'-'f'

// SUPPLEMENTAL LOCALE MACROS AND DECLARATIONS
#define _X_ALL LC_ALL
#define _X_COLLATE LC_COLLATE
#define _X_CTYPE LC_CTYPE
#define _X_MONETARY LC_MONETARY
#define _X_NUMERIC LC_NUMERIC
#define _X_TIME LC_TIME
#define _X_MAX LC_MAX
#define _X_MESSAGES 6
#define _NCAT (_X_MESSAGES + 1) // maximum + 1

#define _CATMASK(n) ((1 << (n)) >> 1)
#define _M_COLLATE _CATMASK(_X_COLLATE)
#define _M_CTYPE _CATMASK(_X_CTYPE)
#define _M_MONETARY _CATMASK(_X_MONETARY)
#define _M_NUMERIC _CATMASK(_X_NUMERIC)
#define _M_TIME _CATMASK(_X_TIME)
#define _M_MESSAGES _CATMASK(_X_MESSAGES)
#define _M_ALL (_CATMASK(_NCAT) - 1)

typedef struct _Collvec { // stuff needed by _Strcoll, etc.
    unsigned int _Page; // UINT
    wchar_t* _LocaleName;
} _Collvec;

typedef struct _Ctypevec { // stuff needed by _Tolower, etc.
    unsigned int _Page; // UINT
    const short* _Table;
    int _Delfl;
    wchar_t* _LocaleName;
} _Ctypevec;

typedef struct _Cvtvec { // stuff needed by _Mbrtowc, etc.
    unsigned int _Page; // UINT
    unsigned int _Mbcurmax;
    int _Isclocale; // LCID == _CLOCALEHANDLE
    unsigned char _Isleadbyte[32]; // 256 bits
} _Cvtvec;

// FUNCTION DECLARATIONS
_CRTIMP2_PURE _Collvec __CLRCALL_PURE_OR_CDECL _Getcoll(void);
_CRTIMP2_PURE _Ctypevec __CLRCALL_PURE_OR_CDECL _Getctype(void);
_CRTIMP2_PURE _Cvtvec __CLRCALL_PURE_OR_CDECL _Getcvt(void);

#ifdef __cplusplus
#if !defined(MRTDLL) && !defined(_M_CEE_PURE)
extern "C"
#endif // !MRTDLL && !_M_CEE_PURE
    _CRTIMP2_PURE int __CLRCALL_PURE_OR_CDECL
    _Getdateorder(void);
#endif // __cplusplus

#ifdef _M_CEE_PURE
[System::Runtime::InteropServices::DllImport(_CRT_MSVCP_CURRENT, EntryPoint = "_Mbrtowc",
    CallingConvention = System::Runtime::InteropServices::CallingConvention::Cdecl)] extern "C" int
    _Mbrtowc(_Out_opt_ wchar_t*, const char*, size_t, mbstate_t*, const _Cvtvec*);

#else // _M_CEE_PURE
_MRTIMP2 int __cdecl _Mbrtowc(_Out_opt_ wchar_t*, const char*, size_t, mbstate_t*, const _Cvtvec*);
#endif // _M_CEE_PURE

_CRTIMP2_PURE float __CLRCALL_PURE_OR_CDECL _Stof(const char*, _Out_opt_ _Deref_post_opt_valid_ char**, long);
_CRTIMP2_PURE double __CLRCALL_PURE_OR_CDECL _Stod(const char*, _Out_opt_ _Deref_post_opt_valid_ char**, long);
_CRTIMP2_PURE long double __CLRCALL_PURE_OR_CDECL _Stold(const char*, _Out_opt_ _Deref_post_opt_valid_ char**, long);

_CRTIMP2_PURE int __CLRCALL_PURE_OR_CDECL _Strcoll(const char*, const char*, const char*, const char*, const _Collvec*);
_CRTIMP2_PURE size_t __CLRCALL_PURE_OR_CDECL _Strxfrm(_Out_writes_(_End1 - _String1)
                                                          _Post_readable_size_(return ) char* _String1,
    _In_z_ char* _End1, const char*, const char*, const _Collvec*);
_CRTIMP2_PURE int __CLRCALL_PURE_OR_CDECL _Tolower(int, const _Ctypevec*);
_CRTIMP2_PURE int __CLRCALL_PURE_OR_CDECL _Toupper(int, const _Ctypevec*);
_CRTIMP2_PURE int __CLRCALL_PURE_OR_CDECL _Wcrtomb(_Out_ char*, wchar_t, mbstate_t*, const _Cvtvec*);
_CRTIMP2_PURE int __CLRCALL_PURE_OR_CDECL _Wcscoll(
    const wchar_t*, const wchar_t*, const wchar_t*, const wchar_t*, const _Collvec*);
_CRTIMP2_PURE size_t __CLRCALL_PURE_OR_CDECL _Wcsxfrm(_Out_writes_(_End1 - _String1) _Post_readable_size_(return )
                                                          wchar_t* _String1,
    _In_z_ wchar_t* _End1, const wchar_t*, const wchar_t*, const _Collvec*);

_CRTIMP2_PURE short __CLRCALL_PURE_OR_CDECL _Getwctype(wchar_t, const _Ctypevec*);
_CRTIMP2_PURE const wchar_t* __CLRCALL_PURE_OR_CDECL _Getwctypes(
    const wchar_t*, const wchar_t*, short*, const _Ctypevec*);
_CRTIMP2_PURE wchar_t __CLRCALL_PURE_OR_CDECL _Towlower(wchar_t, const _Ctypevec*);
_CRTIMP2_PURE wchar_t __CLRCALL_PURE_OR_CDECL _Towupper(wchar_t, const _Ctypevec*);

#if !defined(MRTDLL) || !defined(_CRTBLD)
#ifndef _M_CEE_PURE
_END_EXTERN_C
#endif // _M_CEE_PURE
#endif // !MRTDLL || !_CRTBLD

_EXTERN_C
_Success_(return != 0) _Ret_z_ _ACRTIMP char* __cdecl _Getdays(void);

_Success_(return != 0) _Ret_z_ _ACRTIMP char* __cdecl _Getmonths(void);

_ACRTIMP void* __cdecl _Gettnames(void);

_Success_(return > 0) _ACRTIMP size_t __cdecl _Strftime(
    _Out_writes_z_(_Maxsize) char*, _In_ size_t _Maxsize, _In_z_ const char*, _In_ const struct tm*, _In_opt_ void*);

_Success_(return != 0) _Ret_z_ _ACRTIMP wchar_t* __cdecl _W_Getdays(void);

_Success_(return != 0) _Ret_z_ _ACRTIMP wchar_t* __cdecl _W_Getmonths(void);

_ACRTIMP void* __cdecl _W_Gettnames(void);

_Success_(return > 0) _ACRTIMP size_t __cdecl _Wcsftime(_Out_writes_z_(_Maxsize) wchar_t*, _In_ size_t _Maxsize,
    _In_z_ const wchar_t*, _In_ const struct tm*, _In_opt_ void*);
_END_EXTERN_C

#ifdef _M_CEE_PURE
    [System::Runtime::InteropServices::DllImport(_CRT_MSVCP_CURRENT, EntryPoint = "_GetLocaleForCP",
        CallingConvention = System::Runtime::InteropServices::CallingConvention::Cdecl)] extern "C" _locale_t
    _GetLocaleForCP(unsigned int);

#else // _M_CEE_PURE
_MRTIMP2 _locale_t __cdecl _GetLocaleForCP(unsigned int);
#endif // _M_CEE_PURE

#pragma pop_macro("new")
_STL_RESTORE_CLANG_WARNINGS
#pragma warning(pop)
#pragma pack(pop)
#endif // RC_INVOKED
#endif // _XLOCINFO

/*
 * Copyright (c) by P.J. Plauger. All rights reserved.
 * Consult your license regarding permissions and restrictions.
V6.50:0009 */
