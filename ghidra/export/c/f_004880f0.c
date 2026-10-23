// FUNCTION: PORT1111 0x004880f0
// name: FUN_004880f0
// sig: undefined FUN_004880f0(int * param_1, ulonglong * param_2, byte param_3, ushort param_4)


void FUN_004880f0(int *param_1,ulonglong *param_2,byte param_3,ushort param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  undefined3 extraout_var;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong *puVar10;
  uint uVar11;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  tagRECT local_10;
  
  bVar4 = FUN_0046ca80(param_1,(int *)param_2,&local_3c,&local_38,&param_2,&local_34,&local_10);
  puVar10 = param_2;
  if (CONCAT31(extraout_var,bVar4) != 0) {
    local_3c = local_3c >> 2;
    if (DAT_004e2c98 == 0) {
      param_3 = param_3 >> 3;
      cVar5 = (**(code **)(*param_1 + 0x10))();
      if (cVar5 == '\x10') {
        local_28 = 0;
        if (0 < local_38) {
          do {
            local_30 = 0;
            if (0 < local_3c) {
              uVar8 = (uint)param_3;
              uVar11 = (param_4 & 0x7c0) << 0x10 | param_4 & 0xf81f;
              do {
                uVar7 = (uint)*puVar10;
                uVar6 = (uVar7 & 0x7c0) << 0x10 | uVar7 & 0xf81f;
                uVar6 = uVar6 + ((uVar11 - uVar6) * uVar8 >> 5);
                uVar7 = uVar7 >> 0x10 & 0xf81f | uVar7 & 0x7c00000;
                uVar7 = uVar7 + ((uVar11 - uVar7) * uVar8 >> 5);
                *(uint *)puVar10 =
                     (uVar7 & 0xfffff81f) << 0x10 | uVar6 >> 0x10 & 0x7c0 | uVar6 & 0xf81f |
                     uVar7 & 0x7c00000;
                uVar7 = *(uint *)((int)puVar10 + 4);
                uVar6 = (uVar7 & 0x7c0) << 0x10 | uVar7 & 0xf81f;
                uVar6 = uVar6 + ((uVar11 - uVar6) * uVar8 >> 5);
                uVar7 = uVar7 >> 0x10 & 0xf81f | uVar7 & 0x7c00000;
                uVar7 = uVar7 + ((uVar11 - uVar7) * uVar8 >> 5);
                *(uint *)((int)puVar10 + 4) =
                     (uVar7 & 0xfffff81f) << 0x10 | uVar6 >> 0x10 & 0x7c0 | uVar6 & 0xf81f |
                     uVar7 & 0x7c00000;
                puVar10 = puVar10 + 1;
                local_30 = local_30 + 1;
              } while (local_30 < local_3c);
            }
            puVar10 = (ulonglong *)((int)param_2 + local_34);
            local_28 = local_28 + 1;
            param_2 = puVar10;
          } while (local_28 < local_38);
        }
      }
      else {
        local_30 = 0;
        if (0 < local_38) {
          do {
            local_28 = 0;
            if (0 < local_3c) {
              uVar8 = (uint)param_3;
              uVar11 = (param_4 & 0x3e0) << 0x10 | param_4 & 0x7c1f;
              do {
                uVar7 = (uint)*puVar10;
                uVar6 = (uVar7 & 0x3e0) << 0x10 | uVar7 & 0x7c1f;
                uVar6 = uVar6 + ((uVar11 - uVar6) * uVar8 >> 5);
                uVar7 = uVar7 >> 0x10 & 0x7c1f | uVar7 & 0x3e00000;
                uVar7 = uVar7 + ((uVar11 - uVar7) * uVar8 >> 5);
                *(uint *)puVar10 =
                     (uVar7 & 0x7c1f) << 0x10 | uVar6 >> 0x10 & 0x3e0 | uVar6 & 0x7c1f |
                     uVar7 & 0x3e00000;
                uVar7 = *(uint *)((int)puVar10 + 4);
                uVar6 = (uVar7 & 0x3e0) << 0x10 | uVar7 & 0x7c1f;
                uVar6 = uVar6 + ((uVar11 - uVar6) * uVar8 >> 5);
                uVar7 = uVar7 >> 0x10 & 0x7c1f | uVar7 & 0x3e00000;
                uVar7 = uVar7 + ((uVar11 - uVar7) * uVar8 >> 5);
                *(uint *)((int)puVar10 + 4) =
                     uVar6 >> 0x10 & 0x3e0 | (uVar7 & 0x7c1f) << 0x10 | uVar7 & 0x3e00000 |
                     uVar6 & 0x7c1f;
                puVar10 = puVar10 + 1;
                local_28 = local_28 + 1;
              } while (local_28 < local_3c);
            }
            puVar10 = (ulonglong *)((int)param_2 + local_34);
            local_30 = local_30 + 1;
            param_2 = puVar10;
          } while (local_30 < local_38);
        }
      }
    }
    else {
      local_28 = 0;
      local_24 = 0;
      local_18 = 0;
      local_14 = 0;
      local_20 = 0;
      local_1c = 0;
      local_30 = 0;
      local_2c = 0;
      FUN_00487f80(param_4,param_3,&local_28,&local_18,&local_20,&local_30);
      uVar3 = local_14;
      uVar2 = local_24;
      iVar1 = local_28;
      iVar9 = 0;
      if (0 < local_38) {
        do {
          FUN_00488020(CONCAT44(uVar2,iVar1),CONCAT44(uVar3,local_18),CONCAT44(local_1c,local_20),
                       CONCAT44(local_2c,local_30),param_2,local_3c);
          param_2 = (ulonglong *)((int)param_2 + local_34);
          iVar9 = iVar9 + 1;
        } while (iVar9 < local_38);
      }
    }
    FUN_0046b060(param_1);
  }
  return;
}

