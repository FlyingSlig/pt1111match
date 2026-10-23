// FUNCTION: PORT1111 0x004953e0
// name: FUN_004953e0
// sig: undefined4 FUN_004953e0(void * this, int param_1)


undefined4 __thiscall FUN_004953e0(void *this,int param_1)

{
  undefined4 uVar1;
  int *_Memory;
  
  _Memory = (int *)**(int **)((int)this + 0x1c);
  uVar1 = 0;
  if (_Memory != *(int **)((int)this + 0x1c)) {
    do {
      if (_Memory[2] == param_1) {
        if (_Memory != *(int **)((int)this + 0x1c)) {
          *(int *)_Memory[1] = *_Memory;
          *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        uVar1 = 1;
        break;
      }
      _Memory = (int *)*_Memory;
    } while (_Memory != (int *)*(int *)((int)this + 0x1c));
  }
  if (*(int *)((int)this + 0x20) == 0) {
    *(undefined4 *)((int)this + 0x10) = 1;
    *(undefined4 *)((int)this + 0x2c) = 1;
  }
  return uVar1;
}

