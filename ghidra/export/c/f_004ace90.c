// FUNCTION: PORT1111 0x004ace90
// name: FUN_004ace90
// sig: undefined FUN_004ace90(int * param_1, byte * param_2, uint param_3)


void __cdecl FUN_004ace90(int *param_1,byte *param_2,uint param_3)

{
  FUN_004ac940(param_1,(byte *)&DAT_004c8454,param_2,param_3);
  param_1[0x1a] = param_1[0x1a] | 4;
  return;
}

