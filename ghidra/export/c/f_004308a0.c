// FUNCTION: PORT1111 0x004308a0
// name: FUN_004308a0
// sig: undefined FUN_004308a0(int param_1)


void __fastcall FUN_004308a0(int param_1)

{
  int *_Memory;
  
  _Memory = (int *)**(int **)(param_1 + 4);
  if (_Memory != *(int **)(param_1 + 4)) {
    *(int *)_Memory[1] = *_Memory;
    *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}

