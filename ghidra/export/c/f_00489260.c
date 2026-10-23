// FUNCTION: PORT1111 0x00489260
// name: FUN_00489260
// sig: undefined FUN_00489260(void * this, int * param_1, int * param_2)


void __thiscall FUN_00489260(void *this,int *param_1,int *param_2)

{
  HDC hdc;
  HDC hdc_00;
  HGDIOBJ h;
  HGDIOBJ pvVar1;
  HPEN h_00;
  HGDIOBJ h_01;
  tagRECT local_10;
  
  if ((*param_1 <= *param_2) && (param_1[1] <= param_2[1])) {
    hdc = GetDC((HWND)0x0);
    hdc_00 = CreateCompatibleDC(hdc);
    h = SelectObject(hdc_00,*(HGDIOBJ *)(*(int *)(*(int *)((int)this + 0x830) + 4) + 0x20));
    pvVar1 = GetStockObject(5);
    pvVar1 = SelectObject(hdc_00,pvVar1);
    h_00 = CreatePen(0,1,0xffffff);
    h_01 = SelectObject(hdc_00,h_00);
    Rectangle(hdc_00,*param_1,param_1[1],*param_2,param_2[1]);
    SelectObject(hdc_00,pvVar1);
    SelectObject(hdc_00,h_01);
    DeleteObject(h_00);
    SelectObject(hdc_00,h);
    DeleteDC(hdc_00);
    ReleaseDC((HWND)0x0,hdc);
    GdiFlush();
    local_10.left = *param_1;
    local_10.right = *param_2;
    local_10.bottom = param_2[1];
    local_10.top = param_1[1];
    InflateRect(&local_10,2,2);
    FUN_0040ff50();
  }
  return;
}

