// FUNCTION: PORT1111 0x00478ab0
// name: FUN_00478ab0
// sig: undefined4 FUN_00478ab0(int param_1)


undefined4 __fastcall FUN_00478ab0(int param_1)

{
  if ((*(uint *)(param_1 + 0x28) & 0x100) != 0) {
    (**(code **)(*(int *)(param_1 + 0xc) + 0x2c))(*(int *)(param_1 + 0xc),param_1);
  }
  if ((*(byte *)(param_1 + 0x2c) & 8) == 0) {
    FUN_00478a10(param_1);
    return 1;
  }
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) & 0xf7;
  return 0;
}

