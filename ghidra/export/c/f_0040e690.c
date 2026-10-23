// FUNCTION: PORT1111 0x0040e690
// name: FUN_0040e690
// sig: int FUN_0040e690(int param_1)


int __fastcall FUN_0040e690(int param_1)

{
  int iVar1;
  
  if ((0 < *(int *)(param_1 + 300)) && (*(int *)(param_1 + 0x120) != 0)) {
    iVar1 = FUN_00414c30(DAT_004e240c);
    if ((iVar1 != 0) && (*(char *)(iVar1 + 0x3c) < '\0')) {
      iVar1 = FUN_00409e60(iVar1);
      if (0 < iVar1) {
        return iVar1;
      }
      return *(int *)(param_1 + 0x10);
    }
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  return *(int *)(param_1 + 0x10);
}

