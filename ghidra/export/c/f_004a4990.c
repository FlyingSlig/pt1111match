// FUNCTION: PORT1111 0x004a4990
// name: FUN_004a4990
// sig: undefined FUN_004a4990(int * param_1, int * param_2)


void __cdecl FUN_004a4990(int *param_1,int *param_2)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  int *piVar7;
  undefined3 extraout_var;
  int iVar8;
  byte *pbVar9;
  
  FUN_004a47e0(param_1,param_2);
  if ((*(byte *)(param_2 + 2) & 8) == 0) {
    if (*(char *)((int)param_2 + 0x19) == '\x03') {
      FUN_004ac6e0(param_1,s_Valid_palette_required_for_palet_004deb00);
    }
  }
  else {
    FUN_004acde0(param_1,param_2[4],(uint)*(ushort *)(param_2 + 5));
  }
  if ((*(byte *)(param_2 + 2) & 0x10) != 0) {
    if ((((param_1[0x1c] & 0x80000U) != 0) && (*(char *)((int)param_2 + 0x19) == '\x03')) &&
       (iVar6 = 0, *(short *)((int)param_2 + 0x16) != 0)) {
      do {
        pcVar1 = (char *)(iVar6 + param_2[0x13]);
        pcVar2 = (char *)(iVar6 + param_2[0x13]);
        iVar6 = iVar6 + 1;
        *pcVar2 = -1 - *pcVar1;
      } while (iVar6 < (int)(uint)*(ushort *)((int)param_2 + 0x16));
    }
    FUN_004ad960(param_1,(byte *)param_2[0x13],(int)(param_2 + 0x14),
                 (uint)*(ushort *)((int)param_2 + 0x16),(uint)*(byte *)((int)param_2 + 0x19));
  }
  if ((*(byte *)(param_2 + 2) & 0x20) != 0) {
    FUN_004ada60(param_1,(byte *)((int)param_2 + 0x5a),(uint)*(byte *)((int)param_2 + 0x19));
  }
  if ((*(byte *)(param_2 + 2) & 0x40) != 0) {
    FUN_004adb60(param_1,(ushort *)param_2[0x1f],(uint)*(ushort *)(param_2 + 5));
  }
  if ((param_2[2] & 0x100U) != 0) {
    FUN_004adf50(param_1,param_2[0x19],param_2[0x1a],(uint)*(byte *)(param_2 + 0x1b));
  }
  if ((param_2[2] & 0x400U) != 0) {
    FUN_004adfb0(param_1,(byte *)param_2[0x28],param_2[0x29],param_2[0x2a],
                 (uint)*(byte *)(param_2 + 0x2d),(uint)*(byte *)((int)param_2 + 0xb5),
                 (byte *)param_2[0x2b],(undefined4 *)param_2[0x2c]);
  }
  if ((param_2[2] & 0x4000U) != 0) {
    FUN_004ae120(param_1,(uint)*(byte *)(param_2 + 0x37),param_2[0x38],param_2[0x39],param_2[0x3a],
                 param_2[0x3b]);
  }
  if ((*(byte *)(param_2 + 2) & 0x80) != 0) {
    FUN_004ae1e0(param_1,param_2[0x1c],param_2[0x1d],(uint)*(byte *)(param_2 + 0x1e));
  }
  if ((param_2[2] & 0x200U) != 0) {
    FUN_004ae240(param_1,(ushort *)(param_2 + 0xf));
    param_1[0x1a] = param_1[0x1a] | 0x200;
  }
  if (((param_2[2] & 0x2000U) != 0) && (iVar6 = 0, 0 < param_2[0x36])) {
    iVar8 = 0;
    do {
      FUN_004ad3d0(param_1,(byte *)(iVar8 + param_2[0x35]));
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 0x10;
    } while (iVar6 < param_2[0x36]);
  }
  iVar6 = 0;
  if (0 < param_2[0xc]) {
    iVar8 = 0;
    do {
      piVar7 = (int *)(param_2[0xe] + iVar8);
      iVar4 = *piVar7;
      if (iVar4 < 1) {
        if (iVar4 == 0) {
          FUN_004ade40(param_1,(byte *)piVar7[1],(byte *)piVar7[2],0,0);
          *(undefined4 *)(iVar8 + param_2[0xe]) = 0xfffffffe;
        }
        else if (iVar4 == -1) {
          FUN_004add90(param_1,(byte *)piVar7[1],(byte *)piVar7[2]);
          goto LAB_004a4bd1;
        }
      }
      else {
        FUN_004ac710((int)param_1,s_Unable_to_write_international_te_004deadc);
LAB_004a4bd1:
        *(undefined4 *)(iVar8 + param_2[0xe]) = 0xfffffffd;
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 0x10;
    } while (iVar6 < param_2[0xc]);
  }
  if ((param_2[0x30] != 0) &&
     (pbVar9 = (byte *)param_2[0x2f], pbVar9 < pbVar9 + param_2[0x30] * 0x14)) {
    do {
      uVar5 = FUN_004a7210((int)param_1,(int *)pbVar9);
      if (((CONCAT31(extraout_var,uVar5) != 1) &&
          (((bVar3 = pbVar9[0x10], bVar3 != 0 && ((bVar3 & 2) != 0)) && ((bVar3 & 4) == 0)))) &&
         ((((pbVar9[3] & 0x20) != 0 || (CONCAT31(extraout_var,uVar5) == 3)) ||
          ((param_1[0x1b] & 0x10000U) != 0)))) {
        FUN_004ac940(param_1,pbVar9,*(byte **)(pbVar9 + 8),*(uint *)(pbVar9 + 0xc));
      }
      pbVar9 = pbVar9 + 0x14;
    } while (pbVar9 < (byte *)(param_2[0x2f] + param_2[0x30] * 0x14));
  }
  return;
}

