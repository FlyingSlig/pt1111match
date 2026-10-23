// FUNCTION: PORT1111 0x00488aa0
// name: FUN_00488aa0
// sig: undefined FUN_00488aa0(void * this, int * param_1)


void __thiscall FUN_00488aa0(void *this,int *param_1)

{
  int *piVar1;
  
  FUN_004963d0((int)this + 8);
  if (param_1 != (int *)0x0) {
    piVar1 = *(int **)((int)this + 0x14);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(int **)((int)this + 0x14) = param_1;
    (**(code **)(*param_1 + 4))(param_1);
  }
  return;
}

