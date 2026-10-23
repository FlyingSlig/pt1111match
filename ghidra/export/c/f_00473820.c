// FUNCTION: PORT1111 0x00473820
// name: FUN_00473820
// sig: int * FUN_00473820(void * this, undefined4 param_1, undefined4 param_2)


int * __thiscall FUN_00473820(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9f27;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = FUN_004712a0(this,param_1);
  if (piVar1 == (int *)0x0) {
switchD_0047385a_default:
    ExceptionList = local_c;
    return (int *)0x0;
  }
  switch(param_2) {
  case 2:
    puVar2 = operator_new(0x100);
    local_4 = 3;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2 = FUN_004701f0(puVar2);
      *piVar1 = (int)puVar2;
      ExceptionList = local_c;
      return piVar1;
    }
    break;
  case 3:
    puVar2 = operator_new(0xb8);
    local_4 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2 = FUN_0046f8e0(puVar2);
      *piVar1 = (int)puVar2;
      ExceptionList = local_c;
      return piVar1;
    }
    break;
  case 4:
    puVar2 = operator_new(0x94);
    local_4 = 4;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2 = FUN_0046ed80(puVar2);
      *piVar1 = (int)puVar2;
      ExceptionList = local_c;
      return piVar1;
    }
    break;
  case 5:
    puVar2 = operator_new(0xb0);
    local_4 = 1;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2 = FUN_00470890(puVar2);
      *piVar1 = (int)puVar2;
      ExceptionList = local_c;
      return piVar1;
    }
    break;
  case 6:
    puVar2 = operator_new(0xa4);
    local_4 = 2;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2 = FUN_004735d0(puVar2);
      *piVar1 = (int)puVar2;
      ExceptionList = local_c;
      return piVar1;
    }
    break;
  default:
    goto switchD_0047385a_default;
  }
  *piVar1 = 0;
  ExceptionList = local_c;
  return piVar1;
}

