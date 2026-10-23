// FUNCTION: PORT1111 0x00432360
// name: FUN_00432360
// sig: bool FUN_00432360(int param_1)


bool __fastcall FUN_00432360(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 0x50) + 0x107) != '\0') {
    return 0 < *(int *)(param_1 + 0xdc);
  }
  return 0 < *(int *)(param_1 + 0xd8);
}

