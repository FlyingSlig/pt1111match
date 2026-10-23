// FUNCTION: PORT1111 0x0047c220
// name: FUN_0047c220
// sig: undefined4 * FUN_0047c220(void * this, byte param_1)


undefined4 * __thiscall FUN_0047c220(void *this,byte param_1)

{
  FUN_0047c1e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

