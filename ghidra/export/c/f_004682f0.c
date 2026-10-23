// FUNCTION: PORT1111 0x004682f0
// name: FUN_004682f0
// sig: undefined4 FUN_004682f0(void * this, int param_1)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall FUN_004682f0(void *this,int param_1)

{
  undefined1 uVar1;
  bool bVar2;
  undefined3 extraout_var;
  LPCSTR lpSubKey;
  LSTATUS LVar3;
  int iVar4;
  uchar *puVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 **ppuVar8;
  DWORD ulOptions;
  REGSAM samDesired;
  HKEY *phkResult;
  DWORD local_f0;
  HKEY local_ec;
  undefined4 local_e8;
  undefined4 *local_e4;
  undefined4 *local_e0;
  undefined4 local_dc;
  uint local_d8 [50];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b98e4;
  local_c = ExceptionList;
  local_10 = DAT_004ddb0c;
  puVar7 = (undefined4 *)((int)this + 0x3c);
  ExceptionList = &local_c;
  FUN_00466a40(puVar7,*(uchar **)(param_1 + 0x14));
  bVar2 = FUN_00466ab0(puVar7,"");
  if (CONCAT31(extraout_var,bVar2) == 0) {
    if ((*(int *)(param_1 + 0xc) == 0) && (*(int *)(param_1 + 8) == 0)) {
      ExceptionList = local_c;
      return 0;
    }
  }
  else {
    phkResult = &local_ec;
    samDesired = 0x20019;
    ulOptions = 0;
    lpSubKey = (LPCSTR)FUN_00465e00(puVar7);
    LVar3 = RegOpenKeyExA((HKEY)0x80000001,lpSubKey,ulOptions,samDesired,phkResult);
    if (LVar3 != 0) {
      ExceptionList = local_c;
      return 0;
    }
    local_f0 = 200;
    LVar3 = RegQueryValueExA(local_ec,"AppGUID",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_d8,&local_f0
                            );
    if ((LVar3 != 0) || (local_f0 == 0)) {
LAB_004687c1:
      RegCloseKey(local_ec);
      ExceptionList = local_c;
      return 0;
    }
    FUN_00466a40((void *)((int)this + 0x10),(uchar *)local_d8);
    local_f0 = 200;
    LVar3 = RegQueryValueExA(local_ec,"AppName",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_d8,&local_f0
                            );
    if ((LVar3 != 0) || (local_f0 == 0)) {
      RegCloseKey(local_ec);
      ExceptionList = local_c;
      return 0;
    }
    FUN_00466a40((void *)((int)this + 0x14),(uchar *)local_d8);
    local_f0 = 200;
    LVar3 = RegQueryValueExA(local_ec,"LangID",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_d8,&local_f0)
    ;
    if (LVar3 == 0) {
      *(uint *)((int)this + 0x58) = local_d8[0] & 0xff;
    }
    LVar3 = RegQueryValueExA(local_ec,"Display",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_d8,&local_f0
                            );
    if (LVar3 == 0) {
      *(uint *)((int)this + 0xf4) = local_d8[0] & 0xff;
    }
    local_f0 = 200;
    LVar3 = RegQueryValueExA(local_ec,"InstPath",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_d8,
                             &local_f0);
    if ((LVar3 != 0) || (local_f0 == 0)) {
      RegCloseKey(local_ec);
      ExceptionList = local_c;
      return 0;
    }
    puVar7 = (undefined4 *)((int)this + 0x54);
    FUN_00466a40(puVar7,(uchar *)local_d8);
    iVar4 = FUN_00465d00(puVar7);
    iVar4 = FUN_00465e10(puVar7,iVar4 - 1);
    if ((char)iVar4 != '\\') {
      thunk_FUN_00466040(puVar7,"\\");
    }
    local_f0 = 200;
    LVar3 = RegQueryValueExA(local_ec,"InstSource",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_d8,
                             &local_f0);
    if ((LVar3 == 0) && (local_f0 != 0)) {
      FUN_00466a40((void *)((int)this + 0x18),(uchar *)local_d8);
    }
    else {
      RegCloseKey(local_ec);
    }
    local_f0 = 200;
    LVar3 = RegQueryValueExA(local_ec,"Sound",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_d8,&local_f0);
    if ((LVar3 == 0) && (local_f0 != 0)) {
      *(uint *)((int)this + 0x48) = (uint)((uchar)local_d8[0] == '\x01');
    }
    else {
      *(undefined4 *)((int)this + 0x48) = 0;
    }
    local_f0 = 200;
    LVar3 = RegQueryValueExA(local_ec,"Music",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_d8,&local_f0);
    if ((LVar3 == 0) && (local_f0 != 0)) {
      *(uint *)((int)this + 0x4c) = (uint)((uchar)local_d8[0] == '\x01');
    }
    else {
      *(undefined4 *)((int)this + 0x4c) = 1;
    }
    local_f0 = 200;
    LVar3 = RegQueryValueExA(local_ec,"FullScreen",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_d8,
                             &local_f0);
    if ((LVar3 == 0) && (local_f0 != 0)) {
      *(uint *)((int)this + 0xfc) = (uint)((uchar)local_d8[0] == '\x01');
    }
    else {
      *(undefined4 *)((int)this + 0xfc) = 1;
    }
    local_f0 = 200;
    LVar3 = RegQueryValueExA(local_ec,"CD",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_d8,&local_f0);
    if ((LVar3 != 0) || (local_f0 == 0)) goto LAB_004687c1;
    FUN_00466af0(&local_e4,(uchar *)local_d8,0xffffffff);
    local_4 = 0;
    iVar4 = thunk_FUN_00466240(&local_e4,"0");
    if (iVar4 == 0) {
      *(undefined4 *)((int)this + 0x44) = 0;
      FUN_00466a70((void *)((int)this + 0x40),(uchar)local_d8[0]);
      thunk_FUN_00466040((void *)((int)this + 0x40),":\\");
    }
    else {
      *(undefined4 *)((int)this + 0x44) = 1;
      FUN_00466a50((void *)((int)this + 0x40),(undefined4 *)((int)this + 0x54));
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      local_f0 = 200;
      LVar3 = RegQueryValueExA(local_ec,"DATA",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_d8,&local_f0)
      ;
      if ((LVar3 != 0) || (local_f0 == 0)) goto LAB_0046876b;
      pvVar6 = (void *)((int)this + 8);
      FUN_00466a50(pvVar6,(undefined4 *)((int)this + 0x40));
      thunk_FUN_00466040(pvVar6,(char *)local_d8);
      thunk_FUN_00466040(pvVar6,"\\");
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      local_f0 = 200;
      LVar3 = RegQueryValueExA(local_ec,"RDATA",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_d8,&local_f0
                              );
      if ((LVar3 != 0) || (local_f0 == 0)) {
LAB_0046876b:
        RegCloseKey(local_ec);
        local_4 = 0xffffffff;
        FUN_00465e40(&local_e4);
        ExceptionList = local_c;
        return 0;
      }
      pvVar6 = (void *)((int)this + 0xc);
      FUN_00466a50(pvVar6,(undefined4 *)((int)this + 0x54));
      thunk_FUN_00466040(pvVar6,(char *)local_d8);
      thunk_FUN_00466040(pvVar6,"\\");
    }
    FUN_00466a50((void *)((int)this + 0x74),(undefined4 *)((int)this + 0x54));
    RegCloseKey(local_ec);
    puVar5 = (uchar *)FUN_00465e00((undefined4 *)((int)this + 0x40));
    iVar4 = FUN_00467eb0(this,puVar5);
    if (iVar4 == 0) {
      local_4 = 0xffffffff;
      FUN_00465e40(&local_e4);
      ExceptionList = local_c;
      return 0;
    }
    local_4 = 0xffffffff;
    FUN_00465e40(&local_e4);
  }
  FUN_00465cf0(&local_e8);
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00466a40(&local_e8,*(uchar **)(param_1 + 0x48));
    thunk_FUN_00466040(&local_e8,*(char **)(param_1 + 0x20));
    FUN_00467fe0(this,&local_e8);
    local_e0 = operator_new(0x14);
    local_4._0_1_ = 2;
    if (local_e0 == (undefined4 *)0x0) {
      pvVar6 = (void *)0x0;
    }
    else {
      pvVar6 = (void *)FUN_00486170(local_e0);
    }
    *(void **)((int)this + 0x60) = pvVar6;
    local_4._0_1_ = 1;
    uVar1 = (undefined1)local_4;
    local_4._0_1_ = 1;
    if (*(uint *)(param_1 + 0x24) == 0) {
      if (*(int *)(param_1 + 0x3c) == 0) {
        local_4._0_1_ = uVar1;
        pvVar6 = FUN_00467da0(this,&local_f0);
        local_4._0_1_ = 4;
        puVar7 = FUN_00466fd0(pvVar6,&local_e4,&local_e8);
        local_4._0_1_ = 5;
        puVar5 = (uchar *)FUN_00465e00(puVar7);
        iVar4 = FUN_004861c0(*(void **)((int)this + 0x60),puVar5);
        local_4._0_1_ = 4;
        FUN_00465e40(&local_e4);
        local_4._0_1_ = 1;
        FUN_00465e40(&local_f0);
      }
      else {
        puVar7 = FUN_00466fd0((void *)((int)this + 0xec),&local_e4,&local_e8);
        local_4._0_1_ = 3;
        puVar5 = (uchar *)FUN_00465e00(puVar7);
        iVar4 = FUN_004861c0(*(void **)((int)this + 0x60),puVar5);
        local_4._0_1_ = 1;
        FUN_00465e40(&local_e4);
      }
      if (iVar4 == 0) goto LAB_004688f7;
    }
    else {
      iVar4 = FUN_00486300(pvVar6,(LPCSTR)(*(uint *)(param_1 + 0x24) & 0xffff),(LPCSTR)0xa,
                           DAT_004e2c24);
      if (iVar4 == 0) {
        local_4 = 0xffffffff;
        FUN_00465e40(&local_e8);
        ExceptionList = local_c;
        return 0;
      }
    }
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_00466a40(&local_e8,*(uchar **)(param_1 + 0x48));
      thunk_FUN_00466040(&local_e8,*(char **)(param_1 + 0x1c));
      FUN_00467fe0(this,&local_e8);
      local_e0 = operator_new(0x14);
      local_4._0_1_ = 6;
      if (local_e0 == (undefined4 *)0x0) {
        pvVar6 = (void *)0x0;
      }
      else {
        pvVar6 = (void *)FUN_00486170(local_e0);
      }
      *(void **)((int)this + 100) = pvVar6;
      local_4._0_1_ = 1;
      uVar1 = (undefined1)local_4;
      local_4._0_1_ = 1;
      if (*(uint *)(param_1 + 0x28) == 0) {
        if (*(int *)(param_1 + 0x3c) == 0) {
          local_4._0_1_ = uVar1;
          pvVar6 = FUN_00445840(this,&local_e0);
          local_4._0_1_ = 8;
          puVar7 = FUN_00466fd0(pvVar6,&local_dc,&local_e8);
          local_4._0_1_ = 9;
          puVar5 = (uchar *)FUN_00465e00(puVar7);
          iVar4 = FUN_004861c0(*(void **)((int)this + 100),puVar5);
          local_4 = CONCAT31(local_4._1_3_,8);
          FUN_00465e40(&local_dc);
          ppuVar8 = &local_e0;
        }
        else {
          puVar7 = FUN_00466fd0((void *)((int)this + 0xec),&local_e4,&local_e8);
          local_4 = CONCAT31(local_4._1_3_,7);
          puVar5 = (uchar *)FUN_00465e00(puVar7);
          iVar4 = FUN_004861c0(*(void **)((int)this + 100),puVar5);
          ppuVar8 = &local_e4;
        }
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_00465e40(ppuVar8);
        if (iVar4 == 0) {
LAB_004688f7:
          local_4 = 0xffffffff;
          FUN_00465e40(&local_e8);
          ExceptionList = local_c;
          return 0;
        }
      }
      else {
        iVar4 = FUN_00486300(pvVar6,(LPCSTR)(*(uint *)(param_1 + 0x28) & 0xffff),(LPCSTR)0xa,
                             DAT_004e2c24);
        if (iVar4 == 0) goto LAB_00468a1a;
      }
    }
    if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 8) != 0)) {
      if (*(int *)((int)this + 0x60) == 0) {
        if (*(int *)((int)this + 100) == 0) {
LAB_00468a1a:
          local_4 = 0xffffffff;
          FUN_00465e40(&local_e8);
          ExceptionList = local_c;
          return 0;
        }
        *(int *)((int)this + 0x60) = *(int *)((int)this + 100);
      }
      else {
        *(int *)((int)this + 100) = *(int *)((int)this + 0x60);
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_00465e40(&local_e8);
  ExceptionList = local_c;
  return 1;
}

