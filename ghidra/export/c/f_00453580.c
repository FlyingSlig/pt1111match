// FUNCTION: PORT1111 0x00453580
// name: FUN_00453580
// sig: undefined FUN_00453580(int param_1)


void __fastcall FUN_00453580(int param_1)

{
  ulonglong uVar1;
  
  if (0 < *(int *)(param_1 + 0x14) + -1) {
    uVar1 = FUN_00497d88();
    *(int *)(param_1 + 0x24) = (int)uVar1;
    return;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

