// FUNCTION: PORT1111 0x004449d0
// name: FUN_004449d0
// sig: undefined4 FUN_004449d0(int param_1)


undefined4 __fastcall FUN_004449d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00414c30(DAT_004e240c);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 0x1c);
}

