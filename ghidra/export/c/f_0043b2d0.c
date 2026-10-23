// FUNCTION: PORT1111 0x0043b2d0
// name: FUN_0043b2d0
// sig: undefined FUN_0043b2d0(void * this, int * param_1, int param_2, int param_3, undefined4 param_4, int param_5)


void __thiscall
FUN_0043b2d0(void *this,int *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *this_00;
  int iVar5;
  
  iVar3 = (int)(param_3 + (param_3 >> 0x1f & 7U)) >> 3;
  iVar5 = iVar3 + -3;
  iVar3 = iVar3 + 3;
  iVar4 = (int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3;
  if (iVar5 <= iVar3) {
    iVar1 = iVar4 + -3;
    iVar2 = iVar1;
    do {
      for (; iVar2 <= iVar4 + 3; iVar2 = iVar2 + 1) {
        if ((((-1 < iVar2) && (-1 < iVar5)) && (iVar2 < *(int *)((int)this + 0x10))) &&
           ((iVar5 < *(int *)((int)this + 0x14) &&
            (this_00 = (void *)((*(int *)((int)this + 0x10) * iVar5 + iVar2) * 0x30 +
                               *(int *)((int)this + 4)), this_00 != (void *)0x0)))) {
          FUN_0043cb80(this_00,param_1,param_4,param_5);
        }
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar1;
    } while (iVar5 <= iVar3);
  }
  return;
}

