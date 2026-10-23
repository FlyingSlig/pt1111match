// FUNCTION: PORT1111 0x0041e030
// name: FUN_0041e030
// sig: undefined4 FUN_0041e030(void * param_1)


undefined4 __fastcall FUN_0041e030(void *param_1)

{
  int iVar1;
  int iVar2;
  uchar *extraout_ECX;
  uchar *puVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b6ac0;
  local_c = ExceptionList;
  if ((*(int *)((int)param_1 + 0x14) != 0) && (1 < *(uint *)((int)param_1 + 100))) {
    ExceptionList = &local_c;
    FUN_00466b20(&local_14,(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x60) + 4) + 8));
    local_10 = &stack0xffffffd4;
    local_4 = 0;
    puVar3 = extraout_ECX;
    FUN_00466b20(&stack0xffffffd4,&local_14);
    iVar1 = FUN_0041d450(param_1,puVar3);
    iVar2 = FUN_0041c950();
    if (iVar2 == 0) {
      if ((0 < iVar1) && (iVar1 < 0x21)) {
        *(uint *)((int)param_1 + 0x68) =
             *(uint *)((int)param_1 + 0x68) & ~(1 << ((char)iVar1 - 1U & 0x1f));
      }
    }
    else if ((0 < iVar1) && (iVar1 < 0x21)) {
      *(uint *)((int)param_1 + 0x68) =
           *(uint *)((int)param_1 + 0x68) | 1 << ((char)iVar1 - 1U & 0x1f);
    }
    FUN_0041df30(param_1,&local_18,1);
    local_4._0_1_ = 1;
    iVar1 = FUN_00466240(&local_18,"");
    if (iVar1 == 0) {
      FUN_0041d4f0((int)param_1);
      FUN_00403340(DAT_004e2b14,&local_1c);
      local_4._0_1_ = 2;
      thunk_FUN_00466040(&local_1c,"data\\maps\\");
      FUN_00466b20(&local_20,&local_1c);
      local_4._0_1_ = 3;
      thunk_FUN_00466040(&local_20,"current.acp");
      FUN_00466a50((void *)((int)param_1 + 0x18),&local_20);
      *(undefined4 *)((int)param_1 + 0x10) = 0;
      local_4._0_1_ = 2;
      FUN_00465e40(&local_20);
      local_4._0_1_ = 1;
      FUN_00465e40(&local_1c);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00465e40(&local_18);
      local_4 = 0xffffffff;
      FUN_00465e40(&local_14);
      ExceptionList = local_c;
      return 1;
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00465e40(&local_18);
    local_4 = 0xffffffff;
    FUN_00465e40(&local_14);
  }
  ExceptionList = local_c;
  return 0;
}

