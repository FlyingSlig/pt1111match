// FUNCTION: PORT1111 0x00425970
// name: FUN_00425970
// sig: undefined4 FUN_00425970(void * this, int param_1, int param_2)


undefined4 __thiscall FUN_00425970(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 < 0) || (param_2 < 0)) {
    return 0;
  }
  iVar2 = *(int *)((int)this + 0x14);
  iVar1 = param_1 % (iVar2 * 2);
  if (iVar2 <= iVar1) {
    iVar1 = param_1 % iVar2;
    param_2 = param_2 + iVar2;
  }
  iVar2 = param_2 % *(int *)((int)this + 0x18);
  if ((((iVar1 < *(int *)((int)this + 0x14)) && (iVar2 < *(int *)((int)this + 0x18))) &&
      (-1 < iVar1)) && (-1 < iVar2)) {
    return *(undefined4 *)
            (*(int *)((int)this + 0xc) + (*(int *)((int)this + 0x14) * iVar2 + iVar1) * 4);
  }
  return 0xffffffff;
}

