// FUNCTION: PORT1111 0x00453620
// name: FUN_00453620
// sig: undefined FUN_00453620(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, int param_6)


void __thiscall
FUN_00453620(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  *(int *)((int)this + 4) = param_1;
  *(int *)((int)this + 8) = param_2;
  *(int *)((int)this + 0xc) = param_3;
  *(int *)((int)this + 0x10) = param_4;
  FUN_004534f0(this,param_3 - param_1,param_4 - param_2,param_5,param_6);
  return;
}

