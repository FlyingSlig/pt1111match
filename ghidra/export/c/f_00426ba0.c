// FUNCTION: PORT1111 0x00426ba0
// name: FUN_00426ba0
// sig: undefined4 FUN_00426ba0(void * this, int param_1)


undefined4 __thiscall FUN_00426ba0(void *this,int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = 0;
  if (*(int *)this != 0) {
    piVar2 = *(int **)((int)this + 8);
    piVar4 = piVar2;
    do {
      if (*piVar4 == param_1) {
        uVar1 = *(int *)this - 1;
        *(uint *)this = uVar1;
        if (uVar3 != uVar1) {
          piVar2[uVar3] = piVar2[uVar1];
        }
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar3 < *(uint *)this);
  }
  return 0;
}

