// FUNCTION: PORT1111 0x00466530
// name: FUN_00466530
// sig: undefined FUN_00466530(void * this, byte * param_1, int * param_2)


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall FUN_00466530(void *this,byte *param_1,int *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined *_Memory;
  int *_Args;
  byte bVar3;
  byte *_Str;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  uint local_10;
  char *local_c;
  int local_8;
  
  _Args = param_2;
  bVar3 = *param_1;
  local_c = (char *)0x0;
  _Str = param_1;
  piVar9 = param_2;
  do {
    if (bVar3 == 0) {
      _Memory = *(undefined **)this;
      if ((_Memory != (undefined *)0x0) && (_Memory != PTR_DAT_004dd95c)) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *(undefined **)this = PTR_DAT_004dd95c;
      pcVar7 = _malloc((size_t)(local_c + 1));
      *(char **)this = pcVar7;
      _vsprintf(pcVar7,(char *)param_1,(va_list)_Args);
      return;
    }
    if (*_Str != 0x25) {
LAB_00466878:
      sVar6 = __mbclen(_Str);
      local_c = local_c + sVar6;
      goto LAB_00466889;
    }
    _Str = FUN_0049a192(_Str);
    bVar3 = *_Str;
    if (bVar3 == 0x25) goto LAB_00466878;
    iVar10 = 0;
    param_2 = (int *)0x0;
    if (bVar3 == 0) {
LAB_004665c0:
      param_2 = (int *)_atol((char *)_Str);
      bVar3 = *_Str;
      while ((bVar3 != 0 && (iVar4 = __ismbcdigit((int)(char)bVar3), iVar4 != 0))) {
        _Str = FUN_0049a192(_Str);
        bVar3 = *_Str;
      }
    }
    else {
      do {
        if (bVar3 == 0x23) {
          local_c = local_c + 2;
        }
        else if (bVar3 == 0x2a) {
          param_2 = (int *)*piVar9;
          piVar9 = piVar9 + 1;
        }
        else if ((((bVar3 != 0x2d) && (bVar3 != 0x2b)) && (bVar3 != 0x30)) && (bVar3 != 0x20))
        break;
        _Str = FUN_0049a192(_Str);
        bVar3 = *_Str;
      } while (bVar3 != 0);
      if (param_2 == (int *)0x0) goto LAB_004665c0;
    }
    local_8 = 0;
    piVar8 = piVar9;
    if (*_Str == 0x2e) {
      _Str = FUN_0049a192(_Str);
      if (*_Str == 0x2a) {
        local_8 = *piVar9;
        _Str = FUN_0049a192(_Str);
        piVar8 = piVar9 + 1;
      }
      else {
        local_8 = _atol((char *)_Str);
        bVar3 = *_Str;
        while ((bVar3 != 0 && (iVar4 = __ismbcdigit((int)(char)bVar3), iVar4 != 0))) {
          _Str = FUN_0049a192(_Str);
          bVar3 = *_Str;
        }
      }
    }
    local_10 = 0;
    iVar4 = __mbsnbcmp(_Str,"I64",3);
    if (iVar4 == 0) {
      _Str = _Str + 3;
      local_10 = 0x40000;
    }
    else {
      switch(*_Str) {
      case 0x46:
      case 0x4c:
      case 0x4e:
        break;
      default:
        goto switchD_00466690_caseD_47;
      case 0x68:
        local_10 = 0x10000;
        break;
      case 0x6c:
        local_10 = 0x20000;
      }
      _Str = FUN_0049a192(_Str);
    }
switchD_00466690_caseD_47:
    uVar5 = (int)(char)*_Str | local_10;
    piVar9 = piVar8;
    if ((int)uVar5 < 0x10064) {
      if (uVar5 != 0x10063) {
        if ((int)uVar5 < 0x74) {
          if (uVar5 == 0x73) {
LAB_00466715:
            if ((LPCSTR)*piVar8 != (LPCSTR)0x0) {
              iVar10 = lstrlenA((LPCSTR)*piVar8);
              goto LAB_00466761;
            }
            iVar10 = 6;
            goto LAB_00466781;
          }
          if (uVar5 != 0x43) {
            if (uVar5 != 0x53) {
              bVar11 = uVar5 == 99;
              goto LAB_004666dd;
            }
            goto LAB_00466748;
          }
        }
        else if (uVar5 != 0x10043) {
          if (uVar5 != 0x10053) goto LAB_004666e3;
          goto LAB_00466715;
        }
      }
LAB_0046676f:
      iVar10 = 2;
LAB_00466781:
      piVar9 = piVar8 + 1;
      if ((local_8 != 0) && (local_8 <= iVar10)) {
        iVar10 = local_8;
      }
      if ((int)param_2 < iVar10) goto switchD_004666f9_caseD_48;
      local_c = local_c + (int)param_2;
      goto LAB_00466889;
    }
    if ((int)uVar5 < 0x20054) {
      if (uVar5 != 0x20053) {
        if (uVar5 == 0x10073) goto LAB_00466715;
        bVar11 = uVar5 == 0x20043;
LAB_004666dd:
        if (!bVar11) goto LAB_004666e3;
        goto LAB_0046676f;
      }
LAB_00466748:
      if ((short *)*piVar8 == (short *)0x0) {
        iVar10 = 6;
      }
      else {
        iVar10 = FUN_0049a358((short *)*piVar8);
LAB_00466761:
        if (iVar10 < 1) {
          iVar10 = 1;
        }
        else {
          piVar9 = piVar8 + 1;
          if (iVar10 == 0) goto LAB_004666e3;
        }
      }
      goto LAB_00466781;
    }
    if (uVar5 == 0x20063) goto LAB_0046676f;
    if (uVar5 == 0x20073) goto LAB_00466748;
LAB_004666e3:
    switch(*_Str) {
    case 0x47:
    case 0x65:
    case 0x67:
      iVar10 = 0x80;
      piVar9 = piVar9 + 2;
      if ((int)param_2 + local_8 < 0x80) goto switchD_004666f9_caseD_48;
      local_c = local_c + (int)param_2 + local_8;
      break;
    case 0x58:
    case 100:
    case 0x69:
    case 0x6f:
    case 0x75:
    case 0x78:
      if ((local_10 & 0x40000) == 0) goto switchD_004666f9_caseD_70;
      piVar9 = piVar9 + 2;
      goto LAB_004667bc;
    case 0x66:
      pcVar7 = &stack0xffffffdc;
      uVar1 = *(undefined8 *)piVar9;
      piVar9 = piVar9 + 2;
      _sprintf(&stack0xffffffdc,"%*.*f",param_2,local_8 + 6,uVar1);
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      local_c = pcVar7 + ((int)local_c - (int)&stack0xffffffdd);
      break;
    case 0x6e:
      piVar9 = piVar9 + 1;
    default:
switchD_004666f9_caseD_48:
      local_c = local_c + iVar10;
      break;
    case 0x70:
switchD_004666f9_caseD_70:
      piVar9 = piVar9 + 1;
LAB_004667bc:
      iVar10 = 0x20;
      if (local_8 + (int)param_2 < 0x20) goto switchD_004666f9_caseD_48;
      local_c = local_c + local_8 + (int)param_2;
    }
LAB_00466889:
    _Str = FUN_0049a192(_Str);
    bVar3 = *_Str;
  } while( true );
}

