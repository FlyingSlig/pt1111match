// FUNCTION: PORT1111 0x0044e920
// name: FUN_0044e920
// sig: int FUN_0044e920(int param_1)


int __fastcall FUN_0044e920(int param_1)

{
  int iVar1;
  ulong uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8ba3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_004748b0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x2d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  local_4 = 0;
  iVar1 = FUN_004748f0();
  *(int *)(param_1 + 0x10) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 0x10) + 4) = *(int *)(param_1 + 0x10);
  *(undefined4 *)*(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(int *)(*(int *)(param_1 + 0x10) + 8) = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00486170((undefined4 *)(param_1 + 0x1c));
  uVar2 = FID_conflict___time32((__time32_t *)0x0);
  FUN_00497dfd(uVar2);
  ExceptionList = local_c;
  return param_1;
}

