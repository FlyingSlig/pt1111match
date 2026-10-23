// FUNCTION: PORT1111 0x0044b260
// name: FUN_0044b260
// sig: undefined4 FUN_0044b260(int * param_1)


undefined4 FUN_0044b260(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int **ppiStack_2c;
  int *piStack_28;
  int **ppiStack_24;
  undefined1 *puStack_20;
  int *piStack_1c;
  int *piStack_18;
  int *piStack_14;
  int local_c [2];
  undefined1 auStack_4 [4];
  
  piStack_14 = local_c;
  piStack_18 = param_1;
  uVar3 = 0;
  piStack_1c = (int *)0x44b275;
  (**(code **)(*param_1 + 0x28))();
  piStack_1c = (int *)&stack0xfffffff0;
  puStack_20 = auStack_4;
  ppiStack_24 = (int **)0x1;
  piStack_28 = piStack_14;
  ppiStack_2c = (int **)0x44b28b;
  iVar2 = (**(code **)(*piStack_14 + 0xc))();
  piVar1 = piStack_14;
  while ((piStack_14 = piVar1, iVar2 == 0 && (puStack_20 == (undefined1 *)0x1))) {
    ppiStack_2c = &piStack_1c;
    iVar2 = (**(code **)(*piVar1 + 0x18))();
    if ((-1 < iVar2) && (ppiStack_24 != (int **)0x0)) {
      uVar3 = 1;
      (*(code *)(*ppiStack_24)[2])(ppiStack_24);
    }
    (**(code **)(*piStack_1c + 8))(piStack_1c);
    iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,1,&puStack_20,&ppiStack_2c);
    piVar1 = piStack_14;
  }
  ppiStack_2c = ppiStack_24;
  (*(code *)(*ppiStack_24)[2])();
  return uVar3;
}

