// FUNCTION: PORT1111 0x0041eb50
// name: FUN_0041eb50
// sig: undefined FUN_0041eb50(void * this, int param_1)


void __thiscall FUN_0041eb50(void *this,int param_1)

{
  char cVar1;
  
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  cVar1 = (char)((int)(*(ushort *)(param_1 + 0x3c) & DAT_004e2050) >> ((byte)DAT_004e204c & 0x1f));
  if (cVar1 == '\x01') {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    return;
  }
  if (cVar1 != '\x02') {
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    return;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  return;
}

