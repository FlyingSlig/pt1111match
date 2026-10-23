// FUNCTION: PORT1111 0x004328a0
// name: FUN_004328a0
// sig: undefined4 FUN_004328a0(int param_1)


undefined4 __fastcall FUN_004328a0(int param_1)

{
  int *piVar1;
  int iVar2;
  void *this;
  int iVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)FUN_00414c30(DAT_004e240c);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  (**(code **)(*piVar1 + 0x20))();
  iVar2 = FUN_0040af10(DAT_004e2418);
  if (iVar2 != 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x1c);
    iVar2 = *(int *)(param_1 + 0x18);
    iVar3 = *(int *)(param_1 + 0x14);
    (**(code **)(*piVar1 + 0x20))();
    this = (void *)FUN_0040af10(DAT_004e2418);
    FUN_0040a9c0(this,iVar3,iVar2,uVar4);
  }
  return 1;
}

