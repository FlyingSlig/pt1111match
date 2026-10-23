// FUNCTION: PORT1111 0x00437e80
// name: FUN_00437e80
// sig: undefined FUN_00437e80(int param_1)


void __fastcall FUN_00437e80(int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7b9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x1c) == 0) {
    ExceptionList = &local_c;
    pvVar2 = operator_new(0xc);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      uVar3 = FUN_0043d220();
      *(undefined4 *)((int)pvVar2 + 4) = uVar3;
      *(undefined4 *)((int)pvVar2 + 8) = 0;
    }
    *(void **)(param_1 + 0x1c) = pvVar2;
  }
  local_4 = 0xffffffff;
  pvVar2 = *(void **)(param_1 + 0x1c);
  iVar1 = *(int *)((int)pvVar2 + 4);
  iVar4 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),(undefined4 *)&stack0x00000004);
  FUN_00409f80(pvVar2,1);
  *(int *)(iVar1 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  ExceptionList = local_c;
  return;
}

