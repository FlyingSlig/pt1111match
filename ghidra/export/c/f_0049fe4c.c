// FUNCTION: PORT1111 0x0049fe4c
// name: setSBUpLow
// sig: undefined setSBUpLow(void)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _setSBUpLow
   
   Library: Visual Studio 2003 Release */

void __cdecl setSBUpLow(void)

{
  BOOL BVar1;
  uint uVar2;
  CHAR CVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  BYTE *pBVar7;
  CHAR *pCVar8;
  WORD local_51c [256];
  CHAR local_31c [256];
  CHAR local_21c [256];
  CHAR local_11c [256];
  _cpinfo local_1c;
  undefined4 local_8;
  
  local_8 = DAT_004ddb0c;
  BVar1 = GetCPInfo(DAT_004e3304,&local_1c);
  if (BVar1 == 1) {
    uVar2 = 0;
    do {
      local_11c[uVar2] = (CHAR)uVar2;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x100);
    local_11c[0] = ' ';
    if (local_1c.LeadByte[0] != 0) {
      pBVar7 = local_1c.LeadByte + 1;
      do {
        uVar2 = (uint)local_1c.LeadByte[0];
        if (uVar2 <= *pBVar7) {
          uVar5 = (*pBVar7 - uVar2) + 1;
          uVar6 = uVar5 >> 2;
          pCVar8 = local_11c + uVar2;
          while (uVar6 != 0) {
            uVar6 = uVar6 - 1;
            builtin_memcpy(pCVar8,"    ",4);
            pCVar8 = pCVar8 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pCVar8 = ' ';
            pCVar8 = pCVar8 + 1;
          }
        }
        local_1c.LeadByte[0] = pBVar7[1];
        pBVar7 = pBVar7 + 2;
      } while (local_1c.LeadByte[0] != 0);
    }
    FUN_004a0ef9(1,local_11c,0x100,local_51c,DAT_004e3304,DAT_004e31f0,0);
    FUN_0049c757(DAT_004e31f0,0x100,local_11c,0x100,local_21c,0x100,DAT_004e3304,0);
    FUN_0049c757(DAT_004e31f0,0x200,local_11c,0x100,local_31c,0x100,DAT_004e3304,0);
    uVar2 = 0;
    do {
      if ((local_51c[uVar2] & 1) == 0) {
        if ((local_51c[uVar2] & 2) != 0) {
          (&DAT_004e3201)[uVar2] = (&DAT_004e3201)[uVar2] | 0x20;
          CVar3 = local_31c[uVar2];
          goto LAB_0049ff5e;
        }
        (&DAT_004e3320)[uVar2] = 0;
      }
      else {
        (&DAT_004e3201)[uVar2] = (&DAT_004e3201)[uVar2] | 0x10;
        CVar3 = local_21c[uVar2];
LAB_0049ff5e:
        (&DAT_004e3320)[uVar2] = CVar3;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x100);
  }
  else {
    uVar2 = 0;
    do {
      if ((uVar2 < 0x41) || (0x5a < uVar2)) {
        if ((0x60 < uVar2) && (uVar2 < 0x7b)) {
          (&DAT_004e3201)[uVar2] = (&DAT_004e3201)[uVar2] | 0x20;
          cVar4 = (char)uVar2 + -0x20;
          goto LAB_0049ffa1;
        }
        (&DAT_004e3320)[uVar2] = 0;
      }
      else {
        (&DAT_004e3201)[uVar2] = (&DAT_004e3201)[uVar2] | 0x10;
        cVar4 = (char)uVar2 + ' ';
LAB_0049ffa1:
        (&DAT_004e3320)[uVar2] = cVar4;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x100);
  }
  return;
}

