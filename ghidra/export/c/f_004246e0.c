// FUNCTION: PORT1111 0x004246e0
// name: FUN_004246e0
// sig: undefined FUN_004246e0(int param_1)


void __fastcall FUN_004246e0(int param_1)

{
  int iVar1;
  int *piVar2;
  char *pcStack_14;
  uint *puStack_10;
  char local_8 [8];
  
  puStack_10 = (uint *)0x4;
  pcStack_14 = local_8;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 8))();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&stack0xfffffff4,&DAT_004cd26c);
  }
  if (*(uint **)(param_1 + 0xc) < puStack_10) {
    piVar2 = FUN_00498201(*(int **)(param_1 + 0x18),puStack_10);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&stack0xfffffff4,&DAT_004cd26c);
    }
    *(uint **)(param_1 + 0xc) = puStack_10;
    *(int **)(param_1 + 0x18) = piVar2;
  }
  *(uint **)(param_1 + 0x10) = puStack_10;
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 8))(*(undefined4 *)(param_1 + 0x18),puStack_10);
  if (iVar1 == 0) {
    pcStack_14 = "Error reading file";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&pcStack_14,&DAT_004cd26c);
  }
  return;
}

