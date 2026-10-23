// FUNCTION: PORT1111 0x00434340
// name: FUN_00434340
// sig: void * FUN_00434340(void * param_1)


void * __fastcall FUN_00434340(void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b78ff;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00433ea0(param_1,1);
  local_4 = 0;
  FUN_0047ff90((undefined4 *)((int)param_1 + 0x4c));
  local_4._0_1_ = 1;
  FUN_0047ff90((undefined4 *)((int)param_1 + 0xb4));
  local_4._0_1_ = 2;
  *(undefined ***)((int)param_1 + 0x11c) = &PTR_LAB_004bfd38;
  FUN_00433ea0((void *)((int)param_1 + 0x120),1);
  local_4 = CONCAT31(local_4._1_3_,3);
  *(undefined ***)((int)param_1 + 0x16c) = &PTR_FUN_004bfd3c;
  FUN_00433ea0((void *)((int)param_1 + 0x170),1);
  *(undefined ***)((int)param_1 + 0x1bc) = &PTR_FUN_004bfcdc;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x1c0));
  *(undefined ***)((int)param_1 + 0x1d8) = &PTR_FUN_004bfcdc;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x1dc));
  DAT_004e21b4 = 0;
  DAT_004e21b8 = 0;
  ExceptionList = local_c;
  return param_1;
}

