// FUNCTION: PORT1111 0x00485820
// name: FUN_00485820
// sig: undefined4 * FUN_00485820(void * this, byte param_1)


undefined4 * __thiscall FUN_00485820(void *this,byte param_1)

{
  FUN_00485810(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

