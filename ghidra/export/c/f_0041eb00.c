// FUNCTION: PORT1111 0x0041eb00
// name: FUN_0041eb00
// sig: int FUN_0041eb00(int param_1)


int __fastcall FUN_0041eb00(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 8) == 0) {
    return 2;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    return 4;
  }
  if (*(int *)(param_1 + 8) + iVar1 != *(int *)(param_1 + 0x10)) {
    return 1;
  }
  return 4 - (uint)(iVar1 + *(int *)(param_1 + 0xc) != *(int *)(param_1 + 0x10));
}

