// FUNCTION: PORT1111 0x0041dd70
// name: FUN_0041dd70
// sig: undefined FUN_0041dd70(int param_1)


void __fastcall FUN_0041dd70(int param_1)

{
  int *_Memory;
  
  _Memory = (int *)(*(int **)(param_1 + 4))[1];
  if (_Memory != *(int **)(param_1 + 4)) {
    *(int *)_Memory[1] = *_Memory;
    *(int *)(*_Memory + 4) = _Memory[1];
    FUN_0041caa0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}

