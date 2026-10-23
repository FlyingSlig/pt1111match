// FUNCTION: PORT1111 0x00488560
// name: FUN_00488560
// sig: undefined FUN_00488560(void * this, uchar * param_1, DWORD param_2, DWORD param_3, int param_4)


void __thiscall FUN_00488560(void *this,uchar *param_1,DWORD param_2,DWORD param_3,int param_4)

{
  HANDLE pvVar1;
  
  (**(code **)(*(int *)this + 4))();
  FUN_00466a40((void *)((int)this + 8),param_1);
  pvVar1 = CreateFileA((LPCSTR)param_1,param_2,param_3,(LPSECURITY_ATTRIBUTES)0x0,
                       (uint)(param_4 == 0) * 2 + 2,0x80,(HANDLE)0x0);
  *(HANDLE *)((int)this + 4) = pvVar1;
  if (pvVar1 == (HANDLE)0xffffffff) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  return;
}

