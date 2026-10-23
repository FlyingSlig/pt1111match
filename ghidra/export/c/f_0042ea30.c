// FUNCTION: PORT1111 0x0042ea30
// name: FUN_0042ea30
// sig: undefined FUN_0042ea30(int param_1)


void __fastcall FUN_0042ea30(int param_1)

{
  int iVar1;
  int *_Memory;
  int iVar2;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    do {
      local_4 = *(undefined4 *)(**(int **)(param_1 + 0x18) + 8);
      iVar1 = *(int *)(param_1 + 0xc);
      iVar2 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),&local_4);
      FUN_0042e5b0((void *)(param_1 + 8),1);
      *(int *)(iVar1 + 4) = iVar2;
      **(int **)(iVar2 + 4) = iVar2;
      _Memory = (int *)**(int **)(param_1 + 0x18);
      if (_Memory != *(int **)(param_1 + 0x18)) {
        *(int *)_Memory[1] = *_Memory;
        *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
    } while (*(int *)(param_1 + 0x1c) != 0);
  }
  return;
}

