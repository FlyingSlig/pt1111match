// FUNCTION: PORT1111 0x00476f40
// name: FUN_00476f40
// sig: undefined4 FUN_00476f40(int * param_1)


undefined4 __fastcall FUN_00476f40(int *param_1)

{
  void *pvVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004ba0bc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00476e50(param_1);
  pvVar1 = operator_new(0xc);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    iVar2 = FUN_004748f0();
    *(int *)((int)pvVar1 + 4) = iVar2;
    *(undefined1 *)(iVar2 + 0x15) = 1;
    *(int *)(*(int *)((int)pvVar1 + 4) + 4) = *(int *)((int)pvVar1 + 4);
    *(undefined4 *)*(undefined4 *)((int)pvVar1 + 4) = *(undefined4 *)((int)pvVar1 + 4);
    *(int *)(*(int *)((int)pvVar1 + 4) + 8) = *(int *)((int)pvVar1 + 4);
    *(undefined4 *)((int)pvVar1 + 8) = 0;
  }
  local_4 = 0xffffffff;
  param_1[3] = (int)pvVar1;
  pvVar1 = operator_new(0xc);
  local_4 = 1;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    iVar2 = FUN_004748b0();
    *(int *)((int)pvVar1 + 4) = iVar2;
    *(undefined1 *)(iVar2 + 0x2d) = 1;
    *(int *)(*(int *)((int)pvVar1 + 4) + 4) = *(int *)((int)pvVar1 + 4);
    *(undefined4 *)*(undefined4 *)((int)pvVar1 + 4) = *(undefined4 *)((int)pvVar1 + 4);
    *(int *)(*(int *)((int)pvVar1 + 4) + 8) = *(int *)((int)pvVar1 + 4);
    *(undefined4 *)((int)pvVar1 + 8) = 0;
  }
  local_4 = 0xffffffff;
  param_1[4] = (int)pvVar1;
  pvVar1 = operator_new(0xc);
  local_4 = 2;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    iVar2 = FUN_004748f0();
    *(int *)((int)pvVar1 + 4) = iVar2;
    *(undefined1 *)(iVar2 + 0x15) = 1;
    *(int *)(*(int *)((int)pvVar1 + 4) + 4) = *(int *)((int)pvVar1 + 4);
    *(undefined4 *)*(undefined4 *)((int)pvVar1 + 4) = *(undefined4 *)((int)pvVar1 + 4);
    *(int *)(*(int *)((int)pvVar1 + 4) + 8) = *(int *)((int)pvVar1 + 4);
    *(undefined4 *)((int)pvVar1 + 8) = 0;
  }
  local_4 = 0xffffffff;
  param_1[5] = (int)pvVar1;
  pvVar1 = operator_new(0xc);
  local_4 = 3;
  if (pvVar1 != (void *)0x0) {
    iVar2 = FUN_00482680();
    *(int *)((int)pvVar1 + 4) = iVar2;
    *(undefined1 *)(iVar2 + 0x11) = 1;
    *(int *)(*(int *)((int)pvVar1 + 4) + 4) = *(int *)((int)pvVar1 + 4);
    *(undefined4 *)*(undefined4 *)((int)pvVar1 + 4) = *(undefined4 *)((int)pvVar1 + 4);
    *(int *)(*(int *)((int)pvVar1 + 4) + 8) = *(int *)((int)pvVar1 + 4);
    *(undefined4 *)((int)pvVar1 + 8) = 0;
    param_1[10] = (int)pvVar1;
    ExceptionList = local_c;
    return 1;
  }
  param_1[10] = 0;
  ExceptionList = local_c;
  return 1;
}

