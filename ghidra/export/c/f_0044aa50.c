// FUNCTION: PORT1111 0x0044aa50
// name: FUN_0044aa50
// sig: undefined FUN_0044aa50(HKEY param_1)


void __fastcall FUN_0044aa50(HKEY param_1)

{
  LPCSTR lpSubKey;
  LSTATUS LVar1;
  DWORD ulOptions;
  REGSAM samDesired;
  HKEY *phkResult;
  HKEY local_4;
  
  phkResult = &local_4;
  samDesired = 0x20006;
  ulOptions = 0;
  local_4 = param_1;
  lpSubKey = (LPCSTR)FUN_00465e00((undefined4 *)(DAT_004e2b14 + 0x3c));
  LVar1 = RegOpenKeyExA((HKEY)0x80000001,lpSubKey,ulOptions,samDesired,phkResult);
  if (LVar1 == 0) {
    LVar1 = RegSetValueExA(local_4,"Display",0,4,(BYTE *)(param_1 + 0x13),4);
    if (LVar1 != 0) {
      RegCloseKey(local_4);
      return;
    }
    RegCloseKey(local_4);
  }
  return;
}

