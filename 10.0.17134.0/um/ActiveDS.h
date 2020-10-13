//+---------------------------------------------------------------------------
//
//  Microsoft Windows
//  Copyright (C) Microsoft Corporation, 1996-1999
//
//  File:       ads.h
//
//  Contents:   Master include file for Ole Ds
//
//  Notes:      All Ole Ds client applications must include this file. This
//              provides access to the primary Ole Ds interfaces, the error
//              codes, and function prototypes for the Ole Ds helper apis.
//
//----------------------------------------------------------------------------

#if _MSC_VER > 1000
#pragma once
#endif
#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


//
// Interface definitions and well known GUIDS for Ole Ds
//

#include "Iads.h"


//
// Helper function prototypes for Ole Ds
//

#include "AdsHlp.h"

//
// Error codes for Ole Ds - generated from ..\..\errmsg
//

#include "AdsErr.h"

//
// Globally accessible GUIDS
//

#include "ADSIid.h"

//
// Status codes for ads objects
//

#include "Adssts.h"

//
// Schema class names and other schema related definitions
//

#include "Adsnms.h"


//
// Definitions in the OLE DB provider for ADSI
//

#include "AdsDb.h"

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

