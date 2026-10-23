// FUNCTION: PORT1111 0x0043c870
// name: FUN_0043c870
// sig: undefined FUN_0043c870(void * this, int param_1, char param_2, int param_3)


void __thiscall FUN_0043c870(void *this,int param_1,char param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (param_2 != '\0') {
    *(int *)((int)this + param_3 * 4 + 0x10) = *(int *)((int)this + param_3 * 4 + 0x10) + param_1;
  }
  piVar3 = (int *)**(int **)((int)this + 8);
  if (piVar3 != *(int **)((int)this + 8)) {
    do {
      piVar1 = (int *)FUN_00414c30(DAT_004e240c);
      if ((piVar1 != (int *)0x0) &&
         (iVar2 = (**(code **)(*piVar1 + 0x88))(), *(int *)(iVar2 + 0x34) == param_3)) {
        thunk_FUN_00444d00((void *)piVar1[0x2c]);
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)((int)this + 8));
  }
  return;
}

