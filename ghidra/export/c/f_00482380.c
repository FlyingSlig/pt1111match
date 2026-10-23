// FUNCTION: PORT1111 0x00482380
// name: FUN_00482380
// sig: undefined FUN_00482380(void * this, int param_1)


void __thiscall FUN_00482380(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_004810c0(*(int *)((int)this + 0x2a8));
  iVar2 = param_1 - iVar2;
  if ((((-1 < iVar2) && (iVar2 < *(int *)((int)this + 0x20))) &&
      (piVar1 = *(int **)((int)this + iVar2 * 4 + 0x30), piVar1 != (int *)0x0)) &&
     (piVar1[0x29] == 0)) {
    FUN_00471e40(piVar1);
  }
  return;
}

