// FUNCTION: PORT1111 0x0047fd60
// name: FUN_0047fd60
// sig: undefined FUN_0047fd60(void * this, int param_1)


void __thiscall FUN_0047fd60(void *this,int param_1)

{
  if (*(HANDLE *)((int)this + 0xc) == (HANDLE)0x0) {
    return;
  }
  SetThreadPriority(*(HANDLE *)((int)this + 0xc),param_1);
  return;
}

