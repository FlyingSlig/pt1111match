// FUNCTION: PORT1111 0x004548a0
// name: FUN_004548a0
// sig: undefined FUN_004548a0(void * this, int * param_1)


void __thiscall FUN_004548a0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iStack_8;
  undefined4 uStack_4;
  
  piVar2 = param_1;
  (**(code **)(*param_1 + 8))();
  iStack_8 = 9;
  do {
    param_1 = (int *)FUN_00424310((int)piVar2);
    if (0 < (int)param_1) {
      do {
        uStack_4 = FUN_00424310((int)piVar2);
        iVar1 = *(int *)((int)this + 0x20);
        iVar3 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),&uStack_4);
        FUN_00409f80((void *)((int)this + 0x1c),1);
        *(int *)(iVar1 + 4) = iVar3;
        **(int **)(iVar3 + 4) = iVar3;
        param_1 = (int *)((int)param_1 + -1);
      } while (param_1 != (int *)0x0);
    }
    iStack_8 = iStack_8 + -1;
    this = (void *)((int)this + 0x1c);
  } while (iStack_8 != 0);
  return;
}

