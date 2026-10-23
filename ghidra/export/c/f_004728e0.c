// FUNCTION: PORT1111 0x004728e0
// name: FUN_004728e0
// sig: undefined FUN_004728e0(void * this, HGDIOBJ param_1)


void __thiscall FUN_004728e0(void *this,HGDIOBJ param_1)

{
  int iVar1;
  HDC hdc;
  HDC hdc_00;
  HGDIOBJ h;
  
  if (param_1 != (HGDIOBJ)0x0) {
    iVar1 = thunk_FUN_00466240((void *)((int)this + 0x94),"");
    if (iVar1 == 0) {
      hdc = GetDC((HWND)0x0);
      hdc_00 = CreateCompatibleDC(hdc);
      h = SelectObject(hdc_00,param_1);
      FUN_004705f0(this);
      SelectObject(hdc_00,h);
      DeleteDC(hdc_00);
      ReleaseDC((HWND)0x0,hdc);
      GdiFlush();
    }
  }
  return;
}

