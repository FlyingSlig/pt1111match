// FUNCTION: PORT1111 0x0043c770
// name: FUN_0043c770
// sig: undefined4 * FUN_0043c770(void * this, byte param_1)


undefined4 * __thiscall FUN_0043c770(void *this,byte param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  *(undefined ***)this = &PTR_FUN_004c0510;
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
                    /* WARNING: Subroutine does not return */
      _free(puVar1 + -1);
    }
    (**(code **)*puVar1)(3);
    *(undefined4 *)((int)this + 4) = 0;
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

