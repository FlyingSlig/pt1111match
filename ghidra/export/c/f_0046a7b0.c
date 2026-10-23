// FUNCTION: PORT1111 0x0046a7b0
// name: FUN_0046a7b0
// sig: undefined4 FUN_0046a7b0(void * this, int * param_1, undefined4 param_2)


undefined4 __thiscall FUN_0046a7b0(void *this,int *param_1,undefined4 param_2)

{
  int *this_00;
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined3 extraout_var;
  char *pcVar5;
  undefined4 *puVar6;
  uchar *puVar7;
  uint uVar8;
  undefined4 local_24;
  void *pvStack_20;
  tagRECT local_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b9bf0;
  pvStack_c = ExceptionList;
  iVar4 = *(int *)(*(int *)((int)this + 0x6c) + 0x1c);
  ExceptionList = &pvStack_c;
  iVar3 = GetSystemMetrics(0);
  if ((iVar4 < iVar3) && (DAT_004e2c2c == 0)) {
    local_24 = 0;
    iVar4 = *(int *)(*(int *)((int)this + 0x6c) + 0x1c);
    uVar8 = 0x80ca0000;
    iVar3 = GetSystemMetrics(0);
    local_1c.left = (iVar3 - iVar4) / 2;
    iVar4 = *(int *)(*(int *)((int)this + 0x6c) + 0x20);
    iVar3 = GetSystemMetrics(1);
    local_1c.top = (iVar3 - iVar4) / 2;
    local_1c.right = *(int *)(*(int *)((int)this + 0x6c) + 0x1c) + local_1c.left;
    local_1c.bottom = *(int *)(*(int *)((int)this + 0x6c) + 0x20) + local_1c.top;
    AdjustWindowRectEx(&local_1c,0x80ca0000,0,0);
  }
  else {
    iVar4 = *(int *)(*(int *)((int)this + 0x6c) + 0x1c);
    iVar3 = GetSystemMetrics(0);
    if ((iVar3 == iVar4) || (DAT_004e2c2c != 0)) {
      uVar8 = 0x80000000;
      local_24 = 8;
    }
    else {
      uVar8 = 0x80000;
    }
    local_1c.left = 0;
    local_1c.top = 0;
    local_1c.right = *(int *)(*(int *)((int)this + 0x6c) + 0x1c);
    local_1c.bottom = *(int *)(*(int *)((int)this + 0x6c) + 0x20);
  }
  if (DAT_004e2c28 == 0) {
    uVar8 = uVar8 | 0x2000000;
  }
  FUN_00484ee0("GPEFrameWnd",*(HICON *)((int)this + 0x70),(HICON)0x0,(HCURSOR)0x0,(LPCSTR)0x0,4,0);
  FUN_00484ee0("GPEPageWnd",(HICON)0x0,(HICON)0x0,(HCURSOR)0x0,(LPCSTR)0x0,4,0);
  iVar4 = (**(code **)(*param_1 + 0x38))
                    (param_2,*(undefined4 *)((int)this + 0x18),uVar8,local_24,&local_1c);
  if (iVar4 != 0) {
    *(int **)((int)this + 0x68) = param_1;
    param_1[1] = *(int *)((int)this + 8);
    param_1[2] = *(int *)((int)this + 0xc);
    piVar1 = DAT_004e2b20;
    (**(code **)*DAT_004e2b20)();
    local_1c.top = 0;
    (**(code **)(*param_1 + 0x3c))();
    this_00 = (int *)((int)this + 0x84);
    uVar8 = FUN_004865d0(this_00);
    if (((int)uVar8 < 0) || (iVar4 = FUN_00486620(this_00,2,0x5622,0x10), iVar4 < 0)) {
      *(undefined4 *)((int)DAT_004e2b14 + 0x48) = 0;
    }
    else {
      FUN_00488aa0((void *)((int)this + 0x88),(int *)*this_00);
      bVar2 = FUN_00466ab0((undefined4 *)((int)this + 0xf8),"");
      if (CONCAT31(extraout_var,bVar2) != 0) {
        local_1c.bottom = (LONG)DAT_004e2b14;
        pcVar5 = (char *)FUN_00465e00((undefined4 *)((int)this + 0xf8));
        puVar6 = FUN_004680e0((void *)local_1c.bottom,&pvStack_c,pcVar5);
        local_1c.top._0_1_ = 1;
        puVar7 = (uchar *)FUN_00465e00(puVar6);
        FUN_00488a30((void *)((int)this + 0x88),puVar7);
        local_1c.top = (uint)local_1c.top._1_3_ << 8;
        FUN_00465e40(&pvStack_c);
      }
    }
    iVar4 = FUN_004841d0(param_1);
    if (iVar4 == 0) {
      local_1c.top = -1;
      (**(code **)(*piVar1 + 4))();
      ExceptionList = pvStack_20;
      return 0;
    }
    (**(code **)(*param_1 + 0x40))();
    (**(code **)(*param_1 + 0x20))();
    local_1c.top = -1;
    (**(code **)(*piVar1 + 4))();
    ExceptionList = pvStack_20;
    return 1;
  }
  ExceptionList = pvStack_20;
  return 0;
}

