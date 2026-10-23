// FUNCTION: PORT1111 0x00459f30
// name: FUN_00459f30
// sig: undefined4 * FUN_00459f30(void * this, byte param_1)


undefined4 * __thiscall FUN_00459f30(void *this,byte param_1)

{
  FUN_00459c80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

