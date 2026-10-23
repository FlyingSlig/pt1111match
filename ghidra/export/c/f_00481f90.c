// FUNCTION: PORT1111 0x00481f90
// name: FUN_00481f90
// sig: undefined4 * FUN_00481f90(void * this, byte param_1)


undefined4 * __thiscall FUN_00481f90(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004c6908;
  if (*(int **)((int)this + 8) != (int *)0x0) {
    FUN_0047d9d0(*(void **)((int)this + 4),*(int **)((int)this + 8));
    if (*(undefined4 **)((int)this + 8) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)this + 8))(1);
    }
    *(undefined4 *)((int)this + 8) = 0;
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

