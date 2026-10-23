// FUNCTION: PORT1111 0x0040bb90
// name: FUN_0040bb90
// sig: undefined4 * FUN_0040bb90(undefined4 * param_1)


undefined4 * __fastcall FUN_0040bb90(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_004bd588;
  uVar1 = FUN_0043d220();
  param_1[7] = uVar1;
  param_1[8] = 0;
  param_1[0x10] = 0;
  return param_1;
}

