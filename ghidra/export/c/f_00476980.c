// FUNCTION: PORT1111 0x00476980
// name: FUN_00476980
// sig: undefined4 FUN_00476980(void * this, undefined4 * param_1, int * param_2)


undefined4 __thiscall FUN_00476980(void *this,undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_2;
  if (param_2 == (int *)0x0) {
    piVar1 = param_1 + 0xf;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return 1;
    }
  }
  if ((*(int *)((int)this + 0x20) != 0) &&
     (piVar1 = *(int **)(*(int *)((int)this + 0x14) + 4), param_2 = (int *)*piVar1,
     param_2 != piVar1)) {
    do {
      iVar3 = FUN_00477810((void *)param_2[4],param_1[0xd],(int)piVar2);
      if (iVar3 == 0) {
        return 0;
      }
      FUN_00413730((int *)&param_2);
    } while (param_2 != *(int **)(*(int *)((int)this + 0x14) + 4));
  }
  if ((piVar2 == (int *)0x0) && (FUN_00476880(this,(int)param_1), param_1 != (undefined4 *)0x0)) {
    (**(code **)*param_1)(1);
  }
  return 1;
}

