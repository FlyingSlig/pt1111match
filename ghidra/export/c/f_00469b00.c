// FUNCTION: PORT1111 0x00469b00
// name: FUN_00469b00
// sig: undefined4 FUN_00469b00(void * param_1)


undefined4 __fastcall FUN_00469b00(void *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPVOID pvVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  uchar *puVar6;
  undefined4 *puVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 *puVar8;
  int *piVar9;
  ushort *puVar10;
  int iVar11;
  DWORD DVar12;
  char *pcVar13;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  int local_20;
  undefined4 *local_1c;
  undefined4 local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9b21;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00465cf0(&local_34);
  local_4 = 0;
  if (DAT_004e2b04 != 0) {
    iVar11 = *(int *)((int)param_1 + 0xf4);
    if (iVar11 == 0) {
      pcVar13 = "I640_";
    }
    else if (iVar11 == 1) {
      pcVar13 = "I800_";
    }
    else {
      if (iVar11 != 2) {
        local_4 = 0xffffffff;
        FUN_00465e40(&local_34);
        ExceptionList = local_c;
        return 0;
      }
      pcVar13 = "I1024_";
    }
    FUN_00466a40(&local_34,(uchar *)pcVar13);
  }
  FUN_00466af0(&local_30,DAT_004e2af8,0xffffffff);
  local_4._0_1_ = 1;
  thunk_FUN_00466040(&local_30,DAT_004e2ac8);
  FUN_00467fe0(param_1,&local_30);
  FUN_00466a30(&local_34,&local_30);
  if (DAT_004e2adc == 0) {
    if (DAT_004e2af0 == 0) {
      local_1c = operator_new(0x10);
      local_4._0_1_ = 3;
      if (local_1c == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_004884d0(local_1c);
      }
      local_4._0_1_ = 1;
      local_28 = puVar4;
      FUN_00465cf0(&local_2c);
      local_4._0_1_ = 4;
      uVar1 = (undefined1)local_4;
      local_4._0_1_ = 4;
      if (DAT_004e2aec == 0) {
        local_4._0_1_ = uVar1;
        pcVar13 = (char *)FUN_00465e00(&local_34);
        puVar7 = FUN_00468110(param_1,&local_1c,pcVar13);
        local_4._0_1_ = 6;
      }
      else {
        puVar7 = FUN_00466fd0((void *)((int)param_1 + 0xec),&local_1c,&local_34);
        local_4._0_1_ = 5;
      }
      FUN_00466a50(&local_2c,puVar7);
      local_4._0_1_ = 4;
      FUN_00465e40(&local_1c);
      DVar12 = 1;
      DVar5 = 0x80000000;
      puVar6 = (uchar *)FUN_00465e00(&local_2c);
      bVar2 = FUN_004884f0(puVar4,puVar6,DVar5,DVar12);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        if (puVar4 != (undefined4 *)0x0) {
          (**(code **)*puVar4)(1);
        }
        local_4._0_1_ = 1;
        FUN_00465e40(&local_2c);
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00465e40(&local_30);
        local_4 = 0xffffffff;
        FUN_00465e40(&local_34);
        ExceptionList = local_c;
        return 0;
      }
      local_4._0_1_ = 1;
      FUN_00465e40(&local_2c);
LAB_00469dce:
      puVar4 = local_28;
      FUN_0048a050(local_18,local_28,1);
      local_4._0_1_ = 7;
      FUN_0048a130(local_18,&DAT_004e2b28);
      if (DAT_004e2b28._1_1_ < 0xf9) {
        FUN_00465cf0(&local_24);
        local_4._0_1_ = 8;
        FUN_0048a150(local_18,&local_24);
        FUN_0048a150(local_18,&local_24);
        FUN_0048a150(local_18,(void *)((int)param_1 + 0x74));
        FUN_0048a110(local_18,(int)param_1 + 0x68);
        FUN_0048a110(local_18,(int)param_1 + 0x6c);
        FUN_0048a110(local_18,(int)param_1 + 0x70);
        FUN_0048a150(local_18,(int)param_1 + 0x24);
        FUN_0048a110(local_18,(int)param_1 + 0x28);
        FUN_0048a110(local_18,(int *)((int)param_1 + 0x1c));
        FUN_0048a110(local_18,(int)param_1 + 0x20);
        iVar11 = *(int *)((int)param_1 + 0x1c);
        if (iVar11 == 0x280) {
          *(undefined4 *)((int)param_1 + 0xf4) = 0;
        }
        else if (iVar11 == 800) {
          *(undefined4 *)((int)param_1 + 0xf4) = 1;
        }
        else if (iVar11 == 0x400) {
          *(undefined4 *)((int)param_1 + 0xf4) = 2;
        }
        puVar7 = (undefined4 *)((int)param_1 + 0x38);
        FUN_0048a150(local_18,puVar7);
        FUN_00465e70(puVar7,'\\');
        bVar2 = FUN_00466ab0(puVar7,"");
        if (CONCAT31(extraout_var_00,bVar2) != 0) {
          puVar8 = FUN_00466fd0((void *)((int)param_1 + 8),&local_1c,puVar7);
          local_4._0_1_ = 9;
          FUN_00466a50(puVar7,puVar8);
          local_4._0_1_ = 8;
          FUN_00465e40(&local_1c);
        }
        FUN_00466a50((void *)((int)param_1 + 0x74),(undefined4 *)((int)param_1 + 0x54));
        iVar11 = 0;
        *(undefined2 *)((int)param_1 + 0xf0) = 0;
        FUN_0048a110(local_18,&local_20);
        if (0 < local_20) {
          do {
            local_1c = operator_new(0xa8);
            local_4._0_1_ = 10;
            if (local_1c == (undefined4 *)0x0) {
              piVar9 = (int *)0x0;
            }
            else {
              piVar9 = FUN_0047dab0(local_1c);
            }
            local_4._0_1_ = 8;
            (**(code **)(*piVar9 + 4))(local_18);
            if (*(ushort *)((int)param_1 + 0xf0) < *(ushort *)(piVar9 + 7)) {
              *(ushort *)((int)param_1 + 0xf0) = *(ushort *)(piVar9 + 7);
            }
            local_1c = (undefined4 *)(uint)*(ushort *)(piVar9 + 7);
            puVar10 = FUN_00469910((void *)((int)param_1 + 0x2c),(ushort *)&local_1c);
            *(int **)puVar10 = piVar9;
            iVar11 = iVar11 + 1;
            puVar4 = local_28;
          } while (iVar11 < local_20);
        }
        if ((DAT_004e2af0 == 0) && (puVar4 != (undefined4 *)0x0)) {
          (**(code **)*puVar4)(1);
        }
        local_4._0_1_ = 7;
        FUN_00465e40(&local_24);
        local_4._0_1_ = 1;
        FUN_0048a0c0(local_18);
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00465e40(&local_30);
        local_4 = 0xffffffff;
        FUN_00465e40(&local_34);
        ExceptionList = local_c;
        return 1;
      }
      if ((DAT_004e2af0 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
      local_4._0_1_ = 1;
      FUN_0048a0c0(local_18);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00465e40(&local_30);
      local_4 = 0xffffffff;
      FUN_00465e40(&local_34);
      ExceptionList = local_c;
      return 0;
    }
    if (*(int *)((int)param_1 + 100) != 0) {
      puVar6 = (uchar *)FUN_00465e00(&local_34);
      local_28 = (undefined4 *)FUN_00486530(*(void **)((int)param_1 + 100),puVar6);
      if (local_28 != (undefined4 *)0x0) goto LAB_00469dce;
    }
  }
  else {
    hResInfo = FindResourceA(DAT_004e2c24,(LPCSTR)(DAT_004e2adc & 0xffff),(LPCSTR)0xa);
    if (hResInfo != (HRSRC)0x0) {
      hResData = LoadResource(DAT_004e2c24,hResInfo);
      pvVar3 = LockResource(hResData);
      if (pvVar3 != (LPVOID)0x0) {
        local_1c = operator_new(0x28);
        local_4._0_1_ = 2;
        if (local_1c == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4 = FUN_0047bfa0(local_1c,0x400);
        }
        local_4._0_1_ = 1;
        local_28 = puVar4;
        DVar5 = SizeofResource(DAT_004e2c24,hResInfo);
        FUN_0047c190(puVar4,pvVar3,DVar5);
        goto LAB_00469dce;
      }
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00465e40(&local_30);
  local_4 = 0xffffffff;
  FUN_00465e40(&local_34);
  ExceptionList = local_c;
  return 0;
}

