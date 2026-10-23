// FUNCTION: PORT1111 0x00417b90
// name: FUN_00417b90
// sig: undefined FUN_00417b90(int param_1)


void __fastcall FUN_00417b90(int param_1)

{
  void *_Memory;
  undefined4 *_Memory_00;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x60) + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  _Memory_00 = DAT_004e2424;
  if (DAT_004e2424 != (undefined4 *)0x0) {
    FUN_004340f0(DAT_004e2424);
                    /* WARNING: Subroutine does not return */
    _free(_Memory_00);
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_00478a10(*(int *)(param_1 + 0x34));
    FUN_004788b0(*(int *)(param_1 + 0x34));
  }
  FUN_00414af0(param_1);
  if (*(int **)(param_1 + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x74) + 8))();
    if (*(int **)(param_1 + 0x74) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x74) + 0x30))(1);
    }
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  _Memory = *(void **)(param_1 + 0xfc);
  if (_Memory != (void *)0x0) {
    FUN_00417710(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  FUN_00414d90();
  return;
}

