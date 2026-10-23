// FUNCTION: PORT1111 0x0047c600
// name: FUN_0047c600
// sig: undefined4 FUN_0047c600(void * this, uchar * param_1)


undefined4 __thiscall FUN_0047c600(void *this,uchar *param_1)

{
  void *this_00;
  int iVar1;
  undefined4 *puVar2;
  
  this_00 = (void *)((int)this + 0x14);
  FUN_00466a40(this_00,param_1);
  FUN_00465e70(this_00,'\\');
  iVar1 = thunk_FUN_00466240(this_00,"");
  if (iVar1 == 0) {
    puVar2 = FUN_0047c3c0(this);
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    (**(code **)(**(int **)((int)this + 0x24) + 0x38))(puVar2,0,0,0);
    (**(code **)*puVar2)(1);
  }
  return 1;
}

