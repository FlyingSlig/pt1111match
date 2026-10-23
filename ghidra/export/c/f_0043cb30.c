// FUNCTION: PORT1111 0x0043cb30
// name: FUN_0043cb30
// sig: int FUN_0043cb30(void * this, int param_1)


int __thiscall FUN_0043cb30(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)**(int **)((int)this + 8);
  iVar3 = 0;
  if (piVar4 != *(int **)((int)this + 8)) {
    do {
      piVar1 = (int *)FUN_00414c30(DAT_004e240c);
      if ((piVar1 != (int *)0x0) &&
         (iVar2 = (**(code **)(*piVar1 + 0x88))(), *(int *)(iVar2 + 0x34) != param_1)) {
        iVar3 = iVar3 + 1;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)((int)this + 8));
  }
  return iVar3;
}

