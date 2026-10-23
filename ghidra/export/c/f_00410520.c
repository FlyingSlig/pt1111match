// FUNCTION: PORT1111 0x00410520
// name: FUN_00410520
// sig: undefined4 FUN_00410520(int param_1, int param_2, int param_3, int param_4, int param_5, void * param_6, void * param_7, void * param_8, int param_9)


undefined4 __cdecl
FUN_00410520(int param_1,int param_2,int param_3,int param_4,int param_5,void *param_6,void *param_7
            ,void *param_8,int param_9)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  undefined4 *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_34 = ((param_2 - param_4) * (param_2 - param_4) + (param_1 - param_3) * (param_1 - param_3))
             * 0x100;
  uVar2 = 0;
  uVar6 = 0x40000000;
  iVar3 = local_34;
  do {
    while ((iVar3 < (int)uVar6 ||
           (iVar5 = (iVar3 - uVar6) - uVar2, (int)(iVar3 - uVar6) < (int)uVar2))) {
      uVar2 = uVar2 >> 1;
      uVar6 = uVar6 >> 2;
      if (uVar6 == 0) goto code_r0x0041057c;
    }
    uVar2 = uVar2 >> 1 | uVar6;
    uVar6 = uVar6 >> 2;
    iVar3 = iVar5;
  } while (uVar6 != 0);
code_r0x0041057c:
  uVar2 = (uVar2 & 0xffffff) << 4;
  local_30 = uVar2;
  iVar3 = FUN_004103c0(&local_8,&local_c,uVar2,param_5);
  if (iVar3 != 0) {
    iVar3 = FUN_0043a0a0(local_8);
    iVar5 = FUN_0043a0c0(local_8);
    local_14 = iVar3 * local_c >> 8;
    iVar3 = iVar5 * local_c >> 8;
    if (param_8 != (void *)0x0) {
      local_20 = DAT_004d59a0 * local_c >> 8;
      if (local_20 == 0) {
        local_20 = 1;
      }
      local_20 = (*(int *)(param_5 + 0x218) << 0x10) / local_20;
    }
    iVar4 = param_4 - param_2;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (uVar2 < 0x100) {
      uVar2 = 0x100;
    }
    local_38 = iVar3;
    iVar4 = FUN_0043a0e0((iVar4 << 0x10) / (int)uVar2);
    if (param_2 < param_4) {
      local_1c = FUN_0043a0c0(iVar4);
      local_1c = -local_1c;
    }
    else {
      local_1c = FUN_0043a0c0(iVar4);
    }
    if (param_1 < param_3) {
      local_18 = FUN_0043a0a0(iVar4);
    }
    else {
      local_18 = FUN_0043a0a0(iVar4);
      local_18 = -local_18;
    }
    if (DAT_004d599c == 0) {
      DAT_004d599c = 1;
    }
    local_34 = -(int)(CONCAT44(iVar5 * local_c >> 0x1f,iVar3) / (longlong)DAT_004d599c);
    if (local_34 == 0) {
      local_30 = 0;
    }
    else {
      iVar5 = ((param_9 << 0x10) / local_34) * DAT_004d59a0;
      local_30 = (iVar5 >> 8) - (iVar5 >> 0x1f) >> 1;
    }
    param_4 = param_9 * -0x80;
    local_10 = 0;
    local_24 = local_14;
    local_28 = iVar3;
    do {
      iVar5 = local_10 * local_14 >> 8;
      iVar4 = iVar5 * local_18;
      iVar8 = (local_10 * local_10 >> 8) * DAT_004d599c + (local_10 * iVar3 >> 8);
      iVar7 = iVar4 >> 8;
      iVar3 = (iVar5 * local_1c >> 8) + iVar8;
      local_2c = (undefined4 *)(iVar4 >> 0x10);
      if (param_8 != (void *)0x0) {
        local_48 = (((iVar7 - local_24) * local_20 >> 8) + iVar7 >> 8) + param_1;
        iVar5 = *(int *)((int)param_8 + 4);
        local_44 = ((param_4 >> 8) - (((iVar3 - local_28) * local_20 >> 8) + iVar3 >> 8)) + param_2;
        local_28 = iVar3;
        local_24 = iVar7;
        if ((iVar5 == 0) ||
           ((uint)(*(int *)((int)param_8 + 0xc) - iVar5 >> 3) <=
            (uint)(*(int *)((int)param_8 + 8) - iVar5 >> 3))) {
          FUN_0040fba0(param_8,*(undefined4 **)((int)param_8 + 8),1,&local_48);
        }
        else {
          puVar1 = *(undefined4 **)((int)param_8 + 8);
          FUN_0041f4d0(puVar1,1,&local_48);
          *(undefined4 **)((int)param_8 + 8) = puVar1 + 2;
        }
      }
      local_40 = (int)local_2c + param_1;
      iVar5 = *(int *)((int)param_6 + 4);
      local_3c = ((param_4 >> 8) - (iVar3 >> 8)) + param_2;
      if ((iVar5 == 0) ||
         ((uint)(*(int *)((int)param_6 + 0xc) - iVar5 >> 3) <=
          (uint)(*(int *)((int)param_6 + 8) - iVar5 >> 3))) {
        FUN_0040fba0(param_6,*(undefined4 **)((int)param_6 + 8),1,&local_40);
      }
      else {
        local_2c = *(undefined4 **)((int)param_6 + 8);
        FUN_0041f4d0(local_2c,1,&local_40);
        *(undefined4 **)((int)param_6 + 8) = local_2c + 2;
      }
      local_3c = ((iVar8 >> 8) - (iVar3 >> 8)) + param_2;
      iVar3 = *(int *)((int)param_7 + 4);
      if ((iVar3 == 0) ||
         ((uint)(*(int *)((int)param_7 + 0xc) - iVar3 >> 3) <=
          (uint)(*(int *)((int)param_7 + 8) - iVar3 >> 3))) {
        FUN_0040fba0(param_7,*(undefined4 **)((int)param_7 + 8),1,&local_40);
      }
      else {
        puVar1 = *(undefined4 **)((int)param_7 + 8);
        FUN_0041f4d0(puVar1,1,&local_40);
        *(undefined4 **)((int)param_7 + 8) = puVar1 + 2;
      }
      local_10 = local_10 + DAT_004d59a0;
      param_4 = param_4 + local_30;
      iVar3 = local_38;
    } while (local_10 < local_34);
    return 1;
  }
  return 0;
}

