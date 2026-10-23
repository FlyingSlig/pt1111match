// FUNCTION: PORT1111 0x0043d3f0
// name: FUN_0043d3f0
// sig: undefined FUN_0043d3f0(int param_1)


void __fastcall FUN_0043d3f0(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined3 extraout_var;
  int *_Memory;
  int *piVar3;
  
  _Memory = (int *)**(int **)(param_1 + 8);
  if (_Memory != *(int **)(param_1 + 8)) {
    do {
      puVar1 = (undefined4 *)_Memory[2];
      if (puVar1[4] == 0) {
        piVar3 = (int *)*_Memory;
      }
      else {
        piVar3 = (int *)*_Memory;
        if (_Memory != *(int **)(param_1 + 8)) {
          *(int **)_Memory[1] = piVar3;
          *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        bVar2 = FUN_0043cdd0((int)puVar1);
        if (CONCAT31(extraout_var,bVar2) != 0) {
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + puVar1[3];
        }
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
      }
      _Memory = piVar3;
    } while (piVar3 != *(int **)(param_1 + 8));
  }
  if (*(int *)(param_1 + 0x10) < 1) {
    return;
  }
  FUN_0043d3a0(param_1);
  return;
}

