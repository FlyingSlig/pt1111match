// FUNCTION: PORT1111 0x0043cf10
// name: FUN_0043cf10
// sig: undefined4 * FUN_0043cf10(undefined4 * param_1)


undefined4 * __fastcall FUN_0043cf10(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_004c0518;
  uVar1 = FUN_0043d220();
  param_1[8] = uVar1;
  param_1[9] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}

