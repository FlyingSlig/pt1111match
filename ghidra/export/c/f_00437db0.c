// FUNCTION: PORT1111 0x00437db0
// name: FUN_00437db0
// sig: undefined FUN_00437db0(void * param_1)


void __fastcall FUN_00437db0(void *param_1)

{
  int iVar1;
  void *this;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7b9b;
  local_c = ExceptionList;
  local_10 = param_1;
  if (*(int *)((int)param_1 + 0x18) == 0) {
    ExceptionList = &local_c;
    this = operator_new(0xc);
    local_4 = 0;
    if (this == (void *)0x0) {
      this = (void *)0x0;
    }
    else {
      local_10 = this;
      uVar2 = FUN_0043d220();
      *(undefined4 *)((int)this + 4) = uVar2;
      *(undefined4 *)((int)this + 8) = 0;
    }
    iVar1 = *(int *)((int)param_1 + 0x14);
    local_4 = 0xffffffff;
    local_10 = this;
    iVar3 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),&local_10);
    FUN_004371f0((void *)((int)param_1 + 0x10),1);
    *(int *)(iVar1 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
  }
  else {
    this = *(void **)(*(int *)(*(int *)((int)param_1 + 0x14) + 4) + 8);
    ExceptionList = &local_c;
  }
  iVar1 = *(int *)((int)this + 4);
  iVar3 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),(undefined4 *)&stack0x00000004);
  FUN_004371f0(this,1);
  *(int *)(iVar1 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  ExceptionList = local_c;
  return;
}

