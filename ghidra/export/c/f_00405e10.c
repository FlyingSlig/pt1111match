// FUNCTION: PORT1111 0x00405e10
// name: FUN_00405e10
// sig: undefined4 FUN_00405e10(void * this, int param_1, int param_2)


undefined4 __thiscall FUN_00405e10(void *this,int param_1,int param_2)

{
  int iVar1;
  
  if ((*(int *)((int)this + 0x94) == param_1) && (*(int *)((int)this + 0x98) == param_2)) {
    return 1;
  }
  if ((*(int *)((int)this + 0xe4) != 0) && (iVar1 = FUN_00414c30(DAT_004e240c), iVar1 != 0)) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x50) + 0x14);
    if (iVar1 == 0x35) {
      return 1;
    }
    if (iVar1 == 0x50) {
      return 1;
    }
  }
  return 0;
}

