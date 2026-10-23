// FUNCTION: PORT1111 0x0044a590
// name: FUN_0044a590
// sig: undefined FUN_0044a590(void)


void FUN_0044a590(void)

{
  LPCSTR lpSubKey;
  LSTATUS LVar1;
  HKEY local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004b8980;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffdc;
  local_8 = 0;
  ExceptionList = &local_10;
  lpSubKey = (LPCSTR)FUN_00465e00((undefined4 *)(DAT_004e2b14 + 0x3c));
  LVar1 = RegOpenKeyExA((HKEY)0x80000001,lpSubKey,0,0x20006,&local_18);
  if (LVar1 == 0) {
    LVar1 = RegSetValueExA(local_18,"SoundLevel",0,4,(BYTE *)&DAT_004dc2a0,4);
    if (((LVar1 == 0) &&
        (LVar1 = RegSetValueExA(local_18,"MusicLevel",0,4,&DAT_004dc29c,4), LVar1 == 0)) &&
       (LVar1 = RegSetValueExA(local_18,"SpeedLevel",0,4,(BYTE *)&DAT_004db290,4), LVar1 == 0)) {
      RegSetValueExA(local_18,"DifLevel",0,4,(BYTE *)&DAT_004db294,4);
    }
    RegCloseKey(local_18);
  }
  ExceptionList = local_10;
  return;
}

