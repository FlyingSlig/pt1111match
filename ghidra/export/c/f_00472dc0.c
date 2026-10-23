// FUNCTION: PORT1111 0x00472dc0
// name: FUN_00472dc0
// sig: undefined4 FUN_00472dc0(int * param_1)


undefined4 __fastcall FUN_00472dc0(int *param_1)

{
  if ((param_1[0x16] == 0) || (param_1[0x28] == 0)) {
    return 0;
  }
  if (param_1[0x25] != 0) {
    if (param_1[0x33] == 1) {
      if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
        FUN_00471e40(param_1);
        if ((param_1[0xc] & 0x4000U) == 0) {
          FUN_00471570((int)param_1);
        }
        if ((char)param_1[0xc] < '\0') {
          return 1;
        }
        if ((param_1[0xc] & 0x100U) != 0) {
          FUN_00472d90((int)param_1);
          return 2;
        }
      }
      return 3;
    }
    if (param_1[0x33] == 2) {
      FUN_00471ef0(param_1);
      FUN_00471570((int)param_1);
    }
  }
  return 1;
}

