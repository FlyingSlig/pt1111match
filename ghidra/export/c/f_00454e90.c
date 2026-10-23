// FUNCTION: PORT1111 0x00454e90
// name: FUN_00454e90
// sig: undefined4 FUN_00454e90(int param_1)


undefined4 __cdecl FUN_00454e90(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_004e2444 == 0) {
    return 1;
  }
  if (*(int *)(&DAT_004dc328 + param_1 * 8) == 0) {
    return 0;
  }
  uVar1 = FUN_0041ca90(&DAT_004e2430,*(int *)(&DAT_004dc328 + param_1 * 8));
  return uVar1;
}

