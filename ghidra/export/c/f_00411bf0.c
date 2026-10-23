// FUNCTION: PORT1111 0x00411bf0
// name: FUN_00411bf0
// sig: undefined4 FUN_00411bf0(void * this, void * param_1)


undefined4 __thiscall FUN_00411bf0(void *this,void *param_1)

{
  void *this_00;
  int iVar1;
  
  this_00 = *(void **)((int)this + 0x18);
  if (this_00 == param_1) {
    FUN_00426ce0(param_1,(int)this);
    return 1;
  }
  if (this_00 != (void *)0x0) {
    iVar1 = FUN_004288e0(this_00,(int)this);
    if (iVar1 == 0) {
      return 0;
    }
  }
  *(void **)((int)this + 0x18) = param_1;
  FUN_00428240(param_1,(int)this);
  return 1;
}

