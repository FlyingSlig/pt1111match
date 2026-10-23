// FUNCTION: PORT1111 0x004506c0
// name: FUN_004506c0
// sig: uint FUN_004506c0(undefined4 param_1, uint * param_2)


uint __fastcall FUN_004506c0(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = param_2[5];
  if (uVar1 < 0x7bd) {
    if (0x50 < uVar1) {
      uVar1 = uVar1 - 0x50;
    }
  }
  else {
    uVar1 = uVar1 - 0x7bc;
  }
  return (param_2[2] * 0x40 + param_2[1]) * 0x20 + (*param_2 >> 1) |
         ((uVar1 * 0x10 + 1 + param_2[4]) * 0x20 + param_2[3]) * 0x10000;
}

