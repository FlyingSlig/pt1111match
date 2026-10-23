// FUNCTION: PORT1111 0x00472050
// name: FUN_00472050
// sig: undefined FUN_00472050(void * this, byte param_1, byte param_2, byte param_3)


void __thiscall FUN_00472050(void *this,byte param_1,byte param_2,byte param_3)

{
  *(ushort *)((int)this + 0x9c) =
       ((param_1 & 0xfff8) << 5 | param_2 & 0xfffc) << 3 | (ushort)(param_3 >> 3);
  *(uint *)((int)this + 0x98) = (uint)CONCAT21(CONCAT11(param_3,param_2),param_1);
  return;
}

