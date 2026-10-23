// FUNCTION: PORT1111 0x0043dd60
// name: FUN_0043dd60
// sig: undefined4 FUN_0043dd60(byte * param_1)


undefined4 __cdecl FUN_0043dd60(byte *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0043dcb0(&DAT_004e27cc,param_1);
  if (puVar1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  return *puVar1;
}

