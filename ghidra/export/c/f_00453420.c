// FUNCTION: PORT1111 0x00453420
// name: FUN_00453420
// sig: undefined FUN_00453420(int param_1)


void __fastcall FUN_00453420(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_004532f0(param_1);
    FUN_00455220(DAT_004e2410);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00453380(param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

