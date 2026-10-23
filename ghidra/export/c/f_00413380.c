// FUNCTION: PORT1111 0x00413380
// name: FUN_00413380
// sig: undefined FUN_00413380(void * this, int * param_1, undefined4 param_2, int param_3)


void __thiscall FUN_00413380(void *this,int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  *(int *)((int)this + 0x38) = *param_1;
  *(int *)((int)this + 0x3c) = param_1[1];
  if (*(int **)((int)this + 0x74) == (int *)0x0) {
    FUN_004544c0((void *)((int)this + 0x104),param_1,(byte)param_2,param_3);
    return;
  }
  iVar1 = **(int **)((int)this + 0x74);
  if (param_3 == 0) {
    (**(code **)(iVar1 + 0x18))(param_2,*param_1,param_1[1]);
  }
  else {
    (**(code **)(iVar1 + 4))();
  }
  piVar2 = *(int **)((int)this + 0x74);
  if (piVar2[3] == 0) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x30))(1);
    }
    *(undefined4 *)((int)this + 0x74) = 0;
  }
  return;
}

