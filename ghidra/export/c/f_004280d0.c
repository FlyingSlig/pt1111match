// FUNCTION: PORT1111 0x004280d0
// name: FUN_004280d0
// sig: undefined FUN_004280d0(int param_1)


void __fastcall FUN_004280d0(int param_1)

{
  void *_Memory;
  uint uVar1;
  
  for (uVar1 = 0;
      (*(int *)(param_1 + 4) != 0 &&
      (uVar1 < (uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2))); uVar1 = uVar1 + 1) {
    _Memory = *(void **)(*(int *)(param_1 + 8) + -4);
    if (_Memory != (void *)0x0) {
      if (_Memory != (void *)0x0) {
        if (*(void **)((int)_Memory + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)_Memory + 8));
        }
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *(undefined4 *)(*(int *)(param_1 + 8) + -4) = 0;
    }
    if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2 != 0)) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
    }
  }
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

