// FUNCTION: PORT1111 0x004840a0
// name: FUN_004840a0
// sig: undefined4 * FUN_004840a0(void * this, byte param_1)


undefined4 * __thiscall FUN_004840a0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004c69e0;
  if (*(undefined4 **)((int)this + 0x10) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x10))(1);
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

