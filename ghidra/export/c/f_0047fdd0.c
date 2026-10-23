// FUNCTION: PORT1111 0x0047fdd0
// name: FUN_0047fdd0
// sig: bool FUN_0047fdd0(void * this, int param_1)


bool __thiscall FUN_0047fdd0(void *this,int param_1)

{
  HANDLE pvVar1;
  
  if (*(int *)((int)this + 0xc) != 0) {
    return false;
  }
  pvVar1 = FUN_004991bc((LPSECURITY_ATTRIBUTES)0x0,0,0x47fd80,this,-(uint)(param_1 != 0) & 4,
                        (LPDWORD)((int)this + 8));
  *(HANDLE *)((int)this + 0xc) = pvVar1;
  return pvVar1 != (HANDLE)0x0;
}

