// FUNCTION: PORT1111 0x004979f7
// name: FUN_004979f7
// sig: undefined4 * FUN_004979f7(void * this, byte param_1)


undefined4 * __thiscall FUN_004979f7(void *this,byte param_1)

{
  FUN_004979d4(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

