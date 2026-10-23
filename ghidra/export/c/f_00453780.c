// FUNCTION: PORT1111 0x00453780
// name: FUN_00453780
// sig: undefined FUN_00453780(int param_1)


void __fastcall FUN_00453780(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x14) = 1;
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = FUN_0040af10(DAT_004e2418);
    if (iVar1 != 0) {
      FUN_0040abe0(iVar1);
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  FUN_00455c40(DAT_004e2410);
  FUN_004134a0(DAT_004e240c);
  return;
}

