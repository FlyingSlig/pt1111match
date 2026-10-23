// FUNCTION: PORT1111 0x0040d580
// name: FUN_0040d580
// sig: undefined FUN_0040d580(void * this, int param_1)


void __thiscall FUN_0040d580(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)((int)this + 0x13c) * 0x290;
  if (*(int *)(&DAT_004bd638 + iVar2) != 0) {
    *(undefined **)((int)this + 0x128) = &DAT_004d5588 + param_1 * 0x50;
    iVar1 = 0;
    if (0 < *(int *)(&DAT_004bd638 + iVar2)) {
      piVar3 = (int *)((int)this + 300);
      do {
        if (*piVar3 != 0) {
          *(undefined **)(*piVar3 + 0x18) = &DAT_004d5598 + iVar1 * 0x10 + param_1 * 0x50;
        }
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar1 < *(int *)(&DAT_004bd638 + *(int *)((int)this + 0x13c) * 0x290));
    }
    return;
  }
  *(undefined4 *)((int)this + 0x128) = 0;
  return;
}

