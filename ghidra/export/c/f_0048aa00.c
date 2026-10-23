// FUNCTION: PORT1111 0x0048aa00
// name: FUN_0048aa00
// sig: undefined FUN_0048aa00(HDC param_1, uchar * param_2, int * param_3, undefined4 param_4, int param_5, int param_6, int param_7)


void __cdecl
FUN_0048aa00(HDC param_1,uchar *param_2,int *param_3,undefined4 param_4,int param_5,int param_6,
            int param_7)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  ushort uVar4;
  uchar *puVar5;
  uchar *puVar6;
  uchar *puVar7;
  char *lpchText;
  int *piVar8;
  UINT c;
  undefined4 *puVar9;
  LPCSTR pCVar10;
  char *pcVar11;
  undefined4 unaff_EDI;
  int iVar12;
  ulonglong uVar13;
  undefined2 uVar14;
  int local_88;
  char *local_84;
  int local_80;
  void *local_7c;
  uchar *local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  int local_5c;
  char *local_58;
  tagSIZE local_54;
  tagSIZE local_4c;
  tagSIZE local_44;
  tagSIZE local_3c;
  tagSIZE local_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  tagRECT local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004baaf8;
  local_c = ExceptionList;
  local_60 = 0;
  local_6c = 0;
  ExceptionList = &local_c;
  GetTextExtentPoint32A(param_1,"A",1,&local_34);
  DAT_004e2ca4 = GetTextColor(param_1);
  iVar12 = 0;
  local_7c = (void *)0x0;
  local_78 = param_2;
  local_64 = 0;
  puVar5 = __mbsstr(param_2,"<c:");
  puVar6 = local_78;
  iVar3 = local_64;
  while (local_78 = puVar6, puVar5 != (uchar *)0x0) {
    puVar6 = __mbsstr(puVar5,">");
    if (puVar6 != (uchar *)0x0) {
      iVar12 = iVar12 + 1;
      puVar5 = puVar6;
    }
    puVar5 = __mbsstr(puVar5 + 1,"<c:");
    puVar6 = local_78;
    iVar3 = iVar12;
  }
  uVar14 = (undefined2)unaff_EDI;
  local_64 = iVar3;
  if (iVar12 != 0) {
    local_7c = operator_new(iVar12 << 4);
    puVar5 = (uchar *)0x0;
    local_70 = 0;
    puVar9 = (undefined4 *)((int)local_7c + 8);
    do {
      puVar7 = __mbsstr(puVar6,"<c:");
      if (puVar7 == puVar6) {
        _sscanf((char *)puVar6,"<c:%d,%d,%d>",&local_84,&local_80);
        puVar7 = __mbsstr(puVar6,">");
        if (puVar7 != (uchar *)0x0) {
          *puVar9 = 100000;
          puVar9[-2] = (uint)CONCAT21(CONCAT11((undefined1)local_74,(undefined1)local_80),
                                      local_84._0_1_);
          iVar12 = -(int)local_78 - (int)puVar5;
          puVar5 = puVar7 + (int)(puVar5 + (1 - (int)puVar6));
          local_70 = local_70 + 1;
          puVar9[-1] = puVar6 + iVar12;
          puVar9 = puVar9 + 4;
          puVar6 = puVar7 + 1;
        }
      }
      else {
        puVar7 = __mbsstr(puVar6,"</c>");
        if (puVar7 == puVar6) {
          iVar12 = 0;
          if (local_70 < 1) {
LAB_0048abab:
            puVar5 = puVar5 + 4;
            puVar6 = puVar6 + 4;
          }
          else {
            piVar8 = (int *)((int)local_7c + 8);
            do {
              if (*piVar8 == 0) {
                *(uchar **)(iVar12 * 0x10 + 8 + (int)local_7c) =
                     puVar6 + (-(int)local_78 - (int)puVar5) + 1;
                goto LAB_0048abab;
              }
              iVar12 = iVar12 + 1;
              piVar8 = piVar8 + 4;
            } while (iVar12 < local_70);
            puVar5 = puVar5 + 4;
            puVar6 = puVar6 + 4;
          }
        }
        else {
          puVar6 = puVar6 + 1;
        }
      }
      uVar14 = (undefined2)unaff_EDI;
    } while (*puVar6 != '\0');
  }
  FUN_00465cf0(&local_68);
  local_4 = 0;
  FUN_0048a560(&local_68,local_78);
  lpchText = (char *)FUN_00465e00(&local_68);
  iVar12 = *param_3;
  local_80 = param_3[1];
  local_24 = param_3[2];
  local_20 = param_3[3];
  local_78 = (uchar *)lpchText;
  local_58 = lpchText;
  local_2c = iVar12;
  local_28 = local_80;
  if (param_5 != 0) {
    local_1c.left = *param_3;
    local_1c.top = param_3[1];
    local_1c.right = param_3[2];
    local_1c.bottom = param_3[3];
    local_70 = DrawTextA(param_1,lpchText,-1,&local_1c,0x410);
    if (local_70 < local_20 - local_80) {
      local_70 = local_70 >> 1;
      FUN_004980e0(((double)(local_20 - local_80 >> 1) + (double)local_28) - (double)local_70,uVar14
                  );
      uVar13 = FUN_00497d88();
      local_80 = (int)uVar13;
    }
  }
LAB_0048aca0:
  local_88 = 0;
  local_70 = 0;
  pCVar10 = lpchText;
  do {
    cVar2 = *pCVar10;
    pcVar11 = pCVar10;
    while (cVar2 != '\0') {
      if (cVar2 == ' ') goto LAB_0048acd5;
      if (cVar2 == '\r') break;
      pcVar1 = pcVar11 + 1;
      pcVar11 = pcVar11 + 1;
      cVar2 = *pcVar1;
    }
    cVar2 = *pcVar11;
    while (cVar2 == ' ') {
LAB_0048acd5:
      pcVar1 = pcVar11 + 1;
      pcVar11 = pcVar11 + 1;
      cVar2 = *pcVar1;
    }
    local_84 = pCVar10;
    if (*pcVar11 == '\r') {
      local_60 = 1;
      GetTextExtentPoint32A(param_1,lpchText,(int)pcVar11 - (int)lpchText,&local_44);
      if (((int)(uint)(ushort)local_44.cx < local_24 - iVar12) &&
         (local_84 = pcVar11, pcVar11[-1] == '.')) {
        local_88 = 0;
      }
      goto LAB_0048ad39;
    }
    if (*pcVar11 == '\0') {
      SetTextJustification(param_1,0,0);
      GetTextExtentPoint32A(param_1,lpchText,(int)pcVar11 - (int)lpchText,&local_54);
      local_5c = local_24 - iVar12;
      if ((int)(uint)(ushort)local_54.cx < local_5c) goto LAB_0048ae7a;
      goto LAB_0048ae10;
    }
    local_88 = local_88 + 1;
    SetTextJustification(param_1,0,0);
    GetTextExtentPoint32A(param_1,lpchText,(int)(pcVar11 + (-1 - (int)lpchText)),&local_4c);
    pCVar10 = pcVar11;
  } while ((int)(uint)(ushort)local_4c.cx < local_24 - iVar12);
  goto LAB_0048ad2d;
  while( true ) {
    local_88 = local_88 + -1;
    pcVar11 = pcVar1;
    if (local_88 == 0) goto LAB_0048ad2d;
    SetTextJustification(param_1,0,0);
    GetTextExtentPoint32A(param_1,lpchText,(int)pcVar1 - (int)lpchText,&local_54);
    if ((int)(uint)(ushort)local_54.cx < local_5c) break;
LAB_0048ae10:
    cVar2 = pcVar11[-1];
    pcVar1 = pcVar11;
    while (cVar2 != ' ') {
      if (pcVar1 == local_84) goto LAB_0048ae8b;
      cVar2 = pcVar1[-2];
      pcVar1 = pcVar1 + -1;
    }
    if (pcVar1 == local_84) {
LAB_0048ae8b:
      if ((local_84 != lpchText) && (local_84 != local_58)) {
        pcVar11 = pcVar1;
      }
      local_70 = 1;
      goto LAB_0048ad2d;
    }
  }
LAB_0048ae7a:
  local_70 = 1;
  local_84 = pcVar11;
LAB_0048ad2d:
  if (local_70 == 0) {
    local_88 = local_88 + -1;
  }
LAB_0048ad39:
  cVar2 = local_84[-1];
  while (cVar2 == ' ') {
    if (local_70 == 0) {
      local_88 = local_88 + -1;
    }
    cVar2 = local_84[-2];
    local_84 = local_84 + -1;
  }
  if ((*pcVar11 == '\0') || (local_88 < 1)) {
    local_84 = pcVar11;
  }
  if (param_6 <= local_6c) {
    SetTextJustification(param_1,0,0);
    c = (int)local_84 - (int)lpchText;
    GetTextExtentPoint32A(param_1,lpchText,c,&local_3c);
    uVar4 = (ushort)local_3c.cy;
    switch(param_4) {
    case 0x6a:
      local_74 = local_2c;
      break;
    case 0x6b:
      local_74 = local_24 - (uint)(ushort)local_3c.cx;
      break;
    case 0x6c:
      local_74 = (int)((local_2c - (uint)(ushort)local_3c.cx) + local_24) / 2;
      break;
    case 0x6d:
      if ((*pcVar11 != '\0') && (0 < local_88)) {
        SetTextJustification(param_1,(local_24 - (uint)(ushort)local_3c.cx) - local_2c,local_88);
      }
      local_74 = local_2c;
    }
    if (0 < (int)c) {
      if (local_64 == 0) {
        ExtTextOutA(param_1,local_74,local_80,0,(RECT *)0x0,lpchText,c,(INT *)0x0);
      }
      else {
        FUN_0048a410(param_1,local_74,local_80,lpchText,c,(int)local_78,(int)local_7c,local_64);
      }
      local_80 = local_80 + (uint)uVar4;
    }
    if (c == 0) {
      local_80 = local_80 + (uint)(ushort)local_34.cy;
    }
  }
  if ((0 < param_7) && (param_7 < local_6c)) {
joined_r0x0048b043:
    if (local_7c == (void *)0x0) {
      local_4 = 0xffffffff;
      FUN_00465e40(&local_68);
      ExceptionList = local_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_7c);
  }
  local_6c = local_6c + 1;
  cVar2 = *local_84;
  lpchText = local_84;
  while (cVar2 == ' ') {
    pcVar11 = lpchText + 1;
    lpchText = lpchText + 1;
    cVar2 = *pcVar11;
  }
  if (local_60 != 0) {
    if (*lpchText == '\r') {
      lpchText = lpchText + 2;
    }
    local_60 = 0;
  }
  if ((*lpchText == '\0') ||
     (iVar12 = local_2c, local_20 < (int)((uint)(ushort)local_34.cy + local_80)))
  goto joined_r0x0048b043;
  goto LAB_0048aca0;
}

