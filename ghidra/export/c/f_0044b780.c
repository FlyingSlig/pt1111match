// FUNCTION: PORT1111 0x0044b780
// name: FUN_0044b780
// sig: undefined4 * FUN_0044b780(undefined4 * param_1)


undefined4 * __fastcall FUN_0044b780(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[2] = 0;
  puVar2 = param_1 + 3;
  for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[1] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0xfd;
  *param_1 = &PTR_LAB_004c4478;
  return param_1;
}

