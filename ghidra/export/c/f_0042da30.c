// FUNCTION: PORT1111 0x0042da30
// name: FUN_0042da30
// sig: undefined4 * FUN_0042da30(void * this, byte param_1)


undefined4 * __thiscall FUN_0042da30(void *this,byte param_1)

{
  FUN_0042d4f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

