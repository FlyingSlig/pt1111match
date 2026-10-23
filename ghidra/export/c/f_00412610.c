// FUNCTION: PORT1111 0x00412610
// name: FUN_00412610
// sig: undefined4 FUN_00412610(void * this, void * param_1)


undefined4 __thiscall FUN_00412610(void *this,void *param_1)

{
  void *this_00;
  
  this_00 = *(void **)((int)this + 0x40);
  if (this_00 != (void *)0x0) {
    FUN_00428930(this_00,(int)this);
    FUN_004288e0(*(void **)((int)this + 0x40),(int)this);
  }
  *(void **)((int)this + 0x40) = param_1;
  FUN_004281d0(param_1,this);
  FUN_00428240(*(void **)((int)this + 0x40),(int)this);
  (**(code **)(*(int *)((int)this + 0x14) + 0x20))();
  if (this_00 == (void *)0x0) {
    (**(code **)(*(int *)((int)this + 0x14) + 4))();
  }
  return 1;
}

