// FUNCTION: PORT1111 0x0042dff0
// name: FUN_0042dff0
// sig: undefined FUN_0042dff0(int param_1)


void FUN_0042dff0(int param_1)

{
  void *this;
  int iVar1;
  
  FUN_00478a10(*(int *)(param_1 + 4));
  FUN_004788b0(*(int *)(param_1 + 4));
  FUN_00420ee0(*(int *)(DAT_004e2b14 + 0xf8));
  iVar1 = (int)*(short *)(*(int *)(param_1 + 4) + 0x34);
  this = (void *)FUN_004750b0(*(int *)(DAT_004e2b14 + 0xf8));
  FUN_00477b30(this,iVar1);
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

