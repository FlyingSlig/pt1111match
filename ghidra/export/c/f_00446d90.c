// FUNCTION: PORT1111 0x00446d90
// name: FUN_00446d90
// sig: undefined FUN_00446d90(int param_1)


void __fastcall FUN_00446d90(int param_1)

{
  undefined4 *_Memory;
  
  if ((*(int *)(param_1 + 0x38) != 0) && (*(int *)(*(int *)(param_1 + 0x38) + 8) != 0)) {
    FUN_00467680(*(void **)(*(int *)(DAT_004e2b14 + 0x5c) + 0x834),0,param_1 + 0x28);
    DAT_004dd968 = 1;
    (**(code **)(**(int **)(DAT_004e2b14 + 0x5c) + 0x4c))(0);
    DAT_004dd968 = 0;
    FUN_0044b160(*(void **)(param_1 + 0x38));
    (**(code **)(**(int **)(param_1 + 0x38) + 0x18))(0);
    (**(code **)(**(int **)(param_1 + 0x38) + 8))();
  }
  _Memory = *(undefined4 **)(param_1 + 0x38);
  if (_Memory != (undefined4 *)0x0) {
    FUN_0044b7c0(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  DAT_004dd968 = 1;
  FUN_004802e0(param_1);
  return;
}

