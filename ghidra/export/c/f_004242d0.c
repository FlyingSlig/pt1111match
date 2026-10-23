// FUNCTION: PORT1111 0x004242d0
// name: FUN_004242d0
// sig: undefined4 FUN_004242d0(int param_1)


undefined4 __fastcall FUN_004242d0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  char *local_4;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x10) < iVar2 + 1) {
    local_4 = "Unexpected number of byte.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_4,&DAT_004cd26c);
  }
  uVar1 = *(undefined1 *)(iVar2 + *(int *)(param_1 + 0x18));
  *(int *)(param_1 + 0x14) = iVar2 + 1;
  return CONCAT31((int3)((uint)iVar2 >> 8),uVar1);
}

