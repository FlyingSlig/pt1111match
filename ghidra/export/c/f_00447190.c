// FUNCTION: PORT1111 0x00447190
// name: FUN_00447190
// sig: undefined FUN_00447190(int param_1)


void __fastcall FUN_00447190(int param_1)

{
  DWORD DVar1;
  
  FUN_00453550((void *)(param_1 + 4),*(int *)(param_1 + 0x1c) + 1);
  DVar1 = GetTickCount();
  if (0x32 < DVar1 - *(int *)(param_1 + 0x84)) {
    FUN_00447110(param_1);
    DVar1 = GetTickCount();
    *(DWORD *)(param_1 + 0x84) = DVar1;
  }
  return;
}

