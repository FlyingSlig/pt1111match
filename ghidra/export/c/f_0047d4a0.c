// FUNCTION: PORT1111 0x0047d4a0
// name: FUN_0047d4a0
// sig: undefined FUN_0047d4a0(void * this, int * param_1)


void __thiscall FUN_0047d4a0(void *this,int *param_1)

{
  int *_Memory;
  int *piVar1;
  
  piVar1 = (int *)**(int **)((int)this + 4);
  do {
    while( true ) {
      _Memory = piVar1;
      if (_Memory == *(int **)((int)this + 4)) {
        return;
      }
      if (_Memory[2] == *param_1) break;
      piVar1 = (int *)*_Memory;
    }
    piVar1 = (int *)*_Memory;
  } while (_Memory == *(int **)((int)this + 4));
  *(int **)_Memory[1] = (int *)*_Memory;
  *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}

