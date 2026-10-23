// FUNCTION: PORT1111 0x00457580
// name: FUN_00457580
// sig: undefined FUN_00457580(void * this, undefined4 param_1)


void __thiscall FUN_00457580(void *this,undefined4 param_1)

{
  undefined4 unaff_retaddr;
  
  if (*(undefined4 **)((int)this + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 8))(1);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 8) = unaff_retaddr;
    return;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return;
}

