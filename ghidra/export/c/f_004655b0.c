// FUNCTION: PORT1111 0x004655b0
// name: FUN_004655b0
// sig: undefined FUN_004655b0(void)


void FUN_004655b0(void)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement((LONG *)&DAT_004e2a94);
  if ((LVar1 == 0) && (DAT_004e2a90 != (HMODULE)0x0)) {
    FreeLibrary(DAT_004e2a90);
    DAT_004e2a90 = (HMODULE)0x0;
  }
  return;
}

