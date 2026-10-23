// FUNCTION: PORT1111 0x00401fc0
// name: FUN_00401fc0
// sig: undefined4 FUN_00401fc0(LPCSTR param_1, undefined4 * param_2)


undefined4 __cdecl FUN_00401fc0(LPCSTR param_1,undefined4 *param_2)

{
  LPCSTR lptstrFilename;
  undefined4 *puVar1;
  void *lpData;
  BOOL BVar2;
  LPVOID local_8;
  DWORD local_4;
  
  puVar1 = param_2;
  lptstrFilename = param_1;
  if ((param_1 == (LPCSTR)0x0) || (param_2 == (undefined4 *)0x0)) {
    return 0x80070057;
  }
  param_1 = (LPCSTR)GetFileVersionInfoSizeA(param_1,&local_4);
  if (param_1 == (LPCSTR)0x0) {
    return 0x80004005;
  }
  lpData = operator_new((uint)param_1);
  if (lpData == (void *)0x0) {
    return 0x8007000e;
  }
  BVar2 = GetFileVersionInfoA(lptstrFilename,0,(DWORD)param_1,lpData);
  if (BVar2 != 0) {
    local_8 = (LPVOID)0x0;
    BVar2 = VerQueryValueA(lpData,"\\",&local_8,(PUINT)&param_1);
    if ((BVar2 != 0) && (local_8 != (LPVOID)0x0)) {
      puVar1[1] = *(undefined4 *)((int)local_8 + 8);
      *puVar1 = *(undefined4 *)((int)local_8 + 0xc);
                    /* WARNING: Subroutine does not return */
      _free(lpData);
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(lpData);
}

