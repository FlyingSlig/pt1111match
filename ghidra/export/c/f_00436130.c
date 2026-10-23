// FUNCTION: PORT1111 0x00436130
// name: FUN_00436130
// sig: int FUN_00436130(void)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00436130(void)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte bVar6;
  int *piVar7;
  uint uVar8;
  byte *pbVar9;
  double dVar10;
  byte *local_40c;
  byte *local_408;
  byte local_404 [1024];
  undefined4 local_4;
  
  local_4 = DAT_004ddb0c;
  piVar7 = DAT_004e21dc;
  if (DAT_004d6ab8 != 0) {
    DAT_004d6ab8 = 0;
    if (DAT_004e21e4 == 0) {
      DAT_004e21e4 = 1;
    }
    if (DAT_004e21e8 == (undefined **)0x0) {
      DAT_004e21e8 = &PTR_DAT_004ddb30;
    }
    if (DAT_004e21ec == (FILE *)0x0) {
      DAT_004e21ec = (FILE *)&DAT_004ddb50;
    }
    if (DAT_004e21dc == (int *)0x0) {
      DAT_004e21dc = FUN_00435e20((int)DAT_004e21e8,0x4000);
    }
    DAT_004e21d0 = DAT_004e21dc[4];
    DAT_004e21e8 = (undefined **)*DAT_004e21dc;
    DAT_004e21c8 = *(byte *)DAT_004e21dc[2];
    piVar7 = DAT_004e21dc;
    DAT_004e21e0 = (byte *)DAT_004e21dc[2];
  }
switchD_004362e9_caseD_2:
  uVar8 = DAT_004e21e4;
  *DAT_004e21e0 = DAT_004e21c8;
  pbVar9 = DAT_004e21e0;
  local_408 = DAT_004e21e0;
LAB_00436200:
  do {
    bVar6 = (&DAT_004d6b20)[(uint)*pbVar9 * 4];
    iVar3 = uVar8 * 2;
    if (*(short *)(&DAT_004d6ac0 + iVar3) != 0) {
      DAT_004e21cc = pbVar9;
      DAT_004e21d8 = uVar8;
    }
    uVar5 = (uint)bVar6;
    if ((int)*(short *)(&DAT_004d7138 + ((int)*(short *)(&DAT_004d6f88 + iVar3) + uVar5) * 2) !=
        uVar8) {
      do {
        uVar8 = (uint)*(short *)(&DAT_004d6ff0 + iVar3);
        if (0x2c < (int)uVar8) {
          bVar6 = (&DAT_004d6f20)[uVar5 * 4];
        }
        iVar3 = uVar8 * 2;
        uVar5 = (uint)bVar6;
      } while ((int)*(short *)(&DAT_004d7138 + ((int)*(short *)(&DAT_004d6f88 + iVar3) + uVar5) * 2)
               != uVar8);
    }
    uVar5 = (uint)*(short *)(&DAT_004d7058 +
                            ((int)*(short *)(&DAT_004d6f88 + uVar8 * 2) + (uint)bVar6) * 2);
    pbVar9 = pbVar9 + 1;
    uVar8 = uVar5;
  } while (*(short *)(&DAT_004d6f88 + uVar5 * 2) != 0x54);
LAB_00436293:
  iVar3 = (int)*(short *)(&DAT_004d6ac0 + uVar5 * 2);
  if (iVar3 == 0) {
    iVar3 = (int)*(short *)(&DAT_004d6ac0 + DAT_004e21d8 * 2);
    pbVar9 = DAT_004e21cc;
  }
  DAT_004e31e0 = (int)pbVar9 - (int)local_408;
  DAT_004e31dc = local_408;
  DAT_004e21c8 = *pbVar9;
  *pbVar9 = 0;
  pbVar4 = pbVar9;
LAB_004362da:
  pbVar1 = DAT_004e31dc;
  uVar5 = DAT_004e21d8;
  DAT_004e21e0 = pbVar4;
  switch(iVar3) {
  case 0:
    goto switchD_004362e9_caseD_0;
  case 1:
    return 0x104;
  case 2:
  case 3:
  case 0xb:
  case 0xc:
    goto switchD_004362e9_caseD_2;
  case 4:
    uVar8 = FUN_00437370(DAT_004e31dc,&local_40c);
    pbVar9 = local_40c;
    if (uVar8 == 0) {
      pbVar9 = DAT_004e31dc;
      do {
        bVar6 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar6 != 0);
      pbVar4 = _malloc((size_t)(pbVar9 + (1 - (int)(DAT_004e31dc + 1))));
      pbVar9 = DAT_004e31dc;
      DAT_004e31cc = pbVar4;
      do {
        bVar6 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        *pbVar4 = bVar6;
        pbVar4 = pbVar4 + 1;
      } while (bVar6 != 0);
      return 0x105;
    }
    break;
  case 5:
    dVar10 = _atof((char *)DAT_004e31dc);
    DAT_004e31cc = (byte *)(float)dVar10;
    return 0x107;
  case 6:
    pbVar9 = (byte *)_atol((char *)DAT_004e31dc);
    break;
  case 7:
    _sscanf((char *)DAT_004e31dc,"%x",&DAT_004e31cc);
    pbVar9 = DAT_004e31cc;
    break;
  case 8:
    local_40c = local_404;
    DAT_004e21e4 = 3;
    goto switchD_004362e9_caseD_2;
  case 9:
    pbVar9 = local_404;
    DAT_004e21e4 = 1;
    *local_40c = 0;
    do {
      bVar6 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (bVar6 != 0);
    pbVar4 = _malloc((size_t)(pbVar9 + (1 - (int)(local_404 + 1))));
    pbVar9 = local_404;
    DAT_004e31cc = pbVar4;
    do {
      bVar6 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      *pbVar4 = bVar6;
      pbVar4 = pbVar4 + 1;
    } while (bVar6 != 0);
    return 0x108;
  case 10:
    *local_40c = *DAT_004e31dc;
    local_40c = local_40c + 1;
    goto switchD_004362e9_caseD_2;
  case 0xd:
    return (int)(char)*DAT_004e31dc;
  case 0xe:
    FID_conflict__fwprintf
              ((FILE *)&DAT_004ddb70,(wchar_t *)"Unexpected character %c %d\n",
               (int)(char)*DAT_004e31dc,(int)(char)*DAT_004e31dc);
    piVar7 = DAT_004e21dc;
    goto switchD_004362e9_caseD_2;
  case 0xf:
    _fwrite(DAT_004e31dc,DAT_004e31e0,1,DAT_004e21ec);
    piVar7 = DAT_004e21dc;
    goto switchD_004362e9_caseD_2;
  case 0x10:
    *pbVar9 = DAT_004e21c8;
    if (piVar7[9] == 0) {
      DAT_004e21d0 = piVar7[4];
      *piVar7 = (int)DAT_004e21e8;
      piVar7[9] = 1;
    }
    pbVar2 = DAT_004e31dc;
    if ((byte *)(piVar7[1] + DAT_004e21d0) < pbVar4) {
      iVar3 = FUN_00435f20();
      pbVar4 = DAT_004e31dc;
      piVar7 = DAT_004e21dc;
      if (iVar3 == 0) {
        pbVar9 = DAT_004e31dc + (int)(pbVar9 + (-1 - (int)pbVar1));
        DAT_004e21e0 = pbVar9;
        uVar8 = FUN_00435a50();
        local_408 = pbVar4;
        piVar7 = DAT_004e21dc;
        goto LAB_00436200;
      }
      if (iVar3 == 1) goto code_r0x00436337;
      if (iVar3 != 2) goto switchD_004362e9_caseD_2;
      pbVar9 = (byte *)(DAT_004e21dc[1] + DAT_004e21d0);
      DAT_004e21e0 = pbVar9;
      uVar5 = FUN_00435a50();
      local_408 = DAT_004e31dc;
      goto LAB_00436293;
    }
    pbVar9 = DAT_004e31dc + (int)(pbVar9 + (-1 - (int)pbVar1));
    DAT_004e21e0 = pbVar9;
    uVar5 = FUN_00435a50();
    uVar8 = FUN_00435b10();
    local_408 = pbVar2;
    if (uVar8 == 0) goto LAB_00436293;
    pbVar9 = pbVar9 + 1;
    goto LAB_00436200;
  case 0x11:
  case 0x12:
    return 0;
  default:
    iVar3 = FUN_00435c10();
    return iVar3;
  }
  DAT_004e31cc = pbVar9;
  return 0x106;
code_r0x00436337:
  _DAT_004e21d4 = 0;
  iVar3 = (int)(DAT_004e21e4 - 1) / 2 + 0x11;
  goto LAB_004362da;
switchD_004362e9_caseD_0:
  *pbVar9 = DAT_004e21c8;
  pbVar9 = DAT_004e21cc;
  goto LAB_00436293;
}

