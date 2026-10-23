// FUNCTION: PORT1111 0x0043d870
// name: FUN_0043d870
// sig: undefined4 FUN_0043d870(void * param_1)


undefined4 __fastcall FUN_0043d870(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00413aa0(param_1,&local_4,(int *)&stack0x00000004);
  if (local_4 == *(void **)((int)param_1 + 4)) {
    return 0;
  }
  return *(undefined4 *)((int)local_4 + 0x10);
}

