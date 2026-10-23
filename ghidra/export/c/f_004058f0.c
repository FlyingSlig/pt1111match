// FUNCTION: PORT1111 0x004058f0
// name: FUN_004058f0
// sig: undefined4 FUN_004058f0(void * this, int param_1, int param_2)


undefined4 __thiscall FUN_004058f0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00414c30(DAT_004e240c);
  if ((param_2 < 0) || (iVar1 != 0)) {
    iVar2 = -1;
    iVar3 = -1;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 4);
      iVar3 = *(int *)(iVar1 + 8);
    }
    if ((((*(int *)((int)this + 0xd0) == 0) && (*(int *)((int)this + 0x94) == param_1)) &&
        (*(int *)((int)this + 0x98) == param_2)) &&
       ((*(int *)((int)this + 0x9c) == iVar2 && (*(int *)((int)this + 0xa0) == iVar3)))) {
      return 1;
    }
  }
  return 0;
}

