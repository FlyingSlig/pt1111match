// FUNCTION: PORT1111 0x00472d90
// name: FUN_00472d90
// sig: undefined FUN_00472d90(int param_1)


void __fastcall FUN_00472d90(int param_1)

{
  UINT_PTR UVar1;
  
  DAT_004dd970 = 1;
  DAT_004e2c40 = param_1;
  UVar1 = SetTimer((HWND)0x0,0,400,(TIMERPROC)&LAB_00472d70);
  *(UINT_PTR *)(param_1 + 0x98) = UVar1;
  return;
}

