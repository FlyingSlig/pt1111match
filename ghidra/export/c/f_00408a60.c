// FUNCTION: PORT1111 0x00408a60
// name: FUN_00408a60
// sig: int FUN_00408a60(void * this, int param_1)


int __thiscall FUN_00408a60(void *this,int param_1)

{
  int iVar1;
  int *_Memory;
  
  _Memory = (int *)**(int **)((int)this + 0x108);
  if (*(int *)((int)this + 0x114) == param_1) {
    iVar1 = *(int *)((int)this + 0x118);
    *(undefined4 *)((int)this + 0x114) = 0;
    *(undefined4 *)((int)this + 0x118) = 0;
    return iVar1;
  }
  if (_Memory != *(int **)((int)this + 0x108)) {
    do {
      if (_Memory[2] == param_1) {
        if (_Memory != *(int **)((int)this + 0x108)) {
          *(int *)_Memory[1] = *_Memory;
          *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        return _Memory[3];
      }
      _Memory = (int *)*_Memory;
    } while (_Memory != *(int **)((int)this + 0x108));
  }
  return 0;
}

