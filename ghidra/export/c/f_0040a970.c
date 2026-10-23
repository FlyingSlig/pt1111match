// FUNCTION: PORT1111 0x0040a970
// name: FUN_0040a970
// sig: undefined FUN_0040a970(void * this, int param_1)


void __thiscall FUN_0040a970(void *this,int param_1)

{
  int *piVar1;
  int *_Memory;
  
  piVar1 = *(int **)((int)this + 0x14);
  _Memory = (int *)*piVar1;
  if (_Memory != piVar1) {
    while (param_1 != _Memory[2]) {
      _Memory = (int *)*_Memory;
      if (_Memory == piVar1) {
        return;
      }
    }
    if (_Memory != *(int **)((int)this + 0x14)) {
      *(int *)_Memory[1] = *_Memory;
      *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  return;
}

