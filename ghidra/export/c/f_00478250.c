// FUNCTION: PORT1111 0x00478250
// name: FUN_00478250
// sig: undefined FUN_00478250(void * this, uint param_1)


void __thiscall FUN_00478250(void *this,uint param_1)

{
  DWORD DVar1;
  
  if (param_1 != *(ushort *)((int)this + 0x58)) {
    if ((int)param_1 < 1) {
      *(undefined2 *)((int)this + 0x58) = 1;
    }
    else {
      *(short *)((int)this + 0x58) = (short)param_1;
    }
    if ((*(byte *)((int)this + 0x2c) & 1) != 0) {
      DVar1 = GetTickCount();
      *(DWORD *)((int)this + 0x48) = DVar1;
      if (0 < *(short *)((int)this + 0x2e)) {
        *(short *)((int)this + 0x50) = *(short *)((int)this + 0x2e);
      }
    }
  }
  return;
}

