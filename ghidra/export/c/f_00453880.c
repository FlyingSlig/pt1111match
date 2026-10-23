// FUNCTION: PORT1111 0x00453880
// name: FUN_00453880
// sig: undefined4 FUN_00453880(int param_1)


undefined4 __fastcall FUN_00453880(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (((*(int *)(param_1 + 8) < 2) || (*(int *)(param_1 + 0xc) != 1)) ||
     ((*(int *)(param_1 + 0x14) == 0 && (*(int *)(param_1 + 0x18) == 0)))) {
    uVar1 = 0;
  }
  return uVar1;
}

