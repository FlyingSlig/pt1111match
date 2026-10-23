// FUNCTION: PORT1111 0x00429ee0
// name: FUN_00429ee0
// sig: undefined4 FUN_00429ee0(void * this, int param_1)


undefined4 __thiscall FUN_00429ee0(void *this,int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *_Memory;
  
  piVar1 = *(int **)((int)this + 0x18);
  _Memory = (int *)*piVar1;
  uVar2 = 0;
  if (_Memory != piVar1) {
    while (_Memory[2] != param_1) {
      _Memory = (int *)*_Memory;
      if (_Memory == piVar1) {
        return uVar2;
      }
    }
    if (_Memory != *(int **)((int)this + 0x18)) {
      *(int *)_Memory[1] = *_Memory;
      *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    uVar2 = 1;
  }
  return uVar2;
}

