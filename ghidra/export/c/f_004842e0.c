// FUNCTION: PORT1111 0x004842e0
// name: FUN_004842e0
// sig: undefined FUN_004842e0(int param_1)


void __fastcall FUN_004842e0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *_Memory;
  
  puVar1 = *(undefined4 **)(*(int *)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 4) + 8);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  piVar2 = *(int **)(*(int *)(param_1 + 0xc) + 4);
  _Memory = (int *)piVar2[1];
  if (_Memory != piVar2) {
    *(int *)_Memory[1] = *_Memory;
    *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}

