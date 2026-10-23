// FUNCTION: PORT1111 0x004884f0
// name: FUN_004884f0
// sig: bool FUN_004884f0(void * this, uchar * param_1, DWORD param_2, DWORD param_3)


bool __thiscall FUN_004884f0(void *this,uchar *param_1,DWORD param_2,DWORD param_3)

{
  HANDLE hFile;
  DWORD DVar1;
  void *pvStack_4;
  
  pvStack_4 = this;
  (**(code **)(*(int *)this + 4))();
  FUN_00466a40((void *)((int)this + 8),param_1);
  hFile = CreateFileA((LPCSTR)param_1,param_2,param_3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0)
  ;
  *(HANDLE *)((int)this + 4) = hFile;
  if (hFile == (HANDLE)0xffffffff) {
    *(undefined4 *)((int)this + 4) = 0;
    return false;
  }
  DVar1 = GetFileSize(hFile,(LPDWORD)&pvStack_4);
  *(DWORD *)((int)this + 0xc) = DVar1;
  return hFile != (HANDLE)0xffffffff;
}

