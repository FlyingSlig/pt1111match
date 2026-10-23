// FUNCTION: PORT1111 0x00457690
// name: FUN_00457690
// sig: undefined4 * FUN_00457690(void * this, byte param_1)


undefined4 * __thiscall FUN_00457690(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004c46c4;
  if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 4))(1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (*(undefined4 **)((int)this + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 8))(1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

