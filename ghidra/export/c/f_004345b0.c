// FUNCTION: PORT1111 0x004345b0
// name: FUN_004345b0
// sig: undefined FUN_004345b0(int param_1)


void __fastcall FUN_004345b0(int param_1)

{
  int *piVar1;
  DWORD DVar2;
  int *_Memory;
  int *piVar3;
  int iStack_4;
  
  piVar1 = (int *)(param_1 + 0x18);
  (**(code **)(*(int *)(param_1 + 0x18) + 4))();
  DVar2 = GetTickCount();
  _Memory = (int *)**(int **)(param_1 + 0x3c);
  if (_Memory != *(int **)(param_1 + 0x3c)) {
    do {
      if (*(int *)(param_1 + 0x48) != 0) {
        _Memory[3] = _Memory[3] + *(int *)(param_1 + 0x48);
      }
      if ((uint)_Memory[4] < (uint)((int)(DVar2 - _Memory[3] << ((byte)DAT_004d6a80 & 0x1f)) >> 1))
      {
        iStack_4 = _Memory[2];
        (**(code **)(*piVar1 + 4))();
        FUN_00434410((void *)(param_1 + 4),&iStack_4);
        (**(code **)(*piVar1 + 8))();
        piVar3 = (int *)*_Memory;
        if (_Memory != *(int **)(param_1 + 0x3c)) {
          *(int **)_Memory[1] = piVar3;
          *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
      }
      else {
        piVar3 = (int *)*_Memory;
      }
      _Memory = piVar3;
    } while (piVar3 != *(int **)(param_1 + 0x3c));
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  (**(code **)(*piVar1 + 8))();
  return;
}

