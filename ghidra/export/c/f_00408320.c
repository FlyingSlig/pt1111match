// FUNCTION: PORT1111 0x00408320
// name: FUN_00408320
// sig: undefined FUN_00408320(int param_1)


void __fastcall FUN_00408320(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int local_3c;
  int local_20;
  int local_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_004b5a96;
  iVar7 = *(int *)(param_1 + 0x50);
  iVar8 = *(int *)(iVar7 + 0x38);
  iVar1 = *(int *)(iVar7 + 0x34);
  iVar2 = *(int *)(iVar7 + 0x3c);
  iVar7 = *(int *)(iVar7 + 0x40);
  local_3c = 0;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  for (; iVar3 = iVar1, iVar8 < iVar7; iVar8 = iVar8 + 1) {
    for (; iVar3 < iVar2; iVar3 = iVar3 + 1) {
      if ((iVar3 != 0) || (iVar8 != 0)) {
        local_20 = iVar3;
        local_1c = iVar8;
        iVar4 = FUN_004267d0(*(void **)(param_1 + 0x40),&local_20);
        iVar5 = FUN_00418fb0(*(void **)(param_1 + 0x50),local_3c);
        if (iVar5 != 0) {
          iVar5 = _rand();
          puVar6 = operator_new(0x44);
          piVar9 = (int *)0x0;
          local_c = 0;
          if (puVar6 != (undefined4 *)0x0) {
            piVar9 = FUN_0041b3e0(puVar6);
          }
          local_c = 0xffffffff;
          FUN_0041b410(piVar9,iVar5 % 3 + 0x150015,*(short *)(iVar4 + 4) + 0x20,
                       *(short *)(iVar4 + 6) + 0x10,1);
          (**(code **)(*piVar9 + 0x28))();
        }
      }
      local_3c = local_3c + 1;
    }
  }
  iVar7 = _rand();
  puVar6 = operator_new(0x44);
  local_c = 1;
  if (puVar6 == (undefined4 *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = FUN_0041b3e0(puVar6);
  }
  local_c = 0xffffffff;
  FUN_0041b410(piVar9,iVar7 % 3 + 0x150015,*(short *)(*(int *)(param_1 + 0x40) + 4) + 0x20,
               *(short *)(*(int *)(param_1 + 0x40) + 6) + 0x10,1);
  (**(code **)(*piVar9 + 0x28))();
  ExceptionList = pvStack_14;
  return;
}

