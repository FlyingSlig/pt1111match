// FUNCTION: PORT1111 0x00401d60
// name: FUN_00401d60
// sig: undefined4 * FUN_00401d60(undefined4 * param_1)


undefined4 * __fastcall FUN_00401d60(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
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
  param_1[0x15] = 0;
  *param_1 = &PTR_LAB_004bc3a0;
  puVar2 = param_1 + 6;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}

