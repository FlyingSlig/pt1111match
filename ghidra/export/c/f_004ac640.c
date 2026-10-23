// FUNCTION: PORT1111 0x004ac640
// name: FUN_004ac640
// sig: undefined FUN_004ac640(int param_1, undefined4 param_2, int param_3)


void __cdecl FUN_004ac640(int param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_1 + 0x54) = param_2;
  if (param_3 == 0) {
    *(code **)(param_1 + 0x50) = FUN_004ac6a0;
  }
  else {
    *(int *)(param_1 + 0x50) = param_3;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    FUN_004ac710(param_1,s_It_s_an_error_to_set_both_read_d_004df458);
    FUN_004ac710(param_1,s_same_structure__Resetting_write__004df424);
  }
  *(undefined4 *)(param_1 + 0x14c) = 0;
  return;
}

