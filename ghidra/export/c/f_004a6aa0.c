// FUNCTION: PORT1111 0x004a6aa0
// name: FUN_004a6aa0
// sig: undefined FUN_004a6aa0(int * param_1, undefined4 param_2, undefined4 param_3)


void __cdecl FUN_004a6aa0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((code *)param_1[0x13] != (code *)0x0) {
    (*(code *)param_1[0x13])(param_1,param_2,param_3);
    return;
  }
  FUN_004ac6e0(param_1,s_Call_to_NULL_write_function_004df110);
  return;
}

