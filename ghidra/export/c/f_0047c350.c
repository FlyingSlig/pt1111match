// FUNCTION: PORT1111 0x0047c350
// name: FUN_0047c350
// sig: undefined FUN_0047c350(void * this, uint param_1, undefined4 param_2)


void __thiscall FUN_0047c350(void *this,uint param_1,undefined4 param_2)

{
  if (*(int *)((int)this + 4) != 0) {
    FUN_00494ec0((void *)((int)this + 0x48),param_1,param_2);
  }
  (**(code **)(**(int **)((int)this + 0x34) + 0x7c))(param_1,param_2);
  return;
}

