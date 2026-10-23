// FUNCTION: PORT1111 0x004a6d70
// name: FUN_004a6d70
// sig: undefined4 * FUN_004a6d70(undefined4 * param_1)


undefined4 * __cdecl FUN_004a6d70(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  param_1 = FUN_004a46b0(2);
  if (param_1 != (undefined4 *)0x0) {
    FUN_004a6db0(&param_1,0x120);
  }
  return param_1;
}

