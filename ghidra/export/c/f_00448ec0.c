// FUNCTION: PORT1111 0x00448ec0
// name: FUN_00448ec0
// sig: undefined4 FUN_00448ec0(void * this, int param_1, int param_2, int param_3)


undefined4 __thiscall FUN_00448ec0(void *this,int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined3 extraout_var;
  uint uVar5;
  undefined4 uStack_14;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b87ad;
  pvStack_c = ExceptionList;
  DAT_004e27e8 = 0;
  ExceptionList = &pvStack_c;
  *(undefined4 *)((int)this + 0x28) = 0;
  DAT_004e0af0 = 0;
  FUN_0047caa0(*(void **)((int)this + 0x24),0);
  DAT_004e2afc[2] = 1;
  iVar2 = FUN_0047c5f0(*(int *)((int)this + 0x24));
  *(undefined4 *)(iVar2 + 0x804) = 0;
  *(undefined4 *)(iVar2 + 0x808) = 0;
  *(undefined4 *)(iVar2 + 0x80c) = 0;
  local_10 = operator_new(0x3c);
  local_4 = 0;
  if (local_10 == (undefined4 *)0x0) {
    DAT_004e2420 = (undefined4 *)0x0;
  }
  else {
    DAT_004e2420 = FUN_004429c0(local_10);
  }
  local_4 = 0xffffffff;
  local_10 = operator_new(0x11c);
  local_4 = 1;
  if (local_10 == (undefined4 *)0x0) {
    DAT_004e2404 = (undefined4 *)0x0;
  }
  else {
    DAT_004e2404 = FUN_0042bca0(local_10,&DAT_004e26c8);
  }
  local_4 = 0xffffffff;
  thunk_FUN_004293f0((int)DAT_004e2404);
  local_10 = operator_new(0x234);
  local_4 = 2;
  if (local_10 == (undefined4 *)0x0) {
    DAT_004e240c = (undefined4 *)0x0;
  }
  else {
    DAT_004e240c = FUN_00417530(local_10);
  }
  local_4 = 0xffffffff;
  uVar3 = (**(code **)(*(int *)this + 0x4c))();
  FUN_004130f0(DAT_004e240c,uVar3);
  local_10 = operator_new(0x934);
  local_4 = 3;
  if (local_10 == (undefined4 *)0x0) {
    DAT_004e2410 = (undefined4 *)0x0;
  }
  else {
    DAT_004e2410 = FUN_00454d40(local_10);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00455c60(DAT_004e2410,*(undefined4 *)((int)this + 0x24));
  if (iVar2 != 0) {
    local_10 = operator_new(0x18);
    local_4 = 4;
    if (local_10 == (undefined4 *)0x0) {
      DAT_004e2414 = (undefined4 *)0x0;
    }
    else {
      DAT_004e2414 = FUN_00454a30(local_10,*(undefined4 *)((int)this + 0x24));
    }
    local_4 = 0xffffffff;
    iVar2 = FUN_00454ab0((int)DAT_004e2414);
    if (iVar2 != 0) {
      local_10 = operator_new(0xc);
      local_4 = 5;
      if (local_10 == (undefined4 *)0x0) {
        DAT_004e241c = 0;
      }
      else {
        DAT_004e241c = FUN_0043e910(local_10);
      }
      local_4 = 0xffffffff;
      local_10 = operator_new(0x10);
      local_4 = 6;
      if (local_10 == (undefined4 *)0x0) {
        DAT_004e2418 = (undefined4 *)0x0;
      }
      else {
        DAT_004e2418 = FUN_0040b900(local_10);
      }
      local_4 = 0xffffffff;
      FUN_00466af0(&uStack_14,"",0xffffffff);
      local_4 = 7;
      if (DAT_004e2684 == '\0') {
        puVar4 = FUN_00403340(DAT_004e2b14,&local_10);
        local_4._0_1_ = 8;
        FUN_00466a50(&uStack_14,puVar4);
        local_4 = CONCAT31(local_4._1_3_,7);
        FUN_00465e40(&local_10);
        thunk_FUN_00466040(&uStack_14,"data\\maps\\");
      }
      bVar1 = FUN_00465ec0((undefined4 *)&DAT_004e2448);
      if ((CONCAT31(extraout_var,bVar1) == 0) && (iVar2 = FUN_0041c940(&DAT_004e2430), iVar2 == 0))
      {
        FUN_0046ab50(&DAT_004c4028,0);
        DAT_004e2afc[2] = 0;
        (**(code **)(*DAT_004e2afc + 4))();
        (**(code **)(*(int *)this + 0x34))();
      }
      else {
        DAT_004e0868 = 1;
        uVar5 = DAT_004dc298;
        if (DAT_004dc298 == 0xffffffff) {
          uVar5 = DAT_004e26fc & 0xff;
        }
        FUN_00423c70(&DAT_004e26e8,(byte)uVar5);
        DAT_004e0868 = 0;
        iVar2 = FUN_00415c30();
        if (iVar2 == 0) {
          local_4 = 0xffffffff;
          FUN_00465e40(&uStack_14);
          ExceptionList = pvStack_c;
          return 0;
        }
        FUN_00442860(DAT_004e2420);
        iVar2 = *(int *)(DAT_004e26f0 + DAT_004e26fc * 4);
        FUN_0043a280(*(uint *)(iVar2 + 0x210),*(uint *)(iVar2 + 0x214));
        if (param_1 == 0) {
          FUN_00422c70(*(void **)(DAT_004e26f0 + DAT_004e26fc * 4),param_2);
          FUN_00422c70(*(void **)(DAT_004e26f0 + DAT_004e2700 * 4),
                       *(int *)(*(int *)(DAT_004e26f0 + DAT_004e2700 * 4) + 0x38) + param_3);
        }
        else {
          FUN_00422cb0(*(int *)(DAT_004e26f0 + DAT_004e26fc * 4));
          FUN_00422cb0(*(int *)(DAT_004e26f0 + DAT_004e2700 * 4));
        }
        if ((DAT_004e2687 != '\0') && (DAT_004e2800 != (void *)0x0)) {
          FUN_0044c400((int)DAT_004e2800);
          FUN_0044d270(DAT_004e2800,(char *)0x1,
                       *(int *)(*(int *)(DAT_004e26f0 + DAT_004e26fc * 4) + 0x50));
          FUN_0044d270(DAT_004e2800,(char *)0x2,
                       *(int *)(*(int *)(DAT_004e26f0 + DAT_004e26fc * 4) + 0x50));
        }
        FUN_0047caa0(*(void **)((int)this + 0x24),1);
        DAT_004e2afc[2] = 0;
        (**(code **)(*DAT_004e2afc + 4))();
        FUN_00415160((int)DAT_004e240c);
        FUN_00413300();
        *(undefined4 *)((int)this + 0x2c) = 1;
      }
      local_4 = 0xffffffff;
      FUN_00465e40(&uStack_14);
      ExceptionList = pvStack_c;
      return 1;
    }
  }
  ExceptionList = pvStack_c;
  return 0;
}

