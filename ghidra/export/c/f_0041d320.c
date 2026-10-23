// FUNCTION: PORT1111 0x0041d320
// name: FUN_0041d320
// sig: undefined4 * FUN_0041d320(undefined4 param_1, undefined4 param_2, undefined4 * param_3)


undefined4 * FUN_0041d320(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004b6941;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(0x140);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_2;
    *puVar1 = param_1;
    FUN_00466b20(puVar1 + 2,param_3);
    puVar3 = puVar1 + 3;
    for (iVar2 = 0x4d; param_3 = param_3 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_3;
      puVar3 = puVar3 + 1;
    }
  }
  ExceptionList = local_10;
  return puVar1;
}

