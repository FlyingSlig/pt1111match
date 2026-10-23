// FUNCTION: PORT1111 0x00494bb0
// name: FUN_00494bb0
// sig: undefined FUN_00494bb0(void * this, int param_1)


void __thiscall FUN_00494bb0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
    return;
  }
  piVar4 = *(int **)((int)this + 4);
  if ((piVar4[*(int *)((int)this + 0x14) * *(int *)((int)this + 8) + *(int *)((int)this + 0x10)] !=
       param_1) && (0 < *(int *)((int)this + 8))) {
    do {
      iVar1 = 0;
      if (0 < *(int *)((int)this + 0xc)) {
        piVar2 = piVar4;
        do {
          if (*piVar2 == param_1) {
            *(int *)((int)this + 0x10) = iVar3;
            *(int *)((int)this + 0x14) = iVar1;
            return;
          }
          iVar1 = iVar1 + 1;
          piVar2 = piVar2 + *(int *)((int)this + 8);
        } while (iVar1 < *(int *)((int)this + 0xc));
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < *(int *)((int)this + 8));
    return;
  }
  return;
}

