// FUNCTION: PORT1111 0x0043dc80
// name: FUN_0043dc80
// sig: int FUN_0043dc80(void * this, int param_1)


int __thiscall FUN_0043dc80(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = *(int **)((int)this + 8);
  piVar2 = (int *)*piVar1;
  iVar3 = 0;
  if (piVar2 != piVar1) {
    do {
      if (param_1 <= iVar3) break;
      piVar2 = (int *)*piVar2;
      iVar3 = iVar3 + 1;
    } while (piVar2 != piVar1);
    if (piVar2 != piVar1) {
      return piVar2[2];
    }
  }
  return 0;
}

