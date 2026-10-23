// FUNCTION: PORT1111 0x0049a192
// name: FUN_0049a192
// sig: byte * FUN_0049a192(byte * param_1)


byte * __cdecl FUN_0049a192(byte *param_1)

{
  byte *pbVar1;
  
  pbVar1 = param_1 + 1;
  if ((((&DAT_004e3201)[*param_1] & 4) != 0) && (*pbVar1 != 0)) {
    pbVar1 = param_1 + 2;
  }
  return pbVar1;
}

