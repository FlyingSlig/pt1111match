// FUNCTION: PORT1111 0x00425d40
// name: FUN_00425d40
// sig: undefined FUN_00425d40(int param_1)


void __fastcall FUN_00425d40(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
                    /* WARNING: Subroutine does not return */
      _free(puVar1 + -1);
    }
    (**(code **)*puVar1)(3);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  if (*(void **)(param_1 + 0x1c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x1c));
  }
  return;
}

