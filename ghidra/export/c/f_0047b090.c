// FUNCTION: PORT1111 0x0047b090
// name: FUN_0047b090
// sig: undefined4 FUN_0047b090(void * this, int param_1)


undefined4 __thiscall FUN_0047b090(void *this,int param_1)

{
  int *_Memory;
  undefined4 uVar1;
  
  _Memory = *(int **)((int)this + 4);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  if (_Memory != (int *)0x0) {
    if (1 < (uint)(*(int *)((int)this + 8) - (int)_Memory >> 3)) {
      uVar1 = FUN_0047ae00(this,param_1,*_Memory,_Memory[1]);
      return uVar1;
    }
    if (_Memory != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return 0;
}

