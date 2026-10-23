// FUNCTION: PORT1111 0x0049f723
// name: __write_lk
// sig: int __write_lk(uint param_1, char * param_2, uint param_3)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __write_lk
   
   Library: Visual Studio 2003 Release */

int __cdecl __write_lk(uint param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  BOOL BVar4;
  int *piVar5;
  ulong *puVar6;
  uint uVar7;
  int iVar8;
  DWORD local_424;
  int local_420;
  DWORD local_41c;
  char *local_418;
  int local_414;
  ulong local_410;
  char local_40c [1028];
  undefined4 local_8;
  
  local_8 = DAT_004ddb0c;
  local_41c = 0;
  local_420 = 0;
  if (param_3 == 0) {
    return 0;
  }
  piVar5 = &DAT_004e3440 + ((int)param_1 >> 5);
  iVar8 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)(*piVar5 + 4 + iVar8) & 0x20) != 0) {
    __lseeki64_lk(param_1,0,0,2);
  }
  if ((*(byte *)((undefined4 *)(*piVar5 + iVar8) + 1) & 0x80) == 0) {
    BVar4 = WriteFile(*(HANDLE *)(*piVar5 + iVar8),param_2,param_3,&local_424,(LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
      local_410 = GetLastError();
    }
    else {
      local_410 = 0;
      local_41c = local_424;
    }
LAB_0049f83f:
    if (local_41c != 0) {
      return local_41c - local_420;
    }
    if (local_410 != 0) {
      if (local_410 == 5) {
        piVar5 = FUN_0049fc4d();
        *piVar5 = 9;
        puVar6 = FUN_0049fc56();
        *puVar6 = 5;
        return -1;
      }
      __dosmaperr(local_410);
      return -1;
    }
  }
  else {
    local_418 = param_2;
    local_410 = 0;
    if (param_3 != 0) {
      do {
        uVar7 = (int)local_418 - (int)param_2;
        pcVar3 = local_40c;
        local_414 = 0;
        do {
          if (param_3 <= uVar7) break;
          pcVar1 = local_418 + 1;
          cVar2 = *local_418;
          uVar7 = uVar7 + 1;
          if (cVar2 == '\n') {
            local_420 = local_420 + 1;
            *pcVar3 = '\r';
            pcVar3 = pcVar3 + 1;
            local_414 = local_414 + 1;
          }
          *pcVar3 = cVar2;
          pcVar3 = pcVar3 + 1;
          local_414 = local_414 + 1;
          local_418 = pcVar1;
        } while (local_414 < 0x400);
        BVar4 = WriteFile(*(HANDLE *)(*piVar5 + iVar8),local_40c,(int)pcVar3 - (int)local_40c,
                          &local_424,(LPOVERLAPPED)0x0);
        if (BVar4 == 0) {
          local_410 = GetLastError();
          goto LAB_0049f83f;
        }
        local_41c = local_41c + local_424;
        if (((int)local_424 < (int)pcVar3 - (int)local_40c) ||
           (param_3 <= (uint)((int)local_418 - (int)param_2))) goto LAB_0049f83f;
      } while( true );
    }
  }
  if (((*(byte *)(*piVar5 + 4 + iVar8) & 0x40) != 0) && (*param_2 == '\x1a')) {
    return 0;
  }
  piVar5 = FUN_0049fc4d();
  *piVar5 = 0x1c;
  puVar6 = FUN_0049fc56();
  *puVar6 = 0;
  return -1;
}

