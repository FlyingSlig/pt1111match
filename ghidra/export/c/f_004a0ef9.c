// FUNCTION: PORT1111 0x004a0ef9
// name: FUN_004a0ef9
// sig: BOOL FUN_004a0ef9(DWORD param_1, LPCSTR param_2, size_t param_3, LPWORD param_4, UINT param_5, LCID param_6, int param_7)


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

BOOL __cdecl
FUN_004a0ef9(DWORD param_1,LPCSTR param_2,size_t param_3,LPWORD param_4,UINT param_5,LCID param_6,
            int param_7)

{
  int iVar1;
  bool bVar2;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  UINT UVar8;
  LCID Locale;
  undefined1 *puVar9;
  LPSTR _Memory;
  UINT UVar10;
  undefined4 uStackY_58;
  BOOL local_28;
  WORD local_20 [2];
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004c7ba0;
  uStack_c = 0x4a0f05;
  _Memory = (LPSTR)0x0;
  if (DAT_004e2fdc == 0) {
    BVar3 = GetStringTypeW(1,L"",1,local_20);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_004e2fdc = 2;
      }
    }
    else {
      DAT_004e2fdc = 1;
    }
  }
  if ((DAT_004e2fdc == 2) || (DAT_004e2fdc == 0)) {
    Locale = param_6;
    if (param_6 == 0) {
      Locale = DAT_004e3050;
    }
    UVar10 = param_5;
    if (param_5 == 0) {
      UVar10 = DAT_004e3060;
    }
    UVar8 = ___ansicp(Locale);
    if (UVar8 != 0xffffffff) {
      if (UVar8 != UVar10) {
        uStackY_58 = 0x4a107c;
        _Memory = FUN_004a1782(UVar10,UVar8,param_2,&param_3,(LPSTR)0x0,0);
        param_2 = _Memory;
        if (_Memory == (LPSTR)0x0) {
          return 0;
        }
      }
      BVar3 = GetStringTypeA(Locale,param_1,param_2,param_3,param_4);
      if (_Memory != (LPSTR)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      return BVar3;
    }
  }
  else if (DAT_004e2fdc == 1) {
    local_28 = 0;
    bVar2 = false;
    if (param_5 == 0) {
      param_5 = DAT_004e3060;
    }
    uStackY_58 = 0x4a0f97;
    iVar5 = MultiByteToWideChar(param_5,(uint)(param_7 != 0) * 8 + 1,param_2,param_3,(LPWSTR)0x0,0);
    if (iVar5 != 0) {
      local_8 = (undefined *)0x0;
      puVar6 = (undefined1 *)(iVar5 * 2 + 3U & 0xfffffffc);
      iVar1 = -(int)puVar6;
      puVar7 = &stack0xffffffc4 + iVar1;
      local_1c = &stack0xffffffc4 + iVar1;
      *(int *)((int)local_20 + iVar1 + -0x20) = iVar5 * 2;
      *(undefined4 *)(&stack0xffffffbc + iVar1) = 0;
      *(undefined1 **)(&stack0xffffffb8 + iVar1) = &stack0xffffffc4 + iVar1;
      *(undefined4 *)(&stack0xffffffb4 + iVar1) = 0x4a0fc9;
      _memset(*(void **)(&stack0xffffffb8 + iVar1),*(int *)(&stack0xffffffbc + iVar1),
              *(size_t *)((int)local_20 + iVar1 + -0x20));
      local_8 = (undefined *)0xffffffff;
      if (&stack0xffffffc4 == puVar6) {
        *(int *)((int)local_20 + iVar1 + -0x20) = iVar5;
        *(undefined4 *)(&stack0xffffffbc + iVar1) = 2;
        *(undefined4 *)(&stack0xffffffb8 + iVar1) = 0x4a0ff3;
        puVar7 = _calloc(*(size_t *)(&stack0xffffffbc + iVar1),
                         *(size_t *)((int)local_20 + iVar1 + -0x20));
        if (puVar7 == (void *)0x0) {
          return 0;
        }
        bVar2 = true;
      }
      *(int *)((int)local_20 + iVar1 + -0x20) = iVar5;
      *(undefined1 **)(&stack0xffffffbc + iVar1) = puVar7;
      *(size_t *)(&stack0xffffffb8 + iVar1) = param_3;
      *(LPCSTR *)(&stack0xffffffb4 + iVar1) = param_2;
      *(undefined4 *)(&stack0xffffffb0 + iVar1) = 1;
      *(UINT *)(&stack0xffffffac + iVar1) = param_5;
      puVar9 = (undefined1 *)((int)&uStackY_58 + iVar1);
      *(undefined4 *)((int)&uStackY_58 + iVar1) = 0x4a1015;
      iVar5 = MultiByteToWideChar(*(UINT *)(&stack0xffffffac + iVar1),
                                  *(DWORD *)(&stack0xffffffb0 + iVar1),
                                  *(LPCSTR *)(&stack0xffffffb4 + iVar1),
                                  *(int *)(&stack0xffffffb8 + iVar1),
                                  *(LPWSTR *)(&stack0xffffffbc + iVar1),
                                  *(int *)((int)local_20 + iVar1 + -0x20));
      puVar6 = puVar9;
      if (iVar5 != 0) {
        *(LPWORD *)(puVar9 + -4) = param_4;
        *(int *)(puVar9 + -8) = iVar5;
        *(undefined1 **)(puVar9 + -0xc) = puVar7;
        *(DWORD *)(puVar9 + -0x10) = param_1;
        puVar6 = puVar9 + -0x14;
        *(undefined4 *)(puVar9 + -0x14) = 0x4a1027;
        local_28 = GetStringTypeW(*(DWORD *)(puVar9 + -0x10),*(LPCWSTR *)(puVar9 + -0xc),
                                  *(int *)(puVar9 + -8),*(LPWORD *)(puVar9 + -4));
      }
      if (bVar2) {
        *(undefined1 **)(puVar6 + -4) = puVar7;
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar6 + -8) = &UNK_004a1036;
        _free(*(void **)(puVar6 + -4));
      }
      return local_28;
    }
  }
  return 0;
}

