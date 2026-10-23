// FUNCTION: PORT1111 0x00426a80
// name: FUN_00426a80
// sig: undefined FUN_00426a80(int param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00426a80(int param_1)

{
  byte bVar1;
  
  bVar1 = (byte)(param_1 * 2);
  DAT_004e2050 = 3 << (bVar1 & 0x1f);
  DAT_004e204c = param_1 * 2;
  _DAT_004e2054 = 0 << (bVar1 & 0x1f);
  DAT_004e2060 = DAT_004e2050;
  DAT_004e2058 = 1 << (bVar1 & 0x1f);
  DAT_004e205c = 2 << (bVar1 & 0x1f);
  return;
}

