//
//    Copyright (C) Microsoft.  All rights reserved.
//
/*
 * WAB.H
 *
 * Top level public header for WAB API functions.
 *
 */

#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#include <WabDefs.h>
#include <WabCode.h>
#include <WabTags.h>
#include <WabUtil.h>
#include <WabIab.h>
#include <WabApi.h>
#include <WabMem.h>
#include <WabNot.h>

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

