// FUNCTION: PORT1111 0x00444bf0
// name: FUN_00444bf0
// sig: undefined FUN_00444bf0(void * this, int param_1)


void __thiscall FUN_00444bf0(void *this,int param_1)

{
  if ((param_1 == 0) && (*(int *)((int)this + 0x2c) != 0)) {
    *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  }
  *(int *)((int)this + 0x2c) = param_1;
  *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + 1;
  if (param_1 != 0) {
    FUN_00444b20((int)this);
  }
  FUN_004137d0(*(int *)((int)this + 0x18));
  return;
}

