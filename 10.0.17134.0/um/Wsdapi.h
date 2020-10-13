//+-------------------------------------------------------------------------
//
//  Microsoft Windows
//  Copyright (c) Microsoft Corporation. All rights reserved.
//
//  Component: WSDAPI - Microsoft Web Services for Devices API
// 
//  File: wsdapi.h
//
//  Abstract: Top-level header file
//
//  Notes: If using winsock, winsock2.h should be included before this file
//
//--------------------------------------------------------------------------
#pragma once
#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


#include <Wsdbase.h>
#include <Wsdattachment.h>
#include <Wsdxml.h>
#include <Wsddisco.h>
#include <Wsdclient.h>
#include <Wsdhost.h>
#include <Wsdtypes.h>
#include <Wsdutil.h>
#include <Wsdns.h>

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

