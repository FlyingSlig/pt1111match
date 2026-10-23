// FUNCTION: PORT1111 0x00481050
// name: FUN_00481050
// sig: int FUN_00481050(void * this, int param_1)


int __thiscall FUN_00481050(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 0x78);
  iVar3 = iVar1;
  if ((param_1 <= iVar1) && (iVar3 = param_1, param_1 < *(int *)((int)this + 0x7c))) {
    iVar3 = *(int *)((int)this + 0x7c);
  }
  if (iVar3 != iVar1) {
    if (*(int *)((int)this + 0x14) != 0) {
      if (*(int *)((int)this + 0x40) != 0) {
        iVar2 = *(int *)((int)this + 0x14);
        iVar3 = (((iVar2 / 2 - *(int *)((int)this + 0x7c)) + iVar3) / iVar2) * iVar2 +
                *(int *)((int)this + 0x7c);
      }
      if (iVar1 < iVar3) {
        iVar3 = iVar1;
      }
      return iVar3;
    }
    return 0;
  }
  return iVar3;
}

