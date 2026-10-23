// FUNCTION: PORT1111 0x0047fd00
// name: FUN_0047fd00
// sig: bool FUN_0047fd00(int param_1)


bool __fastcall FUN_0047fd00(int param_1)

{
  DWORD DVar1;
  
  if (*(HANDLE *)(param_1 + 0xc) == (HANDLE)0x0) {
    return false;
  }
  DVar1 = ResumeThread(*(HANDLE *)(param_1 + 0xc));
  return DVar1 != 0xffffffff;
}

