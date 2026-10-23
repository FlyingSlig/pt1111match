// FUNCTION: PORT1111 0x00445420
// name: FUN_00445420
// sig: undefined FUN_00445420(void * this)


void __thiscall FUN_00445420(void *this)

{
  bool bVar1;
  void *this_00;
  undefined3 extraout_var;
  int in_stack_00000010;
  
  this_00 = (void *)FUN_00414c30(DAT_004e240c);
  if ((this_00 != (void *)0x0) && (*(int *)(*(int *)((int)this_00 + 0x50) + 0x2a0) != 0x1f)) {
    bVar1 = FUN_004056c0(this_00,*(int **)((int)this + 0x18));
    if (CONCAT31(extraout_var,bVar1) != 0) {
      if (in_stack_00000010 == 0) {
        *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + 1;
        FUN_00444d00(this);
        return;
      }
      if ((in_stack_00000010 == 1) && (0 < *(int *)((int)this + 0x28))) {
        *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + -1;
      }
      FUN_00444d00(this);
    }
  }
  return;
}

