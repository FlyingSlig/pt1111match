// FUNCTION: PORT1111 0x00468210
// name: FUN_00468210
// sig: undefined4 * FUN_00468210(void * this, undefined4 * param_1)


undefined4 * __thiscall FUN_00468210(void *this,undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_004b9861;
  local_c = ExceptionList;
  iVar1 = *(int *)((int)this + 0xf4);
  local_4 = 1;
  if (iVar1 == 0) {
    ExceptionList = &local_c;
    FUN_00466b20(&stack0xffffffdc,(undefined4 *)&stack0x00000008);
    FUN_00467020(param_1,(uchar *)"I640_",this);
  }
  else if (iVar1 == 1) {
    ExceptionList = &local_c;
    FUN_00466b20(&stack0xffffffdc,(undefined4 *)&stack0x00000008);
    FUN_00467020(param_1,(uchar *)"I800_",this);
  }
  else if (iVar1 == 2) {
    ExceptionList = &local_c;
    FUN_00466b20(&stack0xffffffdc,(undefined4 *)&stack0x00000008);
    FUN_00467020(param_1,(uchar *)"I1024_",this);
  }
  else {
    ExceptionList = &local_c;
    FUN_00466b20(param_1,(undefined4 *)&stack0x00000008);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00465e40((undefined4 *)&stack0x00000008);
  ExceptionList = local_c;
  return param_1;
}

