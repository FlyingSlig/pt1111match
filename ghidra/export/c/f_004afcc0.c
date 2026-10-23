// FUNCTION: PORT1111 0x004afcc0
// name: FUN_004afcc0
// sig: int FUN_004afcc0(byte * param_1)


int __cdecl FUN_004afcc0(byte *param_1)

{
  undefined4 in_EAX;
  
  return CONCAT22((short)((uint)in_EAX >> 0x10),(ushort)*param_1) * 0x100 +
         CONCAT22((short)((uint)param_1 >> 0x10),(ushort)param_1[1]);
}

