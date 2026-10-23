// FUNCTION: PORT1111 0x0040ae80
// name: FUN_0040ae80
// sig: undefined FUN_0040ae80(int param_1)


void __fastcall FUN_0040ae80(int param_1)

{
  void *_Memory;
  int iVar1;
  int local_4;
  
  local_4 = **(int **)(param_1 + 8);
  if ((int *)local_4 != *(int **)(param_1 + 8)) {
    do {
      iVar1 = local_4;
      if (*(undefined4 **)(local_4 + 0x10) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(local_4 + 0x10))(1);
        *(undefined4 *)(iVar1 + 0x10) = 0;
      }
      FUN_00413730(&local_4);
    } while (local_4 != *(int *)(param_1 + 8));
  }
  _Memory = *(void **)(*(int *)(param_1 + 8) + 4);
  if (*(char *)((int)_Memory + 0x15) == '\0') {
    FUN_0040ae40(*(void **)((int)_Memory + 8));
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(int *)(*(int *)(param_1 + 8) + 4) = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 8);
  *(int *)(*(int *)(param_1 + 8) + 8) = *(int *)(param_1 + 8);
  return;
}

