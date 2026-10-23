// FUNCTION: PORT1111 0x004775e0
// name: FUN_004775e0
// sig: int * FUN_004775e0(void * this, byte param_1)


int * __thiscall FUN_004775e0(void *this,byte param_1)

{
  FUN_00476ee0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

