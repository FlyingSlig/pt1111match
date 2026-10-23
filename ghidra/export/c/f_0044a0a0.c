// FUNCTION: PORT1111 0x0044a0a0
// name: FUN_0044a0a0
// sig: int * FUN_0044a0a0(void * this, byte param_1)


int * __thiscall FUN_0044a0a0(void *this,byte param_1)

{
  FUN_00449c40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

