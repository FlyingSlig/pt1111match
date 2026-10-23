// FUNCTION: PORT1111 0x00403380
// name: FUN_00403380
// sig: undefined FUN_00403380(void)


void FUN_00403380(void)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 uStack_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b582b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0044d460(&DAT_004e279c,"fx.rdt");
  if (iVar1 == 0) {
    ExceptionList = local_c;
    return;
  }
  if (*(int *)((int)DAT_004e2b14 + 0x4c) == 0) {
    DAT_004e2687 = 0;
  }
  else {
    local_10 = operator_new(0xe0);
    local_4 = 0;
    if (local_10 == (void *)0x0) {
      DAT_004e2800 = (void *)0x0;
    }
    else {
      DAT_004e2800 = (void *)FUN_0044d1d0((int)local_10);
    }
    local_4 = 0xffffffff;
    uVar2 = (**(code **)(*DAT_004e2b10 + 0x3c))();
    iVar1 = FUN_0044c070(DAT_004e2800,uVar2);
    pvVar3 = DAT_004e2800;
    if (iVar1 == 0) {
      DAT_004e2687 = 0;
      DAT_004e2686 = 0;
      if (DAT_004e2800 != (void *)0x0) {
        FUN_0044cfd0(DAT_004e2800);
                    /* WARNING: Subroutine does not return */
        _free(pvVar3);
      }
      DAT_004e2800 = (void *)0x0;
    }
  }
  if (*(int *)((int)DAT_004e2b14 + 0x48) == 0) {
    DAT_004e2686 = 0;
  }
  FUN_0044a680();
  FUN_0044a0c0();
  pvVar3 = FUN_00403340(DAT_004e2b14,&local_10);
  local_4 = 1;
  puVar4 = FUN_00466fb0(pvVar3,&uStack_14,"data\\ai");
  local_4._0_1_ = 2;
  FUN_00466a50(&DAT_004e2a80,puVar4);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00465e40(&uStack_14);
  local_4 = 0xffffffff;
  FUN_00465e40(&local_10);
  FUN_0044e9d0(&DAT_004e279c,(uchar *)"alert.wav",0xc);
  FUN_00409110();
  ExceptionList = local_c;
  return;
}

