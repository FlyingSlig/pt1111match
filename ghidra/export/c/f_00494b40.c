// FUNCTION: PORT1111 0x00494b40
// name: FUN_00494b40
// sig: undefined4 FUN_00494b40(void * this, int param_1)


undefined4 __thiscall FUN_00494b40(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 8);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar3 = 0;
      if (0 < *(int *)((int)this + 0xc)) {
        piVar2 = (int *)(*(int *)((int)this + 4) + iVar4 * 4);
        do {
          if (*piVar2 == param_1) {
            return 1;
          }
          iVar3 = iVar3 + 1;
          piVar2 = piVar2 + iVar1;
        } while (iVar3 < *(int *)((int)this + 0xc));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return 0;
}

