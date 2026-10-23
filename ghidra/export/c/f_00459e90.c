// FUNCTION: PORT1111 0x00459e90
// name: FUN_00459e90
// sig: undefined FUN_00459e90(void * this, undefined4 param_1, POINT * param_2)


void __thiscall FUN_00459e90(void *this,undefined4 param_1,POINT *param_2)

{
  if (*(void **)((int)this + 0x2f4) != (void *)0x0) {
    FUN_004816f0(*(void **)((int)this + 0x2f4),param_1,param_2);
  }
  if (*(void **)((int)this + 0x5b0) != (void *)0x0) {
    FUN_004816f0(*(void **)((int)this + 0x5b0),param_1,param_2);
  }
  if (*(void **)((int)this + 0x86c) != (void *)0x0) {
    FUN_004816f0(*(void **)((int)this + 0x86c),param_1,param_2);
  }
  return;
}

