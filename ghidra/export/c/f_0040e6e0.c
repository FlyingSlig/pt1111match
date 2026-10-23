// FUNCTION: PORT1111 0x0040e6e0
// name: FUN_0040e6e0
// sig: undefined FUN_0040e6e0(int param_1)


void __fastcall FUN_0040e6e0(int param_1)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 0x120)) {
    iVar1 = FUN_00414c30(DAT_004e240c);
    if ((iVar1 != 0) && (*(char *)(iVar1 + 0x3c) < '\0')) {
      FUN_0040a110(iVar1);
    }
  }
  return;
}

