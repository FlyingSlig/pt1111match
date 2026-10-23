// FUNCTION: PORT1111 0x004812d0
// name: FUN_004812d0
// sig: undefined4 FUN_004812d0(void * this, int * param_1)


undefined4 __thiscall FUN_004812d0(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)((int)this + 0xc);
  if (*(int *)((int)this + 0x44) == 0) {
    if ((piVar1 != (int *)0x0) && (iVar2 = FUN_0046f280(piVar1), iVar2 != 0)) {
      return 5;
    }
    if (*(int *)((int)this + 100) < param_1[1]) {
      return 4;
    }
    if (*param_1 < *(int *)((int)this + 0x58)) {
      return 2;
    }
    if (*(int *)((int)this + 0x60) <= *param_1) {
      return 3;
    }
  }
  else {
    if ((piVar1 != (int *)0x0) && (iVar2 = FUN_0046f280(piVar1), iVar2 != 0)) {
      return 5;
    }
    if ((*(int *)((int)this + 0x60) < *param_1) || (*param_1 < *(int *)((int)this + 0x58))) {
      return 4;
    }
    if (param_1[1] < *(int *)((int)this + 0x5c)) {
      return 2;
    }
    if (*(int *)((int)this + 100) <= param_1[1]) {
      return 3;
    }
  }
  return 0xffffffff;
}

