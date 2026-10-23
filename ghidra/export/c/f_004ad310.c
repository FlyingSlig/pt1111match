// FUNCTION: PORT1111 0x004ad310
// name: FUN_004ad310
// sig: undefined FUN_004ad310(int * param_1, undefined4 * param_2)


void __cdecl FUN_004ad310(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  if ((byte *)*param_2 != (byte *)0x0) {
    FUN_004ac9c0(param_1,(byte *)*param_2,param_2[1]);
    return;
  }
  iVar1 = 0;
  if (0 < (int)param_2[2]) {
    do {
      FUN_004ac9c0(param_1,*(byte **)(param_2[4] + iVar1 * 4),param_1[0x2c]);
      FUN_004a4750((int)param_1,*(void **)(param_2[4] + iVar1 * 4));
      *(undefined4 *)(param_2[4] + iVar1 * 4) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_2[2]);
  }
  if (param_2[3] != 0) {
    FUN_004a4750((int)param_1,(void *)param_2[4]);
  }
  param_2[4] = 0;
  if ((uint)param_1[0x21] < (uint)param_1[0x2c]) {
    FUN_004ac9c0(param_1,(byte *)param_1[0x2b],param_1[0x2c] - param_1[0x21]);
  }
  FUN_004604d0((int)(param_1 + 0x1d));
  return;
}

