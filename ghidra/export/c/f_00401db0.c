// FUNCTION: PORT1111 0x00401db0
// name: FUN_00401db0
// sig: undefined4 FUN_00401db0(void)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00401db0(void)

{
  uint uVar1;
  HRESULT HVar2;
  HRESULT HVar3;
  int iVar4;
  int *unaff_EDI;
  int **ppiStack_84;
  undefined4 uStack_74;
  int *piStack_64;
  int *piStack_60;
  CHAR CVar5;
  LPCWSTR lpWideCharStr;
  LPCWSTR pWVar6;
  int **ppiVar7;
  int *local_40;
  undefined4 uStack_3c;
  int *local_38 [3];
  undefined4 *puStack_2c;
  int *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_4;
  
  local_4 = DAT_004ddb0c;
  HVar2 = CoInitialize((LPVOID)0x0);
  local_40 = (int *)((uint)(-1 < HVar2) << 0x18);
  local_38[0] = (int *)0x0;
  piStack_60 = (int *)0x401df9;
  HVar3 = CoCreateInstance((IID *)&DAT_004bc40c,(LPUNKNOWN)0x0,1,(IID *)&DAT_004bc3fc,local_38);
  if (-1 < HVar3) {
    ppiVar7 = &local_20;
    local_20 = (int *)0x10;
    local_1c = 0x6f;
    local_18 = 0;
    local_14 = 0;
    iVar4 = (**(code **)(*local_38[0] + 0xc))();
    if (-1 < iVar4) {
      uStack_3c = 0;
      iVar4 = (**(code **)(*local_40 + 0x10))();
      if (-1 < iVar4) {
        lpWideCharStr = (LPCWSTR)&stack0xffffffbc;
        piStack_60 = (int *)0x401e75;
        iVar4 = (**(code **)(iRam00000000 + 0x14))();
        if (-1 < iVar4) {
          piStack_60 = (int *)&stack0xffffffbc;
          piStack_64 = (int *)0x401e88;
          Ordinal_8();
          piStack_64 = (int *)&stack0xffffffb8;
          pWVar6 = lpWideCharStr;
          iVar4 = (**(code **)(*(int *)lpWideCharStr + 0x20))();
          if (((-1 < iVar4) && ((short)pWVar6 == 0x13)) && (local_20 != (int *)0x0)) {
            *local_20 = (int)ppiVar7;
          }
          uStack_74 = (int *)&stack0xffffffac;
          Ordinal_9();
          CVar5 = (CHAR)pWVar6;
          iVar4 = (**(code **)(*piStack_64 + 0x20))
                            (piStack_64,L"dwDirectXVersionMinor",&stack0xffffffa8);
          if ((-1 < iVar4) && ((short)piStack_64 == 0x13)) {
            if (puStack_2c != (undefined4 *)0x0) {
              *puStack_2c = uStack_3c;
            }
            uStack_74._0_3_ = CONCAT12(1,(short)uStack_74);
          }
          ppiStack_84 = &piStack_64;
          Ordinal_9();
          iVar4 = (**(code **)(*uStack_74 + 0x20))(uStack_74,L"szDirectXVersionLetter");
          if (((-1 < iVar4) && ((short)uStack_74 == 8)) && (lpWideCharStr != (LPCWSTR)0x0)) {
            WideCharToMultiByte(0,0,lpWideCharStr,-1,&stack0xffffffac,10,(LPCSTR)0x0,(LPBOOL)0x0);
            if (local_38[0] != (int *)0x0) {
              *(CHAR *)local_38[0] = CVar5;
            }
            uVar1 = (uint)ppiStack_84 >> 8;
            ppiStack_84 = (int **)CONCAT31((int3)uVar1,1);
          }
          Ordinal_9(&uStack_74);
          (*(code *)(*ppiStack_84)[2])(ppiStack_84);
        }
        piStack_64 = (int *)0x401f84;
        piStack_60 = unaff_EDI;
        (**(code **)(*unaff_EDI + 8))();
      }
    }
    (**(code **)(*local_40 + 8))();
  }
  if (-1 < HVar2) {
    CoUninitialize();
  }
  return 0x80004005;
}

