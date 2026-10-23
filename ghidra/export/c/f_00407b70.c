// FUNCTION: PORT1111 0x00407b70
// name: FUN_00407b70
// sig: undefined FUN_00407b70(void * this, int param_1)


void __thiscall FUN_00407b70(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)((int)this + 0x11c) + 1;
    *(int *)((int)this + 0x11c) = iVar1;
    *(int *)((int)this + 0x118) = param_1;
    *(int *)((int)this + 0x114) = iVar1;
    return;
  }
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  return;
}

