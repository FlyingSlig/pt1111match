// FUNCTION: PORT1111 0x00427440
// name: FUN_00427440
// sig: undefined FUN_00427440(int param_1)


void __fastcall FUN_00427440(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if ((piVar1 != (int *)0x0) && (iVar2 = piVar1[2], *piVar1 != 0)) {
    do {
      FUN_0041eb50(*(void **)(iVar2 + uVar3 * 4),param_1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < **(uint **)(param_1 + 0x1c));
  }
  return;
}

