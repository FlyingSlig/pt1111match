// FUNCTION: PORT1111 0x0047fe20
// name: FUN_0047fe20
// sig: undefined4 * FUN_0047fe20(void * this, byte param_1)


undefined4 * __thiscall FUN_0047fe20(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004c676c;
  if (*(HANDLE *)((int)this + 0xc) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

