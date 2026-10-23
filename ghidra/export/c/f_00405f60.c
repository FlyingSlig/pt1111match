// FUNCTION: PORT1111 0x00405f60
// name: FUN_00405f60
// sig: undefined FUN_00405f60(void * this, int param_1)


void __thiscall FUN_00405f60(void *this,int param_1)

{
  void *this_00;
  
  this_00 = *(void **)((int)this + 0xb0);
  if (this_00 != (void *)0x0) {
    if (param_1 == 0) {
      FUN_00444bf0(this_00,0);
      return;
    }
    FUN_00444bf0(this_00,1);
    FUN_00405ad0(this,-1,-1);
  }
  return;
}

