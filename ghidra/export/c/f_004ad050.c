// FUNCTION: PORT1111 0x004ad050
// name: FUN_004ad050
// sig: int FUN_004ad050(int * param_1, int param_2, int param_3, int param_4, int * param_5)


int __cdecl FUN_004ad050(int *param_1,int param_2,int param_3,int param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char local_34 [52];
  
  param_5[3] = 0;
  param_5[2] = 0;
  param_5[4] = 0;
  *param_5 = 0;
  if (param_4 == -1) {
    *param_5 = param_2;
    param_5[1] = param_3;
    return param_3;
  }
  if (2 < param_4) {
    _sprintf(local_34,s_Unknown_compression_type__d_004df6ac,param_4);
    FUN_004ac710((int)param_1,local_34);
  }
  param_1[0x1e] = param_3;
  param_1[0x1d] = param_2;
  param_1[0x21] = param_1[0x2c];
  param_1[0x20] = param_1[0x2b];
  do {
    uVar1 = FUN_00460550(param_1 + 0x1d,0);
    if (uVar1 != 0) {
      pcVar9 = (char *)param_1[0x23];
      if (pcVar9 == (char *)0x0) {
        pcVar9 = s_zlib_error_004dec34;
      }
      FUN_004ac6e0(param_1,pcVar9);
    }
    if (param_1[0x21] == 0) {
      if (param_1[0x1e] == 0) break;
      iVar5 = param_5[3];
      if (iVar5 <= param_5[2]) {
        puVar8 = (undefined4 *)param_5[4];
        iVar2 = param_5[2] + 4;
        param_5[3] = iVar2;
        if (puVar8 == (undefined4 *)0x0) {
          pvVar4 = FUN_004a4710(param_1,iVar2 * 4);
          param_5[4] = (int)pvVar4;
        }
        else {
          puVar3 = FUN_004a4710(param_1,iVar2 * 4);
          param_5[4] = (int)puVar3;
          puVar7 = puVar8;
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar3 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar3 = puVar3 + 1;
          }
          FUN_004a4750((int)param_1,puVar8);
        }
      }
      pvVar4 = FUN_004a4710(param_1,param_1[0x2c]);
      *(void **)(param_5[4] + param_5[2] * 4) = pvVar4;
      uVar1 = param_1[0x2c];
      puVar8 = (undefined4 *)param_1[0x2b];
      puVar7 = *(undefined4 **)(param_5[4] + param_5[2] * 4);
      for (uVar6 = uVar1 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar7 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      param_5[2] = param_5[2] + 1;
      param_1[0x21] = param_1[0x2c];
      param_1[0x20] = param_1[0x2b];
    }
  } while (param_1[0x1e] != 0);
  while( true ) {
    while (uVar1 = FUN_00460550(param_1 + 0x1d,4), uVar1 == 0) {
      if (param_1[0x21] == 0) {
        iVar5 = param_5[3];
        if (iVar5 <= param_5[2]) {
          puVar8 = (undefined4 *)param_5[4];
          iVar2 = param_5[2] + 4;
          param_5[3] = iVar2;
          if (puVar8 == (undefined4 *)0x0) {
            pvVar4 = FUN_004a4710(param_1,iVar2 * 4);
            param_5[4] = (int)pvVar4;
          }
          else {
            puVar3 = FUN_004a4710(param_1,iVar2 * 4);
            param_5[4] = (int)puVar3;
            puVar7 = puVar8;
            for (; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar3 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar3 = puVar3 + 1;
            }
            FUN_004a4750((int)param_1,puVar8);
          }
        }
        pvVar4 = FUN_004a4710(param_1,param_1[0x2c]);
        *(void **)(param_5[4] + param_5[2] * 4) = pvVar4;
        uVar1 = param_1[0x2c];
        puVar8 = (undefined4 *)param_1[0x2b];
        puVar7 = *(undefined4 **)(param_5[4] + param_5[2] * 4);
        for (uVar6 = uVar1 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar7 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        param_5[2] = param_5[2] + 1;
        param_1[0x21] = param_1[0x2c];
        param_1[0x20] = param_1[0x2b];
      }
    }
    if (uVar1 == 1) break;
    if (param_1[0x23] == 0) {
      FUN_004ac6e0(param_1,s_zlib_error_004dec34);
    }
    else {
      FUN_004ac6e0(param_1,param_1[0x23]);
    }
  }
  uVar1 = param_1[0x2c];
  iVar5 = param_5[2] * uVar1;
  if ((uint)param_1[0x21] < uVar1) {
    iVar5 = iVar5 + (uVar1 - param_1[0x21]);
  }
  return iVar5;
}

