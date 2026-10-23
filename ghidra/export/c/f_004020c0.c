// FUNCTION: PORT1111 0x004020c0
// name: FUN_004020c0
// sig: undefined4 FUN_004020c0(undefined4 * param_1, undefined4 * param_2, undefined1 * param_3)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __cdecl FUN_004020c0(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  UINT UVar5;
  int iVar6;
  uint extraout_EDX;
  undefined1 auVar7 [4];
  short sVar8;
  char *pcVar9;
  undefined4 *puVar10;
  uint local_40c;
  undefined1 local_408 [4];
  CHAR local_404 [10];
  char acStack_3fa [502];
  CHAR local_204 [259];
  undefined1 local_101;
  undefined4 local_4;
  
  local_4 = DAT_004ddb0c;
  bVar1 = false;
  UVar5 = GetSystemDirectoryA(local_204,0x104);
  if (UVar5 != 0) {
    local_101 = 0;
    iVar6 = 0;
    do {
      pcVar4 = local_204 + iVar6;
      local_404[iVar6] = *pcVar4;
      iVar6 = iVar6 + 1;
    } while (*pcVar4 != '\0');
    pcVar4 = local_408 + 3;
    do {
      pcVar9 = pcVar4;
      pcVar4 = pcVar9 + 1;
    } while (pcVar9[1] != '\0');
    *(undefined4 *)(pcVar9 + 1) = s__ddraw_dll_004bc528._0_4_;
    *(undefined4 *)(pcVar9 + 5) = s__ddraw_dll_004bc528._4_4_;
    *(undefined2 *)(pcVar9 + 9) = s__ddraw_dll_004bc528._8_2_;
    pcVar9[0xb] = s__ddraw_dll_004bc528[10];
    iVar6 = FUN_00401fc0(local_404,&local_40c);
    if (-1 < iVar6) {
      if ((0x40002 < (uint)local_408) ||
         ((0x40001 < (uint)local_408 && ((0x5f < local_40c || (0x5e < local_40c)))))) {
        if (param_1 != (undefined4 *)0x0) {
          *param_1 = 1;
        }
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = 0;
        }
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = 0x20;
        }
        bVar1 = true;
      }
      if ((0x40003 < (uint)local_408) ||
         ((0x40002 < (uint)local_408 && ((0x448 < local_40c || (0x447 < local_40c)))))) {
        if (param_1 != (undefined4 *)0x0) {
          *param_1 = 2;
        }
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = 0;
        }
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = 0x20;
        }
        bVar1 = true;
      }
      if ((0x40004 < (uint)local_408) ||
         ((0x40003 < (uint)local_408 && ((0x44 < local_40c || (0x43 < local_40c)))))) {
        if (param_1 != (undefined4 *)0x0) {
          *param_1 = 3;
        }
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = 0;
        }
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = 0x20;
        }
        bVar1 = true;
      }
    }
    iVar6 = 0;
    do {
      pcVar4 = local_204 + iVar6;
      local_404[iVar6] = *pcVar4;
      iVar6 = iVar6 + 1;
    } while (*pcVar4 != '\0');
    puVar3 = (undefined4 *)(local_408 + 3);
    do {
      puVar10 = puVar3;
      puVar3 = (undefined4 *)((int)puVar10 + 1);
    } while (*(char *)((int)puVar10 + 1) != '\0');
    *(undefined4 *)((int)puVar10 + 1) = DAT_004bc518;
    *(undefined4 *)((int)puVar10 + 5) = DAT_004bc51c;
    *(undefined4 *)((int)puVar10 + 9) = DAT_004bc520;
    *(undefined1 *)((int)puVar10 + 0xd) = DAT_004bc524;
    iVar6 = FUN_00401fc0(local_404,&local_40c);
    if ((-1 < iVar6) &&
       ((0x40004 < (uint)local_408 ||
        ((0x40003 < (uint)local_408 && ((0x46 < local_40c || (0x45 < local_40c)))))))) {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = 3;
      }
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 0;
      }
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 0x61;
      }
      bVar1 = true;
    }
    iVar6 = 0;
    do {
      pcVar4 = local_204 + iVar6;
      local_404[iVar6] = *pcVar4;
      iVar6 = iVar6 + 1;
    } while (*pcVar4 != '\0');
    pcVar4 = local_408 + 3;
    do {
      pcVar9 = pcVar4;
      pcVar4 = pcVar9 + 1;
    } while (pcVar9[1] != '\0');
    *(undefined4 *)(pcVar9 + 1) = s__ddraw_dll_004bc528._0_4_;
    *(undefined4 *)(pcVar9 + 5) = s__ddraw_dll_004bc528._4_4_;
    *(undefined2 *)(pcVar9 + 9) = s__ddraw_dll_004bc528._8_2_;
    pcVar9[0xb] = s__ddraw_dll_004bc528[10];
    iVar6 = FUN_00401fc0(local_404,&local_40c);
    if (-1 < iVar6) {
      if ((0x40005 < (uint)local_408) ||
         ((0x40004 < (uint)local_408 && ((0x9b < local_40c || (0x9a < local_40c)))))) {
        if (param_1 != (undefined4 *)0x0) {
          *param_1 = 5;
        }
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = 0;
        }
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = 0x20;
        }
        bVar1 = true;
      }
      if ((0x40006 < (uint)local_408) ||
         ((0x40005 < (uint)local_408 && ((0x13e < local_40c || (0x13d < local_40c)))))) {
        if (param_1 != (undefined4 *)0x0) {
          *param_1 = 6;
        }
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = 0;
        }
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = 0x20;
        }
        bVar1 = true;
      }
      if ((0x40006 < (uint)local_408) ||
         ((0x40005 < (uint)local_408 && ((0x1b4 < local_40c || (0x1b3 < local_40c)))))) {
        if (param_1 != (undefined4 *)0x0) {
          *param_1 = 6;
        }
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = 1;
        }
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = 0x20;
        }
        bVar1 = true;
      }
    }
    iVar6 = 0;
    do {
      pcVar4 = local_204 + iVar6;
      local_404[iVar6] = *pcVar4;
      iVar6 = iVar6 + 1;
    } while (*pcVar4 != '\0');
    puVar3 = (undefined4 *)(local_408 + 3);
    do {
      puVar10 = puVar3;
      puVar3 = (undefined4 *)((int)puVar10 + 1);
    } while (*(char *)((int)puVar10 + 1) != '\0');
    *(undefined4 *)((int)puVar10 + 1) = DAT_004bc50c;
    *(undefined4 *)((int)puVar10 + 5) = DAT_004bc510;
    *(undefined4 *)((int)puVar10 + 9) = DAT_004bc514;
    iVar6 = FUN_00401fc0(local_404,&local_40c);
    if ((-1 < iVar6) &&
       ((0x40006 < (uint)local_408 ||
        ((0x40005 < (uint)local_408 && ((0x30206 < local_40c || (0x30205 < local_40c)))))))) {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = 6;
      }
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 1;
      }
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 0x61;
      }
      bVar1 = true;
    }
    iVar6 = 0;
    do {
      pcVar4 = local_204 + iVar6;
      local_404[iVar6] = *pcVar4;
      iVar6 = iVar6 + 1;
    } while (*pcVar4 != '\0');
    pcVar4 = local_408 + 3;
    do {
      pcVar9 = pcVar4;
      pcVar4 = pcVar9 + 1;
    } while (pcVar9[1] != '\0');
    *(undefined4 *)(pcVar9 + 1) = s__ddraw_dll_004bc528._0_4_;
    *(undefined4 *)(pcVar9 + 5) = s__ddraw_dll_004bc528._4_4_;
    *(undefined2 *)(pcVar9 + 9) = s__ddraw_dll_004bc528._8_2_;
    pcVar9[0xb] = s__ddraw_dll_004bc528[10];
    iVar6 = FUN_00401fc0(local_404,&local_40c);
    if ((-1 < iVar6) &&
       ((0x40007 < (uint)local_408 ||
        ((0x40006 < (uint)local_408 && ((700 < local_40c || (699 < local_40c)))))))) {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = 7;
      }
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 0;
      }
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 0x20;
      }
      bVar1 = true;
    }
    iVar6 = 0;
    do {
      pcVar4 = local_204 + iVar6;
      local_404[iVar6] = *pcVar4;
      iVar6 = iVar6 + 1;
    } while (*pcVar4 != '\0');
    pcVar4 = local_408 + 3;
    do {
      pcVar9 = pcVar4;
      pcVar4 = pcVar9 + 1;
    } while (pcVar9[1] != '\0');
    *(undefined4 *)(pcVar9 + 1) = s__dinput_dll_004bc500._0_4_;
    *(undefined4 *)(pcVar9 + 5) = s__dinput_dll_004bc500._4_4_;
    *(undefined4 *)(pcVar9 + 9) = s__dinput_dll_004bc500._8_4_;
    iVar6 = FUN_00401fc0(local_404,&local_40c);
    if ((-1 < iVar6) &&
       ((0x40007 < (uint)local_408 ||
        ((0x40006 < (uint)local_408 && ((0x2cc < local_40c || (0x2cb < local_40c)))))))) {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = 7;
      }
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 0;
      }
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 0x61;
      }
      bVar1 = true;
    }
    iVar6 = 0;
    do {
      pcVar4 = local_204 + iVar6;
      local_404[iVar6] = *pcVar4;
      iVar6 = iVar6 + 1;
    } while (*pcVar4 != '\0');
    pcVar4 = local_408 + 3;
    do {
      pcVar9 = pcVar4;
      pcVar4 = pcVar9 + 1;
    } while (pcVar9[1] != '\0');
    *(undefined4 *)(pcVar9 + 1) = s__ddraw_dll_004bc528._0_4_;
    *(undefined4 *)(pcVar9 + 5) = s__ddraw_dll_004bc528._4_4_;
    *(undefined2 *)(pcVar9 + 9) = s__ddraw_dll_004bc528._8_2_;
    pcVar9[0xb] = s__ddraw_dll_004bc528[10];
    iVar6 = FUN_00401fc0(local_404,&local_40c);
    if ((-1 < iVar6) &&
       (((local_408._2_2_ == 4 &&
         ((0x40008 < (uint)local_408 || ((0x40007 < (uint)local_408 && (399 < local_40c)))))) ||
        ((local_408._2_2_ == 5 &&
         (iVar6 = FUN_00402090(local_40c,(uint)local_408,0x8d20190,0x50001), -1 < iVar6)))))) {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = 8;
      }
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 0;
      }
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 0x20;
      }
      bVar1 = true;
    }
    iVar6 = 0;
    do {
      pcVar4 = local_204 + iVar6;
      local_404[iVar6] = *pcVar4;
      iVar6 = iVar6 + 1;
    } while (*pcVar4 != '\0');
    puVar3 = (undefined4 *)(local_408 + 3);
    do {
      puVar10 = puVar3;
      puVar3 = (undefined4 *)((int)puVar10 + 1);
    } while (*(char *)((int)puVar10 + 1) != '\0');
    *(undefined4 *)((int)puVar10 + 1) = DAT_004bc4f4;
    *(undefined4 *)((int)puVar10 + 5) = DAT_004bc4f8;
    *(undefined2 *)((int)puVar10 + 9) = DAT_004bc4fc;
    iVar6 = FUN_00401fc0(local_404,&local_40c);
    uVar2 = local_40c;
    if (-1 < iVar6) {
      sVar8 = local_408._2_2_;
      auVar7 = local_408;
      if (((sVar8 == 4) &&
          ((0x40008 < (uint)local_408 || ((0x40007 < (uint)local_408 && (0x10370 < local_40c))))))
         || ((sVar8 == 5 &&
             (iVar6 = FUN_00402090(local_40c,(uint)local_408,0xa280371,0x50001),
             auVar7 = (undefined1  [4])extraout_EDX, -1 < iVar6)))) {
        if (param_1 != (undefined4 *)0x0) {
          *param_1 = 8;
        }
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = 1;
        }
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = 0x20;
        }
        bVar1 = true;
      }
      if (((sVar8 == 4) &&
          ((0x40008 < (uint)auVar7 || ((0x40007 < (uint)auVar7 && (0x10384 < uVar2)))))) ||
         ((sVar8 == 5 && (iVar6 = FUN_00402090(uVar2,(uint)auVar7,0xa280385,0x50001), -1 < iVar6))))
      {
        if (param_1 != (undefined4 *)0x0) {
          *param_1 = 8;
        }
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = 1;
        }
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = 0x61;
        }
        bVar1 = true;
      }
    }
    iVar6 = 0;
    do {
      pcVar4 = local_204 + iVar6;
      local_404[iVar6] = *pcVar4;
      iVar6 = iVar6 + 1;
    } while (*pcVar4 != '\0');
    puVar3 = (undefined4 *)(local_408 + 3);
    do {
      puVar10 = puVar3;
      puVar3 = (undefined4 *)((int)puVar10 + 1);
    } while (*(char *)((int)puVar10 + 1) != '\0');
    *(undefined4 *)((int)puVar10 + 1) = DAT_004bc4e4;
    *(undefined4 *)((int)puVar10 + 5) = DAT_004bc4e8;
    *(undefined4 *)((int)puVar10 + 9) = DAT_004bc4ec;
    *(undefined1 *)((int)puVar10 + 0xd) = DAT_004bc4f0;
    iVar6 = FUN_00401fc0(local_404,&local_40c);
    if ((-1 < iVar6) &&
       ((0x60003 < (uint)local_408 ||
        ((0x60002 < (uint)local_408 && ((0x10375 < local_40c || (0x10374 < local_40c)))))))) {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = 8;
      }
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 1;
      }
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 0x62;
      }
      bVar1 = true;
    }
    iVar6 = 0;
    do {
      pcVar4 = local_204 + iVar6;
      local_404[iVar6] = *pcVar4;
      iVar6 = iVar6 + 1;
    } while (*pcVar4 != '\0');
    pcVar4 = local_408 + 3;
    do {
      pcVar9 = pcVar4;
      pcVar4 = pcVar9 + 1;
    } while (pcVar9[1] != '\0');
    *(undefined4 *)(pcVar9 + 1) = s__dpnet_dll_004bc4d8._0_4_;
    *(undefined4 *)(pcVar9 + 5) = s__dpnet_dll_004bc4d8._4_4_;
    *(undefined2 *)(pcVar9 + 9) = s__dpnet_dll_004bc4d8._8_2_;
    pcVar9[0xb] = s__dpnet_dll_004bc4d8[10];
    iVar6 = FUN_00401fc0(local_404,&local_40c);
    if ((-1 < iVar6) &&
       (((local_408._2_2_ == 4 &&
         ((0x40009 < (uint)local_408 || ((0x40008 < (uint)local_408 && (0x85 < local_40c)))))) ||
        ((local_408._2_2_ == 5 &&
         (iVar6 = FUN_00402090(local_40c,(uint)local_408,0xe5d0086,0x50002), -1 < iVar6)))))) {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = 8;
      }
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 2;
      }
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 0x20;
      }
      bVar1 = true;
    }
    iVar6 = 0;
    do {
      pcVar4 = local_204 + iVar6;
      local_404[iVar6] = *pcVar4;
      iVar6 = iVar6 + 1;
    } while (*pcVar4 != '\0');
    puVar3 = (undefined4 *)(local_408 + 3);
    do {
      puVar10 = puVar3;
      puVar3 = (undefined4 *)((int)puVar10 + 1);
    } while (*(char *)((int)puVar10 + 1) != '\0');
    *(undefined4 *)((int)puVar10 + 1) = DAT_004bc4cc;
    *(undefined4 *)((int)puVar10 + 5) = DAT_004bc4d0;
    *(undefined2 *)((int)puVar10 + 9) = DAT_004bc4d4;
    iVar6 = FUN_00401fc0(local_404,&local_40c);
    if (-1 < iVar6) {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = 9;
      }
      goto LAB_004029fb;
    }
    if (bVar1) {
      return 0;
    }
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
LAB_004029fb:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0x20;
  }
  return 0;
}

