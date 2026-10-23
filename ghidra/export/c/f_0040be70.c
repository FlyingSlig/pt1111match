// FUNCTION: PORT1111 0x0040be70
// name: FUN_0040be70
// sig: undefined4 * FUN_0040be70(int param_1)


undefined4 * __fastcall FUN_0040be70(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b5d2b;
  local_c = ExceptionList;
  if ((*(char *)(param_1 + 0x40) == '\0') && (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x14)))
  {
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x1c) + 8);
    *(undefined4 *)(param_1 + 0x1c) = **(undefined4 **)(param_1 + 0x1c);
    return puVar1;
  }
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 0x40) = 1;
  local_10 = operator_new(0x50);
  local_4 = 0;
  if (local_10 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_14 = FUN_0040bb90(local_10);
  }
  local_4 = 0xffffffff;
  local_10 = local_14;
  FUN_0040b990(local_14,*(undefined4 *)(param_1 + 0x20),*(int *)(param_1 + 0x24),
               *(undefined4 *)(param_1 + 0x28),*(int *)(param_1 + 0x2c),
               *(undefined4 *)(param_1 + 0x44));
  iVar2 = *(int *)(param_1 + 0x14);
  iVar3 = FUN_00413870(iVar2,*(undefined4 *)(iVar2 + 4),&local_10);
  FUN_0040bd90((void *)(param_1 + 0x10),1);
  *(int *)(iVar2 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x3c);
  ExceptionList = local_c;
  return local_14;
}

