// FUNCTION: PORT1111 0x004ac610
// name: FUN_004ac610
// sig: undefined FUN_004ac610(int * param_1, undefined4 param_2, undefined4 param_3)


void __cdecl FUN_004ac610(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((code *)param_1[0x14] != (code *)0x0) {
    (*(code *)param_1[0x14])(param_1,param_2,param_3);
    return;
  }
  FUN_004ac6e0(param_1,s_Call_to_NULL_read_function_004df408);
  return;
}

