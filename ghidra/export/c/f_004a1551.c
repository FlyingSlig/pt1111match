// FUNCTION: PORT1111 0x004a1551
// name: ___crtMessageBoxA
// sig: int ___crtMessageBoxA(LPCSTR _LpText, LPCSTR _LpCaption, UINT _UType)


/* Library Function - Single Match
    ___crtMessageBoxA
   
   Library: Visual Studio 2003 Release */

int __cdecl ___crtMessageBoxA(LPCSTR _LpText,LPCSTR _LpCaption,UINT _UType)

{
  HMODULE hModule;
  int iVar1;
  int iVar2;
  undefined1 local_14 [8];
  byte local_c;
  undefined1 local_8 [4];
  
  iVar2 = 0;
  if (DAT_004e3034 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if ((hModule == (HMODULE)0x0) ||
       (DAT_004e3034 = GetProcAddress(hModule,"MessageBoxA"), DAT_004e3034 == (FARPROC)0x0)) {
      return 0;
    }
    DAT_004e3038 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_004e303c = GetProcAddress(hModule,"GetLastActivePopup");
    if ((DAT_004e2ce8 == 2) &&
       (DAT_004e3044 = GetProcAddress(hModule,"GetUserObjectInformationA"),
       DAT_004e3044 != (FARPROC)0x0)) {
      DAT_004e3040 = GetProcAddress(hModule,"GetProcessWindowStation");
    }
  }
  if ((DAT_004e3040 == (FARPROC)0x0) ||
     (((iVar1 = (*DAT_004e3040)(), iVar1 != 0 &&
       (iVar1 = (*DAT_004e3044)(iVar1,1,local_14,0xc,local_8), iVar1 != 0)) && ((local_c & 1) != 0))
     )) {
    if (((DAT_004e3038 != (FARPROC)0x0) && (iVar2 = (*DAT_004e3038)(), iVar2 != 0)) &&
       (DAT_004e303c != (FARPROC)0x0)) {
      iVar2 = (*DAT_004e303c)(iVar2);
    }
  }
  else if (DAT_004e2cf4 < 4) {
    _UType = _UType | 0x40000;
  }
  else {
    _UType = _UType | 0x200000;
  }
  iVar2 = (*DAT_004e3034)(iVar2,_LpText,_LpCaption,_UType);
  return iVar2;
}

