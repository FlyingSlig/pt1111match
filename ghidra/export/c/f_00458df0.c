// FUNCTION: PORT1111 0x00458df0
// name: FUN_00458df0
// sig: undefined4 FUN_00458df0(void * this, void * param_1)


undefined4 __thiscall FUN_00458df0(void *this,void *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  int local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b90f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00451970(&local_1c);
  local_4 = 0;
  FUN_00403340(DAT_004e2b14,&local_18);
  local_4._0_1_ = 1;
  puVar1 = FUN_00466af0(&local_10,(uchar *)"Data\\Setup\\Config.pcf",0xffffffff);
  local_4._0_1_ = 2;
  FUN_00466a30(&local_18,puVar1);
  local_4._0_1_ = 1;
  FUN_00465e40(&local_10);
  FUN_00451b10(&local_1c,&local_18);
  pvVar2 = (void *)FUN_00465cf0(&local_10);
  local_4._0_1_ = 3;
  puVar1 = FUN_00466970(pvVar2,(byte *)"%s%d.aia");
  FUN_00451980(&local_1c,puVar1);
  local_4._0_1_ = 1;
  FUN_00465e40(&local_10);
  uVar3 = FUN_00451a30(&local_1c,(int *)&local_14);
  if (-1 < (int)uVar3) {
    FUN_004585b0(this,local_14,param_1,uVar3);
                    /* WARNING: Subroutine does not return */
    _free(local_14);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00465e40(&local_18);
  local_4 = 0xffffffff;
  FUN_00451ae0(&local_1c);
  ExceptionList = local_c;
  return 0;
}

