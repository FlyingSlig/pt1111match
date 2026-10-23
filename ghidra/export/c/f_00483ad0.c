// FUNCTION: PORT1111 0x00483ad0
// name: FUN_00483ad0
// sig: undefined FUN_00483ad0(int param_1)


void __fastcall FUN_00483ad0(int param_1)

{
  int *piVar1;
  void *_Memory;
  int local_4;
  
  local_4 = param_1;
  if ((*(int *)(param_1 + 4) != 0) && (*(int **)(param_1 + 0x2a8) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2a8) + 0x10))(1);
  }
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  if (*(int *)(param_1 + 0x2ac) == 0) {
    *(undefined4 *)(param_1 + 0x2ac) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x2b4) != 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x2ac) + 4);
    local_4 = *piVar1;
    if ((int *)local_4 != piVar1) {
      do {
        if (*(undefined4 **)(local_4 + 0xc) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(local_4 + 0xc))(1);
        }
        FUN_0040ca50(&local_4);
      } while (local_4 != *(int *)(*(int *)(param_1 + 0x2ac) + 4));
    }
  }
  _Memory = *(void **)(param_1 + 0x2ac);
  if (_Memory != (void *)0x0) {
    FUN_00483930(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  return;
}

