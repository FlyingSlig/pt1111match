// FUNCTION: PORT1111 0x0043f800
// name: FUN_0043f800
// sig: int * FUN_0043f800(void * this, int param_1, int * param_2, undefined4 * param_3)


int * __thiscall FUN_0043f800(void *this,int param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  int *piVar2;
  undefined3 extraout_var;
  undefined4 *puVar3;
  int *piVar4;
  undefined3 extraout_var_00;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  pvVar6 = ExceptionList;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8127;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_3 = 0;
  if (param_2 == (int *)0x0) {
    ExceptionList = pvVar6;
    return (int *)0x0;
  }
  if (param_2[0x1f] != 0) {
    ExceptionList = pvVar6;
    return (int *)0x0;
  }
  iVar8 = param_2[4];
  if ((0x96 < param_1) && (param_1 < 0xa7)) {
    piVar2 = FUN_0043f590(this,param_2,7,param_1);
    if (piVar2 == (int *)0x0) {
      ExceptionList = local_c;
      return (int *)0x0;
    }
    bVar1 = FUN_004059c0((int)param_2);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      puVar3 = operator_new(0x44);
      local_4 = 0;
      if (puVar3 == (undefined4 *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = FUN_00431c40(puVar3);
      }
      piVar4[0xc] = 1;
      piVar4[1] = iVar8;
      piVar4[5] = piVar2[4];
      ExceptionList = local_c;
      return piVar4;
    }
    ExceptionList = local_c;
    return (int *)0x0;
  }
  if ((0x28 < param_1) && (param_1 < 0x54)) {
    piVar2 = FUN_0043f590(this,param_2,7,param_1);
    if (piVar2 == (int *)0x0) {
      ExceptionList = local_c;
      return (int *)0x0;
    }
    bVar1 = FUN_004059c0((int)param_2);
    if (CONCAT31(extraout_var_00,bVar1) == 0) {
      puVar3 = operator_new(0x44);
      local_4 = 1;
      if (puVar3 != (undefined4 *)0x0) {
        piVar4 = FUN_00431c40(puVar3);
        piVar4[0xc] = 1;
        piVar4[1] = iVar8;
        piVar4[5] = piVar2[4];
        ExceptionList = local_c;
        return piVar4;
      }
      uRam00000030 = 1;
      iRam00000004 = iVar8;
      iRam00000014 = piVar2[4];
      ExceptionList = local_c;
      return (int *)0x0;
    }
    *param_3 = 1;
LAB_0043f901:
    FUN_004137d0((int)param_2);
    ExceptionList = local_c;
    return (int *)0x0;
  }
  if ((0x54 < param_1) && (param_1 < 0x80)) {
    iVar5 = (**(code **)(*param_2 + 0x88))();
    piVar2 = FUN_0043f590(this,param_2,(*(int *)(iVar5 + 0x34) == DAT_004e26fc) + 8,param_1);
    if (piVar2 != (int *)0x0) {
      puVar3 = operator_new(0x44);
      local_4 = 2;
      if (puVar3 == (undefined4 *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = FUN_0042fdb0(puVar3);
      }
      piVar4[0xc] = 1;
      piVar4[1] = iVar8;
      piVar4[5] = piVar2[4];
      piVar4[6] = 0;
      piVar4[2] = 0xb;
      ExceptionList = local_c;
      return piVar4;
    }
    goto LAB_0043f901;
  }
  switch(param_1) {
  case 0:
    puVar3 = operator_new(0x44);
    local_4 = 0x14;
    if (puVar3 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_0042fdb0(puVar3);
    }
    piVar2[0xc] = 1;
    piVar2[1] = iVar8;
    local_4 = 0xffffffff;
    iVar8 = FUN_004449d0(param_2[0x2c]);
    piVar2[5] = iVar8;
    piVar2[6] = 0;
    piVar2[2] = 10;
    ExceptionList = local_c;
    return piVar2;
  case 1:
    puVar3 = operator_new(0x44);
    local_4 = 0x16;
    if (puVar3 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_00430480(puVar3);
    }
    piVar2[0xc] = 1;
    piVar2[1] = iVar8;
    piVar2[5] = *(int *)(param_2[0x2c] + 0x20);
    piVar2[6] = 0;
    ExceptionList = local_c;
    return piVar2;
  case 2:
    puVar3 = operator_new(0x44);
    local_4 = 0x17;
    if (puVar3 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_00430f00(puVar3);
    }
    piVar2[0xc] = 1;
    piVar2[1] = iVar8;
    piVar2[5] = *(int *)(param_2[0x2c] + 0x24);
    piVar2[6] = 0;
    ExceptionList = local_c;
    return piVar2;
  case 3:
    iVar5 = FUN_0043f7c0(this,param_2);
    if (iVar5 != -1) {
      puVar3 = operator_new(0x44);
      local_4 = 0x18;
      if (puVar3 == (undefined4 *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = FUN_0042fdb0(puVar3);
      }
      piVar2[0xc] = 1;
      piVar2[1] = iVar8;
      piVar2[5] = iVar5;
      iVar8 = *(int *)((int)this + 4);
      piVar2[0xf] = *(int *)((int)this + 8);
      piVar2[0xe] = iVar8;
      local_4 = 0xffffffff;
      FUN_00406100(param_2,*(int *)((int)this + 4),*(int *)((int)this + 8));
      piVar2[6] = 0;
      piVar2[2] = 0xb;
      ExceptionList = local_c;
      return piVar2;
    }
    ExceptionList = local_c;
    return (int *)0x0;
  case 4:
    piVar2 = FUN_0043f590(this,param_2,4,0);
    if (piVar2 != (int *)0x0) {
      puVar3 = operator_new(0x44);
      local_4 = 0x19;
      if (puVar3 == (undefined4 *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = FUN_00430f00(puVar3);
      }
      piVar4[1] = iVar8;
      piVar4[0xc] = 1;
      local_4 = 0xffffffff;
      piVar4[5] = piVar2[4];
      (**(code **)(*piVar4 + 0x24))();
      piVar4[6] = 0;
      ExceptionList = local_c;
      return piVar4;
    }
    ExceptionList = local_c;
    return (int *)0x0;
  default:
    ExceptionList = pvVar6;
    return (int *)0x0;
  case 6:
    piVar2 = FUN_0043f590(this,param_2,3,0);
    if (piVar2 != (int *)0x0) {
      puVar3 = operator_new(0x44);
      local_4 = 0x1f;
      if (puVar3 == (undefined4 *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = FUN_00432330(puVar3);
      }
      piVar4[0xc] = 1;
      piVar4[1] = piVar2[4];
      piVar4[5] = iVar8;
      piVar4[6] = 0;
      ExceptionList = local_c;
      return piVar4;
    }
    uVar7 = 1;
    pvVar6 = (void *)(**(code **)(*param_2 + 0x88))();
    FUN_00422570(pvVar6,uVar7);
    ExceptionList = local_c;
    return (int *)0x0;
  case 7:
    piVar2 = FUN_0043f590(this,param_2,0,0);
    if (piVar2 == (int *)0x0) {
      ExceptionList = local_c;
      return (int *)0x0;
    }
    puVar3 = operator_new(0x44);
    local_4 = 0x1a;
    if (puVar3 != (undefined4 *)0x0) {
      piVar4 = FUN_00431490(puVar3);
      goto LAB_00440338;
    }
    goto LAB_00440336;
  case 8:
    piVar2 = FUN_0043f590(this,param_2,1,0);
    if (piVar2 == (int *)0x0) {
      ExceptionList = local_c;
      return (int *)0x0;
    }
    puVar3 = operator_new(0x44);
    local_4 = 0x1d;
    if (puVar3 != (undefined4 *)0x0) {
      piVar4 = FUN_00431490(puVar3);
      goto LAB_00440338;
    }
    goto LAB_00440336;
  case 9:
    piVar2 = FUN_0043f590(this,param_2,2,0);
    if (piVar2 == (int *)0x0) {
      ExceptionList = local_c;
      return (int *)0x0;
    }
    puVar3 = operator_new(0x44);
    local_4 = 0x1e;
    if (puVar3 != (undefined4 *)0x0) {
      piVar4 = FUN_00431490(puVar3);
      goto LAB_00440338;
    }
    goto LAB_00440336;
  case 10:
    piVar2 = FUN_0043f590(this,param_2,0,0);
    if (piVar2 == (int *)0x0) {
      ExceptionList = local_c;
      return (int *)0x0;
    }
    puVar3 = operator_new(0x44);
    local_4 = 0x1b;
    if (puVar3 != (undefined4 *)0x0) {
      piVar4 = FUN_00432330(puVar3);
      goto LAB_00440338;
    }
    goto LAB_00440336;
  case 0xb:
    puVar3 = operator_new(0x34);
    local_4 = 0x20;
    if (puVar3 != (undefined4 *)0x0) {
      piVar2 = FUN_00432910(puVar3);
      piVar2[0xc] = 1;
      piVar2[1] = iVar8;
      ExceptionList = local_c;
      return piVar2;
    }
    iRam00000004 = iVar8;
    uRam00000030 = 1;
    ExceptionList = local_c;
    return (int *)0x0;
  case 0xc:
    piVar2 = FUN_0043f590(this,param_2,6,0);
    if (piVar2 == (int *)0x0) {
      ExceptionList = local_c;
      return (int *)0x0;
    }
    puVar3 = operator_new(0x44);
    local_4 = 0x1c;
    if (puVar3 != (undefined4 *)0x0) {
      piVar4 = FUN_00432330(puVar3);
      goto LAB_00440338;
    }
    goto LAB_00440336;
  case 0xd:
    if (*(int *)(param_2[0x2c] + 0x2c) != 0) {
      FUN_00405f60(param_2,0);
    }
    iVar5 = FUN_004449d0(param_2[0x2c]);
    if ((iVar5 == -1) && (iVar5 = FUN_0043c540(DAT_004e2408,(int)param_2), iVar5 == -1)) {
      ExceptionList = local_c;
      return (int *)0x0;
    }
    puVar3 = operator_new(0x44);
    local_4 = 0x21;
    if (puVar3 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_0042fdb0(puVar3);
    }
    piVar2[0xc] = 1;
    piVar2[1] = iVar8;
    piVar2[5] = iVar5;
    piVar2[6] = 0;
    piVar2[2] = 0xc;
    ExceptionList = local_c;
    return piVar2;
  case 0xe:
    puVar3 = operator_new(0x34);
    local_4 = 0x22;
    if (puVar3 != (undefined4 *)0x0) {
      piVar2 = FUN_00432a10(puVar3);
      piVar2[0xc] = 1;
      piVar2[1] = iVar8;
      ExceptionList = local_c;
      return piVar2;
    }
    uRam00000030 = 1;
    iRam00000004 = iVar8;
    ExceptionList = local_c;
    return (int *)0x0;
  case 0xf:
    uVar7 = FUN_00405390(param_2);
    if ((char)uVar7 != '\0') {
      ExceptionList = local_c;
      return (int *)0x0;
    }
    if (*(int *)(param_2[0x2c] + 0x2c) == 0) {
      iVar5 = FUN_0043c450((int)DAT_004e2408);
      puVar3 = operator_new(0x44);
      local_4 = 0x23;
      if (puVar3 == (undefined4 *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = FUN_00431c40(puVar3);
      }
      piVar2[1] = iVar8;
      piVar2[7] = (int)*(short *)(iVar5 + 4);
      piVar2[8] = (int)*(short *)(iVar5 + 6);
      piVar2[0xc] = 1;
      ExceptionList = local_c;
      return piVar2;
    }
    ExceptionList = local_c;
    return (int *)0x0;
  case 0x10:
    if (*(int *)(param_2[0x2c] + 0x2c) != 0) {
      ExceptionList = pvVar6;
      return (int *)0x0;
    }
    iVar5 = FUN_0043c5b0(DAT_004e2408,param_2);
    if (iVar5 != 0) {
      puVar3 = operator_new(0x44);
      local_4 = 0x24;
      if (puVar3 == (undefined4 *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = FUN_00431c40(puVar3);
      }
      piVar2[1] = iVar8;
      piVar2[7] = (int)*(short *)(iVar5 + 4);
      piVar2[8] = (int)*(short *)(iVar5 + 6);
      piVar2[0xc] = 1;
      ExceptionList = local_c;
      return piVar2;
    }
    ExceptionList = local_c;
    return (int *)0x0;
  case 0x11:
    iVar5 = FUN_00414c30(DAT_004e240c);
    if (iVar5 != 0) {
      puVar3 = operator_new(0x44);
      local_4 = 0x15;
      if (puVar3 == (undefined4 *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = FUN_00431c40(puVar3);
      }
      piVar2[1] = iVar8;
      piVar2[5] = *(int *)(iVar5 + 0x10);
      piVar2[0xc] = 1;
      ExceptionList = local_c;
      return piVar2;
    }
    ExceptionList = local_c;
    return (int *)0x0;
  case 0x12:
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 1) {
      iVar8 = FUN_004147d0(0x35);
      piVar2 = FUN_0043f6d0(this,param_2,iVar8);
      ExceptionList = local_c;
      return piVar2;
    }
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 2) {
      iVar8 = FUN_004147d0(0x50);
      piVar2 = FUN_0043f6d0(this,param_2,iVar8);
      ExceptionList = local_c;
      return piVar2;
    }
    goto LAB_00440ca3;
  case 0x83:
    puVar3 = operator_new(0x34);
    iVar5 = 7;
    goto LAB_0043fc03;
  case 0x84:
    puVar3 = operator_new(0x34);
    iVar5 = 8;
    goto LAB_0043fc48;
  case 0x85:
    puVar3 = operator_new(0x34);
    iVar5 = 9;
    goto LAB_0043fc03;
  case 0x86:
    puVar3 = operator_new(0x34);
    iVar5 = 10;
LAB_0043fc48:
    if (puVar3 != (undefined4 *)0x0) {
      local_4 = iVar5;
      piVar2 = FUN_00434d90(puVar3);
      piVar2[1] = iVar8;
      piVar2[5] = iVar5;
      ExceptionList = local_c;
      return piVar2;
    }
    iRam00000004 = iVar8;
    iRam00000014 = iVar5;
    ExceptionList = local_c;
    return (int *)0x0;
  case 0x87:
    puVar3 = operator_new(0x34);
    iVar5 = 0xb;
LAB_0043fc03:
    if (puVar3 != (undefined4 *)0x0) {
      local_4 = iVar5;
      piVar2 = FUN_00434d90(puVar3);
      piVar2[1] = iVar8;
      piVar2[5] = iVar5;
      ExceptionList = local_c;
      return piVar2;
    }
    iRam00000004 = iVar8;
    iRam00000014 = iVar5;
    ExceptionList = local_c;
    return (int *)0x0;
  case 0x88:
    puVar3 = operator_new(0x34);
    local_4 = 0xd;
    if (puVar3 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_00434d90(puVar3);
    }
    piVar2[1] = iVar8;
    piVar2[5] = 7;
    piVar2[6] = 1;
    ExceptionList = local_c;
    return piVar2;
  case 0x89:
    puVar3 = operator_new(0x34);
    local_4 = 0xe;
    if (puVar3 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_00434d90(puVar3);
    }
    piVar2[1] = iVar8;
    piVar2[5] = 8;
    piVar2[6] = 1;
    ExceptionList = local_c;
    return piVar2;
  case 0x8a:
    puVar3 = operator_new(0x34);
    local_4 = 0xf;
    if (puVar3 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_00434d90(puVar3);
    }
    piVar2[1] = iVar8;
    piVar2[5] = 9;
    piVar2[6] = 1;
    ExceptionList = local_c;
    return piVar2;
  case 0x8b:
    puVar3 = operator_new(0x34);
    local_4 = 0x10;
    if (puVar3 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_00434d90(puVar3);
    }
    piVar2[1] = iVar8;
    piVar2[5] = 10;
    piVar2[6] = 1;
    ExceptionList = local_c;
    return piVar2;
  case 0x8c:
    puVar3 = operator_new(0x34);
    local_4 = 0x11;
    if (puVar3 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_00434d90(puVar3);
    }
    piVar2[1] = iVar8;
    piVar2[5] = 0xb;
    piVar2[6] = 1;
    ExceptionList = local_c;
    return piVar2;
  case 0x8d:
    *param_3 = 1;
    ExceptionList = pvVar6;
    return (int *)0x0;
  case 0x8e:
    puVar3 = operator_new(0x34);
    local_4 = 3;
    if (puVar3 != (undefined4 *)0x0) {
      piVar2 = FUN_00433170(puVar3);
      piVar2[5] = 0;
      piVar2[1] = iVar8;
      ExceptionList = local_c;
      return piVar2;
    }
    iRam00000014 = 0;
    iRam00000004 = iVar8;
    ExceptionList = local_c;
    return (int *)0x0;
  case 0x8f:
    puVar3 = operator_new(0x34);
    local_4 = 4;
    if (puVar3 != (undefined4 *)0x0) {
      piVar2 = FUN_00433170(puVar3);
      piVar2[5] = 1;
      piVar2[1] = iVar8;
      ExceptionList = local_c;
      return piVar2;
    }
    iRam00000014 = 1;
    iRam00000004 = iVar8;
    ExceptionList = local_c;
    return (int *)0x0;
  case 0x90:
    puVar3 = operator_new(0x34);
    local_4 = 5;
    if (puVar3 != (undefined4 *)0x0) {
      piVar2 = FUN_00433170(puVar3);
      piVar2[5] = 2;
      piVar2[1] = iVar8;
      ExceptionList = local_c;
      return piVar2;
    }
    iRam00000014 = 2;
    iRam00000004 = iVar8;
    ExceptionList = local_c;
    return (int *)0x0;
  case 0x91:
    puVar3 = operator_new(0x34);
    local_4 = 6;
    if (puVar3 != (undefined4 *)0x0) {
      piVar2 = FUN_00433170(puVar3);
      piVar2[5] = 3;
      piVar2[1] = iVar8;
      ExceptionList = local_c;
      return piVar2;
    }
    iRam00000014 = 3;
    iRam00000004 = iVar8;
    ExceptionList = local_c;
    return (int *)0x0;
  case 0x94:
    puVar3 = operator_new(0x34);
    local_4 = 0xc;
    if (puVar3 != (undefined4 *)0x0) {
      piVar2 = FUN_00434d90(puVar3);
      piVar2[1] = iVar8;
      piVar2[5] = 0xd;
      ExceptionList = local_c;
      return piVar2;
    }
    iRam00000004 = iVar8;
    iRam00000014 = 0xd;
    ExceptionList = local_c;
    return (int *)0x0;
  case 0x95:
    puVar3 = operator_new(0x34);
    local_4 = 0x12;
    if (puVar3 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_00434d90(puVar3);
    }
    piVar2[1] = iVar8;
    piVar2[5] = 0xd;
    piVar2[6] = 1;
    ExceptionList = local_c;
    return piVar2;
  case 0x96:
    piVar2 = FUN_0043f590(this,param_2,0xb,0);
    if (piVar2 == (int *)0x0) {
      ExceptionList = local_c;
      return (int *)0x0;
    }
    puVar3 = operator_new(0x44);
    local_4 = 0x13;
    if (puVar3 != (undefined4 *)0x0) {
      piVar4 = FUN_00430480(puVar3);
      goto LAB_00440338;
    }
LAB_00440336:
    piVar4 = (int *)0x0;
LAB_00440338:
    piVar4[0xc] = 1;
    piVar4[1] = iVar8;
    piVar4[5] = piVar2[4];
    piVar4[6] = 0;
    ExceptionList = local_c;
    return piVar4;
  case 0xaa:
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 1) {
      iVar8 = FUN_004147d0(0x32);
      piVar2 = FUN_0043f6d0(this,param_2,iVar8);
      ExceptionList = local_c;
      return piVar2;
    }
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 2) {
      iVar8 = FUN_004147d0(0x4c);
      piVar2 = FUN_0043f6d0(this,param_2,iVar8);
      ExceptionList = local_c;
      return piVar2;
    }
    goto LAB_00440ca3;
  case 0xab:
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 1) {
      iVar8 = FUN_004147d0(0x33);
      piVar2 = FUN_0043f6d0(this,param_2,iVar8);
      ExceptionList = local_c;
      return piVar2;
    }
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 2) {
      iVar8 = FUN_004147d0(0x4d);
      piVar2 = FUN_0043f6d0(this,param_2,iVar8);
      ExceptionList = local_c;
      return piVar2;
    }
    goto LAB_00440ca3;
  case 0xac:
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 1) {
      iVar8 = FUN_004147d0(0x34);
      piVar2 = FUN_0043f6d0(this,param_2,iVar8);
      ExceptionList = local_c;
      return piVar2;
    }
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 2) {
      iVar8 = FUN_004147d0(0x4e);
      piVar2 = FUN_0043f6d0(this,param_2,iVar8);
      ExceptionList = local_c;
      return piVar2;
    }
    goto LAB_00440ca3;
  case 0xad:
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 1) {
      iVar8 = FUN_004147d0(0x2d);
      piVar2 = FUN_0043f6d0(this,param_2,iVar8);
      ExceptionList = local_c;
      return piVar2;
    }
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 2) {
      iVar8 = FUN_004147d0(0x4a);
      piVar2 = FUN_0043f6d0(this,param_2,iVar8);
      ExceptionList = local_c;
      return piVar2;
    }
    goto LAB_00440ca3;
  case 0xae:
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 1) {
      iVar8 = FUN_004147d0(0x2b);
      piVar2 = FUN_0043f6d0(this,param_2,iVar8);
      ExceptionList = local_c;
      return piVar2;
    }
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 2) {
      iVar8 = FUN_004147d0(0x49);
      piVar2 = FUN_0043f6d0(this,param_2,iVar8);
      ExceptionList = local_c;
      return piVar2;
    }
    goto LAB_00440ca3;
  case 0xaf:
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 1) {
      iVar8 = FUN_004147d0(0x31);
      piVar2 = FUN_0043f6d0(this,param_2,iVar8);
      ExceptionList = local_c;
      return piVar2;
    }
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 2) {
      iVar8 = FUN_004147d0(0x47);
      piVar2 = FUN_0043f6d0(this,param_2,iVar8);
      ExceptionList = local_c;
      return piVar2;
    }
    goto LAB_00440ca3;
  case 0xb0:
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 1) {
      iVar8 = FUN_004147d0(0x2c);
      piVar2 = FUN_0043f6d0(this,param_2,iVar8);
      ExceptionList = local_c;
      return piVar2;
    }
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 2) {
      iVar8 = FUN_004147d0(0x46);
      piVar2 = FUN_0043f6d0(this,param_2,iVar8);
      ExceptionList = local_c;
      return piVar2;
    }
    goto LAB_00440ca3;
  case 0xb1:
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 1) {
      iVar8 = FUN_004147d0(0x30);
      piVar2 = FUN_0043f6d0(this,param_2,iVar8);
      ExceptionList = local_c;
      return piVar2;
    }
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 2) {
      iVar8 = FUN_004147d0(0x45);
      piVar2 = FUN_0043f6d0(this,param_2,iVar8);
      ExceptionList = local_c;
      return piVar2;
    }
    goto LAB_00440ca3;
  case 0xb2:
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 1) {
      iVar8 = FUN_004147d0(0x2f);
      piVar2 = FUN_0043f6d0(this,param_2,iVar8);
      ExceptionList = local_c;
      return piVar2;
    }
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 2) {
      iVar8 = FUN_004147d0(0x4f);
      piVar2 = FUN_0043f6d0(this,param_2,iVar8);
      ExceptionList = local_c;
      return piVar2;
    }
LAB_00440ca3:
    piVar2 = FUN_0043f6d0(this,param_2,(int)param_3);
    ExceptionList = local_c;
    return piVar2;
  case 0xb5:
    iVar8 = (**(code **)(*param_2 + 0x88))();
    iVar9 = *(int *)(iVar8 + 0x100) + *(int *)(iVar8 + 0x80);
    iVar8 = (**(code **)(*param_2 + 0x88))();
    iVar5 = *(int *)(iVar8 + 0x124) + *(int *)(iVar8 + 0xa4);
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 1) {
      if (iVar5 < iVar9 * 2) {
        iVar8 = FUN_004147d0(0x23);
        piVar2 = (int *)FUN_0043f520((int)param_2,*(undefined4 *)(iVar8 + 0x14));
        ExceptionList = local_c;
        return piVar2;
      }
      iVar8 = FUN_004147d0(0x1a);
      piVar2 = (int *)FUN_0043f520((int)param_2,*(undefined4 *)(iVar8 + 0x14));
      ExceptionList = local_c;
      return piVar2;
    }
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 2) {
      if (iVar5 < iVar9 * 2) {
        iVar8 = FUN_004147d0(0x43);
        piVar2 = (int *)FUN_0043f520((int)param_2,*(undefined4 *)(iVar8 + 0x14));
        ExceptionList = local_c;
        return piVar2;
      }
      iVar8 = FUN_004147d0(0x37);
      piVar2 = (int *)FUN_0043f520((int)param_2,*(undefined4 *)(iVar8 + 0x14));
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 0xb7:
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 1) {
      iVar8 = FUN_004147d0(0x1b);
      piVar2 = (int *)FUN_0043f520((int)param_2,*(undefined4 *)(iVar8 + 0x14));
      ExceptionList = local_c;
      return piVar2;
    }
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 2) {
      iVar8 = FUN_004147d0(0x38);
      piVar2 = (int *)FUN_0043f520((int)param_2,*(undefined4 *)(iVar8 + 0x14));
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 0xb8:
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 1) {
      iVar8 = FUN_004147d0(0x24);
      piVar2 = (int *)FUN_0043f520((int)param_2,*(undefined4 *)(iVar8 + 0x14));
      ExceptionList = local_c;
      return piVar2;
    }
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 2) {
      iVar8 = FUN_004147d0(0x44);
      piVar2 = (int *)FUN_0043f520((int)param_2,*(undefined4 *)(iVar8 + 0x14));
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 0xb9:
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 1) {
      iVar8 = FUN_004147d0(0x20);
      piVar2 = (int *)FUN_0043f520((int)param_2,*(undefined4 *)(iVar8 + 0x14));
      ExceptionList = local_c;
      return piVar2;
    }
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 2) {
      iVar8 = FUN_004147d0(0x40);
      piVar2 = (int *)FUN_0043f520((int)param_2,*(undefined4 *)(iVar8 + 0x14));
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 0xba:
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 1) {
      iVar8 = FUN_004147d0(0x29);
      piVar2 = (int *)FUN_0043f520((int)param_2,*(undefined4 *)(iVar8 + 0x14));
      ExceptionList = local_c;
      return piVar2;
    }
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 2) {
      iVar8 = FUN_004147d0(0x3b);
      piVar2 = (int *)FUN_0043f520((int)param_2,*(undefined4 *)(iVar8 + 0x14));
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 0xbb:
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 1) {
      iVar8 = FUN_004147d0(0x1e);
      piVar2 = (int *)FUN_0043f520((int)param_2,*(undefined4 *)(iVar8 + 0x14));
      ExceptionList = local_c;
      return piVar2;
    }
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 2) {
      iVar8 = FUN_004147d0(0x3f);
      piVar2 = (int *)FUN_0043f520((int)param_2,*(undefined4 *)(iVar8 + 0x14));
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 0xbc:
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 1) {
      iVar8 = FUN_004147d0(0x1f);
      piVar2 = (int *)FUN_0043f520((int)param_2,*(undefined4 *)(iVar8 + 0x14));
      ExceptionList = local_c;
      return piVar2;
    }
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 2) {
      iVar8 = FUN_004147d0(0x3d);
      piVar2 = (int *)FUN_0043f520((int)param_2,*(undefined4 *)(iVar8 + 0x14));
      ExceptionList = local_c;
      return piVar2;
    }
    piVar2 = (int *)FUN_0043f520((int)param_2,param_3[5]);
    ExceptionList = local_c;
    return piVar2;
  case 0xbd:
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 1) {
      iVar8 = FUN_004147d0(0x1d);
      piVar2 = (int *)FUN_0043f520((int)param_2,*(undefined4 *)(iVar8 + 0x14));
      ExceptionList = local_c;
      return piVar2;
    }
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 2) {
      iVar8 = FUN_004147d0(0x3e);
      piVar2 = (int *)FUN_0043f520((int)param_2,*(undefined4 *)(iVar8 + 0x14));
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 0xbe:
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if ((*(int *)(iVar8 + 0x50) == 1) ||
       (iVar8 = (**(code **)(*param_2 + 0x88))(), *(int *)(iVar8 + 0x50) == 2)) {
      iVar8 = FUN_004147d0(0x39);
      piVar2 = (int *)FUN_0043f520((int)param_2,*(undefined4 *)(iVar8 + 0x14));
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 0xbf:
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 1) {
      iVar8 = FUN_004147d0(0x21);
      piVar2 = (int *)FUN_0043f520((int)param_2,*(undefined4 *)(iVar8 + 0x14));
      ExceptionList = local_c;
      return piVar2;
    }
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 2) {
      iVar8 = FUN_004147d0(0x41);
      piVar2 = (int *)FUN_0043f520((int)param_2,*(undefined4 *)(iVar8 + 0x14));
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 0xc0:
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 1) {
      iVar8 = FUN_004147d0(0x28);
      piVar2 = (int *)FUN_0043f520((int)param_2,*(undefined4 *)(iVar8 + 0x14));
      ExceptionList = local_c;
      return piVar2;
    }
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 2) {
      iVar8 = FUN_004147d0(0x3c);
      piVar2 = (int *)FUN_0043f520((int)param_2,*(undefined4 *)(iVar8 + 0x14));
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 0xc1:
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if ((*(int *)(iVar8 + 0x50) == 1) ||
       (iVar8 = (**(code **)(*param_2 + 0x88))(), *(int *)(iVar8 + 0x50) == 2)) {
      iVar8 = FUN_004147d0(0x25);
      piVar2 = (int *)FUN_0043f520((int)param_2,*(undefined4 *)(iVar8 + 0x14));
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 0xc4:
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 1) {
      iVar8 = FUN_004147d0(0x1c);
      piVar2 = (int *)FUN_0043f520((int)param_2,*(undefined4 *)(iVar8 + 0x14));
      ExceptionList = local_c;
      return piVar2;
    }
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 2) {
      iVar8 = FUN_004147d0(0x74);
      piVar2 = (int *)FUN_0043f520((int)param_2,*(undefined4 *)(iVar8 + 0x14));
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 0xc5:
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 1) {
      iVar8 = FUN_004147d0(0x2a);
      piVar2 = (int *)FUN_0043f520((int)param_2,*(undefined4 *)(iVar8 + 0x14));
      ExceptionList = local_c;
      return piVar2;
    }
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 2) {
      iVar8 = FUN_004147d0(0x76);
      piVar2 = (int *)FUN_0043f520((int)param_2,*(undefined4 *)(iVar8 + 0x14));
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 0xc6:
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 1) {
      iVar8 = FUN_004147d0(0x27);
      piVar2 = (int *)FUN_0043f520((int)param_2,*(undefined4 *)(iVar8 + 0x14));
      ExceptionList = local_c;
      return piVar2;
    }
    iVar8 = (**(code **)(*param_2 + 0x88))();
    if (*(int *)(iVar8 + 0x50) == 2) {
      iVar8 = FUN_004147d0(0x75);
      piVar2 = (int *)FUN_0043f520((int)param_2,*(undefined4 *)(iVar8 + 0x14));
      ExceptionList = local_c;
      return piVar2;
    }
  }
  piVar2 = (int *)FUN_0043f520((int)param_2,param_3[5]);
  ExceptionList = local_c;
  return piVar2;
}

