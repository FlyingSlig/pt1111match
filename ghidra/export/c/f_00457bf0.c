// FUNCTION: PORT1111 0x00457bf0
// name: FUN_00457bf0
// sig: undefined FUN_00457bf0(void * this, int param_1)


void __thiscall FUN_00457bf0(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 8);
  while( true ) {
    if (piVar1 == *(int **)((int)this + 0xc)) {
      FUN_00457ba0((void *)((int)this + 4),&param_1);
      return;
    }
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 1;
  }
  return;
}

