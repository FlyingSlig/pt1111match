// FUNCTION: PORT1111 0x00481a20
// name: FUN_00481a20
// sig: undefined FUN_00481a20(void * this, uint param_1, int * param_2)


void __thiscall FUN_00481a20(void *this,uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_8;
  int local_4;
  
  if (*(int *)((int)this + 0x3c) != 0) {
    if ((param_1 & 1) == 0) {
      FUN_004817f0(this,param_1,param_2);
      return;
    }
    local_4 = param_2[1] - *(int *)((int)this + 0x70);
    iVar1 = *(int *)((int)this + 0x2c);
    local_8 = *param_2 - *(int *)((int)this + 0x6c);
    iVar2 = (*(code *)**(undefined4 **)this)(&local_8);
    FUN_00481480(this,iVar2);
    if (*(int *)((int)this + 0x2c) != iVar1) {
      *(undefined4 *)((int)this + 0x80) = 1;
      if (*(int **)((int)this + 0x68) != (int *)0x0) {
        (**(code **)(**(int **)((int)this + 0x68) + 0x28))();
      }
    }
  }
  return;
}

