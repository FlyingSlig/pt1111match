// FUNCTION: PORT1111 0x0040ddf0
// name: FUN_0040ddf0
// sig: undefined FUN_0040ddf0(int param_1)


void __fastcall FUN_0040ddf0(int param_1)

{
  void **ppvVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b5eb6;
  pvStack_c = ExceptionList;
  iVar2 = *(int *)(param_1 + 0x13c);
  local_14 = 0;
  ExceptionList = &pvStack_c;
  ppvVar1 = &pvStack_c;
  if (0 < *(int *)(&DAT_004bd614 + iVar2 * 0x290)) {
    do {
      iVar2 = FUN_004267d0(*(void **)(param_1 + 0x40),
                           (int *)(&DAT_004bd618 + (iVar2 * 0x52 + local_14) * 8));
      if (iVar2 != 0) {
        iVar3 = _rand();
        puVar4 = operator_new(0x44);
        piVar5 = (int *)0x0;
        local_4 = 0;
        if (puVar4 != (undefined4 *)0x0) {
          piVar5 = FUN_0041b3e0(puVar4);
        }
        local_4 = 0xffffffff;
        if (piVar5 != (int *)0x0) {
          FUN_0041b410(piVar5,iVar3 % 3 + 0x150015,*(short *)(iVar2 + 4) + 0x20,
                       *(short *)(iVar2 + 6) + 0x10,1);
          (**(code **)(*piVar5 + 0x28))();
        }
      }
      iVar2 = *(int *)(param_1 + 0x13c);
      local_14 = local_14 + 1;
      ppvVar1 = ExceptionList;
    } while (local_14 < *(int *)(&DAT_004bd614 + iVar2 * 0x290));
  }
  ExceptionList = ppvVar1;
  iVar2 = _rand();
  puVar4 = operator_new(0x44);
  local_4 = 1;
  if (puVar4 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = FUN_0041b3e0(puVar4);
  }
  local_4 = 0xffffffff;
  if (piVar5 != (int *)0x0) {
    FUN_0041b410(piVar5,iVar2 % 3 + 0x150015,*(short *)(*(int *)(param_1 + 0x40) + 4) + 0x20,
                 *(short *)(*(int *)(param_1 + 0x40) + 6) + 0x10,1);
    (**(code **)(*piVar5 + 0x28))();
  }
  ExceptionList = pvStack_c;
  return;
}

