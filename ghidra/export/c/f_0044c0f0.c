// FUNCTION: PORT1111 0x0044c0f0
// name: FUN_0044c0f0
// sig: uint FUN_0044c0f0(undefined4 param_1)


uint __cdecl FUN_0044c0f0(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b89fb;
  pvStack_c = ExceptionList;
  uVar4 = 0;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xb0);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00485840(puVar1);
  }
  pvVar5 = (void *)0x1;
  local_4 = 0xffffffff;
  iVar3 = (**(code **)(*piVar2 + 4))(param_1,0);
  if (-1 < iVar3) {
    uVar4 = (uint)(piVar2[3] * 1000) / *(uint *)(piVar2[2] + 8);
    FUN_00485c50((MMRESULT)piVar2);
  }
  (**(code **)*piVar2)(1);
  ExceptionList = pvVar5;
  return uVar4;
}

