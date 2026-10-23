// FUNCTION: PORT1111 0x004468b0
// name: FUN_004468b0
// sig: undefined FUN_004468b0(undefined4 * param_1)


void __fastcall FUN_004468b0(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_004b8403;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004c3be0;
  piVar1 = (int *)param_1[0xf];
  local_4 = 1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00480f30(param_1 + 0x10);
  local_4 = 0xffffffff;
  FUN_00480320(param_1);
  ExceptionList = pvStack_c;
  return;
}

