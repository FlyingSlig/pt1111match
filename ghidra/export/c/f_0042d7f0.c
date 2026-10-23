// FUNCTION: PORT1111 0x0042d7f0
// name: FUN_0042d7f0
// sig: undefined FUN_0042d7f0(int param_1)


void __fastcall FUN_0042d7f0(int param_1)

{
  int iVar1;
  void *this;
  
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00420ee0(*(int *)(DAT_004e2b14 + 0xf8));
    iVar1 = (int)*(short *)(*(int *)(param_1 + 8) + 0x34);
    this = (void *)FUN_004750b0(*(int *)(DAT_004e2b14 + 0xf8));
    FUN_00477b30(this,iVar1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

