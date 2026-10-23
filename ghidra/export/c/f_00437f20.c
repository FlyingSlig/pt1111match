// FUNCTION: PORT1111 0x00437f20
// name: FUN_00437f20
// sig: undefined FUN_00437f20(void * this, uchar * param_1)


void __thiscall FUN_00437f20(void *this,uchar *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7bc6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0x20) == 0) {
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
    *(void **)((int)this + 0x20) = pvVar2;
  }
  local_4 = 0xffffffff;
  pvVar2 = operator_new(4);
  local_4 = 1;
  if (pvVar2 == (void *)0x0) {
    param_1 = (uchar *)0x0;
  }
  else {
    param_1 = (uchar *)FUN_00466af0(pvVar2,param_1,0xffffffff);
  }
  pvVar2 = *(void **)((int)this + 0x20);
  iVar1 = *(int *)((int)pvVar2 + 4);
  local_4 = 0xffffffff;
  iVar4 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),&param_1);
  FUN_004371f0(pvVar2,1);
  *(int *)(iVar1 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  ExceptionList = local_c;
  return;
}

