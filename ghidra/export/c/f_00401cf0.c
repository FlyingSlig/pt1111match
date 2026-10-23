// FUNCTION: PORT1111 0x00401cf0
// name: FUN_00401cf0
// sig: undefined4 * FUN_00401cf0(undefined4 * param_1)


undefined4 * __fastcall FUN_00401cf0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_004bc3dc;
  iVar1 = FUN_004748f0();
  param_1[4] = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(undefined4 *)(param_1[4] + 4) = param_1[4];
  *(undefined4 *)param_1[4] = param_1[4];
  *(undefined4 *)(param_1[4] + 8) = param_1[4];
  param_1[5] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_004bc3ec;
  return param_1;
}

