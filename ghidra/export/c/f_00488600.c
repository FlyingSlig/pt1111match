// FUNCTION: PORT1111 0x00488600
// name: FUN_00488600
// sig: uint FUN_00488600(void * this, LPCVOID param_1, DWORD param_2)


uint __thiscall FUN_00488600(void *this,LPCVOID param_1,DWORD param_2)

{
  BOOL BVar1;
  DWORD local_4;
  
  local_4 = 0;
  BVar1 = WriteFile(*(HANDLE *)((int)this + 4),param_1,param_2,&local_4,(LPOVERLAPPED)0x0);
  return -(uint)(BVar1 != 0) & local_4;
}

