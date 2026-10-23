// FUNCTION: PORT1111 0x00486530
// name: FUN_00486530
// sig: undefined4 FUN_00486530(void * this, uchar * param_1)


undefined4 __thiscall FUN_00486530(void *this,uchar *param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004ba850;
  local_10 = ExceptionList;
  if (*(int *)((int)this + 4) != 0) {
    ExceptionList = &local_10;
    piVar1 = FUN_00486460(this,param_1);
    if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
      local_8 = 0;
      (**(code **)(**(int **)((int)this + 4) + 0x10))(*piVar1,1);
      ExceptionList = local_10;
      return *(undefined4 *)((int)this + 4);
    }
  }
  ExceptionList = local_10;
  return 0;
}

