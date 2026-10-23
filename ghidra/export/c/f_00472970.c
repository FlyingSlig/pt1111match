// FUNCTION: PORT1111 0x00472970
// name: FUN_00472970
// sig: undefined4 FUN_00472970(int * param_1)


undefined4 __fastcall FUN_00472970(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1[0xd] != 0) {
    return 1;
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 1;
  if (param_1[7] == 0) {
    (**(code **)(*param_1 + 0x90))(1);
  }
  uVar1 = FUN_00470cb0(param_1,param_1[0x2a],param_1[0x2b]);
  return uVar1;
}

