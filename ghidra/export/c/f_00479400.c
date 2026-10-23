// FUNCTION: PORT1111 0x00479400
// name: FUN_00479400
// sig: undefined4 FUN_00479400(void * this, undefined4 * param_1)


undefined4 __thiscall FUN_00479400(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  char local_1d;
  uint local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004ba26c;
  local_c = ExceptionList;
  if ((char)((uint)DAT_004e2c54 >> 8) != -0x60) {
    ExceptionList = &local_c;
    FUN_00465cf0(&local_14);
    puVar2 = param_1;
    local_4 = 3;
    FUN_0048a150(param_1,&local_14);
    FUN_0048a130(puVar2,(int)this + 0x34);
    FUN_0048a130(puVar2,(int)this + 0x58);
    FUN_0048a130(puVar2,(int)this + 0x56);
    local_1d = '\0';
    FUN_0048a0f0(puVar2,&local_1d);
    if (local_1d == '\x01') {
      param_1 = operator_new(0x38);
      local_4._0_1_ = 4;
      if (param_1 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_0047a370(param_1);
      }
      local_4 = CONCAT31(local_4._1_3_,3);
      *(undefined4 **)((int)this + 0x5c) = puVar4;
      FUN_0047aaa0(puVar4,puVar2);
    }
    FUN_0048a0f0(puVar2,&local_1d);
    if (local_1d == '\x01') {
      param_1 = operator_new(0x38);
      local_4._0_1_ = 5;
      if (param_1 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_0047a370(param_1);
      }
      local_4 = CONCAT31(local_4._1_3_,3);
      *(undefined4 **)((int)this + 0x60) = puVar4;
      FUN_0047aaa0(puVar4,puVar2);
    }
    uVar6 = FUN_0047aaa0(this,puVar2);
    local_4 = 0xffffffff;
    FUN_00465e40(&local_14);
    ExceptionList = local_c;
    return uVar6;
  }
  ExceptionList = &local_c;
  FUN_0048a110(param_1,&param_1);
  FUN_00465cf0(&local_18);
  local_4 = 0;
  FUN_0048a150(puVar2,&local_18);
  if (DAT_004e2c54 < 0xa017) {
    FUN_0048a110(puVar2,&param_1);
  }
  FUN_0048a110(puVar2,&param_1);
  *(undefined2 *)((int)this + 0x34) = param_1._0_2_;
  FUN_0048a110(puVar2,(int)this + 4);
  FUN_0048a110(puVar2,(int)this + 8);
  FUN_0048a110(puVar2,&param_1);
  FUN_0048a110(puVar2,(int)this + 0x10);
  FUN_0048a110(puVar2,&param_1);
  FUN_0048a110(puVar2,&param_1);
  FUN_0048a110(puVar2,&param_1);
  FUN_0048a110(puVar2,&param_1);
  FUN_0048a110(puVar2,&param_1);
  FUN_0048a110(puVar2,&param_1);
  *(undefined2 *)((int)this + 0x58) = param_1._0_2_;
  FUN_0048a110(puVar2,&param_1);
  FUN_0048a110(puVar2,&param_1);
  if (DAT_004e2c54 < 0xa017) {
    FUN_0048a110(puVar2,&param_1);
    FUN_0048a110(puVar2,&param_1);
  }
  if (0xa00f < DAT_004e2c54) {
    FUN_0048a110(puVar2,&param_1);
    *(undefined2 *)((int)this + 0x56) = param_1._0_2_;
    FUN_0048a110(puVar2,&param_1);
  }
  FUN_0048a110(puVar2,&local_1c);
  pvVar3 = operator_new(0x10);
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    *(undefined4 *)((int)pvVar3 + 4) = 0;
    *(undefined4 *)((int)pvVar3 + 8) = 0;
    *(undefined4 *)((int)pvVar3 + 0xc) = 0;
  }
  local_4 = local_4 & 0xffffff00;
  *(void **)((int)this + 0x14) = pvVar3;
  FUN_004790c0(pvVar3,local_1c);
  local_14 = 0;
  if (0 < (int)local_1c) {
    do {
      local_10 = operator_new(0x10);
      local_4._0_1_ = 2;
      if (local_10 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_0047bc60(local_10,0);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      local_10 = puVar4;
      iVar5 = FUN_0047bcd0(puVar4,puVar2);
      if (iVar5 == 0) {
        if (puVar4 != (undefined4 *)0x0) {
          FUN_0047bab0(puVar4);
                    /* WARNING: Subroutine does not return */
          _free(puVar4);
        }
        local_4 = 0xffffffff;
        FUN_00465e40(&local_18);
        ExceptionList = local_c;
        return 0;
      }
      pvVar3 = *(void **)((int)this + 0x14);
      iVar5 = *(int *)((int)pvVar3 + 4);
      if ((iVar5 == 0) ||
         ((uint)(*(int *)((int)pvVar3 + 0xc) - iVar5 >> 2) <=
          (uint)(*(int *)((int)pvVar3 + 8) - iVar5 >> 2))) {
        FUN_00478ee0(pvVar3,*(undefined4 **)((int)pvVar3 + 8),1,&local_10);
      }
      else {
        puVar1 = *(undefined4 **)((int)pvVar3 + 8);
        *puVar1 = puVar4;
        *(undefined4 **)((int)pvVar3 + 8) = puVar1 + 1;
      }
      local_14 = local_14 + 1;
    } while (local_14 < (int)local_1c);
  }
  if (0xa016 < DAT_004e2c54) {
    FUN_0048a110(puVar2,(int)this + 0x28);
  }
  local_4 = 0xffffffff;
  FUN_00465e40(&local_18);
  ExceptionList = local_c;
  return 1;
}

