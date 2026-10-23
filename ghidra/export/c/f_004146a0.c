// FUNCTION: PORT1111 0x004146a0
// name: FUN_004146a0
// sig: undefined4 FUN_004146a0(int param_1)


undefined4 __fastcall FUN_004146a0(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_00413aa0((void *)(param_1 + 0x1c),&local_4,(int *)&stack0x00000004);
  if (local_4 != *(int *)(param_1 + 0x20)) {
    return *(undefined4 *)(local_4 + 0x10);
  }
  return 0;
}

