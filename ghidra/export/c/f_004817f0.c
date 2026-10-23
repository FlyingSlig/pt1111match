// FUNCTION: PORT1111 0x004817f0
// name: FUN_004817f0
// sig: undefined FUN_004817f0(void * this, undefined4 param_1, int * param_2)


void __thiscall FUN_004817f0(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x3c) != 0) {
    iVar1 = *(int *)((int)this + 0x70);
    *param_2 = *param_2 - *(int *)((int)this + 0x6c);
    param_2[1] = param_2[1] - iVar1;
    iVar1 = *(int *)((int)this + 0x2c);
    iVar2 = (*(code *)**(undefined4 **)this)(param_2);
    iVar2 = FUN_00481050(this,iVar2);
    *(undefined4 *)((int)this + 0x3c) = 0;
    FUN_00481480(this,iVar2);
    ReleaseCapture();
    if (*(int *)((int)this + 0x2c) != iVar1) {
      if (*(int **)((int)this + 0x68) != (int *)0x0) {
        (**(code **)(**(int **)((int)this + 0x68) + 0x28))();
      }
      *(undefined4 *)((int)this + 0x80) = 1;
    }
  }
  return;
}

