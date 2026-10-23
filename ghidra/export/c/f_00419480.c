// FUNCTION: PORT1111 0x00419480
// name: FUN_00419480
// sig: undefined FUN_00419480(int param_1)


void __fastcall FUN_00419480(int param_1)

{
  undefined4 *puVar1;
  void *_Memory;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  _Memory = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  if (_Memory != *(void **)(param_1 + 4)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}

