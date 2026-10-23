// FUNCTION: PORT1111 0x00427630
// name: FUN_00427630
// sig: undefined FUN_00427630(void * this, undefined4 param_1, undefined1 param_2)


void __thiscall FUN_00427630(void *this,undefined4 param_1,undefined1 param_2)

{
  undefined4 unaff_retaddr;
  
  FUN_00427480((int)this);
  if (*(char *)((int)this + 0x34) != '\0') {
    *(undefined4 *)((int)this + 0x30) = param_1;
    *(undefined1 *)((int)this + 0x34) = param_2;
    return;
  }
  if (*(undefined4 **)((int)this + 0x30) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x30))(1);
    *(undefined4 *)((int)this + 0x30) = unaff_retaddr;
    *(undefined1 *)((int)this + 0x34) = (undefined1)param_1;
    return;
  }
  *(undefined4 *)((int)this + 0x30) = param_1;
  *(undefined1 *)((int)this + 0x34) = param_2;
  return;
}

