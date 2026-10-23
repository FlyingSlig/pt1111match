// FUNCTION: PORT1111 0x0043d190
// name: FUN_0043d190
// sig: int FUN_0043d190(int param_1)


int __fastcall FUN_0043d190(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)**(int **)(param_1 + 8);
  iVar2 = 0;
  if (piVar3 != *(int **)(param_1 + 8)) {
    do {
      bVar1 = FUN_0043cdd0(piVar3[2]);
      if ((CONCAT31(extraout_var,bVar1) != 0) && (*(int *)(piVar3[2] + 0x10) == 0)) {
        iVar2 = iVar2 + 1;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(param_1 + 8));
  }
  return iVar2;
}

