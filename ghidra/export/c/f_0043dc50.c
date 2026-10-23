// FUNCTION: PORT1111 0x0043dc50
// name: FUN_0043dc50
// sig: bool FUN_0043dc50(int param_1)


bool __fastcall FUN_0043dc50(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_00413aa0((void *)(param_1 + 0x10),&local_4,(int *)&stack0x00000004);
  return local_4 != *(int *)(param_1 + 0x14);
}

