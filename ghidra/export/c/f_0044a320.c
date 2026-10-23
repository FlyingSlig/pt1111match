// FUNCTION: PORT1111 0x0044a320
// name: FUN_0044a320
// sig: undefined FUN_0044a320(void)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044a320(void)

{
  LPCSTR lpSubKey;
  LSTATUS LVar1;
  HKEY local_e8;
  DWORD local_e4;
  int local_e0 [50];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004b8970;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff0c;
  local_18 = DAT_004ddb0c;
  local_8 = 0;
  ExceptionList = &local_10;
  lpSubKey = (LPCSTR)FUN_00465e00((undefined4 *)(DAT_004e2b14 + 0x3c));
  LVar1 = RegOpenKeyExA((HKEY)0x80000001,lpSubKey,0,0x20019,&local_e8);
  if (LVar1 == 0) {
    local_e4 = 200;
    LVar1 = RegQueryValueExA(local_e8,"SoundLevel",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_e0,
                             &local_e4);
    if (LVar1 == 0) {
      DAT_004dc2a0 = local_e0[0];
    }
    else {
      DAT_004dc2a0 = 100;
    }
    local_e4 = 200;
    LVar1 = RegQueryValueExA(local_e8,"MusicLevel",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_e0,
                             &local_e4);
    if (LVar1 == 0) {
      _DAT_004dc29c = local_e0[0];
    }
    else {
      _DAT_004dc29c = 0x5f;
    }
    local_e4 = 200;
    LVar1 = RegQueryValueExA(local_e8,"SpeedLevel",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_e0,
                             &local_e4);
    if (LVar1 == 0) {
      DAT_004db290 = local_e0[0];
    }
    else {
      DAT_004db290 = 1;
    }
    local_e4 = 200;
    LVar1 = RegQueryValueExA(local_e8,"DifLevel",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_e0,
                             &local_e4);
    if (LVar1 == 0) {
      DAT_004db294 = local_e0[0];
    }
    else {
      DAT_004db294 = 1;
    }
    RegCloseKey(local_e8);
    if (DAT_004dc2a0 < 0) {
      DAT_004dc2a0 = 0;
    }
    else if (100 < DAT_004dc2a0) {
      DAT_004dc2a0 = 100;
    }
    if (_DAT_004dc29c < 0) {
      _DAT_004dc29c = 0;
    }
    else if (100 < _DAT_004dc29c) {
      _DAT_004dc29c = 100;
    }
    if (DAT_004db290 < 0) {
      DAT_004db290 = 0;
    }
    else if (2 < DAT_004db290) {
      DAT_004db290 = 2;
    }
    _DAT_004dc2a4 = _DAT_004dc29c;
    _DAT_004dc2a8 = DAT_004dc2a0;
    DAT_004dc2ac = DAT_004db290;
    if (DAT_004db294 < 0) {
      DAT_004db294 = 0;
      _DAT_004e27f0 = DAT_004db294;
    }
    else {
      _DAT_004e27f0 = DAT_004db294;
      if (2 < DAT_004db294) {
        DAT_004db294 = 2;
        _DAT_004e27f0 = DAT_004db294;
      }
    }
  }
  ExceptionList = local_10;
  return;
}

