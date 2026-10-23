// FUNCTION: PORT1111 0x00471570
// name: FUN_00471570
// sig: undefined FUN_00471570(int param_1)


void __fastcall FUN_00471570(int param_1)

{
  if ((*(uint *)(param_1 + 0x30) & 0x1000) != 0) {
    FUN_00488a60(*(int *)(param_1 + 0x38));
    return;
  }
  FUN_00488a60(0x4e2b30);
  return;
}

