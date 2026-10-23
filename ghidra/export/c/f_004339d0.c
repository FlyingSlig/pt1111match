// FUNCTION: PORT1111 0x004339d0
// name: FUN_004339d0
// sig: undefined FUN_004339d0(int param_1)


void __fastcall FUN_004339d0(int param_1)

{
  DWORD DVar1;
  
  if (DAT_004e21b4 != 0) {
    DAT_004e21b4 = 0;
    FUN_0047fd90((void *)(param_1 + 0xb4),1);
    FUN_0047fd90((void *)(param_1 + 0x4c),1);
    if (*(int *)(param_1 + 0x1b4) == 0) {
      DVar1 = GetTickCount();
      *(DWORD *)(param_1 + 0x1b4) = DVar1;
    }
  }
  return;
}

