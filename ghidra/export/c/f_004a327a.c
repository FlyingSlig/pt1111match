// FUNCTION: PORT1111 0x004a327a
// name: ___strgtold12
// sig: uint ___strgtold12(_LDBL12 * pld12, char * * p_end_ptr, char * str, int mult12, int scale, int decpt, int implicit_E)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___strgtold12
   
   Library: Visual Studio 2003 Release */

uint __cdecl
___strgtold12(_LDBL12 *pld12,char **p_end_ptr,char *str,int mult12,int scale,int decpt,
             int implicit_E)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  undefined4 uVar8;
  char *pcVar9;
  byte *pbVar10;
  int local_58;
  int local_50;
  uint local_4c;
  byte *local_44;
  int local_40;
  uint local_3c;
  char local_34 [23];
  char local_1d;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined4 local_12;
  ushort local_e;
  undefined4 local_8;
  
  local_8 = DAT_004ddb0c;
  iVar5 = 0;
  pcVar9 = local_34;
  uVar4 = 0;
  local_50 = 1;
  local_3c = 0;
  bVar1 = false;
  bVar3 = false;
  bVar2 = false;
  local_58 = 0;
  local_40 = 0;
  local_4c = 0;
  local_44 = (byte *)str;
  for (; (((bVar7 = *str, bVar7 == 0x20 || (bVar7 == 9)) || (bVar7 == 10)) || (bVar7 == 0xd));
      str = str + 1) {
  }
LAB_004a32d1:
  bVar7 = *str;
  pbVar10 = (byte *)(str + 1);
  switch(iVar5) {
  case 0:
    if (('0' < (char)bVar7) && ((char)bVar7 < ':')) {
LAB_004a32ee:
      iVar5 = 3;
      goto LAB_004a350f;
    }
    if (bVar7 == DAT_004de584) {
LAB_004a32fd:
      iVar5 = 5;
      str = (char *)pbVar10;
      goto LAB_004a32d1;
    }
    if (bVar7 == 0x2b) {
      uVar4 = 0;
      iVar5 = 2;
      str = (char *)pbVar10;
      goto LAB_004a32d1;
    }
    if (bVar7 == 0x2d) {
      iVar5 = 2;
      uVar4 = 0x8000;
      str = (char *)pbVar10;
      goto LAB_004a32d1;
    }
    break;
  case 1:
    iVar5 = 1;
    bVar1 = true;
    if (('0' < (char)bVar7) && ((char)bVar7 < ':')) goto LAB_004a32ee;
    if (bVar7 == DAT_004de584) goto LAB_004a334f;
    if ((bVar7 == 0x2b) || (bVar7 == 0x2d)) goto LAB_004a3390;
    str = (char *)pbVar10;
    if (bVar7 != 0x30) goto LAB_004a3369;
    goto LAB_004a32d1;
  case 2:
    if (('0' < (char)bVar7) && ((char)bVar7 < ':')) goto LAB_004a32ee;
    str = (char *)local_44;
    if (bVar7 == DAT_004de584) goto LAB_004a32fd;
    break;
  case 3:
    while (iVar5 = _isdigit((uint)bVar7), iVar5 != 0) {
      if (local_3c < 0x19) {
        local_3c = local_3c + 1;
        *pcVar9 = bVar7 - 0x30;
        pcVar9 = pcVar9 + 1;
      }
      else {
        local_40 = local_40 + 1;
      }
      bVar7 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    }
    if (bVar7 != DAT_004de584) goto LAB_004a343f;
LAB_004a334f:
    bVar1 = true;
    iVar5 = 4;
    str = (char *)pbVar10;
    goto LAB_004a32d1;
  case 4:
    bVar3 = true;
    if (local_3c == 0) {
      while (bVar7 == 0x30) {
        local_40 = local_40 + -1;
        bVar7 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      }
    }
    while (iVar5 = _isdigit((uint)bVar7), iVar5 != 0) {
      if (local_3c < 0x19) {
        local_3c = local_3c + 1;
        *pcVar9 = bVar7 - 0x30;
        pcVar9 = pcVar9 + 1;
        local_40 = local_40 + -1;
      }
      bVar7 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    }
LAB_004a343f:
    if ((bVar7 == 0x2b) || (bVar7 == 0x2d)) {
LAB_004a3390:
      bVar1 = true;
      iVar5 = 0xb;
      str = (char *)(pbVar10 + -1);
    }
    else {
LAB_004a3369:
      bVar1 = true;
      if (((char)bVar7 < 'D') ||
         (('E' < (char)bVar7 && (((char)bVar7 < 'd' || ('e' < (char)bVar7)))))) {
LAB_004a34c9:
        str = (char *)(pbVar10 + -1);
        goto LAB_004a34cd;
      }
      iVar5 = 6;
      str = (char *)pbVar10;
    }
    goto LAB_004a32d1;
  case 5:
    bVar3 = true;
    iVar5 = _isdigit((uint)bVar7);
    str = (char *)local_44;
    if (iVar5 != 0) {
      iVar5 = 4;
      goto LAB_004a350f;
    }
    goto LAB_004a34cd;
  case 6:
    local_44 = (byte *)(str + -1);
    if (((char)bVar7 < '1') || ('9' < (char)bVar7)) {
      if (bVar7 == 0x2b) goto LAB_004a3544;
      if (bVar7 == 0x2d) goto LAB_004a3538;
      str = (char *)local_44;
      if (bVar7 == 0x30) goto LAB_004a34a7;
      goto LAB_004a34cd;
    }
LAB_004a350d:
    iVar5 = 9;
LAB_004a350f:
    str = (char *)(pbVar10 + -1);
    goto LAB_004a32d1;
  case 7:
    if (('0' < (char)bVar7) && ((char)bVar7 < ':')) goto LAB_004a350d;
    str = (char *)local_44;
    if (bVar7 != 0x30) goto LAB_004a34cd;
LAB_004a34a7:
    iVar5 = 8;
    str = (char *)pbVar10;
    goto LAB_004a32d1;
  case 8:
    bVar2 = true;
    while (bVar7 == 0x30) {
      bVar7 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    }
    if (('0' < (char)bVar7) && ((char)bVar7 < ':')) goto LAB_004a350d;
    goto LAB_004a34c9;
  case 9:
    bVar2 = true;
    local_58 = 0;
    goto LAB_004a358b;
  default:
    goto switchD_004a32dd_caseD_a;
  case 0xb:
    if (implicit_E != 0) {
      local_44 = (byte *)str;
      if (bVar7 == 0x2b) {
LAB_004a3544:
        iVar5 = 7;
        str = (char *)pbVar10;
      }
      else {
        if (bVar7 != 0x2d) goto LAB_004a34cd;
LAB_004a3538:
        local_50 = -1;
        iVar5 = 7;
        str = (char *)pbVar10;
      }
      goto LAB_004a32d1;
    }
    iVar5 = 10;
    pbVar10 = (byte *)str;
switchD_004a32dd_caseD_a:
    str = (char *)pbVar10;
    if (iVar5 != 10) goto LAB_004a32d1;
    goto LAB_004a34cd;
  }
  if (bVar7 != 0x30) goto LAB_004a34cd;
  iVar5 = 1;
  str = (char *)pbVar10;
  goto LAB_004a32d1;
LAB_004a358b:
  iVar5 = _isdigit((uint)bVar7);
  if (iVar5 == 0) goto LAB_004a35ae;
  local_58 = (char)bVar7 + -0x30 + local_58 * 10;
  if (0x1450 < local_58) {
    local_58 = 0x1451;
    goto LAB_004a35ae;
  }
  bVar7 = *pbVar10;
  pbVar10 = pbVar10 + 1;
  goto LAB_004a358b;
LAB_004a35ae:
  while( true ) {
    iVar5 = _isdigit((uint)bVar7);
    if (iVar5 == 0) break;
    bVar7 = *pbVar10;
    pbVar10 = pbVar10 + 1;
  }
  str = (char *)(pbVar10 + -1);
LAB_004a34cd:
  *p_end_ptr = str;
  if (bVar1) {
    if (0x18 < local_3c) {
      if ('\x04' < local_1d) {
        local_1d = local_1d + '\x01';
      }
      pcVar9 = pcVar9 + -1;
      local_40 = local_40 + 1;
      local_3c = 0x18;
    }
    if (local_3c != 0) {
      while (pcVar9 = pcVar9 + -1, *pcVar9 == '\0') {
        local_3c = local_3c - 1;
        local_40 = local_40 + 1;
      }
      ___mtold12(local_34,local_3c,(uint *)&local_18);
      if (local_50 < 0) {
        local_58 = -local_58;
      }
      uVar6 = local_58 + local_40;
      if (!bVar2) {
        uVar6 = uVar6 + scale;
      }
      if (!bVar3) {
        uVar6 = uVar6 - decpt;
      }
      if (0x1450 < (int)uVar6) {
        uVar8 = 0;
        local_e = 0x7fff;
        local_12 = 0x80000000;
        local_18 = 0;
        local_4c = 2;
        goto LAB_004a365b;
      }
      if (-0x1451 < (int)uVar6) {
        ___multtenpow12((int *)&local_18,uVar6,mult12);
        uVar8 = CONCAT22(uStack_14,uStack_16);
        goto LAB_004a365b;
      }
      local_4c = 1;
    }
  }
  else {
    local_4c = 4;
  }
  local_18 = 0;
  local_e = 0;
  local_12 = 0;
  uVar8 = 0;
LAB_004a365b:
  *(undefined4 *)(pld12->ld12 + 6) = local_12;
  *(undefined4 *)(pld12->ld12 + 2) = uVar8;
  *(ushort *)(pld12->ld12 + 10) = local_e | uVar4;
  *(undefined2 *)pld12->ld12 = local_18;
  return local_4c;
}

