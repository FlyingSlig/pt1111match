// FUNCTION: PORT1111 0x0047a8e0
// name: FUN_0047a8e0
// sig: undefined4 * FUN_0047a8e0(void * this, byte param_1)


undefined4 * __thiscall FUN_0047a8e0(void *this,byte param_1)

{
  void *_Memory;
  
  *(undefined ***)this = &PTR_FUN_004c667c;
  FUN_0047a6d0((int)this);
  _Memory = *(void **)((int)this + 0x14);
  if (_Memory == (void *)0x0) {
    if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      _free(this);
    }
    return this;
  }
  if (*(void **)((int)_Memory + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)_Memory + 4));
  }
  *(undefined4 *)((int)_Memory + 4) = 0;
  *(undefined4 *)((int)_Memory + 8) = 0;
  *(undefined4 *)((int)_Memory + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}

