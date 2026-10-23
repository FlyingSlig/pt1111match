// FUNCTION: PORT1111 0x00405c40
// name: FUN_00405c40
// sig: undefined4 FUN_00405c40(void * this, int param_1)


undefined4 __thiscall FUN_00405c40(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar1 = (int)*(short *)(*(int *)((int)this + 0x40) + 0x4e) -
            (int)*(short *)(*(int *)(param_1 + 0x40) + 0x4e);
    iVar2 = (int)*(short *)(*(int *)((int)this + 0x40) + 0x4c) -
            (int)*(short *)(*(int *)(param_1 + 0x40) + 0x4c);
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if ((iVar1 < 2) && (iVar2 < 2)) {
      return 1;
    }
  }
  return 0;
}

