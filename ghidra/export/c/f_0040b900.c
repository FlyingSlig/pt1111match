// FUNCTION: PORT1111 0x0040b900
// name: FUN_0040b900
// sig: undefined4 * FUN_0040b900(undefined4 * param_1)


undefined4 * __fastcall FUN_0040b900(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_004bd570;
  iVar1 = FUN_004748f0();
  param_1[2] = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(undefined4 *)(param_1[2] + 4) = param_1[2];
  *(undefined4 *)param_1[2] = param_1[2];
  *(undefined4 *)(param_1[2] + 8) = param_1[2];
  param_1[3] = 0;
  return param_1;
}

