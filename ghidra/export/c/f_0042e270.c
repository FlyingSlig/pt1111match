// FUNCTION: PORT1111 0x0042e270
// name: FUN_0042e270
// sig: undefined FUN_0042e270(int param_1)


void __fastcall FUN_0042e270(int param_1)

{
  int *_Memory;
  int *piVar1;
  int *piVar2;
  
  if (1 < *(uint *)(param_1 + 8)) {
    piVar2 = (int *)**(int **)(param_1 + 4);
    _Memory = (int *)*piVar2;
    if (_Memory != *(int **)(param_1 + 4)) {
      do {
        if (piVar2[2] == _Memory[2]) {
          piVar1 = (int *)*_Memory;
          if (_Memory != *(int **)(param_1 + 4)) {
            *(int **)_Memory[1] = piVar1;
            *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
            _free(_Memory);
          }
        }
        else {
          piVar1 = (int *)*_Memory;
          piVar2 = _Memory;
        }
        _Memory = piVar1;
      } while (piVar1 != *(int **)(param_1 + 4));
    }
  }
  return;
}

