// FUNCTION: PORT1111 0x004393e0
// name: FUN_004393e0
// sig: undefined4 FUN_004393e0(int param_1, undefined4 * param_2)


undefined4 FUN_004393e0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7ce8;
  local_c = ExceptionList;
  if ((*(int *)(param_1 + 8) == 3) && (*(int *)(*(int *)(param_1 + 0xc) + 8) == 1)) {
    uVar2 = *(undefined4 *)(**(int **)(*(int *)(param_1 + 0xc) + 4) + 8);
    *param_2 = uVar2;
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  ExceptionList = &local_c;
  FUN_00465cf0(&param_1);
  local_4 = 0;
  if (*(int *)(iVar1 + 8) == 0) {
    puVar4 = *(undefined4 **)(iVar1 + 0xc);
  }
  else {
    if ((*(int *)(iVar1 + 8) != 6) || (*(int *)(*(int *)(iVar1 + 0xc) + 8) != 1)) goto LAB_004394b2;
    puVar4 = *(undefined4 **)(**(int **)(*(int *)(iVar1 + 0xc) + 4) + 8);
  }
  FUN_00466a50(&param_1,puVar4);
  uVar2 = FUN_00437290(&DAT_004e25f8,&param_1,param_2);
  local_4 = 0xffffffff;
  if ((char)uVar2 != '\0') {
    uVar2 = FUN_00465e40(&param_1);
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
LAB_004394b2:
  local_4 = 0xffffffff;
  uVar3 = FUN_00465e40(&param_1);
  ExceptionList = local_c;
  return uVar3 & 0xffffff00;
}

