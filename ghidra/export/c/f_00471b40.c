// FUNCTION: PORT1111 0x00471b40
// name: FUN_00471b40
// sig: undefined FUN_00471b40(int param_1)


void __fastcall FUN_00471b40(int param_1)

{
  UINT_PTR UVar1;
  
  if (DAT_004dd970 != 0) {
    KillTimer((HWND)0x0,*(UINT_PTR *)(param_1 + 0x98));
    UVar1 = SetTimer((HWND)0x0,0,0x32,(TIMERPROC)&LAB_00472d70);
    *(UINT_PTR *)(param_1 + 0x98) = UVar1;
    DAT_004dd970 = 0;
  }
  FUN_0047ca30(*(void **)(param_1 + 0x48),(uint)*(ushort *)(param_1 + 0x2c),
               (uint)*(ushort *)((int)*(void **)(param_1 + 0x48) + 0x1c),0,0,0);
  return;
}

