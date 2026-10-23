// FUNCTION: PORT1111 0x00402090
// name: FUN_00402090
// sig: int FUN_00402090(uint param_1, uint param_2, uint param_3, uint param_4)


int __cdecl FUN_00402090(uint param_1,uint param_2,uint param_3,uint param_4)

{
  if (param_2 <= param_4) {
    if (param_2 < param_4) {
      return -1;
    }
    if (param_1 <= param_3) {
      return -(uint)(param_1 < param_3);
    }
  }
  return 1;
}

