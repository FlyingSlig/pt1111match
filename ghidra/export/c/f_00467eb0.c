// FUNCTION: PORT1111 0x00467eb0
// name: FUN_00467eb0
// sig: undefined4 FUN_00467eb0(void * this, uchar * param_1)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall FUN_00467eb0(void *this,uchar *param_1)

{
  LPCSTR pCVar1;
  DWORD DVar2;
  int iVar3;
  UINT uType;
  undefined4 local_dc;
  CHAR local_d8 [200];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b982b;
  local_c = ExceptionList;
  local_10 = DAT_004ddb0c;
  ExceptionList = &local_c;
  FUN_00466af0(&local_dc,param_1,0xffffffff);
  local_4 = 0;
  thunk_FUN_00466040(&local_dc,"CD.INI");
  pCVar1 = (LPCSTR)FUN_00465e00(&local_dc);
  DVar2 = GetPrivateProfileStringA("CDID","AppGUID","",local_d8,200,pCVar1);
  if (DVar2 == 0) {
    do {
      uType = 0x35;
      pCVar1 = (LPCSTR)FUN_00465e00((undefined4 *)((int)this + 0x14));
      iVar3 = MessageBoxA((HWND)0x0,"Introduza o CD e tente de novo.",pCVar1,uType);
      if (iVar3 == 2) {
        local_4 = 0xffffffff;
        FUN_00465e40(&local_dc);
        ExceptionList = local_c;
        return 0;
      }
      pCVar1 = (LPCSTR)FUN_00465e00(&local_dc);
      DVar2 = GetPrivateProfileStringA("CDID","AppGUID","",local_d8,200,pCVar1);
    } while (DVar2 == 0);
  }
  local_4 = 0xffffffff;
  FUN_00465e40(&local_dc);
  ExceptionList = local_c;
  return 1;
}

