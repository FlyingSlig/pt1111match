// FUNCTION: PORT1111 0x00496710
// name: FUN_00496710
// sig: undefined4 * FUN_00496710(void * this, byte param_1)


undefined4 * __thiscall FUN_00496710(void *this,byte param_1)

{
  int *piVar1;
  
  *(undefined ***)this = &PTR_FUN_004c6e04;
  FUN_004963d0((int)this);
  CloseHandle(*(HANDLE *)((int)this + 0x28));
  piVar1 = *(int **)((int)this + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

