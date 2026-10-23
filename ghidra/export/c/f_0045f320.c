// FUNCTION: PORT1111 0x0045f320
// name: FUN_0045f320
// sig: undefined FUN_0045f320(int param_1)


void __fastcall FUN_0045f320(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *_Memory;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x38);
  if (piVar3 != *(int **)(param_1 + 0x3c)) {
    do {
      iVar1 = *piVar3;
      if (iVar1 != 0) {
        puVar2 = *(undefined4 **)(iVar1 + 4);
        _Memory = (void *)*puVar2;
        *puVar2 = puVar2;
        *(int *)(*(int *)(iVar1 + 4) + 4) = *(int *)(iVar1 + 4);
        *(undefined4 *)(iVar1 + 8) = 0;
        if (_Memory == *(void **)(iVar1 + 4)) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)(iVar1 + 4));
        }
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != *(int **)(param_1 + 0x3c));
  }
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x14));
  }
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x18));
  }
  if (*(void **)(param_1 + 0x1c) == (void *)0x0) {
    if (*(void **)(param_1 + 0x20) == (void *)0x0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x20));
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x1c));
}

