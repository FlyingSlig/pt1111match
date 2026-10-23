// FUNCTION: PORT1111 0x00496340
// name: FUN_00496340
// sig: undefined FUN_00496340(int param_1)


void __fastcall FUN_00496340(int param_1)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined4 unaff_ESI;
  
  piVar1 = *(int **)(param_1 + 0x48);
  if (piVar1 == (int *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    (**(code **)(*piVar1 + 0x48))(piVar1);
  }
  uVar3 = (**(code **)(**(int **)(param_1 + 0x48) + 0x34))(*(int **)(param_1 + 0x48),0);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x48) + 0x30))(*(int **)(param_1 + 0x48),0,0,unaff_ESI);
  *(int *)(param_1 + 0x14) = iVar4;
  if (iVar4 == -0x7787ff6a) {
    (**(code **)(**(int **)(param_1 + 0x48) + 0x50))(*(int **)(param_1 + 0x48));
    bVar2 = FUN_00496220(param_1);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      return;
    }
    uVar3 = (**(code **)(**(int **)(param_1 + 0x48) + 0x30))
                      (*(int **)(param_1 + 0x48),0,0,unaff_ESI);
    *(undefined4 *)(param_1 + 0x14) = uVar3;
  }
  *(uint *)(param_1 + 0x40) = (uint)(-1 < *(int *)(param_1 + 0x14));
  return;
}

