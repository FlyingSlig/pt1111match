// FUNCTION: PORT1111 0x004258c0
// name: FUN_004258c0
// sig: undefined FUN_004258c0(int param_1)


void __fastcall FUN_004258c0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  if (puVar1[-1] != 0) {
    (**(code **)*puVar1)(3);
    *(undefined4 *)(param_1 + 8) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(puVar1 + -1);
}

