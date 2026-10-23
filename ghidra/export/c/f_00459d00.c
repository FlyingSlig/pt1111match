// FUNCTION: PORT1111 0x00459d00
// name: FUN_00459d00
// sig: undefined FUN_00459d00(int param_1)


void __fastcall FUN_00459d00(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(param_1 + 0x308) + 0x2c))();
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x880) + 4) + 4) = uVar1;
  uVar1 = (**(code **)(*(int *)(param_1 + 0x4c) + 0x2c))();
  *(undefined4 *)(*(int *)(param_1 + 0x880) + 8) = uVar1;
  uVar1 = (**(code **)(*(int *)(param_1 + 0x5c4) + 0x2c))();
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x880) + 0xc) + 4) = uVar1;
  FUN_00480b20(param_1);
  return;
}

