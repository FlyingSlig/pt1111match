// FUNCTION: PORT1111 0x00484080
// name: FUN_00484080
// sig: int * FUN_00484080(void * this, byte param_1)


int * __thiscall FUN_00484080(void *this,byte param_1)

{
  FUN_00483f70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

