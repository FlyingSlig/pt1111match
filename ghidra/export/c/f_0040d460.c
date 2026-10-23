// FUNCTION: PORT1111 0x0040d460
// name: FUN_0040d460
// sig: undefined FUN_0040d460(undefined4 * param_1)


void __fastcall FUN_0040d460(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b5e68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004be308;
  param_1[5] = &PTR_LAB_004be2e0;
  local_4 = 0;
  piVar2 = param_1 + 0x4b;
  iVar1 = 4;
  do {
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  local_4 = 0xffffffff;
  FUN_00408a10(param_1);
  ExceptionList = pvStack_c;
  return;
}

