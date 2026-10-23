// FUNCTION: PORT1111 0x0047c190
// name: FUN_0047c190
// sig: undefined FUN_0047c190(void * this, undefined4 param_1, undefined4 param_2)


void __thiscall FUN_0047c190(void *this,undefined4 param_1,undefined4 param_2)

{
  if ((*(int *)((int)this + 0x24) == 0) && (*(HGLOBAL *)((int)this + 0x20) != (HGLOBAL)0x0)) {
    GlobalUnlock(*(HGLOBAL *)((int)this + 0x20));
    GlobalFree(*(HGLOBAL *)((int)this + 0x20));
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 0x24) = 1;
  return;
}

