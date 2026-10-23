// FUNCTION: PORT1111 0x0043d8a0
// name: FUN_0043d8a0
// sig: undefined FUN_0043d8a0(int param_1)


void __fastcall FUN_0043d8a0(int param_1)

{
  undefined4 *puVar1;
  void *_Memory;
  int *piVar2;
  
  piVar2 = (int *)**(int **)(param_1 + 8);
  if (piVar2 != *(int **)(param_1 + 8)) {
    do {
      if ((undefined4 *)piVar2[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar2[2])(1);
        piVar2[2] = 0;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(param_1 + 8));
  }
  puVar1 = *(undefined4 **)(param_1 + 8);
  _Memory = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(param_1 + 8) + 4) = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (_Memory == *(void **)(param_1 + 8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}

