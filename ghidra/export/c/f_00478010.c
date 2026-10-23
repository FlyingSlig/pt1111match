// FUNCTION: PORT1111 0x00478010
// name: FUN_00478010
// sig: undefined FUN_00478010(void * this, byte param_1)


void __thiscall FUN_00478010(void *this,byte param_1)

{
  *(byte *)((int)this + 0x2c) = (param_1 & 1 | 0xfc) << 5 | *(byte *)((int)this + 0x2c) & 0xdf;
  return;
}

