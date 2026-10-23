// FUNCTION: PORT1111 0x004293f0
// name: FUN_004293f0
// sig: undefined4 FUN_004293f0(int param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004293f0(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b70b1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x7c);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)FUN_0042ced0(puVar1);
  }
  local_4 = 0xffffffff;
  *(void **)(param_1 + 0x10) = pvVar2;
  FUN_0042cf20(pvVar2,param_1,*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80),
               *(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88));
  puVar1 = operator_new(0x7c);
  local_4 = 1;
  if (puVar1 == (undefined4 *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)FUN_0042ced0(puVar1);
  }
  *(void **)(param_1 + 0x8c) = pvVar2;
  local_4 = 0xffffffff;
  FUN_0042cf20(pvVar2,DAT_004e2404,DAT_004e2640,DAT_004e2644,
               *(int *)(param_1 + 0x84) + _DAT_004e2648,*(int *)(param_1 + 0x88) + _DAT_004e264c);
  puVar1 = operator_new(0x7c);
  local_4 = 2;
  if (puVar1 == (undefined4 *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)FUN_0042ced0(puVar1);
  }
  *(void **)(param_1 + 0x90) = pvVar2;
  local_4 = 0xffffffff;
  FUN_0042cf60(pvVar2,DAT_004e2404,DAT_004e2650,DAT_004e2654,DAT_004e2658,DAT_004e265c);
  ExceptionList = local_c;
  return 1;
}

