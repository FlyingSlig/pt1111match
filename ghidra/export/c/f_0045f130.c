// FUNCTION: PORT1111 0x0045f130
// name: FUN_0045f130
// sig: undefined4 FUN_0045f130(int param_1)


undefined4 __fastcall FUN_0045f130(int param_1)

{
  if (*(int *)(param_1 + 0x18) != *(int *)(*(int *)(param_1 + 0x14) + 4)) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 8);
    *(undefined4 *)(param_1 + 0x18) = **(undefined4 **)(param_1 + 0x18);
  }
  return *(undefined4 *)(param_1 + 8);
}

