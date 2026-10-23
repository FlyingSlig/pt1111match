// FUNCTION: PORT1111 0x00437370
// name: FUN_00437370
// sig: uint FUN_00437370(uchar * param_1, undefined4 * param_2)


uint __cdecl FUN_00437370(uchar *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 local_4;
  
  puVar1 = FUN_00466af0(&local_4,param_1,0xffffffff);
  uVar2 = FUN_00437290(&DAT_004e25f8,puVar1,param_2);
  FUN_00465e40(&local_4);
  return uVar2 & 0xff;
}

