// FUNCTION: PORT1111 0x00421e10
// name: FUN_00421e10
// sig: undefined4 * FUN_00421e10(undefined4 * param_1)


undefined4 * __fastcall FUN_00421e10(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b6d21;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004bf758;
  FUN_00465cf0(param_1 + 0xc);
  local_4 = 0;
  DAT_004e0b1c = 0;
  FUN_00466a40(param_1 + 0xc,(uchar *)"Unnamed");
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0x5dc;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 1;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)((int)param_1 + 0x5a) = 0;
  *(undefined1 *)((int)param_1 + 0x5b) = 0;
  param_1[0xf] = 1;
  param_1[0x7f] = 0;
  puVar2 = param_1 + 0x1b;
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x3b;
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x5b;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x6d;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  pvVar1 = operator_new(0x18);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0043d470(pvVar1,param_1[0xe],param_1);
  }
  local_4._0_1_ = 0;
  param_1[0x83] = puVar2;
  pvVar1 = operator_new(0x18);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00443cb0(pvVar1,*(undefined4 *)(DAT_004e2404 + 0x10c),
                         *(undefined4 *)(DAT_004e2404 + 0x110));
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0xb] = iVar4;
  FUN_00443cd0(iVar4);
  uVar3 = FUN_004147d0(0x2f);
  param_1[10] = uVar3;
  param_1[0x80] = 1;
  ExceptionList = local_c;
  return param_1;
}

