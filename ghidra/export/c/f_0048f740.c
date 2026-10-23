// FUNCTION: PORT1111 0x0048f740
// name: FUN_0048f740
// sig: undefined FUN_0048f740(HGDIOBJ param_1, LOGPEN * param_2, int * param_3, uint param_4)


void __cdecl FUN_0048f740(HGDIOBJ param_1,LOGPEN *param_2,int *param_3,uint param_4)

{
  HDC hdc;
  HDC hdc_00;
  HGDIOBJ h;
  
  if (param_1 != (HGDIOBJ)0x0) {
    hdc = GetDC((HWND)0x0);
    hdc_00 = CreateCompatibleDC(hdc);
    h = SelectObject(hdc_00,param_1);
    FUN_0048f4c0(hdc_00,param_2,param_3,param_4);
    SelectObject(hdc_00,h);
    DeleteDC(hdc_00);
    ReleaseDC((HWND)0x0,hdc);
                    /* WARNING: Could not recover jumptable at 0x0048f79b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    GdiFlush();
    return;
  }
  return;
}

