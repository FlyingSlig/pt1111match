// FUNCTION: PORT1111 0x00488640
// name: FUN_00488640
// sig: uint FUN_00488640(void * this, LPVOID param_1, DWORD param_2)


uint __thiscall FUN_00488640(void *this,LPVOID param_1,DWORD param_2)

{
  BOOL BVar1;
  DWORD local_4;
  
  local_4 = 0;
  BVar1 = ReadFile(*(HANDLE *)((int)this + 4),param_1,param_2,&local_4,(LPOVERLAPPED)0x0);
  return -(uint)(BVar1 != 0) & local_4;
}

