// FUNCTION: PORT1111 0x00417760
// name: FUN_00417760
// sig: undefined FUN_00417760(undefined4 param_1)


void __cdecl FUN_00417760(undefined4 param_1)

{
  if ((DAT_004e0b04 != 0) &&
     ((uint)((int)DAT_004e0b08 - DAT_004e0b04 >> 2) < (uint)(DAT_004e0b0c - DAT_004e0b04 >> 2))) {
    *DAT_004e0b08 = param_1;
    DAT_004e0b08 = DAT_004e0b08 + 1;
    return;
  }
  FUN_00416e50(&DAT_004e0b00,DAT_004e0b08,1,&param_1);
  return;
}

