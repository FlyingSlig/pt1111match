// FUNCTION: PORT1111 0x00473640
// name: FUN_00473640
// sig: int * FUN_00473640(undefined4 param_1)


int * __cdecl FUN_00473640(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9ee2;
  local_c = ExceptionList;
  switch(param_1) {
  case 1:
    ExceptionList = &local_c;
    piVar2 = operator_new(0xd4);
    local_4 = 0;
    if (piVar2 != (int *)0x0) {
      piVar2 = FUN_00470f80(piVar2);
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 2:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x100);
    local_4 = 4;
    if (puVar1 != (undefined4 *)0x0) {
      piVar2 = FUN_004701f0(puVar1);
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 3:
    ExceptionList = &local_c;
    puVar1 = operator_new(0xb8);
    local_4 = 1;
    if (puVar1 != (undefined4 *)0x0) {
      piVar2 = FUN_0046f8e0(puVar1);
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 4:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x94);
    local_4 = 5;
    if (puVar1 != (undefined4 *)0x0) {
      piVar2 = FUN_0046ed80(puVar1);
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 5:
    ExceptionList = &local_c;
    puVar1 = operator_new(0xb0);
    local_4 = 2;
    if (puVar1 != (undefined4 *)0x0) {
      piVar2 = FUN_00470890(puVar1);
      ExceptionList = local_c;
      return piVar2;
    }
    break;
  case 6:
    ExceptionList = &local_c;
    puVar1 = operator_new(0xa4);
    local_4 = 3;
    if (puVar1 != (undefined4 *)0x0) {
      piVar2 = FUN_004735d0(puVar1);
      ExceptionList = local_c;
      return piVar2;
    }
  }
  ExceptionList = local_c;
  return (int *)0x0;
}

