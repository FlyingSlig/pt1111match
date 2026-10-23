// FUNCTION: PORT1111 0x00444ba0
// name: FUN_00444ba0
// sig: undefined4 FUN_00444ba0(int * param_1)


undefined4 __fastcall FUN_00444ba0(int *param_1)

{
  int *local_4;
  
  local_4 = param_1;
  FUN_00413aa0(param_1 + 3,&local_4,(int *)&stack0x00000004);
  if (local_4 == (int *)param_1[4]) {
    return 0;
  }
  FUN_004164b0(param_1 + 3,&stack0x00000004,local_4);
  return 1;
}

