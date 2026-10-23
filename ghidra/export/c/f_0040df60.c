// FUNCTION: PORT1111 0x0040df60
// name: FUN_0040df60
// sig: undefined FUN_0040df60(void)


void FUN_0040df60(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  
  piVar11 = &DAT_004d5544;
  piVar3 = &DAT_004e0884;
  do {
    iVar1 = piVar11[-2];
    iVar12 = piVar11[-3];
    iVar4 = iVar12 * 0x20 + iVar1 * -0x20;
    iVar7 = (iVar12 + iVar1) * 0x10;
    *piVar3 = iVar7 + -0x13;
    iVar10 = iVar12 * 0x20 + *piVar11 * -0x20;
    piVar3[5] = iVar10 + -3;
    iVar2 = *piVar11;
    iVar5 = (iVar12 + iVar2) * 0x10;
    piVar3[6] = iVar5 + -0x10;
    iVar6 = piVar11[-1] * 0x20 + iVar2 * -0x20;
    iVar12 = piVar11[-1];
    iVar8 = (iVar2 + iVar12) * 0x10;
    piVar3[0xc] = iVar8 + -0xd;
    piVar3[-1] = iVar4;
    iVar9 = iVar12 * 0x20 + iVar1 * -0x20;
    iVar2 = piVar11[-1];
    piVar3[1] = iVar4 + 0xc;
    iVar10 = iVar10 + 9;
    piVar3[3] = iVar10;
    piVar3[7] = iVar10;
    piVar3[9] = iVar6 + 0xc;
    iVar12 = iVar9 + -9;
    piVar3[0xf] = iVar12;
    piVar3[0x13] = iVar12;
    iVar7 = iVar7 + -0xd;
    piVar3[-2] = iVar7;
    piVar3[2] = iVar7;
    piVar3[0xb] = iVar6;
    piVar3[0xd] = iVar6 + -0xc;
    piVar3[8] = iVar5 + -10;
    iVar12 = (iVar1 + iVar2) * 0x10;
    iVar8 = iVar8 + -0x13;
    piVar3[10] = iVar8;
    piVar3[0xe] = iVar8;
    piVar3[0x11] = iVar9 + 3;
    piVar3[0x12] = iVar12 + -0x10;
    piVar3[-3] = iVar4 + -0xc;
    piVar3[4] = iVar5 + -0x16;
    piVar3[0x10] = iVar12 + -10;
    piVar3[0x14] = iVar12 + -0x16;
    piVar11 = piVar11 + 4;
    piVar3 = piVar3 + 0x18;
  } while ((int)piVar11 < 0x4d5594);
  return;
}

