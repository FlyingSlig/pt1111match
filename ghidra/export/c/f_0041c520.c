// FUNCTION: PORT1111 0x0041c520
// name: FUN_0041c520
// sig: undefined4 FUN_0041c520(void * this, undefined4 * param_1)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall FUN_0041c520(void *this,undefined4 *param_1)

{
  undefined4 *this_00;
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  bool bVar9;
  undefined4 uStack_59c;
  byte local_598 [4];
  undefined4 local_594;
  int local_590;
  undefined4 local_58c;
  int local_588 [8];
  int local_568 [20];
  byte local_518 [8];
  uchar local_510 [256];
  undefined1 auStack_410 [1024];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b6861;
  local_c = ExceptionList;
  local_10 = DAT_004ddb0c;
  local_598[0] = 0x4d;
  local_598[1] = 0x61;
  local_598[2] = 0x70;
  local_598[3] = 0;
  ExceptionList = &local_c;
  FUN_0047c110((int)this + 0x20);
  *(undefined4 *)((int)this + 0x2c) = 0;
  FUN_0044f510(param_1,local_568,(int)local_510,0x100,0,0,0,0);
  puVar2 = FUN_00466af0(&local_58c,local_510,0xffffffff);
  this_00 = (undefined4 *)((int)this + 4);
  local_4 = 0;
  FUN_00466a50(this_00,puVar2);
  local_4 = 0xffffffff;
  FUN_00465e40(&local_58c);
  iVar3 = FUN_00450180(param_1);
  if (iVar3 != 0) {
    FUN_0044fea0(param_1);
    ExceptionList = local_c;
    return 0;
  }
  pbVar4 = local_598;
  do {
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  } while (bVar1 != 0);
  pbVar5 = local_598;
  do {
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  } while (bVar1 != 0);
  uVar6 = FUN_0044f970((int)param_1,(int)local_518,(int)pbVar4 - (int)(local_598 + 1));
  if (uVar6 == (int)pbVar5 - (int)(local_598 + 1)) {
    pbVar4 = local_598;
    do {
      pbVar5 = pbVar4;
      pbVar4 = pbVar5 + 1;
    } while (*pbVar5 != 0);
    pbVar5[0x80] = 0;
    pbVar4 = local_598;
    pbVar5 = local_518;
    do {
      bVar1 = *pbVar5;
      bVar9 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_0041c664:
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_0041c669;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar9 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_0041c664;
      pbVar5 = pbVar5 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_0041c669:
    if (((iVar3 == 0) && (uVar6 = FUN_0044f970((int)param_1,(int)&local_590,4), uVar6 == 4)) &&
       (0xf < local_590)) {
      if (local_590 < 0x12) {
        local_594 = 1;
      }
      else {
        uVar6 = FUN_0044f970((int)param_1,(int)&local_594,4);
        if (uVar6 != 4) goto LAB_0041c6a5;
      }
      FUN_00424870(local_588);
      local_4 = 1;
      if (local_590 < 0x16) {
        local_594 = 1;
      }
      FUN_00424430(local_588,param_1,local_594,local_590);
      FUN_0042c6f0(DAT_004e2404,local_588);
      (**(code **)(*(int *)this + 4))();
      iVar3 = FUN_0044fbf0((int)param_1);
      if (iVar3 != 0) {
        FUN_0044fea0(param_1);
LAB_0041c7c9:
        local_4 = 0xffffffff;
        FUN_004248a0(local_588);
        ExceptionList = local_c;
        return 0;
      }
      FUN_00466b20(&uStack_59c,this_00);
      local_4._0_1_ = 2;
      iVar3 = FUN_00465d00(this_00);
      uVar6 = iVar3 - 1;
      uVar7 = FUN_00466450(this_00,'.');
      FUN_00466bc0(&uStack_59c,uVar7,uVar6);
      thunk_FUN_00466040(&uStack_59c,".pia");
      iVar3 = 2;
      pcVar8 = (char *)FUN_00465e00(&uStack_59c);
      iVar3 = FUN_0044f610((int)param_1,pcVar8,iVar3);
      if (iVar3 == 0) {
        iVar3 = FUN_00450180(param_1);
        if (iVar3 != 0) {
          FUN_0044fea0(param_1);
          local_4 = CONCAT31(local_4._1_3_,1);
          FUN_00465e40(&uStack_59c);
          goto LAB_0041c7c9;
        }
        iVar3 = 0;
        while (uVar6 = FUN_0044f970((int)param_1,(int)auStack_410,0x400), -1 < (int)uVar6) {
          if ((int)uVar6 < 1) goto LAB_0041c843;
          uVar7 = (**(code **)(*(int *)((int)this + 0x20) + 0xc))();
          if (uVar7 != uVar6) {
            FUN_0047c110((int)this + 0x20);
            iVar3 = 0;
            goto LAB_0041c843;
          }
          iVar3 = iVar3 + uVar6;
        }
        FUN_0047c110((int)this + 0x20);
        *(undefined4 *)((int)this + 0x2c) = 0;
LAB_0041c843:
        *(int *)((int)this + 0x2c) = iVar3;
        FUN_0044fbf0((int)param_1);
        FUN_0044fea0(param_1);
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_00465e40(&uStack_59c);
      local_4 = 0xffffffff;
      FUN_004248a0(local_588);
      ExceptionList = local_c;
      return 1;
    }
  }
LAB_0041c6a5:
  FUN_0044fbf0((int)param_1);
  FUN_0044fea0(param_1);
  ExceptionList = local_c;
  return 0;
}

