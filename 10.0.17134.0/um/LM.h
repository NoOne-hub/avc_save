/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) 1991-1999  Microsoft Corporation

Module Name:

    lm.h

Abstract:

    This is the top level include file that includes all the files
    necessary for writing Lan Manager Application.

[Environment:]

    User Mode - Win32

--*/

#ifndef _LM_
#define _LM_

#if _MSC_VER > 1000
#pragma once
#endif
#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


#include <lmcons.h>     // LAN Manager common definitions
#include <lmerr.h>      // LAN Manager network error definitions

#include <LMaccess.h>   // Access, Domain, Group and User classes
#include <LMalert.h>    // Alerter
#include <LMShare.h>    // Connection, File, Session and Share classes
#include <LMMsg.h>      // Message class
#include <LMRemUtl.h>   // Remote Utility class
#include <LMRepl.h>     // Replicator class
#include <LMServer.h>   // Server class
#include <LMSvc.h>      // Service class
#include <LMUse.h>      // Use class
#include <lmwksta.h>    // Workstation class
#include <LMAPIbuf.h>   // NetApiBuffer class
#include <LMErrlog.h>   // NetErrorLog class
#include <LMConfig.h>   // NetConfig class
#include <lmstats.h>    // NetStats class
#include <LMaudit.h>    // NetAudit class
#include <LMJoin.h>     // NetJoinDomain class


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#endif // _LM_
