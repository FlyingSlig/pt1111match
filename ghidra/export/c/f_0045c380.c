// FUNCTION: PORT1111 0x0045c380
// name: FUN_0045c380
// sig: undefined4 * FUN_0045c380(void * this, byte param_1)


undefined4 * __thiscall FUN_0045c380(void *this,byte param_1)

{
  FUN_004583e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

