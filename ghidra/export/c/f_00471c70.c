// FUNCTION: PORT1111 0x00471c70
// name: FUN_00471c70
// sig: undefined FUN_00471c70(int param_1)


void __fastcall FUN_00471c70(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0xa0) == 0) {
    if (*(int **)(param_1 + 0xb0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xb0) + 0xa0))();
    }
    if (*(int **)(param_1 + 0xb4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xb4) + 0xa0))();
    }
    if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xbc) + 0xa0))();
    }
    if (*(int **)(param_1 + 0xc0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xc0) + 0xa0))();
    }
    if (*(int **)(param_1 + 0xc4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xc4) + 0xa0))();
    }
    if (*(int **)(param_1 + 0xb8) == (int *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00471dea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0xb8) + 0x9c))();
    return;
  }
  if (*(int **)(param_1 + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb8) + 0xa0))();
  }
  if (*(int *)(param_1 + 0xa4) == 0) {
    if (*(int **)(param_1 + 0xb0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xb0) + 0x9c))();
    }
    piVar3 = *(int **)(param_1 + 0xb4);
    if (piVar3 == (int *)0x0) goto LAB_00471cf4;
  }
  else {
    if (((*(int **)(param_1 + 0xb4) == (int *)0x0) ||
        ((**(code **)(**(int **)(param_1 + 0xb4) + 0x9c))(), *(int *)(param_1 + 0xb0) == 0)) ||
       ((char)((uint)*(undefined4 *)(param_1 + 0x30) >> 8) < '\0')) goto LAB_00471cf4;
    piVar3 = *(int **)(param_1 + 0xb0);
  }
  (**(code **)(*piVar3 + 0xa0))();
LAB_00471cf4:
  if (*(int *)(param_1 + 0xbc) != 0) {
    if (*(int *)(param_1 + 0xa8) == 0) {
      (**(code **)(**(int **)(param_1 + 0xbc) + 0xa0))();
    }
    else {
      (**(code **)(**(int **)(param_1 + 0xbc) + 0x9c))();
    }
  }
  if (*(int **)(param_1 + 0xc4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc4) + 0x9c))();
  }
  if (*(int *)(param_1 + 0xc0) == 0) {
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x48) + 0x78);
  iVar2 = *(int *)(param_1 + 0x48);
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  if ((*(int *)(iVar2 + 0x44) == param_1) && ((*(byte *)(param_1 + 0x30) & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00471d62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0xc0) + 0x9c))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00471d71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xc0) + 0xa0))();
  return;
}

