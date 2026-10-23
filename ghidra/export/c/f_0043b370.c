// FUNCTION: PORT1111 0x0043b370
// name: FUN_0043b370
// sig: undefined FUN_0043b370(void * this, int param_1, int param_2)


void __thiscall FUN_0043b370(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = (int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3;
  iVar6 = iVar3 + -2;
  iVar3 = iVar3 + 2;
  iVar4 = (int)(param_1 + (param_1 >> 0x1f & 7U)) >> 3;
  if (iVar6 <= iVar3) {
    iVar1 = iVar4 + -2;
    iVar2 = iVar1;
    do {
      for (; iVar2 <= iVar4 + 2; iVar2 = iVar2 + 1) {
        if ((((-1 < iVar2) && (-1 < iVar6)) && (iVar2 < *(int *)((int)this + 0x10))) &&
           ((iVar6 < *(int *)((int)this + 0x14) &&
            (iVar5 = (*(int *)((int)this + 0x10) * iVar6 + iVar2) * 0x30 + *(int *)((int)this + 4),
            iVar5 != 0)))) {
          FUN_0043ccf0(iVar5);
        }
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar1;
    } while (iVar6 <= iVar3);
  }
  return;
}

