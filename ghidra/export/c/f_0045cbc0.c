// FUNCTION: PORT1111 0x0045cbc0
// name: FUN_0045cbc0
// sig: undefined FUN_0045cbc0(void * this, int param_1)


void __thiscall FUN_0045cbc0(void *this,int param_1)

{
  int iVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  undefined3 extraout_var;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b960b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(DAT_004e240c + 0x60) == 1) {
    ExceptionList = &local_c;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 8);
    pvVar3 = operator_new(0x18);
    local_4 = 0;
    if (pvVar3 == (void *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0045c400(pvVar3,iVar1);
    }
    local_4 = 0xffffffff;
    FUN_004456a0(*(void **)(DAT_004e240c + 0x70),iVar4);
  }
  bVar2 = FUN_0045c4d0(iVar1);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    pvVar3 = (void *)((int)this + 0xc);
  }
  else {
    pvVar3 = (void *)((int)this + 0x18);
  }
  iVar1 = *(int *)((int)pvVar3 + 4);
  iVar4 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),&param_1);
  FUN_00445600(pvVar3,1);
  *(int *)(iVar1 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  ExceptionList = local_c;
  return;
}

