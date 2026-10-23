// FUNCTION: PORT1111 0x0044df10
// name: FUN_0044df10
// sig: undefined4 * FUN_0044df10(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, void * param_4, undefined1 param_5)


undefined4 * __thiscall
FUN_0044df10(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,void *param_4,
            undefined1 param_5)

{
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0x24) = 0xf;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  FUN_004015c0((void *)((int)this + 0xc),param_4,0,0xffffffff);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)param_4 + 0x1c);
  *(undefined1 *)((int)this + 0x2c) = param_5;
  *(undefined1 *)((int)this + 0x2d) = 0;
  return this;
}

