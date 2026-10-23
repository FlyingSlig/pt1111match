// FUNCTION: PORT1111 0x00409e60
// name: FUN_00409e60
// sig: undefined4 FUN_00409e60(int param_1)


undefined4 __fastcall FUN_00409e60(int param_1)

{
  int iVar1;
  int *_Memory;
  int *piVar2;
  
  _Memory = (int *)**(int **)(param_1 + 300);
  if (_Memory != *(int **)(param_1 + 300)) {
    do {
      iVar1 = FUN_00414c30(DAT_004e240c);
      if (iVar1 == 0) {
        piVar2 = (int *)*_Memory;
        if (_Memory != *(int **)(param_1 + 300)) {
          *(int **)_Memory[1] = piVar2;
          *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
      }
      else {
        if ((*(int *)(iVar1 + 0x124) == 2) && (*(int *)(iVar1 + 300) < 1)) {
          return *(undefined4 *)(iVar1 + 0x10);
        }
        piVar2 = (int *)*_Memory;
      }
      _Memory = piVar2;
    } while (piVar2 != *(int **)(param_1 + 300));
  }
  return 0xffffffff;
}

