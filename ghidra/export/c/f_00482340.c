// FUNCTION: PORT1111 0x00482340
// name: FUN_00482340
// sig: undefined FUN_00482340(void * this, int param_1)


void __thiscall FUN_00482340(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004810c0(*(int *)((int)this + 0x2a8));
  iVar1 = param_1 - iVar1;
  if ((((-1 < iVar1) && (iVar1 < *(int *)((int)this + 0x20))) &&
      (iVar1 = *(int *)((int)this + iVar1 * 4 + 0x30), iVar1 != 0)) && (*(int *)(iVar1 + 0xa4) != 0)
     ) {
    FUN_00471e90(iVar1);
  }
  return;
}

