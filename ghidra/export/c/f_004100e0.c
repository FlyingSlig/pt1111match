// FUNCTION: PORT1111 0x004100e0
// name: FUN_004100e0
// sig: undefined4 FUN_004100e0(int * param_1)


undefined4 __fastcall FUN_004100e0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b5fcb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00404f70((int)param_1);
  if (iVar1 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  iVar1 = param_1[1];
  piVar4 = (int *)0x0;
  iVar3 = param_1[2];
  if (*(char *)(param_1[0x14] + 100) == '\0') {
    iVar1 = iVar1 + 0x20;
    iVar3 = iVar3 + 0x10;
  }
  iVar1 = FUN_00429b40(DAT_004e2404,iVar1,iVar3);
  if (iVar1 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  iVar1 = (**(code **)(*param_1 + 0xb4))();
  iVar1 = *(int *)(iVar1 * 0x1c + 0x14 + *(int *)(param_1[0x14] + 0x198));
  param_1[0x48] = iVar1;
  piVar2 = operator_new(iVar1 * 0x1c + 4);
  uStack_4 = 0;
  if (piVar2 != (int *)0x0) {
    piVar4 = piVar2 + 1;
    *piVar2 = iVar1;
    _eh_vector_constructor_iterator_(piVar4,0x1c,iVar1,FUN_0040ff30,FUN_0040ff80);
  }
  param_1[0x49] = (int)piVar4;
  ExceptionList = local_c;
  return 1;
}

