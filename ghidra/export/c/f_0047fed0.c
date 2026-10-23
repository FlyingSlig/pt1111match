// FUNCTION: PORT1111 0x0047fed0
// name: FUN_0047fed0
// sig: bool FUN_0047fed0(void * this, int param_1, HANDLE param_2)


bool __thiscall FUN_0047fed0(void *this,int param_1,HANDLE param_2)

{
  bool bVar1;
  HANDLE pvVar2;
  
  if (param_2 == (HANDLE)0x0) {
    param_2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
    *(undefined4 *)((int)this + 0x58) = 0;
  }
  else {
    *(undefined4 *)((int)this + 0x58) = 1;
  }
  *(HANDLE *)((int)this + 0x10) = param_2;
  pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 0x14) = pvVar2;
  if (pvVar2 != (HANDLE)0x0) {
    pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
    *(HANDLE *)((int)this + 0x18) = pvVar2;
    if (pvVar2 != (HANDLE)0x0) {
      bVar1 = FUN_0047fdd0(this,param_1);
      return bVar1;
    }
  }
  return false;
}

