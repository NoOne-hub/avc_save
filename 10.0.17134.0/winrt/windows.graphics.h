/* Header file automatically generated from windows.graphics.idl */
/*
 * File built with Microsoft(R) MIDLRT Compiler Engine Version 10.00.0215 
 */

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <Windows.h>
#include <Ole2.h>
#endif /*COM_NO_WINDOWS_H*/
#ifndef __windows2Egraphics_h__
#define __windows2Egraphics_h__
#ifndef __windows2Egraphics_p_h__
#define __windows2Egraphics_p_h__


#pragma once

//
// Deprecated attribute support
//

#pragma push_macro("DEPRECATED")
#undef DEPRECATED

#if !defined(DISABLE_WINRT_DEPRECATION)
#if defined(__cplusplus)
#if __cplusplus >= 201402
#define DEPRECATED(x) [[deprecated(x)]]
#define DEPRECATEDENUMERATOR(x) [[deprecated(x)]]
#elif defined(_MSC_VER)
#if _MSC_VER >= 1900
#define DEPRECATED(x) [[deprecated(x)]]
#define DEPRECATEDENUMERATOR(x) [[deprecated(x)]]
#else
#define DEPRECATED(x) __declspec(deprecated(x))
#define DEPRECATEDENUMERATOR(x)
#endif // _MSC_VER >= 1900
#else // Not Standard C++ or MSVC, ignore the construct.
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif  // C++ deprecation
#else // C - disable deprecation
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif
#else // Deprecation is disabled
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif  /* DEPRECATED */

// Disable Deprecation for this header, MIDL verifies that cross-type access is acceptable
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#else
#pragma warning(push)
#pragma warning(disable: 4996)
#endif

#pragma push_macro("MIDL_CONST_ID")
#undef MIDL_CONST_ID
#define MIDL_CONST_ID const __declspec(selectany)


//  API Contract Inclusion Definitions
#if !defined(SPECIFIC_API_CONTRACT_DEFINITIONS)
#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0x60000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)
#define WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)
#define WINDOWS_PHONE_PHONECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)
#define WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)

#if !defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)
#define WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "inspectable.h"
#include "asyncinfo.h"
#include "EventToken.h"
#include "WindowsContracts.h"
#include "Windows.Foundation.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGraphics_CIGeometrySource2D_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CIGeometrySource2D_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            interface IGeometrySource2D;
        } /* Windows */
    } /* Graphics */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CIGeometrySource2D ABI::Windows::Graphics::IGeometrySource2D

#endif // ____x_ABI_CWindows_CGraphics_CIGeometrySource2D_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Graphics {
            
            typedef struct DisplayAdapterId DisplayAdapterId;
            
        } /* Windows */
    } /* Graphics */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            
            typedef struct PointInt32 PointInt32;
            
        } /* Windows */
    } /* Graphics */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            
            typedef struct RectInt32 RectInt32;
            
        } /* Windows */
    } /* Graphics */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            
            typedef struct SizeInt32 SizeInt32;
            
        } /* Windows */
    } /* Graphics */} /* ABI */





/*
 *
 * Struct Windows.Graphics.DisplayAdapterId
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 6.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x60000

namespace ABI {
    namespace Windows {
        namespace Graphics {
            /* [contract] */
            struct DisplayAdapterId
            {
                UINT32 LowPart;
                INT32 HighPart;
            };
            
        } /* Windows */
    } /* Graphics */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x60000


/*
 *
 * Struct Windows.Graphics.PointInt32
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace Graphics {
            /* [contract] */
            struct PointInt32
            {
                INT32 X;
                INT32 Y;
            };
            
        } /* Windows */
    } /* Graphics */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Graphics.RectInt32
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace Graphics {
            /* [contract] */
            struct RectInt32
            {
                INT32 X;
                INT32 Y;
                INT32 Width;
                INT32 Height;
            };
            
        } /* Windows */
    } /* Graphics */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Graphics.SizeInt32
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace Graphics {
            /* [contract] */
            struct SizeInt32
            {
                INT32 Width;
                INT32 Height;
            };
            
        } /* Windows */
    } /* Graphics */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Graphics.IGeometrySource2D
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 6.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x60000
#if !defined(____x_ABI_CWindows_CGraphics_CIGeometrySource2D_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CIGeometrySource2D_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_IGeometrySource2D[] = L"Windows.Graphics.IGeometrySource2D";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            /* [object, uuid("CAFF7902-670C-4181-A624-DA977203B845"), contract] */
            MIDL_INTERFACE("CAFF7902-670C-4181-A624-DA977203B845")
            IGeometrySource2D : public IInspectable
            {
            public:
                
            };

            extern MIDL_CONST_ID IID & IID_IGeometrySource2D=_uuidof(IGeometrySource2D);
            
        } /* Windows */
    } /* Graphics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CIGeometrySource2D;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CIGeometrySource2D_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x60000



#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGraphics_CIGeometrySource2D_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CIGeometrySource2D_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CIGeometrySource2D __x_ABI_CWindows_CGraphics_CIGeometrySource2D;

#endif // ____x_ABI_CWindows_CGraphics_CIGeometrySource2D_FWD_DEFINED__





typedef struct __x_ABI_CWindows_CGraphics_CDisplayAdapterId __x_ABI_CWindows_CGraphics_CDisplayAdapterId;


typedef struct __x_ABI_CWindows_CGraphics_CPointInt32 __x_ABI_CWindows_CGraphics_CPointInt32;


typedef struct __x_ABI_CWindows_CGraphics_CRectInt32 __x_ABI_CWindows_CGraphics_CRectInt32;


typedef struct __x_ABI_CWindows_CGraphics_CSizeInt32 __x_ABI_CWindows_CGraphics_CSizeInt32;





/*
 *
 * Struct Windows.Graphics.DisplayAdapterId
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 6.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x60000

/* [contract] */
struct __x_ABI_CWindows_CGraphics_CDisplayAdapterId
{
    UINT32 LowPart;
    INT32 HighPart;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x60000


/*
 *
 * Struct Windows.Graphics.PointInt32
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

/* [contract] */
struct __x_ABI_CWindows_CGraphics_CPointInt32
{
    INT32 X;
    INT32 Y;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Graphics.RectInt32
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

/* [contract] */
struct __x_ABI_CWindows_CGraphics_CRectInt32
{
    INT32 X;
    INT32 Y;
    INT32 Width;
    INT32 Height;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Graphics.SizeInt32
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

/* [contract] */
struct __x_ABI_CWindows_CGraphics_CSizeInt32
{
    INT32 Width;
    INT32 Height;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Graphics.IGeometrySource2D
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 6.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x60000
#if !defined(____x_ABI_CWindows_CGraphics_CIGeometrySource2D_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CIGeometrySource2D_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_IGeometrySource2D[] = L"Windows.Graphics.IGeometrySource2D";
/* [object, uuid("CAFF7902-670C-4181-A624-DA977203B845"), contract] */
typedef struct __x_ABI_CWindows_CGraphics_CIGeometrySource2DVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CIGeometrySource2D * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CIGeometrySource2D * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CIGeometrySource2D * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CIGeometrySource2D * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CIGeometrySource2D * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CIGeometrySource2D * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CIGeometrySource2DVtbl;

interface __x_ABI_CWindows_CGraphics_CIGeometrySource2D
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CIGeometrySource2DVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CIGeometrySource2D_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CIGeometrySource2D_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CIGeometrySource2D_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CIGeometrySource2D_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CIGeometrySource2D_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CIGeometrySource2D_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CIGeometrySource2D;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CIGeometrySource2D_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x60000



#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Egraphics_p_h__

#endif // __windows2Egraphics_h__
