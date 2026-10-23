// FUNCTION: PORT1111 0x0041e320
// name: FUN_0041e320
// sig: undefined4 FUN_0041e320(void * this, uchar * param_1)


undefined4 __thiscall FUN_0041e320(void *this,uchar *param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 *puVar3;
  uint *puVar4;
  uchar *extraout_ECX;
  uchar *extraout_ECX_00;
  uint *puVar5;
  int *piVar6;
  uchar *puVar7;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004b6b08;
  local_c = ExceptionList;
  local_4 = 0;
  if (*(int *)((int)this + 0x14) == 0) {
    local_4 = 0xffffffff;
    ExceptionList = &local_c;
    FUN_00465e40(&param_1);
    ExceptionList = local_c;
    return 0;
  }
  ExceptionList = &local_c;
  iVar2 = FUN_0041c950();
  puVar3 = (undefined4 *)((int)this + 4);
  if (iVar2 == 0) {
    bVar1 = FUN_00465ec0(puVar3);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      local_10 = &stack0xffffffd4;
      puVar7 = extraout_ECX;
      FUN_00466b20(&stack0xffffffd4,puVar3);
      iVar2 = FUN_0041d450(this,puVar7);
      if ((0 < iVar2) && (iVar2 < 0x21)) {
        *(uint *)((int)this + 0x68) =
             *(uint *)((int)this + 0x68) & ~(1 << ((char)iVar2 - 1U & 0x1f));
      }
    }
  }
  else {
    bVar1 = FUN_00465ec0(puVar3);
    if (CONCAT31(extraout_var_00,bVar1) == 0) {
      local_10 = &stack0xffffffd4;
      puVar7 = extraout_ECX_00;
      FUN_00466b20(&stack0xffffffd4,puVar3);
      iVar2 = FUN_0041d450(this,puVar7);
      if ((0 < iVar2) && (iVar2 < 0x21)) {
        *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 1 << ((char)iVar2 - 1U & 0x1f);
      }
    }
  }
  iVar2 = *(int *)((int)this + 0x60);
  puVar3 = FUN_0041d3c0(iVar2,*(undefined4 *)(iVar2 + 4),&param_1);
  FUN_0041e280((void *)((int)this + 0x5c),1);
  *(undefined4 **)(iVar2 + 4) = puVar3;
  *(undefined4 **)puVar3[1] = puVar3;
  piVar6 = (int *)**(int **)((int)this + 0x54);
  puVar5 = (uint *)0x0;
  if (piVar6 != *(int **)((int)this + 0x54)) {
    do {
      iVar2 = FUN_004662f0(piVar6 + 2,param_1);
      if (iVar2 != 0) {
        puVar5 = (uint *)(piVar6 + 2);
        break;
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)*(int *)((int)this + 0x54));
  }
  puVar4 = (uint *)((int)this + 0x94);
  iVar2 = 0x4d;
  do {
    puVar5 = puVar5 + 1;
    *puVar4 = *puVar4 | *puVar5;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_0041d4f0((int)this);
  FUN_00403340(DAT_004e2b14,&local_14);
  local_4._0_1_ = 1;
  thunk_FUN_00466040(&local_14,"data\\maps\\");
  FUN_00466b20(&local_18,&local_14);
  local_4._0_1_ = 2;
  thunk_FUN_00466040(&local_18,"current.acp");
  FUN_00466a50((void *)((int)this + 0x18),&local_18);
  *(undefined4 *)((int)this + 0x10) = 0;
  local_4._0_1_ = 1;
  FUN_00465e40(&local_18);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00465e40(&local_14);
  local_4 = 0xffffffff;
  FUN_00465e40(&param_1);
  ExceptionList = local_c;
  return 1;
}

