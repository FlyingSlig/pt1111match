// FUNCTION: PORT1111 0x0042a450
// name: FUN_0042a450
// sig: undefined4 FUN_0042a450(int * param_1)


undefined4 FUN_0042a450(int *param_1)

{
  int *this;
  char *pcVar1;
  void *unaff_ESI;
  uint uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  this = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b70e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0042f670(param_1);
  for (uVar2 = 0; (DAT_004e2158 != 0 && (uVar2 < (uint)(DAT_004e215c - DAT_004e2158 >> 2)));
      uVar2 = uVar2 + 1) {
    FUN_0042f670(this);
    FUN_00465d00((undefined4 *)(*(int *)(DAT_004e2158 + uVar2 * 4) + 4));
    pcVar1 = (char *)FUN_00466b20(&param_1,(undefined4 *)(*(int *)(DAT_004e2158 + uVar2 * 4) + 4));
    local_4 = 0;
    FUN_0042f610(this,pcVar1);
    local_4 = 0xffffffff;
    FUN_00465e40(&param_1);
  }
  (**(code **)(*this + 4))(0);
  ExceptionList = unaff_ESI;
  return 0;
}

