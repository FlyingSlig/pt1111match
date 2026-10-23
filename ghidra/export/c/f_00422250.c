// FUNCTION: PORT1111 0x00422250
// name: FUN_00422250
// sig: undefined FUN_00422250(void * this, int param_1)


void __thiscall FUN_00422250(void *this,int param_1)

{
  uint uVar1;
  
  *(int *)((int)this + 0x3c) = param_1;
  if (param_1 == 0) {
    *(undefined1 *)((int)this + 0x5a) = 1;
    *(undefined1 *)((int)this + 0x5b) = 1;
    if (DAT_004e2050 == 0) {
      FUN_00426a80(*(int *)((int)this + 0x34));
    }
    else {
      FUN_00422250(this,2);
    }
    uVar1 = FUN_0046c8b0((uint)*(byte *)((int)this + 0x56),(uint)*(byte *)((int)this + 0x55),
                         *(uint *)((int)this + 0x54) & 0xff);
    *(short *)((int)this + 0x58) = (short)uVar1;
    DAT_004e2700 = (*(int *)((int)this + 0x34) == 1) + 1;
    DAT_004e26fc = *(undefined4 *)((int)this + 0x34);
    DAT_004e21b0 = *(undefined1 *)((int)this + 0x34);
    return;
  }
  if (param_1 == 1) {
    *(undefined1 *)((int)this + 0x5a) = 1;
  }
  else {
    if (param_1 != 2) {
      return;
    }
    *(undefined1 *)((int)this + 0x5a) = 0;
  }
  *(undefined1 *)((int)this + 0x5b) = 0;
  uVar1 = FUN_0046c8b0((uint)*(byte *)((int)this + 0x56),(uint)*(byte *)((int)this + 0x55),
                       *(uint *)((int)this + 0x54) & 0xff);
  *(short *)((int)this + 0x58) = (short)uVar1;
  return;
}

