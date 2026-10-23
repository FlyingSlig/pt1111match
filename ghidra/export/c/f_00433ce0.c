// FUNCTION: PORT1111 0x00433ce0
// name: FUN_00433ce0
// sig: undefined FUN_00433ce0(int param_1)


void __fastcall FUN_00433ce0(int param_1)

{
  void *_Memory;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  while (iVar1 != 0) {
    if ((*(int *)(param_1 + 0x10) != 0) &&
       (iVar1 = *(int *)(param_1 + 0x10) + -1, *(int *)(param_1 + 0x10) = iVar1, iVar1 == 0)) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x10);
  }
  iVar1 = *(int *)(param_1 + 8);
  while (iVar1 != 0) {
    _Memory = *(void **)(*(int *)(param_1 + 4) + -4 + iVar1 * 4);
    iVar1 = iVar1 + -1;
    if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  if (*(void **)(param_1 + 4) == (void *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}

