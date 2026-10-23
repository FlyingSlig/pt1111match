// FUNCTION: PORT1111 0x0043d310
// name: FUN_0043d310
// sig: undefined FUN_0043d310(void * this, int param_1)


void __thiscall FUN_0043d310(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = FUN_0043d190((int)this);
  if (iVar1 == 0) {
    *(int *)((int)this + 0x10) = param_1;
    return;
  }
  iVar1 = FUN_0043d190((int)this);
  iVar1 = param_1 / iVar1;
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  piVar4 = (int *)**(int **)((int)this + 8);
  if (piVar4 != *(int **)((int)this + 8)) {
    do {
      if (param_1 < 1) break;
      iVar2 = iVar1;
      if (param_1 < iVar1) {
        iVar2 = param_1;
      }
      iVar3 = *(int *)(piVar4[2] + 8) - *(int *)(piVar4[2] + 0xc);
      if (iVar3 < iVar2) {
        iVar2 = iVar3;
      }
      param_1 = param_1 - iVar2;
      FUN_0043cf60((void *)piVar4[2],iVar2);
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)((int)this + 8));
  }
  iVar1 = *(int *)((int)this + 0x10) + param_1;
  *(int *)((int)this + 0x10) = iVar1;
  if (0 < iVar1) {
    FUN_0043d3a0((int)this);
  }
  return;
}

