// FUNCTION: PORT1111 0x0040ac50
// name: FUN_0040ac50
// sig: undefined FUN_0040ac50(void * this, int param_1, undefined4 * param_2, undefined4 * param_3)


void __thiscall FUN_0040ac50(void *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004b5c60;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (; param_2 != param_3; param_2 = (undefined4 *)*param_2) {
    iVar1 = FUN_00413870(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    FUN_00409f80(this,1);
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
  }
  ExceptionList = local_10;
  return;
}

