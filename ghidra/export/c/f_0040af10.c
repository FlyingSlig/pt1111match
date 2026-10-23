// FUNCTION: PORT1111 0x0040af10
// name: FUN_0040af10
// sig: undefined4 FUN_0040af10(int param_1)


undefined4 __fastcall FUN_0040af10(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_00413aa0((void *)(param_1 + 4),&local_4,(int *)&stack0x00000004);
  if (local_4 != *(int *)(param_1 + 8)) {
    return *(undefined4 *)(local_4 + 0x10);
  }
  return 0;
}

