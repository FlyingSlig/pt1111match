// FUNCTION: PORT1111 0x00431210
// name: FUN_00431210
// sig: undefined FUN_00431210(int param_1)


void __fastcall FUN_00431210(int param_1)

{
  void *this;
  int iVar1;
  
  this = (void *)FUN_00414c30(DAT_004e240c);
  iVar1 = FUN_0040e690((int)this);
  *(int *)(param_1 + 0x14) = iVar1;
  FUN_0040e560(this,*(int *)(param_1 + 4));
  return;
}

