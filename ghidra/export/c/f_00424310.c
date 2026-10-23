// FUNCTION: PORT1111 0x00424310
// name: FUN_00424310
// sig: undefined4 FUN_00424310(int param_1)


undefined4 __fastcall FUN_00424310(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *local_4;
  
  iVar1 = *(int *)(param_1 + 0x14) + 4;
  if (*(int *)(param_1 + 0x10) < iVar1) {
    local_4 = "Unexpected number of byte.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_4,&DAT_004cd26c);
  }
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x18));
  *(int *)(param_1 + 0x14) = iVar1;
  return uVar2;
}

