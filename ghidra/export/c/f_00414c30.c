// FUNCTION: PORT1111 0x00414c30
// name: FUN_00414c30
// sig: undefined4 FUN_00414c30(int param_1)


undefined4 __fastcall FUN_00414c30(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_00413aa0((void *)(param_1 + 4),&local_4,(int *)&stack0x00000004);
  if (local_4 == *(int *)(param_1 + 8)) {
    return 0;
  }
  return *(undefined4 *)(local_4 + 0x10);
}

