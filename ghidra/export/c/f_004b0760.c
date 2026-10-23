// FUNCTION: PORT1111 0x004b0760
// name: FUN_004b0760
// sig: undefined FUN_004b0760(int * param_1, int param_2, uint param_3)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004b0760(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte local_44 [4];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  uVar3 = param_1[0x1a];
  if ((uVar3 & 1) == 0) {
    FUN_004ac6e0(param_1,s_Missing_IHDR_before_cHRM_004dfed4);
  }
  else {
    if ((uVar3 & 4) != 0) {
      FUN_004ac710((int)param_1,s_Invalid_cHRM_after_IDAT_004dfea0);
      FUN_004afd10(param_1,param_3);
      return;
    }
    if ((uVar3 & 2) == 0) {
      if (((param_2 != 0) && ((*(uint *)(param_2 + 8) & 4) != 0)) &&
         ((*(uint *)(param_2 + 8) & 0x800) == 0)) {
        FUN_004ac710((int)param_1,s_Duplicate_cHRM_chunk_004dfe6c);
        FUN_004afd10(param_1,param_3);
        return;
      }
    }
    else {
      FUN_004ac710((int)param_1,s_Missing_PLTE_before_cHRM_004dfe84);
    }
  }
  if (param_3 != 0x20) {
    FUN_004ac710((int)param_1,s_Incorrect_cHRM_chunk_length_004dfeb8);
    FUN_004afd10(param_1,param_3);
    return;
  }
  FUN_004afce0(param_1,local_44,4);
  iVar1 = FUN_004afc90(local_44);
  local_2c = iVar1;
  FUN_004afce0(param_1,local_44,4);
  local_30 = FUN_004afc90(local_44);
  if (((80000 < iVar1) || (80000 < local_30)) || (100000 < local_30 + iVar1)) {
    FUN_004ac710((int)param_1,s_Invalid_cHRM_white_point_004dfd94);
    FUN_004afd10(param_1,0x18);
    return;
  }
  FUN_004afce0(param_1,local_44,4);
  iVar1 = FUN_004afc90(local_44);
  local_34 = iVar1;
  FUN_004afce0(param_1,local_44,4);
  local_38 = FUN_004afc90(local_44);
  if (((80000 < iVar1) || (80000 < local_38)) || (100000 < local_38 + iVar1)) {
    FUN_004ac710((int)param_1,s_Invalid_cHRM_red_point_004dfdb0);
    FUN_004afd10(param_1,0x10);
    return;
  }
  FUN_004afce0(param_1,local_44,4);
  iVar1 = FUN_004afc90(local_44);
  local_3c = iVar1;
  FUN_004afce0(param_1,local_44,4);
  local_40 = FUN_004afc90(local_44);
  if (((80000 < iVar1) || (80000 < local_40)) || (100000 < local_40 + iVar1)) {
    FUN_004ac710((int)param_1,s_Invalid_cHRM_green_point_004dfdc8);
    FUN_004afd10(param_1,8);
    return;
  }
  FUN_004afce0(param_1,local_44,4);
  iVar1 = FUN_004afc90(local_44);
  local_24 = (float)iVar1;
  FUN_004afce0(param_1,local_44,4);
  iVar2 = FUN_004afc90(local_44);
  if (((iVar1 < 0x13881) && (iVar2 < 0x13881)) && (iVar2 + iVar1 < 0x186a1)) {
    local_c = (float)local_2c * _DAT_004c8620;
    local_10 = (float)local_30 * _DAT_004c8620;
    local_14 = (float)local_34 * _DAT_004c8620;
    local_18 = (float)local_38 * _DAT_004c8620;
    local_1c = (float)local_3c * _DAT_004c8620;
    local_20 = (float)local_40 * _DAT_004c8620;
    local_24 = (float)(int)local_24 * _DAT_004c8620;
    local_28 = (float)iVar2 * _DAT_004c8620;
    if ((*(uint *)(param_2 + 8) & 0x800) == 0) {
      FUN_004a5b00((int)param_1,param_2,(double)local_c,(double)local_10,(double)local_14,
                   (double)local_18,(double)local_1c,(double)local_20,(double)local_24,
                   (double)local_28);
      FUN_004a5c50((int)param_1,param_2,local_2c,local_30,local_34,local_38,local_3c,local_40,iVar1,
                   iVar2);
      FUN_004afd10(param_1,0);
      return;
    }
    uVar3 = (int)(local_2c - 0x7a26U) >> 0x1f;
    if (((1000 < (int)((local_2c - 0x7a26U ^ uVar3) - uVar3)) ||
        (uVar3 = (int)(local_30 - 0x8084U) >> 0x1f,
        1000 < (int)((local_30 - 0x8084U ^ uVar3) - uVar3))) ||
       ((uVar3 = (int)(local_34 - 64000U) >> 0x1f, 1000 < (int)((local_34 - 64000U ^ uVar3) - uVar3)
        || ((((uVar3 = (int)(local_38 - 33000U) >> 0x1f,
              1000 < (int)((local_38 - 33000U ^ uVar3) - uVar3) ||
              (uVar3 = (int)(local_3c - 30000U) >> 0x1f,
              1000 < (int)((local_3c - 30000U ^ uVar3) - uVar3))) ||
             (uVar3 = (int)(local_40 - 60000U) >> 0x1f,
             1000 < (int)((local_40 - 60000U ^ uVar3) - uVar3))) ||
            ((uVar3 = (int)(iVar1 - 15000U) >> 0x1f, 1000 < (int)((iVar1 - 15000U ^ uVar3) - uVar3)
             || (uVar3 = (int)(iVar2 - 6000U) >> 0x1f, 1000 < (int)((iVar2 - 6000U ^ uVar3) - uVar3)
                )))))))) {
      FUN_004ac710((int)param_1,s_Ignoring_incorrect_cHRM_value_wh_004dfe34);
      FID_conflict__fwprintf
                ((FILE *)&DAT_004ddb70,(wchar_t *)s_wx__f__wy__f__rx__f__ry__f_004dfe18,
                 (double)local_c,(double)local_10,(double)local_14,(double)local_18);
      FID_conflict__fwprintf
                ((FILE *)&DAT_004ddb70,(wchar_t *)s_gx__f__gy__f__bx__f__by__f_004dfdfc,
                 (double)local_1c,(double)local_20,(double)local_24,(double)local_28);
    }
    FUN_004afd10(param_1,0);
    return;
  }
  local_28 = (float)iVar2;
  FUN_004ac710((int)param_1,s_Invalid_cHRM_blue_point_004dfde4);
  FUN_004afd10(param_1,0);
  return;
}

