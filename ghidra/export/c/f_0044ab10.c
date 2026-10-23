// FUNCTION: PORT1111 0x0044ab10
// name: FUN_0044ab10
// sig: undefined FUN_0044ab10(int param_1)


void __fastcall FUN_0044ab10(int param_1)

{
  if (DAT_004e2800 != (void *)0x0) {
    FUN_0044c020(DAT_004e2800,DAT_004dc2a4);
  }
  FUN_00475230(*(void **)(DAT_004e2b14 + 0xf8),(byte)DAT_004dc2ac);
  if (DAT_004e2424 != 0) {
    DAT_004d6a80 = DAT_004dc2ac;
  }
  FUN_00480bc0(param_1);
  return;
}

