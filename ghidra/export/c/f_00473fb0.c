// FUNCTION: PORT1111 0x00473fb0
// name: FUN_00473fb0
// sig: undefined4 * FUN_00473fb0(undefined4 * param_1)


undefined4 * __fastcall FUN_00473fb0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_004c655c;
  uVar1 = FUN_0043d220();
  param_1[2] = uVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  return param_1;
}

