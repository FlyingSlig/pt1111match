// FUNCTION: PORT1111 0x004afc90
// name: FUN_004afc90
// sig: int FUN_004afc90(byte * param_1)


int __cdecl FUN_004afc90(byte *param_1)

{
  return (((uint)*param_1 * 0x100 + (uint)param_1[1]) * 0x100 + (uint)param_1[2]) * 0x100 +
         (uint)param_1[3];
}

