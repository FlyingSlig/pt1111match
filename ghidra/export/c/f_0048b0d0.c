// FUNCTION: PORT1111 0x0048b0d0
// name: FUN_0048b0d0
// sig: undefined FUN_0048b0d0(LOGFONTA * param_1)


void __cdecl FUN_0048b0d0(LOGFONTA *param_1)

{
  int iVar1;
  
  if (DAT_004e2cac != (int *)0x0) {
    iVar1 = FUN_0048a630(&param_1->lfHeight,(int)DAT_004e2cac);
    if (iVar1 == 0) {
      FUN_0048a6a0(param_1,DAT_004e2cac);
    }
    return;
  }
  CreateFontIndirectA(param_1);
  return;
}

