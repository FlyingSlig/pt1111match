// FUNCTION: PORT1111 0x0041ece0
// name: FUN_0041ece0
// sig: undefined FUN_0041ece0(int param_1)


void __fastcall FUN_0041ece0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 4) != 0)) {
    for (uVar2 = 0;
        (iVar1 = *(int *)(param_1 + 0x18), iVar1 != 0 &&
        (uVar2 < (uint)(*(int *)(param_1 + 0x1c) - iVar1 >> 2))); uVar2 = uVar2 + 1) {
      FUN_00426b10(*(int *)(iVar1 + uVar2 * 4));
    }
  }
  for (uVar2 = 0;
      (iVar1 = *(int *)(param_1 + 0x18), iVar1 != 0 &&
      (uVar2 < (uint)(*(int *)(param_1 + 0x1c) - iVar1 >> 2))); uVar2 = uVar2 + 1) {
    FUN_00428990(*(void **)(iVar1 + uVar2 * 4),param_1);
  }
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

