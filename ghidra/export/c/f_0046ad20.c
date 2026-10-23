// FUNCTION: PORT1111 0x0046ad20
// name: FUN_0046ad20
// sig: undefined FUN_0046ad20(void * this, uint param_1)


void __thiscall FUN_0046ad20(void *this,uint param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)this + 0xc))();
  if (cVar1 == '\b') {
    *(uint *)((int)this + 0x1c) = param_1 & 0xff;
  }
  else {
    if (cVar1 == '\x10') {
      *(uint *)((int)this + 0x1c) =
           ((param_1 >> 0x10 & 0xf8) << 5 | param_1 >> 8 & 0xfc) << 3 | (param_1 & 0xff) >> 3;
      return;
    }
    if (cVar1 == '\x18') {
      *(uint *)((int)this + 0x1c) = param_1;
      return;
    }
  }
  return;
}

