// FUNCTION: PORT1111 0x0043f6d0
// name: FUN_0043f6d0
// sig: undefined4 * FUN_0043f6d0(void * this, int * param_1, int param_2)


undefined4 * __thiscall FUN_0043f6d0(void *this,int *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7f86;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = FUN_0043f590(this,param_1,10,*(int *)(param_2 + 0x14));
  if (piVar1 == (int *)0x0) {
    iVar4 = *(int *)(param_2 + 0x2a0);
    iVar3 = (**(code **)(*param_1 + 0x88))();
    if (*(int *)(iVar3 + 0xec + iVar4 * 4) != 0) {
      ExceptionList = local_c;
      return (undefined4 *)0x0;
    }
    puVar2 = operator_new(0x34);
    local_4 = 1;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_00432bf0(puVar2);
    }
    puVar2[0xc] = 1;
    puVar2[1] = param_1[4];
    iVar4 = *(int *)(param_2 + 0x14);
    puVar2[6] = 1;
  }
  else {
    puVar2 = operator_new(0x44);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_00430480(puVar2);
    }
    puVar2[0xc] = 1;
    puVar2[1] = param_1[4];
    iVar4 = piVar1[4];
    puVar2[6] = 0;
  }
  puVar2[5] = iVar4;
  ExceptionList = local_c;
  return puVar2;
}

