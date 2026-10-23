// FUNCTION: PORT1111 0x00407140
// name: FUN_00407140
// sig: undefined4 FUN_00407140(int param_1)


undefined4 __fastcall FUN_00407140(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x6c);
  }
  return 0;
}

