// FUNCTION: PORT1111 0x0046c6d0
// name: FUN_0046c6d0
// sig: undefined4 FUN_0046c6d0(int * param_1)


undefined4 __fastcall FUN_0046c6d0(int *param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar10;
  int *unaff_EDI;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ushort *local_1c;
  uint uStack_8;
  byte bStack_4;
  
  if (param_1[1] == 2) {
    return 0;
  }
  iVar3 = (**(code **)(*param_1 + 0x30))();
  if ((iVar3 != 0) && (cVar2 = (**(code **)(*param_1 + 0xc))(), cVar2 == '\x10')) {
    local_1c = (ushort *)(**(code **)(*param_1 + 0x2c))(iVar3,0,0);
    uVar8 = uStack_8 >> 5;
    uVar11 = uStack_8 >> 0xb;
    uVar4 = uStack_8 & 0x1f;
    iVar3 = (**(code **)(*param_1 + 0x24))();
    if (iVar3 == 0) {
      iVar3 = (**(code **)(*param_1 + 0x14))();
      iVar3 = -iVar3;
    }
    else {
      iVar3 = (**(code **)(*param_1 + 0x14))();
    }
    uStack_8 = 0;
    iVar5 = (**(code **)(*param_1 + 8))();
    if (0 < iVar5) {
      do {
        iVar13 = 0;
        iVar5 = (**(code **)(*param_1 + 4))();
        if (0 < iVar5) {
          uVar9 = (uint)bStack_4;
          puVar10 = local_1c;
          do {
            uVar1 = *puVar10;
            uVar12 = ((uVar1 >> 0xb) * uVar9 * (uVar11 & 0x1f)) / 0xc1c;
            uVar7 = (ushort)uVar12;
            if (0x1f < uVar12) {
              uVar7 = 0x1f;
            }
            uVar12 = (uVar9 * (uVar1 >> 5 & 0x3f) * (uVar8 & 0x3f)) / 0x189c;
            if (0x3f < uVar12) {
              uVar12 = 0x3f;
            }
            uVar6 = (uVar9 * ((byte)uVar1 & 0x1f) * uVar4) / 0xc1c;
            if (0x1f < uVar6) {
              uVar6 = 0x1f;
            }
            *puVar10 = (ushort)((uVar6 << 6 | uVar12) << 5) | uVar7;
            puVar10 = puVar10 + 1;
            iVar13 = iVar13 + 1;
            iVar5 = (**(code **)(*unaff_EDI + 4))();
            param_1 = unaff_EDI;
          } while (iVar13 < iVar5);
        }
        local_1c = (ushort *)((int)local_1c + iVar3);
        uStack_8 = uStack_8 + 1;
        iVar5 = (**(code **)(*param_1 + 8))();
      } while ((int)uStack_8 < iVar5);
    }
    (**(code **)(*param_1 + 0x34))();
    return 1;
  }
  return 0;
}

