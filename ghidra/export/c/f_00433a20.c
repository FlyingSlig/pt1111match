// FUNCTION: PORT1111 0x00433a20
// name: FUN_00433a20
// sig: undefined FUN_00433a20(int param_1)


void __fastcall FUN_00433a20(int param_1)

{
  DWORD DVar1;
  
  if (DAT_004e21b4 == 0) {
    DAT_004e21b4 = 1;
    if (*(int *)(param_1 + 0x1b4) != 0) {
      DVar1 = GetTickCount();
      *(DWORD *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + (DVar1 - *(int *)(param_1 + 0x1b4));
      *(undefined4 *)(param_1 + 0x1b4) = 0;
    }
    FUN_0047fd90((void *)(param_1 + 0xb4),0);
    FUN_0047fd90((void *)(param_1 + 0x4c),0);
  }
  return;
}

