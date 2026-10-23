// FUNCTION: PORT1111 0x00453750
// name: FUN_00453750
// sig: undefined FUN_00453750(int param_1)


void __fastcall FUN_00453750(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = FUN_0040af10(DAT_004e2418);
    if (iVar1 != 0) {
      FUN_0040abe0(iVar1);
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

