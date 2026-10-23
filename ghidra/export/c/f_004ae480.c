// FUNCTION: PORT1111 0x004ae480
// name: FUN_004ae480
// sig: undefined FUN_004ae480(int * param_1)


void __cdecl FUN_004ae480(int *param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  iVar1 = param_1[0x39];
  param_1[0x39] = iVar1 + 1U;
  if ((uint)param_1[0x34] <= iVar1 + 1U) {
    if (*(char *)((int)param_1 + 0x123) != '\0') {
      param_1[0x39] = 0;
      if ((*(byte *)(param_1 + 0x1c) & 2) == 0) {
        bVar2 = (char)param_1[0x49] + 1;
        *(byte *)(param_1 + 0x49) = bVar2;
        if (bVar2 < 7) {
          do {
            param_1[0x35] =
                 (uint)((param_1[0x32] - (&DAT_004c84f4)[bVar2]) + -1 + (&DAT_004c8510)[bVar2]) /
                 (uint)(&DAT_004c8510)[bVar2];
            uVar4 = (uint)((param_1[0x33] - (&DAT_004c852c)[bVar2]) + -1 + (&DAT_004c8548)[bVar2]) /
                    (uint)(&DAT_004c8548)[bVar2];
            param_1[0x34] = uVar4;
            if ((param_1[0x35] != 0) && (uVar4 != 0)) break;
            bVar2 = bVar2 + 1;
            *(byte *)(param_1 + 0x49) = bVar2;
          } while (bVar2 < 7);
        }
      }
      else {
        *(char *)(param_1 + 0x49) = (char)param_1[0x49] + '\x01';
      }
      if (*(byte *)(param_1 + 0x49) < 7) {
        if ((undefined4 *)param_1[0x3a] == (undefined4 *)0x0) {
          return;
        }
        uVar3 = ((uint)*(byte *)((int)param_1 + 299) * (uint)*(byte *)(param_1 + 0x4a) *
                 param_1[0x32] + 7 >> 3) + 1;
        puVar5 = (undefined4 *)param_1[0x3a];
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)puVar5 = 0;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        return;
      }
    }
    while( true ) {
      while (uVar4 = FUN_00460550(param_1 + 0x1d,4), uVar4 == 0) {
        if (param_1[0x21] == 0) {
          FUN_004ace90(param_1,(byte *)param_1[0x2b],param_1[0x2c]);
          param_1[0x20] = param_1[0x2b];
          param_1[0x21] = param_1[0x2c];
        }
      }
      if (uVar4 == 1) break;
      pcVar6 = (char *)param_1[0x23];
      if (pcVar6 == (char *)0x0) {
        pcVar6 = s_zlib_error_004dec34;
      }
      FUN_004ac6e0(param_1,pcVar6);
    }
    if ((uint)param_1[0x21] < (uint)param_1[0x2c]) {
      FUN_004ace90(param_1,(byte *)param_1[0x2b],param_1[0x2c] - param_1[0x21]);
    }
    FUN_004604d0((int)(param_1 + 0x1d));
  }
  return;
}

