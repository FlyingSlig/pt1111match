// FUNCTION: PORT1111 0x00459a10
// name: FUN_00459a10
// sig: undefined FUN_00459a10(int param_1)


void __fastcall FUN_00459a10(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(param_1 + 0x4c) + 0x2c))();
  *(undefined4 *)(*(int *)(param_1 + 0x30c) + 4) = uVar1;
  FUN_00480b20(param_1);
  return;
}

