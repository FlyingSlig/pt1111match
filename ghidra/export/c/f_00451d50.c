// FUNCTION: PORT1111 0x00451d50
// name: FUN_00451d50
// sig: undefined FUN_00451d50(int * param_1)


void FUN_00451d50(int *param_1)

{
  int dx;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_10 [16];
  
  iVar1 = param_1[2];
  dx = FUN_00403cf0(param_1[1]);
  iVar1 = FUN_00403d00(iVar1);
  piVar2 = (int *)(**(code **)(**(int **)(DAT_004e2b14 + 0x5c) + 0x70))();
  uVar3 = (**(code **)(*piVar2 + 0x30))();
  piVar2 = (int *)(**(code **)(**(int **)(DAT_004e2b14 + 0x5c) + 0x70))();
  iVar4 = (**(code **)(*piVar2 + 0x24))();
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*piVar2 + 0x14))();
    iVar4 = -iVar4;
  }
  else {
    iVar4 = (**(code **)(*piVar2 + 0x14))();
  }
  FUN_00451b60(param_1,uVar3,iVar4,(int *)0x0);
  FUN_00451b60(param_1,uVar3,iVar4,(int *)0x1);
  FUN_00451b60(param_1,uVar3,iVar4,(int *)0x2);
  FUN_00451b60(param_1,uVar3,iVar4,(int *)0x3);
  piVar2 = (int *)(**(code **)(**(int **)(DAT_004e2b14 + 0x5c) + 0x70))();
  (**(code **)(*piVar2 + 0x34))();
  (**(code **)(*param_1 + 0xc4))(auStack_10);
  OffsetRect((LPRECT)&stack0xffffffec,dx,iVar1);
  FUN_0040ff50();
  return;
}

