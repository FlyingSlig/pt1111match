// FUNCTION: PORT1111 0x00424430
// name: FUN_00424430
// sig: undefined FUN_00424430(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)


void __thiscall FUN_00424430(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  return;
}

