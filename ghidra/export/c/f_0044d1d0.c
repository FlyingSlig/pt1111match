// FUNCTION: PORT1111 0x0044d1d0
// name: FUN_0044d1d0
// sig: int FUN_0044d1d0(int param_1)


int __fastcall FUN_0044d1d0(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8a93;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_004748f0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  local_4 = 0;
  FUN_0044ba50((uint *)(param_1 + 0x10));
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined ***)(param_1 + 0x70) = &PTR_LAB_004c4508;
  FUN_0047ff90((undefined4 *)(param_1 + 0x74));
  *(undefined4 *)(param_1 + 0xdc) = 0;
  DAT_004e2804 = param_1;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}

