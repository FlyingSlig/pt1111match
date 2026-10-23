// FUNCTION: PORT1111 0x004b1bd0
// name: FUN_004b1bd0
// sig: undefined FUN_004b1bd0(int * param_1, int param_2, uint param_3)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004b1bd0(int *param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  double dVar8;
  double dVar9;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  piVar3 = param_1;
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_004ac6e0(param_1,s_Missing_IHDR_before_sCAL_004e04ec);
  }
  else {
    if ((param_1[0x1a] & 4U) != 0) {
      FUN_004ac710((int)param_1,s_Invalid_sCAL_after_IDAT_004e04d4);
      FUN_004afd10(piVar3,param_3);
      return;
    }
    if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x4000) != 0)) {
      FUN_004ac710((int)param_1,s_Duplicate_sCAL_chunk_004e04bc);
      FUN_004afd10(piVar3,param_3);
      return;
    }
  }
  uVar4 = param_3;
  pbVar5 = FUN_004a4710(piVar3,param_3 + 1);
  FUN_004afce0(piVar3,pbVar5,uVar4);
  iVar6 = FUN_004afd10(piVar3,0);
  if (iVar6 != 0) {
    FUN_004a4750((int)piVar3,pbVar5);
    return;
  }
  pbVar5[uVar4] = 0;
  dVar8 = _strtod((char *)(pbVar5 + 1),(char **)&param_1);
  if ((char)*param_1 == '\0') {
    bVar2 = *pbVar5;
    pbVar7 = pbVar5;
    while (bVar2 != 0) {
      pbVar1 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      bVar2 = *pbVar1;
    }
    dVar9 = _strtod((char *)(pbVar7 + 1),(char **)&param_1);
    if ((char)*param_1 == '\0') {
      if (((pbVar7 + 1 <= pbVar5 + uVar4) && (_DAT_004c8418 < dVar8)) && (_DAT_004c8418 < dVar9)) {
        uStack_c = (undefined4)((ulonglong)dVar9 >> 0x20);
        local_10 = SUB84(dVar9,0);
        uStack_4 = (undefined4)((ulonglong)dVar8 >> 0x20);
        local_8 = SUB84(dVar8,0);
        FUN_004a61f0((int)piVar3,param_2,*pbVar5,local_8,uStack_4,local_10,uStack_c);
        FUN_004a4750((int)piVar3,pbVar5);
        return;
      }
      FUN_004ac710((int)piVar3,s_Invalid_sCAL_data_004e0458);
      FUN_004a4750((int)piVar3,pbVar5);
      return;
    }
    FUN_004ac710((int)piVar3,s_malformed_height_string_in_sCAL_c_004e046c);
    return;
  }
  FUN_004ac710((int)piVar3,s_malformed_width_string_in_sCAL_c_004e0494);
  return;
}

