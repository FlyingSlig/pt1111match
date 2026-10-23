// FUNCTION: PORT1111 0x00411de0
// name: FUN_00411de0
// sig: undefined FUN_00411de0(int param_1)


void __fastcall FUN_00411de0(int param_1)

{
  void *pvVar1;
  
  FUN_00478700(*(void **)(param_1 + 8),*(int *)(*(int *)(param_1 + 4) + 4),
               *(int *)(*(int *)(param_1 + 4) + 8));
  pvVar1 = *(void **)(param_1 + 8);
  if ((*(byte *)((int)pvVar1 + 0x2c) & 1) != 0) {
    *(byte *)((int)pvVar1 + 0x2c) = *(byte *)((int)pvVar1 + 0x2c) | 0x88;
    return;
  }
  FUN_00478920(pvVar1);
  return;
}

