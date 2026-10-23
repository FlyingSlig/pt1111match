// FUNCTION: PORT1111 0x004453d0
// name: FUN_004453d0
// sig: undefined FUN_004453d0(void * this, int param_1, int param_2)


void __thiscall FUN_004453d0(void *this,int param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = FUN_0043dc50(*(int *)(*(int *)((int)this + 0x18) + 0x50) + 0x270);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = FUN_00444c80(this,param_1,param_2);
    if (iVar2 != 0) {
      FUN_004137d0(*(int *)((int)this + 0x18));
    }
  }
  return;
}

