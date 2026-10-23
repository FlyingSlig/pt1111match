// FUNCTION: PORT1111 0x00453850
// name: FUN_00453850
// sig: undefined4 FUN_00453850(int param_1)


undefined4 __cdecl FUN_00453850(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004056a0(param_1);
  if (((iVar1 == 0) && ((*(uint *)(param_1 + 0x3c) & 8) == 0)) &&
     (((*(uint *)(param_1 + 0x3c) & 4) == 0 || (*(int *)(param_1 + 0xf0) == 0)))) {
    return 1;
  }
  return 0;
}

