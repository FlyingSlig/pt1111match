// FUNCTION: PORT1111 0x00445740
// name: FUN_00445740
// sig: bool FUN_00445740(void * this, undefined4 param_1, int param_2)


bool __thiscall FUN_00445740(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = Ordinal_19(*(undefined4 *)((int)this + 0xc),param_1,param_2,0);
  return (bool)('\x01' - (iVar1 != param_2));
}

