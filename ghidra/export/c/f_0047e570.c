// FUNCTION: PORT1111 0x0047e570
// name: FUN_0047e570
// sig: undefined FUN_0047e570(void * this, int param_1, undefined4 param_2)


void __thiscall FUN_0047e570(void *this,int param_1,undefined4 param_2)

{
  if ((*(int *)((int)this + 0x10) != 0) && (*(undefined4 **)((int)this + 8) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)((int)this + 8))(1);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 1;
  if (param_1 != 0) {
    *(undefined4 *)((int)this + 0x10) = param_2;
    *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 4);
    return;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return;
}

