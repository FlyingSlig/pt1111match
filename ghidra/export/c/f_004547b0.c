// FUNCTION: PORT1111 0x004547b0
// name: FUN_004547b0
// sig: undefined FUN_004547b0(void * this, int param_1)


void __thiscall FUN_004547b0(void *this,int param_1)

{
  void *this_00;
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  this_00 = (void *)(param_1 * 0x1c + (int)this);
  FUN_00419480((int)this_00);
  piVar4 = (int *)**(int **)((int)this + 4);
  if (piVar4 != *(int **)((int)this + 4)) {
    do {
      piVar1 = (int *)FUN_00414c30(DAT_004e240c);
      if (((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0xa4))(), iVar2 != 0)) &&
         (((*(byte *)(piVar1 + 0xf) & 4) == 0 || (piVar1[0x3c] == 0)))) {
        param_1 = piVar1[4];
        iVar2 = *(int *)((int)this_00 + 4);
        iVar3 = FUN_00413870(iVar2,*(undefined4 *)(iVar2 + 4),&param_1);
        FUN_00409f80(this_00,1);
        *(int *)(iVar2 + 4) = iVar3;
        **(int **)(iVar3 + 4) = iVar3;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)((int)this + 4));
  }
  return;
}

