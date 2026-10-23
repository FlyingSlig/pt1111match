// FUNCTION: PORT1111 0x00480380
// name: FUN_00480380
// sig: undefined4 FUN_00480380(int * param_1)


undefined4 __fastcall FUN_00480380(int *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004ba640;
  local_10 = ExceptionList;
  if (param_1[9] != 0) {
    ExceptionList = &local_10;
    (**(code **)*DAT_004e2b20)();
    local_8 = 0;
    iVar1 = (**(code **)(*param_1 + 0x10))();
    if (iVar1 != 0) {
      iVar1 = FUN_0047d3a0((void *)param_1[9],param_1);
      if (iVar1 != 0) {
        iVar1 = (**(code **)(*param_1 + 0xc))();
        if (iVar1 != 0) {
          local_8 = 0xffffffff;
          (**(code **)(*DAT_004e2b20 + 4))();
          ExceptionList = local_10;
          return 1;
        }
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}

