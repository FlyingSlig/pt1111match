// FUNCTION: PORT1111 0x004b21a0
// name: FUN_004b21a0
// sig: undefined FUN_004b21a0(int * param_1, byte * param_2)


void __cdecl FUN_004b21a0(int *param_1,byte *param_2)

{
  byte bVar1;
  
  bVar1 = *param_2;
  if (((((((bVar1 < 0x29) || (0x7a < bVar1)) || ((0x5a < bVar1 && (bVar1 < 0x61)))) ||
        ((bVar1 = param_2[1], bVar1 < 0x29 || (0x7a < bVar1)))) ||
       ((0x5a < bVar1 && (bVar1 < 0x61)))) ||
      ((((bVar1 = param_2[2], bVar1 < 0x29 || (0x7a < bVar1)) || ((0x5a < bVar1 && (bVar1 < 0x61))))
       || ((bVar1 = param_2[3], bVar1 < 0x29 || (0x7a < bVar1)))))) ||
     ((0x5a < bVar1 && (bVar1 < 0x61)))) {
    FUN_004ac760(param_1,(undefined4 *)s_invalid_chunk_type_004e05e4);
  }
  return;
}

