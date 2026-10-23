// FUNCTION: PORT1111 0x00436db0
// name: FUN_00436db0
// sig: undefined FUN_00436db0(int param_1)


void __fastcall FUN_00436db0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *_Memory;
  int *_Memory_00;
  int iVar3;
  
  if ((int *)**(int **)(param_1 + 8) != *(int **)(param_1 + 8)) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 8) + 4) + 8);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      piVar2 = (int *)(*(int **)(param_1 + 8))[1];
      if (piVar2 != *(int **)(param_1 + 8)) {
        *(int *)piVar2[1] = *piVar2;
        *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
        _free(piVar2);
      }
    } while ((int *)**(int **)(param_1 + 8) != *(int **)(param_1 + 8));
  }
  if ((int *)**(int **)(param_1 + 0x14) != *(int **)(param_1 + 0x14)) {
    do {
      iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 4) + 8);
      if (iVar3 != 0) {
        puVar1 = *(undefined4 **)(iVar3 + 4);
        _Memory = (void *)*puVar1;
        *puVar1 = puVar1;
        *(int *)(*(int *)(iVar3 + 4) + 4) = *(int *)(iVar3 + 4);
        *(undefined4 *)(iVar3 + 8) = 0;
        if (_Memory == *(void **)(iVar3 + 4)) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)(iVar3 + 4));
        }
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      piVar2 = (int *)(*(int **)(param_1 + 0x14))[1];
      if (piVar2 != *(int **)(param_1 + 0x14)) {
        *(int *)piVar2[1] = *piVar2;
        *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
        _free(piVar2);
      }
    } while ((int *)**(int **)(param_1 + 0x14) != *(int **)(param_1 + 0x14));
  }
  if ((int *)**(int **)(param_1 + 0x28) != *(int **)(param_1 + 0x28)) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x28) + 4) + 8);
      if (puVar1 != (undefined4 *)0x0) {
        FUN_00465e40(puVar1);
                    /* WARNING: Subroutine does not return */
        _free(puVar1);
      }
      piVar2 = (int *)(*(int **)(param_1 + 0x28))[1];
      if (piVar2 != *(int **)(param_1 + 0x28)) {
        *(int *)piVar2[1] = *piVar2;
        *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
        _free(piVar2);
      }
    } while ((int *)**(int **)(param_1 + 0x28) != *(int **)(param_1 + 0x28));
  }
  iVar3 = *(int *)(param_1 + 0x20);
  if ((iVar3 != 0) && ((int *)**(int **)(iVar3 + 4) != *(int **)(iVar3 + 4))) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(*(int *)(iVar3 + 4) + 4) + 8);
      if (puVar1 != (undefined4 *)0x0) {
        FUN_00465e40(puVar1);
                    /* WARNING: Subroutine does not return */
        _free(puVar1);
      }
      piVar2 = *(int **)(*(int *)(param_1 + 0x20) + 4);
      _Memory_00 = (int *)piVar2[1];
      if (_Memory_00 != piVar2) {
        *(int *)_Memory_00[1] = *_Memory_00;
        *(int *)(*_Memory_00 + 4) = _Memory_00[1];
                    /* WARNING: Subroutine does not return */
        _free(_Memory_00);
      }
      iVar3 = *(int *)(param_1 + 0x20);
    } while ((int *)**(int **)(iVar3 + 4) != *(int **)(iVar3 + 4));
  }
  return;
}

