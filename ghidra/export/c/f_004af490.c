// FUNCTION: PORT1111 0x004af490
// name: FUN_004af490
// sig: undefined FUN_004af490(int * param_1, int param_2)


void __cdecl FUN_004af490(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  param_1[0x1d] = param_2;
  param_1[0x1e] = param_1[0x41] + 1;
  do {
    uVar2 = FUN_00460550(param_1 + 0x1d,0);
    if (uVar2 != 0) {
      pcVar3 = (char *)param_1[0x23];
      if (pcVar3 == (char *)0x0) {
        pcVar3 = s_zlib_error_004dec34;
      }
      FUN_004ac6e0(param_1,pcVar3);
    }
    if (param_1[0x21] == 0) {
      FUN_004ace90(param_1,(byte *)param_1[0x2b],param_1[0x2c]);
      param_1[0x20] = param_1[0x2b];
      param_1[0x21] = param_1[0x2c];
    }
  } while (param_1[0x1e] != 0);
  if (param_1[0x3a] != 0) {
    iVar1 = param_1[0x3b];
    param_1[0x3b] = param_1[0x3a];
    param_1[0x3a] = iVar1;
  }
  FUN_004ae480(param_1);
  iVar1 = param_1[0x55];
  param_1[0x55] = iVar1 + 1U;
  if ((param_1[0x54] != 0) && ((uint)param_1[0x54] <= iVar1 + 1U)) {
    FUN_004a51c0(param_1);
  }
  return;
}

