// FUNCTION: PORT1111 0x00413a00
// name: FUN_00413a00
// sig: undefined FUN_00413a00(int param_1)


void __fastcall FUN_00413a00(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b635b;
  local_c = ExceptionList;
  piVar2 = *(int **)(*(int *)(param_1 + 0x21c) + 4);
  piVar3 = (int *)*piVar2;
  ExceptionList = &local_c;
  if (piVar3 != piVar2) {
    do {
      puVar1 = operator_new(0x34);
      local_4 = 0;
      if (puVar1 == (undefined4 *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = FUN_00433810(puVar1);
      }
      piVar2[1] = piVar3[2];
      local_4 = 0xffffffff;
      if (DAT_004e2424 == (void *)0x0) {
        (**(code **)*piVar2)(1);
      }
      else {
        FUN_00434760(DAT_004e2424,piVar2);
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(*(int *)(param_1 + 0x21c) + 4));
  }
  ExceptionList = local_c;
  return;
}

