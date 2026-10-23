// FUNCTION: PORT1111 0x00408900
// name: FUN_00408900
// sig: undefined FUN_00408900(int * param_1)


void __fastcall FUN_00408900(int *param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  
  FUN_004060a0(param_1);
  if (((int *)param_1[0x18] != (int *)0x0) &&
     (iVar1 = (**(code **)(*(int *)param_1[0x18] + 0x2c))(), iVar1 != 0)) {
    iVar1 = (**(code **)(*(int *)param_1[0x18] + 0x2c))();
    FUN_00478ab0(iVar1);
  }
  if (param_1[0x3b] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x88))();
    *(int *)(iVar1 + 0x1b0) = *(int *)(iVar1 + 0x1b0) + -1;
    iVar1 = (**(code **)(*param_1 + 0x88))();
    FUN_00442660(*(int *)(iVar1 + 0x34),(int *)0x448);
    param_1[0x3b] = 0;
  }
  iVar1 = param_1[0x46];
  if (iVar1 != 0) {
    pvVar2 = (void *)(**(code **)(*param_1 + 0x88))();
    FUN_00423080(pvVar2,iVar1,1,1);
  }
  iVar1 = (**(code **)(*param_1 + 0xb8))();
  if ((iVar1 != 0) && (piVar3 = *(int **)param_1[0x42], piVar3 != (int *)param_1[0x42])) {
    do {
      iVar1 = piVar3[3];
      pvVar2 = (void *)(**(code **)(*param_1 + 0x88))();
      FUN_00423080(pvVar2,iVar1,1,1);
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)param_1[0x42]);
  }
  param_1[0x40] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x3e] = 0;
  return;
}

