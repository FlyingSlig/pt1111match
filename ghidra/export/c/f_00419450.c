// FUNCTION: PORT1111 0x00419450
// name: FUN_00419450
// sig: undefined4 FUN_00419450(int param_1)


undefined4 __fastcall FUN_00419450(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x290) == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x294) - *(int *)(param_1 + 0x290);
  return CONCAT31((int3)(iVar1 >> 10),iVar1 >> 2 != 0);
}

