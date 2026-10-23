// FUNCTION: PORT1111 0x00424390
// name: FUN_00424390
// sig: undefined4 FUN_00424390(int param_1)


undefined4 __fastcall FUN_00424390(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  char *local_4;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x10) < iVar2 + 2) {
    local_4 = "Unexpected number of byte.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_4,&DAT_004cd26c);
  }
  uVar1 = *(undefined2 *)(iVar2 + *(int *)(param_1 + 0x18));
  *(int *)(param_1 + 0x14) = iVar2 + 2;
  return CONCAT22((short)((uint)iVar2 >> 0x10),uVar1);
}

