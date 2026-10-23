// FUNCTION: PORT1111 0x00457550
// name: FUN_00457550
// sig: undefined FUN_00457550(void * this, undefined4 param_1)


void __thiscall FUN_00457550(void *this,undefined4 param_1)

{
  undefined4 unaff_retaddr;
  
  if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 4))(1);
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 4) = unaff_retaddr;
    return;
  }
  *(undefined4 *)((int)this + 4) = param_1;
  return;
}

