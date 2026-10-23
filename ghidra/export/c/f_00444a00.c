// FUNCTION: PORT1111 0x00444a00
// name: FUN_00444a00
// sig: undefined4 FUN_00444a00(int param_1)


undefined4 __fastcall FUN_00444a00(int param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  int iVar3;
  int local_8;
  int local_4;
  
  this = (void *)(param_1 + 0xc);
  local_8 = 0x3eb;
  FUN_00413aa0(this,&local_4,&local_8);
  iVar1 = *(int *)(param_1 + 0x10);
  iVar3 = 2000;
  if (local_4 != iVar1) {
    iVar3 = *(int *)(local_4 + 0x10);
  }
  local_4 = 0x3e9;
  FUN_00413aa0(this,&local_8,&local_4);
  iVar2 = 2000;
  if (local_8 != iVar1) {
    iVar2 = *(int *)(local_8 + 0x10);
  }
  local_4 = 0x3ea;
  FUN_00413aa0(this,&local_8,&local_4);
  if (local_8 == iVar1) {
    iVar1 = 2000;
  }
  else {
    iVar1 = *(int *)(local_8 + 0x10);
  }
  if (((iVar3 != 0x7d1) && (iVar2 != 0x7d1)) && (iVar1 != 0x7d1)) {
    return 0;
  }
  return 1;
}

