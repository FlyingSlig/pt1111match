// FUNCTION: PORT1111 0x00405710
// name: FUN_00405710
// sig: undefined FUN_00405710(void * this, int param_1)


void __thiscall FUN_00405710(void *this,int param_1)

{
  void *this_00;
  
  this_00 = *(void **)((int)this + 0x70);
  if (((this_00 != (void *)0x0) && (*(char *)((int)this_00 + 0x5a) != '\0')) && (param_1 != 0)) {
    FUN_00422110(this_00,param_1,*(int *)((int)this + 0x50));
  }
  return;
}

