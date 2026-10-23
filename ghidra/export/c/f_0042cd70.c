// FUNCTION: PORT1111 0x0042cd70
// name: FUN_0042cd70
// sig: undefined FUN_0042cd70(int param_1)


void __fastcall FUN_0042cd70(int param_1)

{
  void *this;
  int iVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00478a10(*(int *)(param_1 + 8));
    FUN_004788b0(*(int *)(param_1 + 8));
    FUN_00420ee0(*(int *)(DAT_004e2b14 + 0xf8));
    iVar1 = (int)*(short *)(*(int *)(param_1 + 8) + 0x34);
    this = (void *)FUN_004750b0(*(int *)(DAT_004e2b14 + 0xf8));
    FUN_00477b30(this,iVar1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

