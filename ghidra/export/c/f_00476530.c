// FUNCTION: PORT1111 0x00476530
// name: FUN_00476530
// sig: undefined4 FUN_00476530(void * this, int param_1)


undefined4 __thiscall FUN_00476530(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_1;
  this_00 = *(void **)((int)this + 0x14);
  local_8 = param_1;
  FUN_00413aa0(this_00,&local_4,&local_8);
  if ((local_4 != *(int *)((int)this_00 + 4)) && (*(int *)(local_4 + 0x10) != 0)) {
    iVar1 = FUN_00474c00(this,iVar1);
    if (iVar1 == 0) {
      FUN_00475f50(this_00,&param_1);
      return 1;
    }
  }
  return 0;
}

