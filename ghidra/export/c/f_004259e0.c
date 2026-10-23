// FUNCTION: PORT1111 0x004259e0
// name: FUN_004259e0
// sig: undefined4 FUN_004259e0(int param_1)


undefined4 __fastcall FUN_004259e0(int param_1)

{
  int iVar1;
  
  iVar1 = _rand();
  return *(undefined4 *)(*(int *)(param_1 + 0x1c) + (iVar1 % *(int *)(param_1 + 0x20)) * 4);
}

