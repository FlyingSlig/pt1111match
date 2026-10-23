// FUNCTION: PORT1111 0x00401000
// name: FUN_00401000
// sig: undefined FUN_00401000(undefined4 * param_1)


void __fastcall FUN_00401000(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b5718;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_004bc3a0;
  local_4 = 0;
  piVar1 = param_1 + 6;
  iVar2 = 5;
  do {
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_4 = 0xffffffff;
  FUN_00465c30(param_1);
  ExceptionList = pvStack_c;
  return;
}

