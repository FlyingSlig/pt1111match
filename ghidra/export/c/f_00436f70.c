// FUNCTION: PORT1111 0x00436f70
// name: FUN_00436f70
// sig: undefined FUN_00436f70(undefined4 * param_1)


void __fastcall FUN_00436f70(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *_Memory;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b79fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004bff3c;
  local_4 = 0;
  switch(param_1[2]) {
  case 0:
    puVar1 = (undefined4 *)param_1[3];
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00465e40(puVar1);
                    /* WARNING: Subroutine does not return */
      _free(puVar1);
    }
    break;
  case 3:
    iVar2 = param_1[3];
    if (iVar2 != 0) {
      FUN_00419480(iVar2);
LAB_00437056:
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(iVar2 + 4));
    }
    break;
  case 5:
    if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[3])(1);
    }
    break;
  case 6:
    if ((int *)**(int **)(param_1[3] + 4) != *(int **)(param_1[3] + 4)) {
      do {
        puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1[3] + 4) + 4) + 8);
        if (puVar1 != (undefined4 *)0x0) {
          FUN_00465e40(puVar1);
                    /* WARNING: Subroutine does not return */
          _free(puVar1);
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
    if (iVar2 != 0) {
      FUN_00419480(iVar2);
      goto LAB_00437056;
    }
  }
  local_4 = 0xffffffff;
  FUN_00465e40(param_1 + 1);
  ExceptionList = local_c;
  return;
}

