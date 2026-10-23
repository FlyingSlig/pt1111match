// FUNCTION: PORT1111 0x00425900
// name: FUN_00425900
// sig: int FUN_00425900(void * this, int param_1, int param_2)


int __thiscall FUN_00425900(void *this,int param_1,int param_2)

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
    return (*(int *)((int)this + 0x14) * iVar2 + iVar1) * 0x30 + *(int *)((int)this + 8);
  }
  return 0;
}

