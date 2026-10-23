// FUNCTION: PORT1111 0x0044aac0
// name: FUN_0044aac0
// sig: undefined FUN_0044aac0(HKEY param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0044aac0(HKEY param_1)

{
  _DAT_004dc29c = param_1[0x1a].unused;
  DAT_004dc2a0 = param_1[0x26].unused;
  DAT_004db290 = param_1[0x32].unused;
  if (param_1[0x44].unused != 0) {
    DAT_004db294 = param_1[0x3e].unused;
  }
  FUN_0044a590();
  FUN_0044aa50(param_1);
  FUN_00480b20((int)param_1);
  return;
}

