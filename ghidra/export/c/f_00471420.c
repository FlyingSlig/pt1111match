// FUNCTION: PORT1111 0x00471420
// name: FUN_00471420
// sig: undefined FUN_00471420(void * this, int param_1, int param_2)


void __thiscall FUN_00471420(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + param_1;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + param_2;
  iVar1 = *(int *)((int)this + 4) + param_1;
  iVar2 = *(int *)((int)this + 8) + param_2;
  *(int *)((int)this + 4) = iVar1;
  *(int *)((int)this + 8) = iVar2;
  if (*(void **)((int)this + 0x40) != (void *)0x0) {
    FUN_004786d0(*(void **)((int)this + 0x40),iVar1,iVar2);
  }
  if (*(int **)((int)this + 0xc4) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xc4) + 0x38))(param_1,param_2);
  }
  if (*(int **)((int)this + 0xb0) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xb0) + 0x38))(param_1,param_2);
  }
  if (*(int **)((int)this + 0xb4) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xb4) + 0x38))(param_1,param_2);
  }
  if (*(int **)((int)this + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xb8) + 0x38))(param_1,param_2);
  }
  if (*(int **)((int)this + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xbc) + 0x38))(param_1,param_2);
  }
  if (*(int **)((int)this + 0xc0) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xc0) + 0x38))(param_1,param_2);
  }
  return;
}

