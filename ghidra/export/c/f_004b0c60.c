// FUNCTION: PORT1111 0x004b0c60
// name: FUN_004b0c60
// sig: undefined FUN_004b0c60(int * param_1, int param_2, uint param_3)


void __cdecl FUN_004b0c60(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar3 = param_2;
  piVar1 = param_1;
  uVar5 = param_1[0x1a];
  if ((uVar5 & 1) == 0) {
    FUN_004ac6e0(param_1,s_Missing_IHDR_before_sRGB_004dff88);
  }
  else {
    if ((uVar5 & 4) != 0) {
      FUN_004ac710((int)param_1,s_Invalid_sRGB_after_IDAT_004dff54);
      FUN_004afd10(piVar1,param_3);
      return;
    }
    if ((uVar5 & 2) == 0) {
      if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x800) != 0)) {
        FUN_004ac710((int)param_1,s_Duplicate_sRGB_chunk_004dff24);
        FUN_004afd10(piVar1,param_3);
        return;
      }
    }
    else {
      FUN_004ac710((int)param_1,s_Out_of_place_sRGB_chunk_004dff3c);
    }
  }
  uVar5 = param_3;
  if (param_3 != 1) {
    FUN_004ac710((int)piVar1,s_Incorrect_sRGB_chunk_length_004dff6c);
    FUN_004afd10(piVar1,uVar5);
    return;
  }
  FUN_004afce0(piVar1,(byte *)&param_1,1);
  iVar4 = FUN_004afd10(piVar1,0);
  piVar2 = param_1;
  if (iVar4 == 0) {
    if (3 < ((uint)param_1 & 0xff)) {
      FUN_004ac710((int)piVar1,s_Unknown_sRGB_intent_004dff10);
      return;
    }
    if (((*(byte *)(iVar3 + 8) & 1) != 0) &&
       ((*(int *)(iVar3 + 0xfc) < 45000 || (46000 < *(int *)(iVar3 + 0xfc))))) {
      FUN_004ac710((int)piVar1,s_Ignoring_incorrect_gAMA_value_wh_004dfc38);
      FID_conflict__fwprintf
                ((FILE *)&DAT_004ddb70,(wchar_t *)s_incorrect_gamma___d_100000__004dfef0,
                 piVar1[0x8d]);
    }
    if (((*(byte *)(iVar3 + 8) & 4) != 0) &&
       (((((uVar5 = *(int *)(iVar3 + 0x100) - 0x7a26, uVar6 = (int)uVar5 >> 0x1f,
           1000 < (int)((uVar5 ^ uVar6) - uVar6) ||
           (uVar5 = *(int *)(iVar3 + 0x104) - 0x8084, uVar6 = (int)uVar5 >> 0x1f,
           1000 < (int)((uVar5 ^ uVar6) - uVar6))) ||
          (uVar5 = *(int *)(iVar3 + 0x108) - 64000, uVar6 = (int)uVar5 >> 0x1f,
          1000 < (int)((uVar5 ^ uVar6) - uVar6))) ||
         ((uVar5 = *(int *)(iVar3 + 0x10c) - 33000, uVar6 = (int)uVar5 >> 0x1f,
          1000 < (int)((uVar5 ^ uVar6) - uVar6) ||
          (uVar5 = *(int *)(iVar3 + 0x110) - 30000, uVar6 = (int)uVar5 >> 0x1f,
          1000 < (int)((uVar5 ^ uVar6) - uVar6))))) ||
        ((uVar5 = *(int *)(iVar3 + 0x114) - 60000, uVar6 = (int)uVar5 >> 0x1f,
         1000 < (int)((uVar5 ^ uVar6) - uVar6) ||
         ((uVar5 = *(int *)(iVar3 + 0x118) - 15000, uVar6 = (int)uVar5 >> 0x1f,
          1000 < (int)((uVar5 ^ uVar6) - uVar6) ||
          (uVar5 = *(int *)(iVar3 + 0x11c) - 6000, uVar6 = (int)uVar5 >> 0x1f,
          1000 < (int)((uVar5 ^ uVar6) - uVar6))))))))) {
      FUN_004ac710((int)piVar1,s_Ignoring_incorrect_cHRM_value_wh_004dfe34);
    }
    FUN_004a6360((int)piVar1,iVar3,(char)piVar2);
  }
  return;
}

