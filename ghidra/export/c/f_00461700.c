// FUNCTION: PORT1111 0x00461700
// name: FUN_00461700
// sig: undefined FUN_00461700(uint * param_1, int * param_2, int param_3)


void __cdecl FUN_00461700(uint *param_1,int *param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  puVar2 = param_1;
  local_30 = (uint *)*param_2;
  local_2c = param_2[1];
  local_28 = param_1[8];
  puVar7 = (uint *)param_1[7];
  puVar8 = (uint *)param_1[0xd];
  if (puVar8 < (uint *)param_1[0xc]) {
    local_24 = (int)param_1[0xc] + (-1 - (int)puVar8);
    param_1 = puVar8;
  }
  else {
    local_24 = param_1[0xb] - (int)puVar8;
    param_1 = puVar8;
  }
switchD_004617b1_default:
  uVar10 = local_28;
  switch(*puVar2) {
  case 0:
    goto switchD_0046174d_caseD_0;
  case 1:
    for (; puVar7 < (uint *)0x20; puVar7 = puVar7 + 2) {
      if (local_2c == 0) {
        puVar2[8] = local_28;
        puVar2[7] = (uint)puVar7;
        iVar4 = *param_2;
        param_2[1] = 0;
        *param_2 = (int)local_30;
        param_2[2] = (int)((int)local_30 + (param_2[2] - iVar4));
        puVar2[0xd] = (uint)param_1;
        FUN_00465080((int)puVar2,(int)param_2,param_3);
        return;
      }
      param_3 = 0;
      local_2c = local_2c - 1;
      local_28 = local_28 | (uint)(byte)*local_30 << ((byte)puVar7 & 0x1f);
      local_30 = (uint *)((int)local_30 + 1);
    }
    uVar10 = local_28 & 0xffff;
    if (~local_28 >> 0x10 != uVar10) {
      *puVar2 = 9;
      param_2[6] = (int)s_invalid_stored_block_lengths_004dc5dc;
      puVar2[8] = local_28;
      puVar2[7] = (uint)puVar7;
      iVar4 = *param_2;
      *param_2 = (int)local_30;
      param_2[1] = local_2c;
      param_2[2] = (int)((int)local_30 + (param_2[2] - iVar4));
      puVar2[0xd] = (uint)param_1;
      FUN_00465080((int)puVar2,(int)param_2,-3);
      return;
    }
    puVar7 = (uint *)0x0;
    puVar2[1] = uVar10;
    local_28 = 0;
    if (uVar10 != 0) {
      *puVar2 = 2;
      goto switchD_004617b1_default;
    }
    break;
  case 2:
    if (local_2c == 0) {
      puVar2[8] = local_28;
      puVar2[7] = (uint)puVar7;
      iVar4 = *param_2;
      *param_2 = (int)local_30;
      param_2[1] = 0;
      param_2[2] = (int)((int)local_30 + (param_2[2] - iVar4));
      puVar2[0xd] = (uint)param_1;
      FUN_00465080((int)puVar2,(int)param_2,param_3);
      return;
    }
    if (local_24 == 0) {
      if (param_1 == (uint *)puVar2[0xb]) {
        puVar8 = (uint *)puVar2[0xc];
        puVar9 = (uint *)puVar2[10];
        if (puVar8 != puVar9) {
          if (puVar9 < puVar8) {
            local_24 = (int)puVar8 + (-1 - (int)puVar9);
          }
          else {
            local_24 = (int)puVar2[0xb] - (int)puVar9;
          }
          param_1 = puVar9;
          if (local_24 != 0) goto LAB_00461976;
        }
      }
      puVar2[0xd] = (uint)param_1;
      iVar4 = FUN_00465080((int)puVar2,(int)param_2,param_3);
      param_1 = (uint *)puVar2[0xd];
      puVar8 = (uint *)puVar2[0xc];
      if (param_1 < puVar8) {
        local_24 = (int)puVar8 + (-1 - (int)param_1);
      }
      else {
        local_24 = puVar2[0xb] - (int)param_1;
      }
      local_20 = (uint *)puVar2[0xb];
      if ((param_1 == local_20) && (puVar9 = (uint *)puVar2[10], puVar8 != puVar9)) {
        param_1 = puVar9;
        if (puVar9 < puVar8) {
          local_24 = (int)puVar8 + (-1 - (int)puVar9);
        }
        else {
          local_24 = (int)local_20 - (int)puVar9;
        }
      }
      if (local_24 == 0) {
        puVar2[8] = local_28;
        puVar2[7] = (uint)puVar7;
        iVar1 = *param_2;
        param_2[1] = local_2c;
        *param_2 = (int)local_30;
        param_2[2] = (int)((int)local_30 + (param_2[2] - iVar1));
        puVar2[0xd] = (uint)param_1;
        FUN_00465080((int)puVar2,(int)param_2,iVar4);
        return;
      }
    }
LAB_00461976:
    param_3 = 0;
    uVar10 = puVar2[1];
    if (local_2c < puVar2[1]) {
      uVar10 = local_2c;
    }
    if (local_24 < uVar10) {
      uVar10 = local_24;
    }
    puVar8 = local_30;
    puVar9 = param_1;
    for (uVar3 = uVar10 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    local_24 = local_24 - uVar10;
    for (uVar3 = uVar10 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(byte *)puVar9 = (byte)*puVar8;
      puVar8 = (uint *)((int)puVar8 + 1);
      puVar9 = (uint *)((int)puVar9 + 1);
    }
    local_30 = (uint *)((int)local_30 + uVar10);
    uVar3 = puVar2[1];
    local_2c = local_2c - uVar10;
    param_1 = (uint *)((int)param_1 + uVar10);
    puVar2[1] = uVar3 - uVar10;
    if (uVar3 - uVar10 != 0) goto switchD_004617b1_default;
    break;
  case 3:
    for (; puVar7 < (uint *)0xe; puVar7 = puVar7 + 2) {
      if (local_2c == 0) {
        puVar2[8] = local_28;
        puVar2[7] = (uint)puVar7;
        iVar4 = *param_2;
        *param_2 = (int)local_30;
        param_2[1] = 0;
        param_2[2] = (int)((int)local_30 + (param_2[2] - iVar4));
        puVar2[0xd] = (uint)param_1;
        FUN_00465080((int)puVar2,(int)param_2,param_3);
        return;
      }
      local_2c = local_2c - 1;
      param_3 = 0;
      local_28 = local_28 | (uint)(byte)*local_30 << ((byte)puVar7 & 0x1f);
      local_30 = (uint *)((int)local_30 + 1);
    }
    puVar2[1] = local_28 & 0x3fff;
    if ((0x1d < (local_28 & 0x1f)) || (0x3a0 < (local_28 & 0x3e0))) {
      *puVar2 = 9;
      param_2[6] = (int)s_too_many_length_or_distance_symb_004dc5b8;
      puVar2[8] = local_28;
      puVar2[7] = (uint)puVar7;
      iVar4 = *param_2;
      param_2[1] = local_2c;
      *param_2 = (int)local_30;
      param_2[2] = (int)((int)local_30 + (param_2[2] - iVar4));
      puVar2[0xd] = (uint)param_1;
      FUN_00465080((int)puVar2,(int)param_2,-3);
      return;
    }
    uVar10 = (*(code *)param_2[8])
                       (param_2[10],((local_28 & 0x3fff) >> 5 & 0x1f) + 0x102 + (local_28 & 0x1f),4)
    ;
    puVar2[3] = uVar10;
    if (uVar10 == 0) {
      puVar2[8] = local_28;
      puVar2[7] = (uint)puVar7;
      iVar4 = *param_2;
      param_2[1] = local_2c;
      *param_2 = (int)local_30;
      param_2[2] = (int)((int)local_30 + (param_2[2] - iVar4));
      puVar2[0xd] = (uint)param_1;
      FUN_00465080((int)puVar2,(int)param_2,-4);
      return;
    }
    local_28 = local_28 >> 0xe;
    puVar7 = (uint *)((int)puVar7 - 0xe);
    puVar2[2] = 0;
    *puVar2 = 4;
    goto LAB_00461a9d;
  case 4:
LAB_00461a9d:
    uVar10 = local_28;
    if (puVar2[2] < (puVar2[1] >> 10) + 4) {
      do {
        for (; puVar7 < (uint *)0x3; puVar7 = puVar7 + 2) {
          if (local_2c == 0) {
LAB_00462169:
            puVar2[8] = uVar10;
            puVar2[7] = (uint)puVar7;
            iVar4 = *param_2;
            *param_2 = (int)local_30;
            param_2[2] = (int)((int)local_30 + (param_2[2] - iVar4));
            param_2[1] = 0;
            puVar2[0xd] = (uint)param_1;
            FUN_00465080((int)puVar2,(int)param_2,param_3);
            return;
          }
          uVar3 = *local_30;
          local_2c = local_2c - 1;
          bVar5 = (byte)puVar7;
          param_3 = 0;
          local_30 = (uint *)((int)local_30 + 1);
          uVar10 = uVar10 | (uint)(byte)uVar3 << (bVar5 & 0x1f);
        }
        puVar7 = (uint *)((int)puVar7 - 3);
        local_28 = uVar10 >> 3;
        *(uint *)(puVar2[3] + *(int *)(&DAT_004c5188 + puVar2[2] * 4) * 4) = uVar10 & 7;
        uVar3 = puVar2[2];
        puVar2[2] = uVar3 + 1;
        uVar10 = local_28;
      } while (uVar3 + 1 < (puVar2[1] >> 10) + 4);
    }
    uVar10 = puVar2[2];
    while (uVar10 < 0x13) {
      *(undefined4 *)(puVar2[3] + *(int *)(&DAT_004c5188 + puVar2[2] * 4) * 4) = 0;
      uVar10 = puVar2[2] + 1;
      puVar2[2] = uVar10;
    }
    puVar2[4] = 7;
    iVar4 = FUN_00464950((int *)puVar2[3],puVar2 + 4,puVar2 + 5,puVar2[9],(int)param_2);
    if (iVar4 != 0) {
      if (iVar4 == -3) {
        (*(code *)param_2[9])(param_2[10],puVar2[3]);
        *puVar2 = 9;
      }
      puVar2[8] = local_28;
      puVar2[7] = (uint)puVar7;
      iVar1 = *param_2;
      param_2[1] = local_2c;
      *param_2 = (int)local_30;
      param_2[2] = (int)((int)local_30 + (param_2[2] - iVar1));
      puVar2[0xd] = (uint)param_1;
      FUN_00465080((int)puVar2,(int)param_2,iVar4);
      return;
    }
    puVar2[2] = 0;
    *puVar2 = 5;
    uVar10 = local_28;
LAB_00461b86:
    if (puVar2[2] < (puVar2[1] >> 5 & 0x1f) + 0x102 + (puVar2[1] & 0x1f)) {
      do {
        for (; puVar7 < (uint *)puVar2[4]; puVar7 = puVar7 + 2) {
          if (local_2c == 0) goto LAB_00462169;
          local_2c = local_2c - 1;
          param_3 = 0;
          uVar10 = uVar10 | (uint)(byte)*local_30 << ((byte)puVar7 & 0x1f);
          local_30 = (uint *)((int)local_30 + 1);
        }
        bVar5 = *(byte *)(puVar2[5] + 1 +
                         (*(uint *)(&DAT_004dd918 + (int)puVar2[4] * 4) & uVar10) * 8);
        uVar3 = (uint)bVar5;
        local_c = *(uint *)(puVar2[5] + (*(uint *)(&DAT_004dd918 + (int)puVar2[4] * 4) & uVar10) * 8
                           + 4);
        if (local_c < 0x10) {
          puVar7 = (uint *)((int)puVar7 - uVar3);
          uVar10 = uVar10 >> (bVar5 & 0x1f);
          *(uint *)(puVar2[3] + puVar2[2] * 4) = local_c;
          uVar3 = puVar2[2] + 1;
        }
        else {
          local_24 = 7;
          if (local_c != 0x12) {
            local_24 = local_c - 0xe;
          }
          local_20 = (uint *)(local_24 + uVar3);
          for (; puVar7 < local_20; puVar7 = puVar7 + 2) {
            if (local_2c == 0) goto LAB_00462169;
            local_2c = local_2c - 1;
            param_3 = 0;
            uVar10 = uVar10 | (uint)(byte)*local_30 << ((byte)puVar7 & 0x1f);
            local_30 = (uint *)((int)local_30 + 1);
          }
          uVar10 = uVar10 >> (bVar5 & 0x1f);
          local_28 = (-(uint)(local_c != 0x12) & 0xfffffff8) + 0xb +
                     (*(uint *)(&DAT_004dd918 + local_24 * 4) & uVar10);
          uVar10 = uVar10 >> ((byte)local_24 & 0x1f);
          puVar7 = (uint *)((int)puVar7 - (local_24 + uVar3));
          local_24 = puVar2[2];
          if ((puVar2[1] >> 5 & 0x1f) + 0x102 + (puVar2[1] & 0x1f) < local_28 + local_24) {
LAB_004621a8:
            (*(code *)param_2[9])(param_2[10],puVar2[3]);
            *puVar2 = 9;
            param_2[6] = (int)s_invalid_bit_length_repeat_004dc59c;
            puVar2[8] = uVar10;
            puVar2[7] = (uint)puVar7;
            iVar4 = *param_2;
            param_2[1] = local_2c;
            *param_2 = (int)local_30;
            param_2[2] = (int)((int)local_30 + (param_2[2] - iVar4));
            puVar2[0xd] = (uint)param_1;
            FUN_00465080((int)puVar2,(int)param_2,-3);
            return;
          }
          uVar3 = local_24;
          if (local_c == 0x10) {
            if (local_24 == 0) goto LAB_004621a8;
            uVar6 = *(undefined4 *)((puVar2[3] - 4) + local_24 * 4);
          }
          else {
            uVar6 = 0;
          }
          do {
            uVar3 = uVar3 + 1;
            *(undefined4 *)((puVar2[3] - 4) + uVar3 * 4) = uVar6;
            local_28 = local_28 + -1;
          } while (local_28 != 0);
        }
        puVar2[2] = uVar3;
      } while (puVar2[2] < (puVar2[1] >> 5 & 0x1f) + 0x102 + (puVar2[1] & 0x1f));
    }
    puVar2[5] = 0;
    local_20 = (uint *)0x9;
    local_24 = 6;
    iVar4 = FUN_00464ec0((puVar2[1] & 0x1f) + 0x101,(puVar2[1] >> 5 & 0x1f) + 1,(int *)puVar2[3],
                         (uint *)&local_20,&local_24,&local_4,&local_8,puVar2[9],(int)param_2);
    if (iVar4 != 0) {
      if (iVar4 == -3) {
        (*(code *)param_2[9])(param_2[10],puVar2[3]);
        *puVar2 = 9;
      }
      puVar2[8] = uVar10;
      puVar2[7] = (uint)puVar7;
      iVar1 = *param_2;
      param_2[1] = local_2c;
      *param_2 = (int)local_30;
      param_2[2] = (int)((int)local_30 + (param_2[2] - iVar1));
      puVar2[0xd] = (uint)param_1;
      FUN_00465080((int)puVar2,(int)param_2,iVar4);
      return;
    }
    uVar3 = FUN_00464140((char)local_20,(char)local_24,local_4,local_8,(int)param_2);
    if (uVar3 == 0) {
      puVar2[8] = uVar10;
      puVar2[7] = (uint)puVar7;
      iVar4 = *param_2;
      param_2[1] = local_2c;
      *param_2 = (int)local_30;
      param_2[2] = (int)((int)local_30 + (param_2[2] - iVar4));
      puVar2[0xd] = (uint)param_1;
      FUN_00465080((int)puVar2,(int)param_2,-4);
      return;
    }
    puVar2[1] = uVar3;
    (*(code *)param_2[9])(param_2[10],puVar2[3]);
    *puVar2 = 6;
LAB_00461dd5:
    puVar2[8] = uVar10;
    puVar2[7] = (uint)puVar7;
    iVar4 = *param_2;
    param_2[1] = local_2c;
    *param_2 = (int)local_30;
    param_2[2] = (int)((int)local_30 + (param_2[2] - iVar4));
    puVar2[0xd] = (uint)param_1;
    iVar4 = FUN_00464180((uint)puVar2,param_2,param_3);
    if (iVar4 == 1) {
      param_3 = 0;
      FUN_00464930(puVar2[1],(int)param_2);
      local_28 = puVar2[8];
      param_1 = (uint *)puVar2[0xd];
      local_30 = (uint *)*param_2;
      local_2c = param_2[1];
      puVar7 = (uint *)puVar2[7];
      if (param_1 < (uint *)puVar2[0xc]) {
        local_24 = (int)puVar2[0xc] + (-1 - (int)param_1);
      }
      else {
        local_24 = puVar2[0xb] - (int)param_1;
      }
      if (puVar2[6] == 0) {
        *puVar2 = 0;
        goto switchD_004617b1_default;
      }
      *puVar2 = 7;
LAB_004622a6:
      puVar2[0xd] = (uint)param_1;
      iVar4 = FUN_00465080((int)puVar2,(int)param_2,param_3);
      param_1 = (uint *)puVar2[0xd];
      if ((uint *)puVar2[0xc] == param_1) {
        *puVar2 = 8;
LAB_0046230d:
        puVar2[8] = local_28;
        puVar2[7] = (uint)puVar7;
        param_2[1] = local_2c;
        param_2[2] = (int)((int)local_30 + (param_2[2] - *param_2));
        *param_2 = (int)local_30;
        puVar2[0xd] = (uint)param_1;
        FUN_00465080((int)puVar2,(int)param_2,1);
        return;
      }
      puVar2[7] = (uint)puVar7;
      puVar2[8] = local_28;
      iVar1 = *param_2;
      param_2[1] = local_2c;
      *param_2 = (int)local_30;
      param_2[2] = (int)((int)local_30 + (param_2[2] - iVar1));
      puVar2[0xd] = (uint)param_1;
    }
    FUN_00465080((int)puVar2,(int)param_2,iVar4);
    return;
  case 5:
    goto LAB_00461b86;
  case 6:
    goto LAB_00461dd5;
  case 7:
    goto LAB_004622a6;
  case 8:
    goto LAB_0046230d;
  case 9:
    puVar2[8] = local_28;
    puVar2[7] = (uint)puVar7;
    iVar4 = *param_2;
    param_2[1] = local_2c;
    *param_2 = (int)local_30;
    param_2[2] = (int)((int)local_30 + (param_2[2] - iVar4));
    puVar2[0xd] = (uint)param_1;
    FUN_00465080((int)puVar2,(int)param_2,-3);
    return;
  default:
    puVar2[8] = local_28;
    puVar2[7] = (uint)puVar7;
    iVar4 = *param_2;
    param_2[1] = local_2c;
    *param_2 = (int)local_30;
    param_2[2] = (int)((int)local_30 + (param_2[2] - iVar4));
    puVar2[0xd] = (uint)param_1;
    FUN_00465080((int)puVar2,(int)param_2,-2);
    return;
  }
  *puVar2 = -(uint)(puVar2[6] != 0) & 7;
  goto switchD_004617b1_default;
switchD_0046174d_caseD_0:
  for (; puVar7 < (uint *)0x3; puVar7 = puVar7 + 2) {
    if (local_2c == 0) {
      puVar2[8] = local_28;
      puVar2[7] = (uint)puVar7;
      param_2[1] = 0;
      param_2[2] = (int)((int)local_30 + (param_2[2] - *param_2));
      *param_2 = (int)local_30;
      puVar2[0xd] = (uint)param_1;
      FUN_00465080((int)puVar2,(int)param_2,param_3);
      return;
    }
    local_2c = local_2c - 1;
    param_3 = 0;
    local_28 = local_28 | (uint)(byte)*local_30 << ((byte)puVar7 & 0x1f);
    local_30 = (uint *)((int)local_30 + 1);
  }
  puVar2[6] = local_28 & 1;
  switch((local_28 & 7) >> 1) {
  case 0:
    *puVar2 = 1;
    uVar10 = (int)puVar7 - 3U & 7;
    local_28 = (local_28 >> 3) >> (sbyte)uVar10;
    puVar7 = (uint *)(((int)puVar7 - 3U) - uVar10);
    break;
  case 1:
    FUN_00465050(&local_10,&local_14,&local_18,&local_1c);
    uVar10 = FUN_00464140((char)local_10,(char)local_14,local_18,local_1c,(int)param_2);
    puVar2[1] = uVar10;
    if (uVar10 == 0) {
      puVar2[8] = local_28;
      puVar2[7] = (uint)puVar7;
      param_2[1] = local_2c;
      param_2[2] = (int)((int)local_30 + (param_2[2] - *param_2));
      *param_2 = (int)local_30;
      puVar2[0xd] = (uint)param_1;
      FUN_00465080((int)puVar2,(int)param_2,-4);
      return;
    }
    local_28 = local_28 >> 3;
    puVar7 = (uint *)((int)puVar7 - 3);
    *puVar2 = 6;
    break;
  case 2:
    local_28 = local_28 >> 3;
    puVar7 = (uint *)((int)puVar7 - 3);
    *puVar2 = 3;
    break;
  case 3:
    *puVar2 = 9;
    param_2[6] = (int)s_invalid_block_type_004dc5fc;
    puVar2[8] = local_28 >> 3;
    puVar2[7] = (int)puVar7 - 3;
    param_2[1] = local_2c;
    param_2[2] = (int)((int)local_30 + (param_2[2] - *param_2));
    *param_2 = (int)local_30;
    puVar2[0xd] = (uint)param_1;
    FUN_00465080((int)puVar2,(int)param_2,-3);
    return;
  }
  goto switchD_004617b1_default;
}

