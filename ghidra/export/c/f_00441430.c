// FUNCTION: PORT1111 0x00441430
// name: FUN_00441430
// sig: undefined4 FUN_00441430(int param_1, int param_2)


undefined4 FUN_00441430(int param_1,int param_2)

{
  if (param_1 == 0x7d5) {
    if ((param_2 == 0x7d3) || (param_2 == 0x7d7)) {
      return 1;
    }
    if (param_2 == 0x7d4) {
      return 1;
    }
  }
  else {
    if (param_1 == 0x7d4) {
      if ((param_2 != 0x7d3) && (param_2 != 0x7d7)) {
        return 0;
      }
      return 1;
    }
    if (param_1 == 0x7d6) {
      if (param_2 == 0x7d3) {
        return 1;
      }
      if (param_2 == 0x7d7) {
        return 1;
      }
      if (param_2 != 0x7d4) {
        return 0;
      }
      return 1;
    }
    if (param_1 != 0x7d8) {
      return 0;
    }
    if (param_2 == 0x7d7) {
      return 1;
    }
    if (param_2 == 0x7d3) {
      return 1;
    }
  }
  if (param_2 != 0x7d6) {
    return 0;
  }
  return 1;
}

