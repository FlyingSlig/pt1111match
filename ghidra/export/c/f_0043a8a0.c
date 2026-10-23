// FUNCTION: PORT1111 0x0043a8a0
// name: FUN_0043a8a0
// sig: undefined FUN_0043a8a0(int param_1)


void __fastcall FUN_0043a8a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = _rand();
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + (iVar2 % *(int *)(param_1 + 0x1c)) * 4);
  iVar3 = FUN_004147d0(iVar2);
  if (iVar3 == 0) {
    if (*(int **)(param_1 + 0x20) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0043a8cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0x20) + 4))();
      return;
    }
  }
  else {
    if (*(int *)(iVar3 + 0x48) == 5) {
      (**(code **)(**(int **)(param_1 + 0x28) + 0x18))();
      piVar4 = *(int **)(param_1 + 0x28);
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x24) + 0x18))(iVar2);
      piVar4 = *(int **)(param_1 + 0x24);
    }
    piVar1 = *(int **)(param_1 + 0x20);
    if (piVar4 != piVar1) {
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      *(int **)(param_1 + 0x20) = piVar4;
    }
  }
  return;
}

