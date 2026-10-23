// FUNCTION: PORT1111 0x004458b0
// name: FUN_004458b0
// sig: undefined4 FUN_004458b0(int param_1)


undefined4 __fastcall FUN_004458b0(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  uchar *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 *local_44;
  undefined4 local_40 [9];
  void *pvStack_1c;
  uint uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8288;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0041e9c0(&DAT_004e2430);
  FUN_0047f8b0(local_40,1,1);
  local_4 = 0;
  FUN_00465cf0(&local_4c);
  local_4._0_1_ = 1;
  FUN_00466970(&local_4c,(byte *)"cmapa%d.png");
  local_44 = &stack0xffffffa8;
  FUN_00466b20(&stack0xffffffa8,&local_4c);
  puVar1 = FUN_00468210(DAT_004e2b14,&local_48);
  local_4._0_1_ = 2;
  FUN_00466a50(&local_4c,puVar1);
  local_4._0_1_ = 1;
  FUN_00465e40(&local_48);
  pvVar2 = FUN_00445840(DAT_004e2b14,&local_44);
  local_4._0_1_ = 3;
  puVar1 = FUN_00466fd0(pvVar2,&local_48,&local_4c);
  local_4._0_1_ = 4;
  FUN_00466a50(&local_4c,puVar1);
  local_4._0_1_ = 3;
  FUN_00465e40(&local_48);
  local_4._0_1_ = 1;
  FUN_00465e40(&local_44);
  pvVar2 = *(void **)((int)DAT_004e2b14 + 100);
  uVar5 = 0;
  puVar3 = (uchar *)FUN_00465e00(&local_4c);
  iVar4 = FUN_0046d560(local_40,puVar3,uVar5,pvVar2);
  if (iVar4 == 0) {
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00465e40(&local_4c);
    local_4 = 0xffffffff;
    FUN_0047fc50(local_40);
    ExceptionList = local_c;
    return 0;
  }
  (**(code **)(**(int **)((int)DAT_004e2b14 + 0x5c) + 0x2c))
            (local_40,*(undefined4 *)(param_1 + 0x28));
  uStack_14 = uStack_14 & 0xffffff00;
  FUN_00465e40((undefined4 *)&stack0xffffffa4);
  uStack_14 = 0xffffffff;
  FUN_0047fc50((undefined4 *)&stack0xffffffb0);
  ExceptionList = pvStack_1c;
  return 1;
}

