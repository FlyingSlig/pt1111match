// FUNCTION: PORT1111 0x004394d0
// name: FUN_004394d0
// sig: undefined4 FUN_004394d0(void)


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004394d0(void)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  char *pcVar6;
  short *psVar7;
  char *pcVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  char *pcVar15;
  int iVar16;
  undefined2 *puVar17;
  void *_Memory;
  int local_4e4 [200];
  int local_1c4;
  int *local_1c0;
  int local_1bc;
  short *local_1b8;
  int local_1b4;
  short *local_1b0;
  int local_1ac;
  short *local_1a8;
  int *local_1a4;
  int local_1a0;
  undefined4 local_19c;
  short local_198 [200];
  undefined4 local_8;
  
  local_8 = DAT_004ddb0c;
  iVar12 = 0;
  local_1b0 = local_198;
  local_1bc = 0;
  local_1c0 = local_4e4;
  local_1b4 = 200;
  if (DAT_004e31d0 != 0) {
    FID_conflict__fwprintf((FILE *)&DAT_004ddb70,(wchar_t *)"Starting parse\n");
  }
  local_1a0 = 0;
  _DAT_004e31d8 = 0;
  DAT_004e31d4 = 0xfffffffe;
  piVar11 = local_4e4;
  psVar7 = (short *)((int)&local_19c + 2);
LAB_00439546:
  local_1ac = iVar12;
LAB_00439550:
  psVar5 = local_1b0;
  psVar7 = psVar7 + 1;
  *psVar7 = (short)local_1ac;
  local_1a8 = psVar7;
  if (local_1b0 + local_1b4 + -1 <= psVar7) {
    iVar12 = (int)psVar7 - (int)local_1b0 >> 1;
    local_1a4 = local_1c0;
    iVar16 = iVar12 + 1;
    if (9999 < local_1b4) {
      FID_conflict__fwprintf((FILE *)&DAT_004ddb70,(wchar_t *)"########## ERRO ############: %s\n");
      FID_conflict__fwprintf
                ((FILE *)&DAT_004ddb70,(wchar_t *)"\t Last Valid Identifier: %s\n",&DAT_004e21f0);
      FID_conflict__fwprintf
                ((FILE *)&DAT_004ddb70,(wchar_t *)"\t Last Valid Parameter: %s\n",&DAT_004e22f0);
      return 2;
    }
    local_1b4 = local_1b4 * 2;
    if (10000 < local_1b4) {
      local_1b4 = 10000;
    }
    iVar3 = local_1b4 * -2;
    iVar13 = iVar16 * 2;
    local_1b0 = (short *)((int)local_4e4 + iVar3 + -0xc);
    if (0 < iVar13) {
      iVar4 = iVar3 - (int)psVar5;
      do {
        *(char *)((int)local_4e4 + iVar4 + -0xc + (int)psVar5) = (char)*psVar5;
        psVar5 = (short *)((int)psVar5 + 1);
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    *(undefined4 *)((int)local_4e4 + iVar3 + -0x10) = 0x4395db;
    piVar11 = (int *)(iVar16 * 4);
    local_1c0 = (int *)&stack0xfffffb10;
    if (0 < (int)piVar11) {
      iVar16 = -0xc - (int)local_1a4;
      piVar9 = local_1a4;
      local_1a4 = piVar11;
      do {
        *(char *)((int)piVar9 + (int)local_4e4 + iVar16) = (char)*piVar9;
        piVar9 = (int *)((int)piVar9 + 1);
        local_1a4 = (int *)((int)local_1a4 + -1);
      } while (local_1a4 != (int *)0x0);
    }
    piVar11 = (int *)((int)piVar11 + (int)&stack0xfffffb0c);
    psVar7 = local_1b0 + iVar12;
    local_1a8 = psVar7;
    if (DAT_004e31d0 != 0) {
      FID_conflict__fwprintf((FILE *)&DAT_004ddb70,(wchar_t *)"Stack size increased to %d\n");
    }
    if (local_1b0 + local_1b4 + -1 <= psVar7) {
      return 1;
    }
  }
  if (DAT_004e31d0 != 0) {
    FID_conflict__fwprintf((FILE *)&DAT_004ddb70,(wchar_t *)"Entering state %d\n");
  }
  local_1a4 = (int *)(&DAT_004d7568 + local_1ac * 2);
  local_19c = (uint)(short)*local_1a4;
  if (local_19c == 0xffff8000) {
LAB_004398ac:
    local_19c = (int)*(short *)(&DAT_004d74f8 + local_1ac * 2);
    if ((int)*(short *)(&DAT_004d74f8 + local_1ac * 2) != 0) goto LAB_0043977c;
LAB_004398c5:
    pcVar14 = (char *)0x0;
    if (local_1a0 != 0) {
      if (local_1a0 == 3) {
        if (DAT_004e31d4 == 0) {
          return 1;
        }
        if (DAT_004e31d0 != 0) {
          FID_conflict__fwprintf
                    ((FILE *)&DAT_004ddb70,(wchar_t *)"Discarding token %d (%s).\n",DAT_004e31d4);
        }
        DAT_004e31d4 = 0xfffffffe;
      }
      goto LAB_00439b95;
    }
    _DAT_004e31d8 = _DAT_004e31d8 + 1;
    local_19c = (uint)(short)*local_1a4;
    if (((int)local_19c < -0x7fff) || (0x28 < (int)local_19c)) {
      FID_conflict__fwprintf((FILE *)&DAT_004ddb70,(wchar_t *)"########## ERRO ############: %s\n");
      FID_conflict__fwprintf
                ((FILE *)&DAT_004ddb70,(wchar_t *)"\t Last Valid Identifier: %s\n",&DAT_004e21f0);
      FID_conflict__fwprintf
                ((FILE *)&DAT_004ddb70,(wchar_t *)"\t Last Valid Parameter: %s\n",&DAT_004e22f0);
      goto LAB_00439b95;
    }
    local_1a0 = 0;
    if ((int)local_19c < 0) {
      uVar10 = -local_19c;
      if (uVar10 < 0x1c) goto LAB_0043990c;
    }
    else {
      uVar10 = 0;
LAB_0043990c:
      local_1b8 = (short *)(&DAT_004d7630 + (local_19c + uVar10) * 2);
      do {
        if ((int)*local_1b8 == uVar10) {
          pcVar6 = (&PTR_DAT_004d7428)[uVar10];
          pcVar8 = pcVar6 + 1;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          pcVar14 = pcVar6 + (int)(pcVar14 + (0xf - (int)pcVar8));
          local_1a0 = local_1a0 + 1;
        }
        uVar10 = uVar10 + 1;
        local_1b8 = local_1b8 + 1;
      } while (uVar10 < 0x1c);
    }
    psVar7 = _malloc((size_t)(pcVar14 + 0xf));
    uVar10 = local_19c;
    local_1b8 = psVar7;
    if (psVar7 == (short *)0x0) {
      FID_conflict__fwprintf((FILE *)&DAT_004ddb70,(wchar_t *)"########## ERRO ############: %s\n");
      FID_conflict__fwprintf
                ((FILE *)&DAT_004ddb70,(wchar_t *)"\t Last Valid Identifier: %s\n",&DAT_004e21f0);
      FID_conflict__fwprintf
                ((FILE *)&DAT_004ddb70,(wchar_t *)"\t Last Valid Parameter: %s\n",&DAT_004e22f0);
LAB_00439b95:
      local_1a0 = 3;
LAB_00439ba0:
      if (((*(short *)(&DAT_004d7568 + local_1ac * 2) != -0x8000) &&
          (iVar12 = *(short *)(&DAT_004d7568 + local_1ac * 2) + 1, -1 < iVar12)) &&
         ((iVar12 < 0x2a && (*(short *)(&DAT_004d7630 + iVar12 * 2) == 1)))) {
        iVar12 = (int)*(short *)(&DAT_004d75d8 + iVar12 * 2);
        if (iVar12 < 0) {
          if (iVar12 != -0x8000) goto code_r0x00439bd9;
        }
        else if (iVar12 != 0) {
          if (iVar12 == 0x2a) {
            return 0;
          }
          if (DAT_004e31d0 != 0) {
            FID_conflict__fwprintf((FILE *)&DAT_004ddb70,(wchar_t *)"Shifting error token, ");
          }
          piVar11 = piVar11 + 1;
          *piVar11 = DAT_004e31cc;
          psVar7 = local_1a8;
          goto LAB_00439546;
        }
      }
      if (local_1a8 == local_1b0) {
        return 1;
      }
      psVar7 = local_1a8 + -1;
      local_1a8 = local_1a8 + -1;
      piVar11 = piVar11 + -1;
      local_1ac = (int)*psVar7;
      if (DAT_004e31d0 != 0) {
        psVar7 = local_1b0 + -1;
        FID_conflict__fwprintf((FILE *)&DAT_004ddb70,(wchar_t *)"Error: state stack now");
        psVar5 = local_1a8;
        for (; psVar7 != psVar5; psVar7 = psVar7 + 1) {
          FID_conflict__fwprintf((FILE *)&DAT_004ddb70,L"┠d乕䑉䑁卅䑟卉佐䥎䕖卉");
        }
        FID_conflict__fwprintf((FILE *)&DAT_004ddb70,L"\n");
      }
      goto LAB_00439ba0;
    }
    *(undefined4 *)psVar7 = s_parse_error_004c0388._0_4_;
    *(undefined4 *)(psVar7 + 2) = s_parse_error_004c0388._4_4_;
    *(undefined4 *)(psVar7 + 4) = s_parse_error_004c0388._8_4_;
    if (4 < local_1a0) goto LAB_00439a7b;
    local_1a0 = 0;
    if ((int)local_19c < 0) {
      local_19c = -local_19c;
      if (0x1b < local_19c) goto LAB_00439a7b;
    }
    else {
      local_19c = 0;
    }
    local_1a4 = (int *)(&DAT_004d7630 + (uVar10 + local_19c) * 2);
    do {
      if ((int)(short)*local_1a4 == local_19c) {
        pcVar8 = ", expecting `";
        pcVar14 = pcVar8;
        if (local_1a0 != 0) {
          pcVar8 = " or `";
          pcVar14 = pcVar8;
        }
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        pcVar6 = (char *)((int)psVar7 + -1);
        do {
          pcVar15 = pcVar6 + 1;
          pcVar6 = pcVar6 + 1;
        } while (*pcVar15 != '\0');
        pcVar15 = pcVar14;
        for (uVar10 = (uint)((int)pcVar8 - (int)pcVar14) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar6 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar6 = pcVar6 + 4;
        }
        for (uVar10 = (int)pcVar8 - (int)pcVar14 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar6 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar6 = pcVar6 + 1;
        }
        pcVar14 = (&PTR_DAT_004d7428)[local_19c];
        pcVar8 = pcVar14;
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        pcVar6 = (char *)((int)psVar7 + -1);
        do {
          pcVar15 = pcVar6 + 1;
          pcVar6 = pcVar6 + 1;
        } while (*pcVar15 != '\0');
        pcVar15 = pcVar14;
        for (uVar10 = (uint)((int)pcVar8 - (int)pcVar14) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar6 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar6 = pcVar6 + 4;
        }
        for (uVar10 = (int)pcVar8 - (int)pcVar14 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar6 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar6 = pcVar6 + 1;
        }
        puVar17 = (undefined2 *)((int)psVar7 + -1);
        do {
          pcVar14 = (char *)((int)puVar17 + 1);
          puVar17 = (undefined2 *)((int)puVar17 + 1);
        } while (*pcVar14 != '\0');
        *puVar17 = DAT_004c036c;
        local_1a0 = local_1a0 + 1;
      }
      local_19c = local_19c + 1;
      local_1a4 = (int *)((int)local_1a4 + 2);
    } while (local_19c < 0x1c);
LAB_00439a7b:
    FID_conflict__fwprintf((FILE *)&DAT_004ddb70,(wchar_t *)"########## ERRO ############: %s\n");
    FID_conflict__fwprintf
              ((FILE *)&DAT_004ddb70,(wchar_t *)"\t Last Valid Identifier: %s\n",&DAT_004e21f0);
    FID_conflict__fwprintf
              ((FILE *)&DAT_004ddb70,(wchar_t *)"\t Last Valid Parameter: %s\n",&DAT_004e22f0);
                    /* WARNING: Subroutine does not return */
    _free(psVar7);
  }
  if (DAT_004e31d4 == 0xfffffffe) {
    if (DAT_004e31d0 != 0) {
      FID_conflict__fwprintf((FILE *)&DAT_004ddb70,(wchar_t *)"Reading a token: ");
    }
    DAT_004e31d4 = FUN_00436130();
  }
  if ((int)DAT_004e31d4 < 1) {
    iVar12 = 0;
    local_1bc = 0;
    DAT_004e31d4 = 0;
    if (DAT_004e31d0 != 0) {
      FID_conflict__fwprintf((FILE *)&DAT_004ddb70,(wchar_t *)"Now at end of input.\n");
    }
  }
  else {
    if (DAT_004e31d4 < 0x10a) {
      iVar12 = (int)(char)(&DAT_004d7218)[DAT_004e31d4];
    }
    else {
      iVar12 = 0x1b;
    }
    local_1bc = iVar12;
    if (DAT_004e31d0 != 0) {
      FID_conflict__fwprintf((FILE *)&DAT_004ddb70,(wchar_t *)"Next token is %d (%s",DAT_004e31d4);
      FID_conflict__fwprintf((FILE *)&DAT_004ddb70,L"਩");
    }
  }
  iVar16 = local_19c + iVar12;
  if (((iVar16 < 0) || (0x29 < iVar16)) || (*(short *)(&DAT_004d7630 + iVar16 * 2) != iVar12))
  goto LAB_004398ac;
  iVar12 = (int)*(short *)(&DAT_004d75d8 + iVar16 * 2);
  if (-1 < iVar12) {
    if (iVar12 == 0) goto LAB_004398c5;
    if (iVar12 == 0x2a) {
      return 0;
    }
    if (DAT_004e31d0 != 0) {
      FID_conflict__fwprintf
                ((FILE *)&DAT_004ddb70,(wchar_t *)"Shifting token %d (%s), ",DAT_004e31d4);
    }
    if (DAT_004e31d4 != 0) {
      DAT_004e31d4 = 0xfffffffe;
    }
    piVar11 = piVar11 + 1;
    *piVar11 = DAT_004e31cc;
    if (local_1a0 != 0) {
      local_1a0 = local_1a0 + -1;
    }
    goto LAB_00439546;
  }
  if (iVar12 == -0x8000) goto LAB_004398c5;
  local_19c = -iVar12;
LAB_0043977c:
  uVar10 = local_19c;
  local_1a4 = (int *)(int)*(short *)(&DAT_004d74c8 + local_19c * 2);
  if (0 < (int)local_1a4) {
    local_1c4 = piVar11[1 - (int)local_1a4];
  }
  if (DAT_004e31d0 != 0) {
    FID_conflict__fwprintf
              ((FILE *)&DAT_004ddb70,(wchar_t *)"Reducing via rule %d (line %d), ",local_19c);
    psVar7 = (short *)(&DAT_004d7358 + *(short *)(&DAT_004d7324 + uVar10 * 2) * 2);
    sVar2 = *psVar7;
    while (0 < sVar2) {
      FID_conflict__fwprintf
                ((FILE *)&DAT_004ddb70,L"猥 敒畤楣杮瘠慩爠汵⁥搥⠠楬敮┠⥤\x202c");
      psVar7 = psVar7 + 1;
      uVar10 = local_19c;
      sVar2 = *psVar7;
    }
    FID_conflict__fwprintf((FILE *)&DAT_004ddb70,(wchar_t *)" -> %s\n");
    psVar7 = local_1a8;
  }
  switch(uVar10) {
  case 5:
    _strncpy(&DAT_004e21f0,(char *)piVar11[-1],0xff);
    DAT_004e22ef = 0;
    FUN_00438300((uchar *)piVar11[-1],(uchar *)0x0);
                    /* WARNING: Subroutine does not return */
    _free((void *)piVar11[-1]);
  case 6:
    _strncpy(&DAT_004e21f0,(char *)piVar11[-1],0xff);
    DAT_004e22ef = 0;
    FUN_00438300((uchar *)piVar11[-2],(uchar *)piVar11[-1]);
                    /* WARNING: Subroutine does not return */
    _free((void *)piVar11[-2]);
  case 7:
    _strncpy(&DAT_004e21f0,(char *)piVar11[-3],0xff);
    DAT_004e22ef = 0;
    FUN_00438300((uchar *)piVar11[-3],(uchar *)0x0);
                    /* WARNING: Subroutine does not return */
    _free((void *)piVar11[-3]);
  case 8:
    _strncpy(&DAT_004e21f0,(char *)piVar11[-3],0xff);
    DAT_004e22ef = 0;
    FUN_00438300((uchar *)piVar11[-4],(uchar *)piVar11[-3]);
                    /* WARNING: Subroutine does not return */
    _free((void *)piVar11[-4]);
  case 9:
    _strncpy(&DAT_004e21f0,(char *)piVar11[-1],0xff);
    DAT_004e22ef = 0;
    FUN_00438ea0((char *)piVar11[-1],*piVar11);
                    /* WARNING: Subroutine does not return */
    _free((void *)piVar11[-1]);
  case 10:
                    /* WARNING: Subroutine does not return */
    _free((void *)*piVar11);
  case 0xb:
    FUN_00438340();
    break;
  case 0xf:
    FUN_004387f0((uchar *)piVar11[-3],(uchar *)piVar11[-1]);
    _strncpy(&DAT_004e22f0,(char *)piVar11[-3],0xff);
    DAT_004e23ef = 0;
                    /* WARNING: Subroutine does not return */
    _free((void *)piVar11[-3]);
  case 0x10:
    _strncpy(&DAT_004e22f0,(char *)piVar11[-3],0xff);
    DAT_004e23ef = 0;
    FUN_00438810((uchar *)piVar11[-3],piVar11[-1]);
                    /* WARNING: Subroutine does not return */
    _free((void *)piVar11[-3]);
  case 0x11:
    _strncpy(&DAT_004e22f0,(char *)piVar11[-3],0xff);
    DAT_004e23ef = 0;
    FUN_00438830((uchar *)piVar11[-3]);
                    /* WARNING: Subroutine does not return */
    _free((void *)piVar11[-3]);
  case 0x12:
    _strncpy(&DAT_004e22f0,(char *)piVar11[-3],0xff);
    DAT_004e23ef = 0;
    FUN_00438830((uchar *)piVar11[-3]);
                    /* WARNING: Subroutine does not return */
    _free((void *)piVar11[-3]);
  case 0x13:
    FUN_004387e0();
    break;
  case 0x14:
    FUN_00438320();
    break;
  case 0x15:
    FUN_00438320();
    break;
  case 0x16:
    FUN_00438330((uchar *)*piVar11);
    _Memory = (void *)*piVar11;
    goto LAB_00439f14;
  case 0x17:
    FUN_00438330((uchar *)*piVar11);
    _Memory = (void *)*piVar11;
LAB_00439f14:
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  piVar9 = local_1a4;
  psVar7 = psVar7 + -(int)local_1a4;
  local_1a8 = psVar7;
  if (DAT_004e31d0 != 0) {
    psVar5 = local_1b0 + -1;
    FID_conflict__fwprintf((FILE *)&DAT_004ddb70,(wchar_t *)"state stack now");
    for (; psVar5 != psVar7; psVar5 = psVar5 + 1) {
      FID_conflict__fwprintf((FILE *)&DAT_004ddb70,L"┠d乕䑉䑁卅䑟卉佐䥎䕖卉");
    }
    FID_conflict__fwprintf((FILE *)&DAT_004ddb70,L"\n");
    uVar10 = local_19c;
    psVar7 = local_1a8;
  }
  piVar11 = piVar11 + (1 - (int)piVar9);
  *piVar11 = local_1c4;
  iVar12 = (int)*(short *)(&DAT_004d759c + *(short *)(&DAT_004d7498 + uVar10 * 2) * 2) +
           (int)*psVar7;
  if (((iVar12 < 0) || (0x29 < iVar12)) || (*(short *)(&DAT_004d7630 + iVar12 * 2) != *psVar7)) {
    local_1ac = (int)*(short *)(&DAT_004d752c + *(short *)(&DAT_004d7498 + uVar10 * 2) * 2);
  }
  else {
    local_1ac = (int)*(short *)(&DAT_004d75d8 + iVar12 * 2);
  }
  goto LAB_00439550;
code_r0x00439bd9:
  local_19c = -iVar12;
  psVar7 = local_1a8;
  goto LAB_0043977c;
}

