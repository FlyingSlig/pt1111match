// FUNCTION: PORT1111 0x00406100
// name: FUN_00406100
// sig: undefined FUN_00406100(void * this, int param_1, int param_2)


void __thiscall FUN_00406100(void *this,int param_1,int param_2)

{
  void *this_00;
  
  this_00 = (void *)FUN_00429b40(DAT_004e2404,param_1,param_2);
  if (*(void **)((int)this + 0x5c) != (void *)0x0) {
    FUN_00426b20(*(void **)((int)this + 0x5c),0);
  }
  *(void **)((int)this + 0x5c) = this_00;
  if (this_00 != (void *)0x0) {
    FUN_00426b20(this_00,1);
  }
  return;
}

