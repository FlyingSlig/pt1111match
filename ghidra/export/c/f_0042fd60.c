// FUNCTION: PORT1111 0x0042fd60
// name: FUN_0042fd60
// sig: undefined4 FUN_0042fd60(int param_1)


undefined4 __fastcall FUN_0042fd60(int param_1)

{
  bool bVar1;
  void *this;
  undefined3 extraout_var;
  
  this = (void *)FUN_00414c30(DAT_004e240c);
  if (this == (void *)0x0) {
    return 0;
  }
  bVar1 = FUN_00405f40(this,0);
  if ((CONCAT31(extraout_var,bVar1) != 0) &&
     (*(int *)(*(int *)((int)this + 0xb0) + 0x30) == *(int *)(param_1 + 0x14))) {
    FUN_004137d0((int)this);
  }
  return 1;
}

