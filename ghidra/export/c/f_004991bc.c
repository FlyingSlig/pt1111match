// FUNCTION: PORT1111 0x004991bc
// name: FUN_004991bc
// sig: HANDLE FUN_004991bc(LPSECURITY_ATTRIBUTES param_1, SIZE_T param_2, DWORD param_3, undefined4 param_4, DWORD param_5, LPDWORD param_6)


HANDLE __cdecl
FUN_004991bc(LPSECURITY_ATTRIBUTES param_1,SIZE_T param_2,DWORD param_3,undefined4 param_4,
            DWORD param_5,LPDWORD param_6)

{
  DWORD DVar1;
  int *piVar2;
  void *lpParameter;
  LPDWORD lpThreadId;
  HANDLE pvVar3;
  
  DVar1 = param_3;
  if (param_3 == 0) {
    piVar2 = FUN_0049fc4d();
    *piVar2 = 0x16;
    return (HANDLE)0x0;
  }
  lpParameter = _calloc(1,0x8c);
  if (lpParameter != (void *)0x0) {
    FUN_0049b38f((int)lpParameter);
    *(undefined4 *)((int)lpParameter + 4) = 0xffffffff;
    *(undefined4 *)((int)lpParameter + 0x50) = param_4;
    *(DWORD *)((int)lpParameter + 0x4c) = DVar1;
    lpThreadId = param_6;
    if (param_6 == (LPDWORD)0x0) {
      lpThreadId = &param_3;
    }
    pvVar3 = CreateThread(param_1,param_2,FUN_00499127,lpParameter,param_5,lpThreadId);
    if (pvVar3 != (HANDLE)0x0) {
      return pvVar3;
    }
    GetLastError();
  }
                    /* WARNING: Subroutine does not return */
  _free(lpParameter);
}

