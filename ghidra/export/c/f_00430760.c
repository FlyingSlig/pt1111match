// FUNCTION: PORT1111 0x00430760
// name: FUN_00430760
// sig: undefined4 FUN_00430760(int param_1)


undefined4 __fastcall FUN_00430760(int param_1)

{
  int *this;
  int iVar1;
  int iVar2;
  void *this_00;
  
  this = (int *)FUN_00414c30(DAT_004e240c);
  if ((this != (int *)0x0) && ((*(byte *)(this + 0xf) & 8) != 0)) {
    iVar1 = FUN_00408a60(this,*(int *)(param_1 + 0x14));
    if (iVar1 != 0) {
      iVar2 = (**(code **)(*this + 0x88))();
      FUN_004534b0((void *)((int)DAT_004e2410 + 0x888),*(int *)(iVar2 + 0x34),
                   *(int *)(iVar1 + 0x110));
      this_00 = (void *)(**(code **)(*this + 0x88))();
      FUN_00423080(this_00,iVar1,1,1);
      FUN_00454e30(DAT_004e2410,1);
    }
    return 1;
  }
  return 0;
}

