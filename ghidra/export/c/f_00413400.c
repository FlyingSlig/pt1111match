// FUNCTION: PORT1111 0x00413400
// name: FUN_00413400
// sig: undefined FUN_00413400(void * this, int * param_1, uint param_2)


void __thiscall FUN_00413400(void *this,int *param_1,uint param_2)

{
  if (*(int **)((int)this + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x74) + 0xc))(param_2,*param_1,param_1[1]);
    *(int *)((int)this + 0x38) = *param_1;
    *(int *)((int)this + 0x3c) = param_1[1];
    return;
  }
  if ((((param_2 & 1) != 0) && ((param_2 & 8) != 0)) || ((param_2 & 0x10) != 0)) {
    if ((*param_1 == 0) && (param_1[1] == 0)) {
      return;
    }
    FUN_0043a320(*param_1 - *(int *)((int)this + 0x38),param_1[1] - *(int *)((int)this + 0x3c));
    FUN_00413300();
  }
  FUN_004545d0((void *)((int)this + 0x104),param_1);
  *(int *)((int)this + 0x38) = *param_1;
  *(int *)((int)this + 0x3c) = param_1[1];
  return;
}

