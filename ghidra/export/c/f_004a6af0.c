// FUNCTION: PORT1111 0x004a6af0
// name: FUN_004a6af0
// sig: undefined FUN_004a6af0(int param_1, undefined4 param_2, int param_3, int param_4)


void __cdecl FUN_004a6af0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  *(undefined4 *)(param_1 + 0x54) = param_2;
  if (param_3 == 0) {
    *(code **)(param_1 + 0x4c) = FUN_004a6b60;
  }
  else {
    *(int *)(param_1 + 0x4c) = param_3;
  }
  if (param_4 == 0) {
    *(undefined1 **)(param_1 + 0x14c) = &LAB_004a6ba0;
  }
  else {
    *(int *)(param_1 + 0x14c) = param_4;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    FUN_004ac710(param_1,s_Attempted_to_set_both_read_data__004df164);
    FUN_004ac710(param_1,s_the_same_structure__Resetting_re_004df12c);
  }
  return;
}

