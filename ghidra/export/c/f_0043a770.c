// FUNCTION: PORT1111 0x0043a770
// name: FUN_0043a770
// sig: undefined4 FUN_0043a770(int param_1)


undefined4 __fastcall FUN_0043a770(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar1 = 0;
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 8))(1);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 8))(1);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

