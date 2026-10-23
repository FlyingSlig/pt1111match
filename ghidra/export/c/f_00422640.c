// FUNCTION: PORT1111 0x00422640
// name: FUN_00422640
// sig: undefined4 FUN_00422640(int param_1)


undefined4 __fastcall FUN_00422640(int param_1)

{
  undefined4 *puVar1;
  uchar *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_40;
  undefined4 local_3c [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b6d70;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0047e2c0(local_3c,0);
  local_4 = 0;
  puVar1 = FUN_00468080(DAT_004e2b14,&local_40,"SEL_S_NO.png");
  uVar3 = *(undefined4 *)((int)DAT_004e2b14 + 0x60);
  iVar4 = 0;
  local_4._0_1_ = 1;
  puVar2 = (uchar *)FUN_00465e00(puVar1);
  iVar4 = FUN_0047e4d0(local_3c,puVar2,uVar3,iVar4);
  local_4._0_1_ = 0;
  FUN_00465e40(&local_40);
  if (iVar4 != 0) {
    iVar4 = FUN_0047e810((int)local_3c);
    *(int *)(param_1 + 0x10) = iVar4 >> 1;
    iVar4 = FUN_0047e870((int)local_3c);
    *(int *)(param_1 + 0x1c) = iVar4 >> 1;
    puVar1 = FUN_0047e740((int)local_3c);
    *(undefined4 **)(param_1 + 4) = puVar1;
    *(undefined4 *)(puVar1[1] + 0xc) = 2;
    *(uint *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x18) = (uint)*(ushort *)(param_1 + 0x58);
    puVar1 = FUN_00468080(DAT_004e2b14,&local_40,"SEL_L_NO.png");
    uVar3 = *(undefined4 *)((int)DAT_004e2b14 + 0x60);
    iVar4 = 0;
    local_4._0_1_ = 2;
    puVar2 = (uchar *)FUN_00465e00(puVar1);
    iVar4 = FUN_0047e4d0(local_3c,puVar2,uVar3,iVar4);
    local_4._0_1_ = 0;
    FUN_00465e40(&local_40);
    if (iVar4 != 0) {
      iVar4 = FUN_0047e810((int)local_3c);
      *(int *)(param_1 + 0x14) = iVar4 >> 1;
      iVar4 = FUN_0047e870((int)local_3c);
      *(int *)(param_1 + 0x20) = iVar4 >> 1;
      puVar1 = FUN_0047e740((int)local_3c);
      *(undefined4 **)(param_1 + 8) = puVar1;
      *(undefined4 *)(puVar1[1] + 0xc) = 2;
      *(uint *)(*(int *)(*(int *)(param_1 + 8) + 4) + 0x18) = (uint)*(ushort *)(param_1 + 0x58);
      puVar1 = FUN_00468080(DAT_004e2b14,&local_40,"SEL_XL_NO.png");
      uVar3 = *(undefined4 *)((int)DAT_004e2b14 + 0x60);
      iVar4 = 0;
      local_4._0_1_ = 3;
      puVar2 = (uchar *)FUN_00465e00(puVar1);
      iVar4 = FUN_0047e4d0(local_3c,puVar2,uVar3,iVar4);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00465e40(&local_40);
      if (iVar4 != 0) {
        iVar4 = FUN_0047e810((int)local_3c);
        *(int *)(param_1 + 0x18) = iVar4 >> 1;
        iVar4 = FUN_0047e870((int)local_3c);
        *(int *)(param_1 + 0x24) = iVar4 >> 1;
        puVar1 = FUN_0047e740((int)local_3c);
        *(undefined4 **)(param_1 + 0xc) = puVar1;
        *(undefined4 *)(puVar1[1] + 0xc) = 2;
        *(uint *)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 0x18) = (uint)*(ushort *)(param_1 + 0x58);
        local_4 = 0xffffffff;
        FUN_0047e300(local_3c);
        ExceptionList = local_c;
        return 1;
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_0047e300(local_3c);
  ExceptionList = local_c;
  return 0;
}

