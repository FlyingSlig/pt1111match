// FUNCTION: PORT1111 0x00460800
// name: FUN_00460800
// sig: undefined FUN_00460800(int param_1, undefined4 param_2)


void __cdecl FUN_00460800(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)((uint)param_2 >> 8);
  iVar1 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar1;
  *(char *)(*(int *)(param_1 + 8) + iVar1) = (char)param_2;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}

