// FUNCTION: PORT1111 0x00488bd0
// name: FUN_00488bd0
// sig: undefined4 FUN_00488bd0(LPCSTR param_1)


undefined4 __cdecl FUN_00488bd0(LPCSTR param_1)

{
  DWORD DVar1;
  HANDLE hObject;
  
  DVar1 = GetFileAttributesA(param_1);
  if (DVar1 != 0xffffffff) {
    hObject = CreateFileA(param_1,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (hObject == (HANDLE)0xffffffff) {
      return 1;
    }
    CloseHandle(hObject);
  }
  return 0;
}

