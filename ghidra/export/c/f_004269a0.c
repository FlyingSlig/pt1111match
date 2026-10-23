// FUNCTION: PORT1111 0x004269a0
// name: FUN_004269a0
// sig: undefined FUN_004269a0(void * this, char param_1)


void __thiscall FUN_004269a0(void *this,char param_1)

{
  *(ushort *)((int)this + 0x3c) =
       ~(ushort)(3 << (param_1 * '\x02' & 0x1fU)) & *(ushort *)((int)this + 0x3c) |
       (ushort)(1 << (param_1 * '\x02' & 0x1fU));
  return;
}

