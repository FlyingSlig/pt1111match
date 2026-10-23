// FUNCTION: PORT1111 0x00438270
// name: FUN_00438270
// sig: undefined4 FUN_00438270(void * param_1)


undefined4 __fastcall FUN_00438270(void *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7b9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  pvVar2 = operator_new(0xc);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    local_10 = pvVar2;
    uVar3 = FUN_0043d220();
    *(undefined4 *)((int)pvVar2 + 4) = uVar3;
    *(undefined4 *)((int)pvVar2 + 8) = 0;
  }
  iVar1 = *(int *)((int)param_1 + 0x14);
  local_4 = 0xffffffff;
  local_10 = pvVar2;
  iVar4 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),&local_10);
  uVar3 = FUN_004371f0((void *)((int)param_1 + 0x10),1);
  *(int *)(iVar1 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

