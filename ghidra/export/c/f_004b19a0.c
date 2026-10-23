// FUNCTION: PORT1111 0x004b19a0
// name: FUN_004b19a0
// sig: undefined FUN_004b19a0(int * param_1, int param_2, uint param_3)


void __cdecl FUN_004b19a0(int *param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  char *pcVar15;
  
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_004ac6e0(param_1,s_Missing_IHDR_before_pCAL_004e043c);
  }
  else {
    if ((param_1[0x1a] & 4U) != 0) {
      FUN_004ac710((int)param_1,s_Invalid_pCAL_after_IDAT_004e0424);
      FUN_004afd10(param_1,param_3);
      return;
    }
    if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x400) != 0)) {
      FUN_004ac710((int)param_1,s_Duplicate_pCAL_chunk_004e040c);
      FUN_004afd10(param_1,param_3);
      return;
    }
  }
  pbVar7 = FUN_004a4710(param_1,param_3 + 1);
  FUN_004afce0(param_1,pbVar7,param_3);
  iVar8 = FUN_004afd10(param_1,0);
  if (iVar8 != 0) {
    FUN_004a4750((int)param_1,pbVar7);
    return;
  }
  pbVar2 = pbVar7 + param_3;
  *pbVar2 = 0;
  bVar3 = *pbVar7;
  pbVar13 = pbVar7;
  while (bVar3 != 0) {
    pbVar14 = pbVar13 + 1;
    pbVar13 = pbVar13 + 1;
    bVar3 = *pbVar14;
  }
  if (pbVar13 + 0xc < pbVar2) {
    iVar8 = FUN_004afc90(pbVar13 + 1);
    iVar9 = FUN_004afc90(pbVar13 + 5);
    bVar3 = pbVar13[10];
    bVar4 = pbVar13[9];
    pbVar13 = pbVar13 + 0xb;
    if (bVar4 == 0) {
      if (bVar3 == 2) goto LAB_004b1b03;
    }
    else if ((bVar4 == 1) || (bVar4 == 2)) {
      if (bVar3 == 3) goto LAB_004b1b03;
    }
    else {
      if (bVar4 != 3) {
        if (3 < bVar4) {
          FUN_004ac710((int)param_1,s_Unrecognized_equation_type_for_p_004df9a8);
        }
LAB_004b1b03:
        bVar5 = *pbVar13;
        pbVar14 = pbVar13;
        while (bVar5 != 0) {
          pbVar1 = pbVar14 + 1;
          pbVar14 = pbVar14 + 1;
          bVar5 = *pbVar1;
        }
        uVar6 = (uint)bVar3;
        puVar10 = FUN_004a4710(param_1,uVar6 * 4);
        iVar11 = 0;
        puVar12 = puVar10;
        if (bVar3 != 0) {
          do {
            pbVar14 = pbVar14 + 1;
            *puVar12 = pbVar14;
            bVar3 = *pbVar14;
            while (bVar3 != 0) {
              if (pbVar2 < pbVar14) goto LAB_004b1ba4;
              pbVar1 = pbVar14 + 1;
              pbVar14 = pbVar14 + 1;
              bVar3 = *pbVar1;
            }
            if (pbVar2 < pbVar14) {
LAB_004b1ba4:
              FUN_004ac710((int)param_1,s_Invalid_pCAL_data_004e03f8);
              FUN_004a4750((int)param_1,pbVar7);
              FUN_004a4750((int)param_1,puVar10);
              return;
            }
            iVar11 = iVar11 + 1;
            puVar12 = puVar12 + 1;
          } while (iVar11 < (int)uVar6);
        }
        FUN_004a60a0(param_1,param_2,(char *)pbVar7,iVar8,iVar9,bVar4,uVar6,(char *)pbVar13,
                     (int)puVar10);
        FUN_004a4750((int)param_1,pbVar7);
        FUN_004a4750((int)param_1,puVar10);
        return;
      }
      if (bVar3 == 4) goto LAB_004b1b03;
    }
    pcVar15 = s_Invalid_pCAL_parameters_for_equa_004e03cc;
  }
  else {
    pcVar15 = s_Invalid_pCAL_data_004e03f8;
  }
  FUN_004ac710((int)param_1,pcVar15);
  FUN_004a4750((int)param_1,pbVar7);
  return;
}

