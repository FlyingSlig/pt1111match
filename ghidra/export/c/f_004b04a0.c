// FUNCTION: PORT1111 0x004b04a0
// name: FUN_004b04a0
// sig: undefined FUN_004b04a0(int * param_1, int param_2, uint param_3)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004b04a0(int *param_1,int param_2,uint param_3)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = param_2;
  piVar2 = param_1;
  uVar5 = param_1[0x1a];
  if ((uVar5 & 1) == 0) {
    FUN_004ac6e0(param_1,s_Missing_IHDR_before_gAMA_004dfcf8);
  }
  else {
    if ((uVar5 & 4) != 0) {
      FUN_004ac710((int)param_1,s_Invalid_gAMA_after_IDAT_004dfcc4);
      FUN_004afd10(piVar2,param_3);
      return;
    }
    if ((uVar5 & 2) == 0) {
      if (((param_2 != 0) && ((*(uint *)(param_2 + 8) & 1) != 0)) &&
         ((*(uint *)(param_2 + 8) & 0x800) == 0)) {
        FUN_004ac710((int)param_1,s_Duplicate_gAMA_chunk_004dfc94);
        FUN_004afd10(piVar2,param_3);
        return;
      }
    }
    else {
      FUN_004ac710((int)param_1,s_Out_of_place_gAMA_chunk_004dfcac);
    }
  }
  uVar5 = param_3;
  if (param_3 != 4) {
    FUN_004ac710((int)piVar2,s_Incorrect_gAMA_chunk_length_004dfcdc);
    FUN_004afd10(piVar2,uVar5);
    return;
  }
  FUN_004afce0(piVar2,(byte *)&param_1,4);
  iVar4 = FUN_004afd10(piVar2,0);
  if (iVar4 == 0) {
    uVar5 = FUN_004afc90((byte *)&param_1);
    param_3 = uVar5;
    if (uVar5 == 0) {
      FUN_004ac710((int)piVar2,s_Ignoring_gAMA_chunk_with_gamma_0_004dfc70);
      return;
    }
    if (((*(uint *)(iVar3 + 8) & 0x800) != 0) && (((int)uVar5 < 45000 || (46000 < (int)uVar5)))) {
      FUN_004ac710((int)piVar2,s_Ignoring_incorrect_gAMA_value_wh_004dfc38);
      FID_conflict__fwprintf((FILE *)&DAT_004ddb70,(wchar_t *)s_gamma_____d_100000__004dfc20,uVar5);
      return;
    }
    fVar1 = (float)(int)uVar5 * _DAT_004c8620;
    piVar2[0x57] = (int)fVar1;
    FUN_004a5d50((int)piVar2,iVar3,(double)fVar1);
    FUN_004a5db0((int)piVar2,iVar3,uVar5);
  }
  return;
}

