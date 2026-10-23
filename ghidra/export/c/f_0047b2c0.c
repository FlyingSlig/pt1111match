// FUNCTION: PORT1111 0x0047b2c0
// name: FUN_0047b2c0
// sig: undefined4 FUN_0047b2c0(void * this, int * param_1, int * param_2, int * param_3, int * param_4)


undefined4 __thiscall FUN_0047b2c0(void *this,int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  ulonglong uVar5;
  
  piVar2 = param_2;
  while( true ) {
    iVar1 = *param_1;
    piVar3 = (int *)0x0;
    param_2 = (int *)0x0;
    if (*piVar2 < *(int *)((int)this + 4)) {
      piVar3 = (int *)0x4;
      param_2 = (int *)0x4;
    }
    if (*(int *)((int)this + 0xc) < *piVar2) {
      piVar3 = (int *)((uint)piVar3 | 8);
      param_2 = piVar3;
    }
    if (iVar1 < *(int *)this) {
      piVar3 = (int *)((uint)piVar3 | 1);
      param_2 = piVar3;
    }
    if (*(int *)((int)this + 8) < iVar1) {
      piVar3 = (int *)((uint)piVar3 | 2);
      param_2 = piVar3;
    }
    piVar4 = (int *)0x0;
    if (*param_4 < *(int *)((int)this + 4)) {
      piVar4 = (int *)0x4;
    }
    if (*(int *)((int)this + 0xc) < *param_4) {
      piVar4 = (int *)((uint)piVar4 | 8);
    }
    if (*param_3 < *(int *)this) {
      piVar4 = (int *)((uint)piVar4 | 1);
    }
    if (*(int *)((int)this + 8) < *param_3) {
      piVar4 = (int *)((uint)piVar4 | 2);
    }
    if (((uint)param_2 & (uint)piVar4) != 0) break;
    if (piVar4 == (int *)0x0 && param_2 == (int *)0x0) {
      return 1;
    }
    if ((((*(int *)this <= iVar1) && (iVar1 <= *(int *)((int)this + 8))) &&
        (*(int *)((int)this + 4) <= *piVar2)) && (*piVar2 <= *(int *)((int)this + 0xc))) {
      *param_1 = *param_3;
      *param_3 = iVar1;
      iVar1 = *piVar2;
      *piVar2 = *param_4;
      *param_4 = iVar1;
      piVar3 = piVar4;
    }
    if (((uint)piVar3 & 8) == 0) {
      if (((uint)piVar3 & 4) == 0) {
        if (((uint)piVar3 & 1) == 0) {
          if (((uint)piVar3 & 2) != 0) {
            uVar5 = FUN_00497d88();
            *piVar2 = (int)uVar5;
            uVar5 = FUN_00497d88();
            *param_1 = (int)uVar5;
          }
        }
        else {
          uVar5 = FUN_00497d88();
          *piVar2 = (int)uVar5;
          uVar5 = FUN_00497d88();
          *param_1 = (int)uVar5;
        }
      }
      else {
        uVar5 = FUN_00497d88();
        *param_1 = (int)uVar5;
        uVar5 = FUN_00497d88();
        *piVar2 = (int)uVar5;
      }
    }
    else {
      uVar5 = FUN_00497d88();
      *param_1 = (int)uVar5;
      uVar5 = FUN_00497d88();
      *piVar2 = (int)uVar5;
    }
  }
  return 0;
}

