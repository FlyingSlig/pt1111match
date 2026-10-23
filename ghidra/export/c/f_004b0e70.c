// FUNCTION: PORT1111 0x004b0e70
// name: FUN_004b0e70
// sig: undefined FUN_004b0e70(int * param_1, int param_2, uint param_3)


void __cdecl FUN_004b0e70(int *param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  byte *pbVar8;
  uint local_4;
  
  uVar7 = param_1[0x1a];
  if ((uVar7 & 1) == 0) {
    FUN_004ac6e0(param_1,s_Missing_IHDR_before_iCCP_004e0084);
  }
  else {
    if ((uVar7 & 4) != 0) {
      FUN_004ac710((int)param_1,s_Invalid_iCCP_after_IDAT_004e006c);
      FUN_004afd10(param_1,param_3);
      return;
    }
    if ((uVar7 & 2) == 0) {
      if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x1000) != 0)) {
        FUN_004ac710((int)param_1,s_Duplicate_iCCP_chunk_004e003c);
        FUN_004afd10(param_1,param_3);
        return;
      }
    }
    else {
      FUN_004ac710((int)param_1,s_Out_of_place_iCCP_chunk_004e0054);
    }
  }
  pbVar4 = FUN_004a4710(param_1,param_3 + 1);
  FUN_004afce0(param_1,pbVar4,param_3);
  iVar5 = FUN_004afd10(param_1,0);
  if (iVar5 != 0) {
    FUN_004a4750((int)param_1,pbVar4);
    return;
  }
  pbVar4[param_3] = 0;
  bVar2 = *pbVar4;
  pbVar8 = pbVar4;
  while (bVar2 != 0) {
    pbVar1 = pbVar8 + 1;
    pbVar8 = pbVar8 + 1;
    bVar2 = *pbVar1;
  }
  if (pbVar4 + param_3 <= pbVar8 + 1) {
    FUN_004a4750((int)param_1,pbVar4);
    FUN_004ac710((int)param_1,s_Malformed_iCCP_chunk_004e0024);
    return;
  }
  if (pbVar8[1] != 0) {
    FUN_004ac710((int)param_1,s_Ignoring_nonzero_compression_typ_004dfff4);
  }
  pbVar8 = pbVar8 + (2 - (int)pbVar4);
  pcVar6 = (char *)FUN_004afe30(param_1,0,(undefined4 *)pbVar4,param_3,pbVar8,&local_4);
  local_4 = local_4 - (int)pbVar8;
  if (local_4 < 4) {
    FUN_004a4750((int)param_1,pcVar6);
    FUN_004ac710((int)param_1,s_Profile_size_field_missing_from_i_004dffc8);
    return;
  }
  pbVar4 = pbVar8 + (int)pcVar6;
  uVar7 = (((int)(char)pbVar8[(int)pcVar6] << 8 | (int)(char)pbVar4[1]) << 8 | (int)(char)pbVar4[2])
          << 8 | (int)(char)pbVar4[3];
  if ((local_4 <= uVar7) && (bVar3 = local_4 < uVar7, uVar7 = local_4, bVar3)) {
    FUN_004a4750((int)param_1,pcVar6);
    FUN_004ac710((int)param_1,s_Ignoring_truncated_iCCP_profile__004dffa4);
    return;
  }
  FUN_004a6430(param_1,param_2,pcVar6,0,(undefined4 *)pbVar4,uVar7);
  FUN_004a4750((int)param_1,pcVar6);
  return;
}

