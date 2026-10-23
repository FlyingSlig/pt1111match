// FUNCTION: PORT1111 0x0048a270
// name: FUN_0048a270
// sig: undefined FUN_0048a270(ushort param_1)


void __cdecl FUN_0048a270(ushort param_1)

{
  DAT_004e2cac = LocalAlloc(0x40,(uint)param_1 << 6);
  if (DAT_004e2cac != (HLOCAL)0x0) {
    DAT_004e2ca8 = param_1;
  }
  return;
}

