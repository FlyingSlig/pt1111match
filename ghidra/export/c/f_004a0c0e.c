// FUNCTION: PORT1111 0x004a0c0e
// name: FUN_004a0c0e
// sig: LPSTR FUN_004a0c0e(void)


LPSTR FUN_004a0c0e(void)

{
  char cVar1;
  WCHAR WVar2;
  DWORD DVar3;
  WCHAR *pWVar4;
  int iVar6;
  size_t _Size;
  LPSTR lpMultiByteStr;
  LPCH _Src;
  char *pcVar7;
  LPSTR pCVar9;
  LPWCH lpWideCharStr;
  WCHAR *pWVar5;
  char *pcVar8;
  
  lpWideCharStr = (LPWCH)0x0;
  if (DAT_004e2fd8 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_004e2fd8 = 1;
      goto LAB_004a0c5c;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      DAT_004e2fd8 = 2;
    }
  }
  if (DAT_004e2fd8 != 1) {
    if ((DAT_004e2fd8 != 2) && (DAT_004e2fd8 != 0)) {
      return (LPSTR)0x0;
    }
    _Src = GetEnvironmentStrings();
    if (_Src == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    cVar1 = *_Src;
    pcVar7 = _Src;
    while (cVar1 != '\0') {
      do {
        pcVar8 = pcVar7;
        pcVar7 = pcVar8 + 1;
      } while (*pcVar7 != '\0');
      pcVar7 = pcVar8 + 2;
      cVar1 = *pcVar7;
    }
    pCVar9 = _malloc((size_t)(pcVar7 + (1 - (int)_Src)));
    if (pCVar9 == (LPSTR)0x0) {
      pCVar9 = (LPSTR)0x0;
    }
    else {
      _memcpy(pCVar9,_Src,(size_t)(pcVar7 + (1 - (int)_Src)));
    }
    FreeEnvironmentStringsA(_Src);
    return pCVar9;
  }
LAB_004a0c5c:
  if ((lpWideCharStr == (LPWCH)0x0) &&
     (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr == (LPWCH)0x0)) {
    return (LPSTR)0x0;
  }
  WVar2 = *lpWideCharStr;
  pWVar4 = lpWideCharStr;
  while (WVar2 != L'\0') {
    do {
      pWVar5 = pWVar4;
      pWVar4 = pWVar5 + 1;
    } while (*pWVar4 != L'\0');
    pWVar4 = pWVar5 + 2;
    WVar2 = *pWVar4;
  }
  iVar6 = ((int)pWVar4 - (int)lpWideCharStr >> 1) + 1;
  _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar6,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  pCVar9 = (LPSTR)0x0;
  if (((_Size != 0) && (lpMultiByteStr = _malloc(_Size), lpMultiByteStr != (LPSTR)0x0)) &&
     (iVar6 = WideCharToMultiByte(0,0,lpWideCharStr,iVar6,lpMultiByteStr,_Size,(LPCSTR)0x0,
                                  (LPBOOL)0x0), pCVar9 = lpMultiByteStr, iVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    _free(lpMultiByteStr);
  }
  FreeEnvironmentStringsW(lpWideCharStr);
  return pCVar9;
}

