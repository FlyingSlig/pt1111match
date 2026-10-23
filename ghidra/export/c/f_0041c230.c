// FUNCTION: PORT1111 0x0041c230
// name: FUN_0041c230
// sig: undefined4 FUN_0041c230(undefined4 * param_1)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0041c230(undefined4 *param_1)

{
  byte bVar1;
  LPCSTR lpFileName;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  bool bVar6;
  DWORD dwDesiredAccess;
  DWORD dwShareMode;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  DWORD dwCreationDisposition;
  DWORD dwFlagsAndAttributes;
  HANDLE pvVar7;
  byte local_48 [4];
  int local_44;
  DWORD local_40;
  int *local_3c;
  int local_38 [8];
  byte local_18 [8];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b67b8;
  local_c = ExceptionList;
  pvVar7 = (HANDLE)0x0;
  dwFlagsAndAttributes = 0x80;
  dwCreationDisposition = 3;
  lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
  dwShareMode = 0;
  dwDesiredAccess = 0x80000000;
  local_10 = DAT_004ddb0c;
  ExceptionList = &local_c;
  lpFileName = (LPCSTR)FUN_00465e00(param_1);
  pvVar7 = CreateFileA(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,
                       dwCreationDisposition,dwFlagsAndAttributes,pvVar7);
  if (pvVar7 == (HANDLE)0xffffffff) {
    uVar2 = 0;
  }
  else {
    pbVar3 = local_48;
    local_48[0] = 0x4d;
    local_48[1] = 0x61;
    local_48[2] = 0x70;
    local_48[3] = 0;
    do {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
    ReadFile(pvVar7,local_18,(int)pbVar3 - (int)(local_48 + 1),&local_40,(LPOVERLAPPED)0x0);
    pbVar3 = local_48;
    do {
      pbVar4 = pbVar3;
      pbVar3 = pbVar4 + 1;
    } while (*pbVar4 != 0);
    pbVar4[0x30] = 0;
    pbVar3 = local_48;
    pbVar4 = local_18;
    do {
      bVar1 = *pbVar4;
      bVar6 = bVar1 < *pbVar3;
      if (bVar1 != *pbVar3) {
LAB_0041c2fa:
        iVar5 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_0041c2ff;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar6 = bVar1 < pbVar3[1];
      if (bVar1 != pbVar3[1]) goto LAB_0041c2fa;
      pbVar4 = pbVar4 + 2;
      pbVar3 = pbVar3 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_0041c2ff:
    if ((iVar5 == 0) && (ReadFile(pvVar7,&local_44,4,&local_40,(LPOVERLAPPED)0x0), 0xf < local_44))
    {
      if (local_44 < 0x12) {
        param_1 = (undefined4 *)0x1;
      }
      else {
        ReadFile(pvVar7,&param_1,4,&local_40,(LPOVERLAPPED)0x0);
        if (local_3c[3] < (int)param_1) {
          param_1 = (undefined4 *)local_3c[3];
        }
      }
      if (local_44 < 0x16) {
        param_1 = (undefined4 *)0x1;
      }
      FUN_004248d0(local_38);
      local_4 = 0;
      FUN_00424430(local_38,pvVar7,param_1,local_44);
      FUN_0042c6f0(DAT_004e2404,local_38);
      CloseHandle(pvVar7);
      (**(code **)(*local_3c + 4))();
      local_4 = 0xffffffff;
      FUN_004248a0(local_38);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  ExceptionList = local_c;
  return uVar2;
}

