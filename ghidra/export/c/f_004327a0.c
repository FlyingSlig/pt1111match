// FUNCTION: PORT1111 0x004327a0
// name: FUN_004327a0
// sig: undefined4 FUN_004327a0(int param_1)


undefined4 __fastcall FUN_004327a0(int param_1)

{
  int iVar1;
  void *this;
  int iVar2;
  
  this = (void *)FUN_00414c30(DAT_004e240c);
  if (this == (void *)0x0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = FUN_00412730((int)this);
  FUN_00412340(this,iVar2 + iVar1);
  FUN_00454e60(DAT_004e2410);
  return 1;
}

