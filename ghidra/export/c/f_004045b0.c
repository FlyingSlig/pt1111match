// FUNCTION: PORT1111 0x004045b0
// name: FUN_004045b0
// sig: undefined FUN_004045b0(int * param_1)


void __fastcall FUN_004045b0(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  
  iVar2 = (**(code **)(*(int *)param_1[7] + 4))();
  if (iVar2 != 0) {
    bVar1 = FUN_0045f060(param_1[6]);
    if (CONCAT31(extraout_var,bVar1) == 0) goto LAB_004045d3;
  }
  (**(code **)(*param_1 + 8))();
LAB_004045d3:
  iVar2 = *param_1;
  uVar3 = FUN_0045f130(param_1[6]);
  (**(code **)(iVar2 + 4))(uVar3);
  return;
}

