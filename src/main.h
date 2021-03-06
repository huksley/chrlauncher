// chrlauncher
// Copyright (c) 2015-2017 Henry++

#ifndef __MAIN_H__
#define __MAIN_H__

#include <windows.h>
#include "resource.h"
#include "rconfig.h"

// config
#define APP_NAME L"chrlauncher"
#define APP_NAME_SHORT L"chrlauncher"
#define APP_VERSION L"2.3"
#define APP_VERSION_RES 2,3,0,0
#define APP_COPYRIGHT L"(c) 2015-2017 " _APP_AUTHOR L". All Rights Reserved."

#define WM_TRAYICON WM_APP + 1
#define UID 2008

// libs
#pragma comment(lib, "version.lib")
#pragma comment(lib, "ws2_32.lib")

struct STATIC_DATA
{
	HANDLE thread = nullptr;
	HANDLE end_evt = nullptr;
	HANDLE stop_evt = nullptr;
	HANDLE check_evt = nullptr;
	HANDLE download_evt = nullptr;

	BOOL is_autodownload = FALSE;
	BOOL is_bringtofront = FALSE;
	BOOL is_forcecheck = FALSE;
	BOOL is_quiet = FALSE;

	BOOL is_isdownloading = FALSE;
	BOOL is_isinstalling = FALSE;

	BOOL is_isdownloaded = FALSE;
	BOOL is_isinstalled = FALSE;

	UINT architecture = 0;

	WCHAR current_version[32] = {0};

	WCHAR name[64] = {0};
	WCHAR name_full[64] = {0};
	WCHAR type[64] = {0};

	WCHAR cache_path[512] = {0};
	WCHAR binary_dir[512] = {0};
	WCHAR binary_path[512] = {0};
	WCHAR download_url[512] = {0};

	WCHAR urls[1024] = {0};

	WCHAR args[2048] = {0};

	WCHAR update_url[2048] = {0};
};

#endif // __MAIN_H__
