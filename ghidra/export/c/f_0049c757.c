// FUNCTION: PORT1111 0x0049c757
// name: FUN_0049c757
// sig: uint FUN_0049c757(LCID param_1, uint param_2, LPCSTR param_3, size_t param_4, LPSTR param_5, int param_6, UINT param_7, int param_8)


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

uint __cdecl
FUN_0049c757(LCID param_1,uint param_2,LPCSTR param_3,size_t param_4,LPSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  undefined1 *puVar5;
  int iVar6;
  UINT UVar7;
  LPSTR pCVar8;
  size_t sVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  char *pcVar15;
  undefined4 uStackY_74;
  uint local_4c;
  LPSTR local_2c;
  size_t local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004c7450;
  uStack_c = 0x49c763;
  if (DAT_004e2eac == 0) {
    uStackY_74 = 0x49c784;
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_004e2eac = 2;
      }
    }
    else {
      DAT_004e2eac = 1;
    }
  }
  pcVar15 = param_3;
  sVar9 = param_4;
  if (0 < (int)param_4) {
    do {
      sVar9 = sVar9 - 1;
      if (*pcVar15 == '\0') goto LAB_0049c7bd;
      pcVar15 = pcVar15 + 1;
    } while (sVar9 != 0);
    sVar9 = 0xffffffff;
LAB_0049c7bd:
    param_4 = param_4 + (-1 - sVar9);
  }
  if ((DAT_004e2eac != 2) && (DAT_004e2eac != 0)) {
    if (DAT_004e2eac == 1) {
      uVar14 = 0;
      bVar2 = false;
      bVar1 = false;
      if (param_7 == 0) {
        param_7 = DAT_004e3060;
      }
      uStackY_74 = 0x49c81d;
      iVar3 = MultiByteToWideChar(param_7,(uint)(param_8 != 0) * 8 + 1,param_3,param_4,(LPWSTR)0x0,0
                                 );
      if (iVar3 != 0) {
        puVar5 = (undefined1 *)(iVar3 * 2 + 3U & 0xfffffffc);
        iVar6 = -(int)puVar5;
        local_1c = &stack0xffffffa8 + iVar6;
        local_20 = &stack0xffffffa8 + iVar6;
        local_8 = (undefined *)0xffffffff;
        if (&stack0xffffffa8 == puVar5) {
          *(int *)(&stack0xffffffa4 + iVar6) = iVar3 * 2;
          *(undefined4 *)(&stack0xffffffa0 + iVar6) = 0x49c876;
          local_20 = _malloc(*(size_t *)(&stack0xffffffa4 + iVar6));
          if (local_20 == (undefined1 *)0x0) {
            return 0;
          }
          bVar2 = true;
        }
        *(int *)(&stack0xffffffa4 + iVar6) = iVar3;
        *(undefined1 **)(&stack0xffffffa0 + iVar6) = local_20;
        *(size_t *)(&stack0xffffff9c + iVar6) = param_4;
        *(LPCSTR *)(&stack0xffffff98 + iVar6) = param_3;
        *(undefined4 *)(&stack0xffffff94 + iVar6) = 1;
        *(UINT *)(&stack0xffffff90 + iVar6) = param_7;
        puVar10 = (undefined1 *)((int)&uStackY_74 + iVar6);
        *(undefined4 *)((int)&uStackY_74 + iVar6) = 0x49c89e;
        iVar6 = MultiByteToWideChar(*(UINT *)(&stack0xffffff90 + iVar6),
                                    *(DWORD *)(&stack0xffffff94 + iVar6),
                                    *(LPCSTR *)(&stack0xffffff98 + iVar6),
                                    *(int *)(&stack0xffffff9c + iVar6),
                                    *(LPWSTR *)(&stack0xffffffa0 + iVar6),
                                    *(int *)(&stack0xffffffa4 + iVar6));
        puVar5 = puVar10;
        if (iVar6 != 0) {
          *(undefined4 *)(puVar10 + -4) = 0;
          *(undefined4 *)(puVar10 + -8) = 0;
          *(int *)(puVar10 + -0xc) = iVar3;
          *(undefined1 **)(puVar10 + -0x10) = local_20;
          *(uint *)(puVar10 + -0x14) = param_2;
          *(LCID *)(puVar10 + -0x18) = param_1;
          puVar11 = puVar10 + -0x1c;
          *(undefined4 *)(puVar10 + -0x1c) = 0x49c8b8;
          uVar14 = LCMapStringW(*(LCID *)(puVar10 + -0x18),*(DWORD *)(puVar10 + -0x14),
                                *(LPCWSTR *)(puVar10 + -0x10),*(int *)(puVar10 + -0xc),
                                *(LPWSTR *)(puVar10 + -8),*(int *)(puVar10 + -4));
          puVar5 = puVar11;
          if (uVar14 != 0) {
            if ((param_2 & 0x400) == 0) {
              puVar5 = (undefined1 *)(uVar14 * 2 + 3 & 0xfffffffc);
              *(undefined4 *)(puVar11 + -4) = 0x49c90d;
              iVar6 = -(int)puVar5;
              local_1c = puVar11 + iVar6;
              local_24 = puVar11 + iVar6;
              local_8 = (undefined *)0xffffffff;
              if (puVar11 == puVar5) {
                *(uint *)(puVar11 + iVar6 + -4) = uVar14 * 2;
                *(undefined4 *)(puVar11 + iVar6 + -8) = 0x49c944;
                local_24 = _malloc(*(size_t *)(puVar11 + iVar6 + -4));
                puVar5 = puVar11 + iVar6;
                if (local_24 == (undefined1 *)0x0) goto LAB_0049c98c;
                bVar1 = true;
              }
              *(uint *)(puVar11 + iVar6 + -4) = uVar14;
              *(undefined1 **)(puVar11 + iVar6 + -8) = local_24;
              *(int *)(puVar11 + iVar6 + -0xc) = iVar3;
              *(undefined1 **)(puVar11 + iVar6 + -0x10) = local_20;
              *(uint *)(puVar11 + iVar6 + -0x14) = param_2;
              *(LCID *)(puVar11 + iVar6 + -0x18) = param_1;
              puVar13 = puVar11 + iVar6 + -0x1c;
              *(undefined4 *)(puVar11 + iVar6 + -0x1c) = 0x49c967;
              iVar3 = LCMapStringW(*(LCID *)(puVar11 + iVar6 + -0x18),
                                   *(DWORD *)(puVar11 + iVar6 + -0x14),
                                   *(LPCWSTR *)(puVar11 + iVar6 + -0x10),
                                   *(int *)(puVar11 + iVar6 + -0xc),
                                   *(LPWSTR *)(puVar11 + iVar6 + -8),*(int *)(puVar11 + iVar6 + -4))
              ;
              puVar5 = puVar13;
              if (iVar3 != 0) {
                *(undefined4 *)(puVar13 + -4) = 0;
                *(undefined4 *)(puVar13 + -8) = 0;
                if (param_6 == 0) {
                  *(undefined4 *)(puVar13 + -0xc) = 0;
                  *(undefined4 *)(puVar13 + -0x10) = 0;
                }
                else {
                  *(int *)(puVar13 + -0xc) = param_6;
                  *(LPSTR *)(puVar13 + -0x10) = param_5;
                }
                *(uint *)(puVar13 + -0x14) = uVar14;
                *(undefined1 **)(puVar13 + -0x18) = local_24;
                *(undefined4 *)(puVar13 + -0x1c) = 0;
                *(UINT *)(puVar13 + -0x20) = param_7;
                puVar5 = puVar13 + -0x24;
                *(undefined4 *)(puVar13 + -0x24) = 0x49c98a;
                uVar14 = WideCharToMultiByte(*(UINT *)(puVar13 + -0x20),*(DWORD *)(puVar13 + -0x1c),
                                             *(LPCWSTR *)(puVar13 + -0x18),*(int *)(puVar13 + -0x14)
                                             ,*(LPSTR *)(puVar13 + -0x10),*(int *)(puVar13 + -0xc),
                                             *(LPCSTR *)(puVar13 + -8),*(LPBOOL *)(puVar13 + -4));
              }
            }
            else if ((param_6 != 0) && ((int)uVar14 <= param_6)) {
              *(int *)(puVar11 + -4) = param_6;
              *(LPSTR *)(puVar11 + -8) = param_5;
              *(int *)(puVar11 + -0xc) = iVar3;
              *(undefined1 **)(puVar11 + -0x10) = local_20;
              *(uint *)(puVar11 + -0x14) = param_2;
              *(LCID *)(puVar11 + -0x18) = param_1;
              puVar12 = puVar11 + -0x1c;
              *(undefined4 *)(puVar11 + -0x1c) = 0x49c8f3;
              LCMapStringW(*(LCID *)(puVar11 + -0x18),*(DWORD *)(puVar11 + -0x14),
                           *(LPCWSTR *)(puVar11 + -0x10),*(int *)(puVar11 + -0xc),
                           *(LPWSTR *)(puVar11 + -8),*(int *)(puVar11 + -4));
              puVar5 = puVar12;
            }
          }
        }
LAB_0049c98c:
        if (bVar1) {
          *(undefined1 **)(puVar5 + -4) = local_24;
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar5 + -8) = &UNK_0049c999;
          _free(*(void **)(puVar5 + -4));
        }
        if (bVar2) {
          *(undefined1 **)(puVar5 + -4) = local_20;
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar5 + -8) = &UNK_0049c9a7;
          _free(*(void **)(puVar5 + -4));
        }
        return uVar14;
      }
    }
    return 0;
  }
  local_2c = (LPSTR)0x0;
  pcVar15 = (char *)0x0;
  bVar1 = false;
  if (param_1 == 0) {
    param_1 = DAT_004e3050;
  }
  if (param_7 == 0) {
    param_7 = DAT_004e3060;
  }
  UVar7 = ___ansicp(param_1);
  if (UVar7 == 0xffffffff) {
    return 0;
  }
  if (UVar7 == param_7) {
    uStackY_74 = 0x49caf8;
    local_4c = LCMapStringA(param_1,param_2,param_3,param_4,param_5,param_6);
    goto LAB_0049cafa;
  }
  uStackY_74 = 0x49ca04;
  local_2c = FUN_004a1782(param_7,UVar7,param_3,&param_4,(LPSTR)0x0,0);
  if (local_2c == (LPSTR)0x0) {
    return 0;
  }
  uStackY_74 = 0x49ca20;
  local_28 = LCMapStringA(param_1,param_2,local_2c,param_4,(LPSTR)0x0,0);
  if (local_28 != 0) {
    local_8 = (undefined *)0x0;
    local_1c = &stack0xffffffa8;
    pcVar15 = &stack0xffffffa8;
    _memset(&stack0xffffffa8,0,local_28);
    local_8 = (undefined *)0xffffffff;
    if (&stack0x00000000 == (undefined1 *)0x58) {
      pcVar15 = _malloc(local_28);
      if (pcVar15 != (char *)0x0) {
        _memset(pcVar15,0,local_28);
        bVar1 = true;
        goto LAB_0049ca8b;
      }
    }
    else {
LAB_0049ca8b:
      uStackY_74 = 0x49caa1;
      local_28 = LCMapStringA(param_1,param_2,local_2c,param_4,pcVar15,local_28);
      if (local_28 != 0) {
        uStackY_74 = 0x49cac2;
        pCVar8 = FUN_004a1782(UVar7,param_7,pcVar15,&local_28,param_5,param_6);
        local_4c = (uint)(pCVar8 != (LPSTR)0x0);
        goto LAB_0049cad2;
      }
    }
    local_4c = 0;
  }
LAB_0049cad2:
  if (bVar1) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar15);
  }
LAB_0049cafa:
  if (local_2c != (LPSTR)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  return local_4c;
}

