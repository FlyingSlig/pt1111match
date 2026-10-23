// FUNCTION: PORT1111 0x004417d0
// name: FUN_004417d0
// sig: uint FUN_004417d0(int param_1, int param_2, undefined1 param_3)


uint FUN_004417d0(int param_1,int param_2,undefined1 param_3)

{
  uint uVar1;
  int iVar2;
  
  switch(param_3) {
  case 0:
    return (uint)(param_1 == param_2);
  case 1:
    uVar1 = FUN_00441430(param_1,param_2);
    return uVar1;
  case 2:
    if ((param_1 != param_2) && (iVar2 = FUN_00441430(param_1,param_2), iVar2 == 0)) {
      return 1;
    }
    break;
  case 3:
    if (param_1 == param_2) {
      return 1;
    }
    iVar2 = FUN_00441430(param_1,param_2);
    if (iVar2 != 0) {
      return 1;
    }
    break;
  case 4:
    iVar2 = FUN_00441430(param_1,param_2);
    return (uint)(iVar2 == 0);
  case 5:
    return (uint)(param_1 != param_2);
  }
  return 0;
}

