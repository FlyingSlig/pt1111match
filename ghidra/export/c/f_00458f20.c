// FUNCTION: PORT1111 0x00458f20
// name: FUN_00458f20
// sig: undefined4 FUN_00458f20(void * this, void * param_1)


undefined4 __thiscall FUN_00458f20(void *this,void *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined3 extraout_var;
  void *pvVar5;
  undefined4 *puVar6;
  uint uVar7;
  int local_20;
  undefined4 local_1c;
  char *pcStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9128;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_0041c430(0x4e2430);
  if (*(int *)(iVar2 + 0xc) != 0) {
    uVar3 = FUN_004585b0(this,*(char **)(iVar2 + 0x10),param_1,*(int *)(iVar2 + 0xc));
    ExceptionList = local_c;
    return uVar3;
  }
  FUN_00451970(&local_20);
  local_4 = 0;
  FUN_00403340(DAT_004e2b14,&local_1c);
  local_4._0_1_ = 1;
  puVar4 = FUN_00466af0(&local_14,(uchar *)"Data\\Setup\\Config.pcf",0xffffffff);
  local_4._0_1_ = 2;
  FUN_00466a30(&local_1c,puVar4);
  local_4._0_1_ = 1;
  FUN_00465e40(&local_14);
  bVar1 = FUN_00451b10(&local_20,&local_1c);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_4 = CONCAT31(local_4._1_3_,bVar1);
    FUN_00465e40(&local_1c);
    local_4 = 0xffffffff;
    FUN_00451ae0(&local_20);
    ExceptionList = local_c;
    return 0;
  }
  puVar4 = FUN_00466af0(&uStack_10,(uchar *)"soure1234",0xffffffff);
  local_4._0_1_ = 3;
  pvVar5 = (void *)FUN_00465cf0(&local_14);
  local_4._0_1_ = 4;
  puVar6 = FUN_00466970(pvVar5,(byte *)"%s%d.pia");
  iVar2 = FUN_004519d0(&local_20,puVar6,puVar4);
  local_4._0_1_ = 3;
  FUN_00465e40(&local_14);
  local_4._0_1_ = 1;
  FUN_00465e40(&uStack_10);
  if (iVar2 == 0) {
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00465e40(&local_1c);
    local_4 = 0xffffffff;
    FUN_00451ae0(&local_20);
    ExceptionList = local_c;
    return 0;
  }
  uVar7 = FUN_00451a30(&local_20,(int *)&pcStack_18);
  if (-1 < (int)uVar7) {
    FUN_004585b0(this,pcStack_18,param_1,uVar7);
                    /* WARNING: Subroutine does not return */
    _free(pcStack_18);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00465e40(&local_1c);
  local_4 = 0xffffffff;
  FUN_00451ae0(&local_20);
  ExceptionList = local_c;
  return 0;
}

