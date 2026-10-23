// FUNCTION: PORT1111 0x004078c0
// name: FUN_004078c0
// sig: undefined FUN_004078c0(void * this, int param_1)


void __thiscall FUN_004078c0(void *this,int param_1)

{
  int iVar1;
  void *this_00;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x28) + 8);
  if (iVar1 == 7) {
    *(undefined4 *)((int)this + 0x2c) = 1;
    FUN_00405de0(*(void **)((int)this + 0x34),6);
    (**(code **)(**(int **)((int)this + 0x34) + 0xbc))();
    FUN_004077b0(this,0);
    if (*(int **)((int)this + 0x44) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x44) + 0x2c))();
      FUN_00489080();
      if (*(undefined4 **)((int)this + 0x44) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)((int)this + 0x44))(1);
        *(undefined4 *)((int)this + 0x44) = 0;
      }
    }
    if (*(int **)((int)this + 0x48) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x48) + 0x2c))();
      FUN_00489080();
      if (*(undefined4 **)((int)this + 0x48) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)((int)this + 0x48))(1);
        *(undefined4 *)((int)this + 0x48) = 0;
      }
    }
    FUN_00404190((int)this);
    return;
  }
  if (iVar1 == 0x14) {
    FUN_00405de0(*(void **)((int)this + 0x34),0xd);
    iVar1 = (*(int **)((int)this + 0x34))[0x10];
    FUN_0043b2d0(DAT_004e2408,*(int **)((int)this + 0x34),(int)*(short *)(iVar1 + 0x4e),
                 (int)*(short *)(iVar1 + 0x4c),6,
                 (uint)(*(int *)(*(int *)((int)this + 0x28) + 0x10) == 1));
  }
  this_00 = (void *)FUN_00404580(this,param_1);
  *(void **)((int)this + 0x24) = this_00;
  if ((*(byte *)((int)this_00 + 0x2c) & 1) != 0) {
    *(byte *)((int)this_00 + 0x2c) = *(byte *)((int)this_00 + 0x2c) | 0x88;
    return;
  }
  FUN_00478700(this_00,*(int *)(*(int *)((int)this + 0x34) + 4),
               *(int *)(*(int *)((int)this + 0x34) + 8));
  FUN_00478920(*(void **)((int)this + 0x24));
  return;
}

