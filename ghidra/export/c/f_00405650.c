// FUNCTION: PORT1111 0x00405650
// name: FUN_00405650
// sig: undefined4 FUN_00405650(int * param_1)


undefined4 __fastcall FUN_00405650(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004125a0(param_1);
  if (iVar1 != 0) {
    if (param_1[0x1d] != 0) {
      param_1[0x1d] = 0;
      FUN_00453fc0(*(void **)(DAT_004e240c + 0x21c));
    }
    FUN_004454a0((void *)param_1[0x2c]);
    return 1;
  }
  return 0;
}

