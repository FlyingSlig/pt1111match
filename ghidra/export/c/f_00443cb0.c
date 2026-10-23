// FUNCTION: PORT1111 0x00443cb0
// name: FUN_00443cb0
// sig: undefined FUN_00443cb0(void * this, undefined4 param_1, undefined4 param_2)


void __thiscall FUN_00443cb0(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined ***)this = &PTR_FUN_004c3740;
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 4) = 0;
  return;
}

