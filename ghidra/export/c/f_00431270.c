// FUNCTION: PORT1111 0x00431270
// name: FUN_00431270
// sig: undefined4 FUN_00431270(int param_1)


undefined4 __fastcall FUN_00431270(int param_1)

{
  int iVar1;
  int iVar2;
  void *this;
  
  iVar1 = FUN_004147d0(*(int *)(param_1 + 0x1c));
  iVar2 = FUN_00429b40(DAT_004e2404,*(int *)(param_1 + 0x14),*(int *)(param_1 + 0x18));
  if (iVar2 == 0) {
    return 0;
  }
  this = (void *)FUN_00429ac0(DAT_004e2404,(int)*(short *)(iVar2 + 0x4e),
                              (int)*(short *)(iVar2 + 0x4c));
  if (this != (void *)0x0) {
    FUN_00427540(this,iVar1);
  }
  return 1;
}

