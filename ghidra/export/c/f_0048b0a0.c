// FUNCTION: PORT1111 0x0048b0a0
// name: FUN_0048b0a0
// sig: undefined FUN_0048b0a0(void)


void FUN_0048b0a0(void)

{
  if (DAT_004e2cac != (HLOCAL)0x0) {
    FUN_0048a2a0();
    LocalFree(DAT_004e2cac);
    DAT_004e2cac = (HLOCAL)0x0;
  }
  return;
}

