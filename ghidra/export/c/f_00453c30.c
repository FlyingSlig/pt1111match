// FUNCTION: PORT1111 0x00453c30
// name: FUN_00453c30
// sig: undefined FUN_00453c30(void * this, int * param_1)


void __thiscall FUN_00453c30(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)((int)this + 0x20);
  iVar1 = 9;
  do {
    FUN_0042f670(param_1);
    piVar2 = *(int **)*piVar3;
    if (piVar2 != (int *)*piVar3) {
      do {
        FUN_0042f670(param_1);
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)*piVar3);
    }
    piVar3 = piVar3 + 7;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  (**(code **)(*param_1 + 4))(1);
  return;
}

