// FUNCTION: PORT1111 0x00444c80
// name: FUN_00444c80
// sig: undefined4 FUN_00444c80(void * this, int param_1, int param_2)


undefined4 __thiscall FUN_00444c80(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_8;
  int local_4;
  
  local_8 = param_1;
  FUN_00413aa0((void *)((int)this + 0xc),&local_4,&local_8);
  iVar1 = param_2;
  if (local_4 == *(int *)((int)this + 0x10)) {
    iVar2 = 2000;
  }
  else {
    iVar2 = *(int *)(local_4 + 0x10);
  }
  if (iVar2 == param_2) {
    return 0;
  }
  if (iVar2 != 2000) {
    FUN_00444ba0(this);
  }
  piVar3 = FUN_0042c280((void *)((int)this + 0xc),&param_1);
  *piVar3 = iVar1;
  return 1;
}

