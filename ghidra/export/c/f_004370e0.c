// FUNCTION: PORT1111 0x004370e0
// name: FUN_004370e0
// sig: undefined FUN_004370e0(undefined4 * param_1)


void __fastcall FUN_004370e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *_Memory;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_004b7ab6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004bff38;
  local_4 = 1;
  if ((int *)**(int **)(param_1[3] + 4) != *(int **)(param_1[3] + 4)) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1[3] + 4) + 4) + 8);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      _Memory = (int *)(*(int **)(param_1[3] + 4))[1];
      if (_Memory != *(int **)(param_1[3] + 4)) {
        *(int *)_Memory[1] = *_Memory;
        *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
    } while ((int *)**(int **)(param_1[3] + 4) != *(int **)(param_1[3] + 4));
  }
  iVar2 = param_1[3];
  if (iVar2 == 0) {
    local_4 = local_4 & 0xffffff00;
    FUN_00465e40(param_1 + 2);
    local_4 = 0xffffffff;
    FUN_00465e40(param_1 + 1);
    ExceptionList = pvStack_c;
    return;
  }
  FUN_00419480(iVar2);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(iVar2 + 4));
}

