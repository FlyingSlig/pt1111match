// FUNCTION: PORT1111 0x0046ac80
// name: FUN_0046ac80
// sig: undefined FUN_0046ac80(void * this, undefined4 param_1, undefined4 param_2)


void __thiscall FUN_0046ac80(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined ***)this = &PTR_FUN_004c6028;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0xc) = 1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  return;
}

