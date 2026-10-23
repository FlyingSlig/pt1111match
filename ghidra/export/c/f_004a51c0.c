// FUNCTION: PORT1111 0x004a51c0
// name: FUN_004a51c0
// sig: undefined FUN_004a51c0(int * param_1)


void __cdecl FUN_004a51c0(int *param_1)

{
  uint uVar1;
  char *pcVar2;
  
  if ((uint)param_1[0x39] < (uint)param_1[0x34]) {
    while( true ) {
      uVar1 = FUN_00460550(param_1 + 0x1d,2);
      if (uVar1 != 0) {
        pcVar2 = (char *)param_1[0x23];
        if (pcVar2 == (char *)0x0) {
          pcVar2 = s_zlib_error_004dec34;
        }
        FUN_004ac6e0(param_1,pcVar2);
      }
      if (param_1[0x21] != 0) break;
      FUN_004ace90(param_1,(byte *)param_1[0x2b],param_1[0x2c]);
      param_1[0x20] = param_1[0x2b];
      param_1[0x21] = param_1[0x2c];
    }
    if (param_1[0x2c] != param_1[0x21]) {
      FUN_004ace90(param_1,(byte *)param_1[0x2b],param_1[0x2c] - param_1[0x21]);
      param_1[0x20] = param_1[0x2b];
      param_1[0x21] = param_1[0x2c];
    }
    param_1[0x55] = 0;
    FUN_004a6ad0((int)param_1);
  }
  return;
}

