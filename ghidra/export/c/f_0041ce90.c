// FUNCTION: PORT1111 0x0041ce90
// name: FUN_0041ce90
// sig: BOOL FUN_0041ce90(void * this, undefined4 * param_1)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

BOOL __thiscall FUN_0041ce90(void *this,undefined4 *param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  LPCSTR pCVar4;
  char *pcVar5;
  DWORD DVar6;
  LPCSTR lpExistingFileName;
  uint uVar7;
  int iVar8;
  undefined4 local_5c0;
  undefined4 local_5bc;
  undefined4 local_5b8;
  undefined4 local_5b4;
  undefined4 local_5b0;
  uint local_5ac;
  void *local_5a8;
  uint local_5a4 [2];
  undefined4 local_59c;
  undefined4 local_598;
  undefined4 local_594;
  undefined4 local_590;
  undefined4 local_588;
  undefined4 local_584;
  undefined4 local_580;
  undefined4 local_57c;
  int local_578 [6];
  int local_560 [20];
  uchar local_510 [256];
  byte local_410 [1024];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b6922;
  local_c = ExceptionList;
  local_10 = DAT_004ddb0c;
  local_5a8 = this;
  if (*(int *)((int)this + 0x14) == 0) {
    ExceptionList = &local_c;
    BVar1 = FUN_0041cce0(this,param_1);
  }
  else {
    ExceptionList = &local_c;
    FUN_00403340(DAT_004e2b14,&local_5bc);
    local_4 = 0;
    thunk_FUN_00466040(&local_5bc,"data\\maps\\");
    FUN_00466b20(&local_5b4,(undefined4 *)((int)this + 0x48));
    local_4._0_1_ = 1;
    FUN_00465e70(&local_5b4,'\\');
    FUN_00466b20(&local_5b0,&local_5bc);
    local_4._0_1_ = 2;
    FUN_00466a30(&local_5b0,&local_5b4);
    FUN_00466b20(&local_5b8,param_1);
    local_4._0_1_ = 3;
    uVar2 = FUN_00465e00(&local_5b0);
    puVar3 = (undefined4 *)FUN_0044fe90(uVar2);
    if (puVar3 == (undefined4 *)0x0) {
      local_4._0_1_ = 2;
      FUN_00465e40(&local_5b8);
      local_4._0_1_ = 1;
      FUN_00465e40(&local_5b0);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00465e40(&local_5b4);
      local_4 = 0xffffffff;
      FUN_00465e40(&local_5bc);
      BVar1 = 0;
    }
    else {
      FUN_00466b20(&local_5c0,&local_5bc);
      local_4 = CONCAT31(local_4._1_3_,4);
      thunk_FUN_00466040(&local_5c0,"temp_current.acp");
      pCVar4 = (LPCSTR)FUN_00465e00(&local_5c0);
      DeleteFileA(pCVar4);
      iVar8 = 0;
      uVar2 = FUN_00465e00(&local_5c0);
      pcVar5 = (char *)FUN_00450b20(uVar2,iVar8);
      if (pcVar5 == (char *)0x0) {
        FUN_0044fea0(puVar3);
      }
      else {
        iVar8 = FUN_0044f160((int)puVar3,local_5a4);
        if (iVar8 == 0) {
          local_5ac = 0;
          if (local_5a4[0] != 0) {
            do {
              iVar8 = FUN_0044f510(puVar3,local_560,(int)local_510,0x100,0,0,0,0);
              if (iVar8 != 0) goto LAB_0041d2de;
              iVar8 = FUN_00450180(puVar3);
              if (iVar8 != 0) {
LAB_0041d2c2:
                FUN_0044fbf0((int)puVar3);
                FUN_0044fea0(puVar3);
                FUN_00451010(pcVar5,(char *)0x0);
                goto LAB_0041d019;
              }
              local_588 = 0;
              local_590 = 0;
              local_594 = 0;
              local_598 = 0;
              local_59c = 0;
              local_584 = 0;
              local_580 = 0;
              local_57c = 0;
              iVar8 = FUN_00451920((uint)pcVar5,(char *)local_510,&local_59c,0,0,0,0,(char *)0x0,8,
                                   -1);
              if (iVar8 != 0) goto LAB_0041d2de;
              iVar8 = FUN_004662f0((void *)((int)this + 4),local_510);
              if (iVar8 == 0) {
                while( true ) {
                  uVar7 = FUN_0044f970((int)puVar3,(int)local_410,0x400);
                  if ((int)uVar7 < 0) goto LAB_0041d2c2;
                  if ((int)uVar7 < 1) break;
                  uVar7 = FUN_00450c30((int)pcVar5,local_410,uVar7);
                  if ((int)uVar7 < 0) goto LAB_0041d2c2;
                }
              }
              else {
                FUN_0042f680(local_578);
                local_4._0_1_ = 5;
                FUN_0042f550(local_578,pcVar5,2,0x400);
                FUN_0042af30(DAT_004e2404,local_578);
                local_4 = CONCAT31(local_4._1_3_,4);
                FUN_0042f6c0(local_578);
              }
              FUN_0044fbf0((int)puVar3);
              FUN_00450ff0((int)pcVar5);
              uVar7 = local_5ac + 1;
              if ((uVar7 < local_5a4[0]) && (iVar8 = FUN_0044f5a0((int)puVar3), iVar8 != 0))
              goto LAB_0041d2de;
              this = local_5a8;
              local_5ac = uVar7;
            } while (uVar7 < local_5a4[0]);
          }
          FUN_0044fea0(puVar3);
          FUN_00451010(pcVar5,"");
          pCVar4 = (LPCSTR)FUN_00465e00(&local_5b8);
          BVar1 = DeleteFileA(pCVar4);
          if ((BVar1 != 0) || (DVar6 = GetLastError(), DVar6 == 2)) {
            pCVar4 = (LPCSTR)FUN_00465e00(&local_5b8);
            lpExistingFileName = (LPCSTR)FUN_00465e00(&local_5c0);
            BVar1 = MoveFileA(lpExistingFileName,pCVar4);
            local_4._0_1_ = 3;
            FUN_00465e40(&local_5c0);
            local_4._0_1_ = 2;
            FUN_00465e40(&local_5b8);
            local_4._0_1_ = 1;
            FUN_00465e40(&local_5b0);
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_00465e40(&local_5b4);
            local_4 = 0xffffffff;
            FUN_00465e40(&local_5bc);
            ExceptionList = local_c;
            return BVar1;
          }
        }
        else {
LAB_0041d2de:
          FUN_0044fea0(puVar3);
          FUN_00451010(pcVar5,(char *)0x0);
        }
      }
LAB_0041d019:
      local_4._0_1_ = 3;
      FUN_00465e40(&local_5c0);
      local_4._0_1_ = 2;
      FUN_00465e40(&local_5b8);
      local_4._0_1_ = 1;
      FUN_00465e40(&local_5b0);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00465e40(&local_5b4);
      local_4 = 0xffffffff;
      FUN_00465e40(&local_5bc);
      BVar1 = 0;
    }
  }
  ExceptionList = local_c;
  return BVar1;
}

