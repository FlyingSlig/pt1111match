// FUNCTION: PORT1111 0x0047fd30
// name: FUN_0047fd30
// sig: bool FUN_0047fd30(void * this, DWORD param_1)


bool __thiscall FUN_0047fd30(void *this,DWORD param_1)

{
  DWORD DVar1;
  
  if (*(HANDLE *)((int)this + 0xc) == (HANDLE)0x0) {
    return true;
  }
  DVar1 = WaitForSingleObject(*(HANDLE *)((int)this + 0xc),param_1);
  return (bool)('\x01' - (DVar1 != 0));
}

