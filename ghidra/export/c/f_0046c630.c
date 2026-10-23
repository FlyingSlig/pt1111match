// FUNCTION: PORT1111 0x0046c630
// name: FUN_0046c630
// sig: int * FUN_0046c630(int * param_1)


int * __fastcall FUN_0046c630(int *param_1)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  
  piVar4 = FUN_0046abb0(param_1[1],param_1[8]);
  iVar6 = *piVar4;
  uVar5 = (**(code **)(*param_1 + 8))();
  uVar5 = (**(code **)(*param_1 + 4))(uVar5);
  uVar2 = (**(code **)(*param_1 + 0x10))(uVar5);
  iVar6 = (**(code **)(iVar6 + 0x54))(uVar2);
  if (iVar6 == 0) {
    (**(code **)*piVar4)(1);
    return (int *)0x0;
  }
  iVar6 = param_1[3];
  param_1[3] = 1;
  (**(code **)(*param_1 + 0x44))(piVar4,0,0,0,0);
  cVar3 = (**(code **)(*param_1 + 0xc))();
  if (cVar3 == '\b') {
    iVar1 = *piVar4;
    uVar5 = (**(code **)(*param_1 + 0x1c))();
    uVar5 = (**(code **)(*param_1 + 0x18))(uVar5);
    (**(code **)(iVar1 + 0x78))(uVar5);
  }
  param_1[3] = iVar6;
  return piVar4;
}

