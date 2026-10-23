// FUNCTION: PORT1111 0x00429c20
// name: FUN_00429c20
// sig: uint FUN_00429c20(void * this, uint param_1, uint param_2)


uint __thiscall FUN_00429c20(void *this,uint param_1,uint param_2)

{
  uint in_EAX;
  
  if ((((-1 < (int)param_1) && (in_EAX = *(uint *)((int)this + 0x10c), param_1 < in_EAX)) &&
      (-1 < (int)param_2)) && (param_2 < *(uint *)((int)this + 0x110))) {
    return (int)(*(ushort *)
                  ((in_EAX * param_2 + param_1) * 0x6c + 0x3c + *(int *)((int)this + 0x118)) &
                DAT_004e2050) >> ((byte)DAT_004e204c & 0x1f);
  }
  return in_EAX & 0xffffff00;
}

