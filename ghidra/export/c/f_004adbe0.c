// FUNCTION: PORT1111 0x004adbe0
// name: FUN_004adbe0
// sig: uint FUN_004adbe0(int * param_1, byte * param_2, int * param_3)


uint __cdecl FUN_004adbe0(int *param_1,byte *param_2,int *param_3)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  char local_28 [40];
  
  bVar6 = false;
  *param_3 = 0;
  if (param_2 != (byte *)0x0) {
    uVar8 = 0xffffffff;
    pbVar7 = param_2;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      bVar3 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar3 != 0);
    uVar9 = ~uVar8 - 1;
    if (uVar9 != 0) {
      pbVar7 = FUN_004a4710(param_1,~uVar8 + 1);
      *param_3 = (int)pbVar7;
      bVar3 = *param_2;
      while (bVar3 != 0) {
        bVar3 = *param_2;
        if (((char)bVar3 < ' ') || (('~' < (char)bVar3 && (bVar3 < 0xa1)))) {
          _sprintf(local_28,s_invalid_keyword_character_0x_02X_004df924,(int)(char)bVar3);
          FUN_004ac710((int)param_1,local_28);
          *pbVar7 = 0x20;
        }
        else {
          *pbVar7 = bVar3;
        }
        pbVar1 = param_2 + 1;
        param_2 = param_2 + 1;
        pbVar7 = pbVar7 + 1;
        bVar3 = *pbVar1;
      }
      *pbVar7 = 0;
      pcVar11 = (char *)(*param_3 + -1 + uVar9);
      if (*(char *)(*param_3 + -1 + uVar9) == ' ') {
        FUN_004ac710((int)param_1,s_trailing_spaces_removed_from_key_004df8fc);
        cVar4 = *pcVar11;
        while (cVar4 == ' ') {
          *pcVar11 = '\0';
          pcVar10 = pcVar11 + -1;
          pcVar11 = pcVar11 + -1;
          uVar9 = uVar9 - 1;
          cVar4 = *pcVar10;
        }
      }
      pcVar11 = (char *)*param_3;
      if (*pcVar11 == ' ') {
        FUN_004ac710((int)param_1,s_leading_spaces_removed_from_keyw_004df8d8);
        cVar4 = *pcVar11;
        while (cVar4 == ' ') {
          pcVar10 = pcVar11 + 1;
          pcVar11 = pcVar11 + 1;
          uVar9 = uVar9 - 1;
          cVar4 = *pcVar10;
        }
      }
      pcVar10 = (char *)*param_3;
      bVar5 = false;
      cVar4 = *pcVar11;
      while (cVar4 != '\0') {
        if (cVar4 == ' ') {
          if (bVar5) {
            uVar9 = uVar9 - 1;
            bVar6 = true;
            bVar5 = true;
          }
          else {
            *pcVar10 = ' ';
            pcVar10 = pcVar10 + 1;
            bVar5 = true;
          }
        }
        else {
          *pcVar10 = cVar4;
          pcVar10 = pcVar10 + 1;
          bVar5 = false;
        }
        pcVar2 = pcVar11 + 1;
        pcVar11 = pcVar11 + 1;
        cVar4 = *pcVar2;
      }
      *pcVar10 = '\0';
      if (bVar6) {
        FUN_004ac710((int)param_1,s_extra_interior_spaces_removed_fr_004df8ac);
      }
      if (uVar9 != 0) {
        if (0x4f < uVar9) {
          FUN_004ac710((int)param_1,s_keyword_length_must_be_1___79_ch_004df86c);
          param_3[0x4f] = 0;
          uVar9 = 0x4f;
        }
        return uVar9;
      }
      FUN_004a4750((int)param_1,(void *)*param_3);
      *param_3 = 0;
      FUN_004ac710((int)param_1,s_Zero_length_keyword_004df898);
      return 0;
    }
  }
  FUN_004ac710((int)param_1,s_zero_length_keyword_004df858);
  return 0;
}

