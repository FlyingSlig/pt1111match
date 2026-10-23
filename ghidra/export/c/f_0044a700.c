// FUNCTION: PORT1111 0x0044a700
// name: FUN_0044a700
// sig: undefined FUN_0044a700(void)


void FUN_0044a700(void)

{
  if (DAT_004e2800 != (void *)0x0) {
    FUN_0044c020(DAT_004e2800,DAT_004dc2a4);
  }
  FUN_00475230(*(void **)(DAT_004e2b14 + 0xf8),(byte)DAT_004dc2ac);
  if (DAT_004e2424 != 0) {
    DAT_004d6a80 = DAT_004dc2ac;
  }
  return;
}

