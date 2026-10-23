// FUNCTION: PORT1111 0x00486190
// name: FUN_00486190
// sig: undefined FUN_00486190(int param_1)


void __fastcall FUN_00486190(int param_1)

{
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 4))(1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 8));
  }
  return;
}

