// FUNCTION: PORT1111 0x004ac6e0
// name: FUN_004ac6e0
// sig: undefined FUN_004ac6e0(int * param_1, undefined4 param_2)


void __cdecl FUN_004ac6e0(int *param_1,undefined4 param_2)

{
  if ((code *)param_1[0x10] != (code *)0x0) {
    (*(code *)param_1[0x10])(param_1,param_2);
  }
  FUN_004ac850(param_1,param_2);
  return;
}

