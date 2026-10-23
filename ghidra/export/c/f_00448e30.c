// FUNCTION: PORT1111 0x00448e30
// name: FUN_00448e30
// sig: undefined FUN_00448e30(void * this, int param_1)


void __thiscall FUN_00448e30(void *this,int param_1)

{
  HWND hWnd;
  tagPOINT *lpPoint;
  tagPOINT tStack_8;
  
  if ((DAT_004e240c != (void *)0x0) && (*(int *)((int)this + 0x2c) != 0)) {
    if (param_1 == 1) {
      FUN_00454e70(DAT_004e2410);
    }
    else if (param_1 == 10) {
      FUN_00412e70((int)DAT_004e240c);
      FUN_00455180(DAT_004e2410);
      if (99 < *(uint *)(DAT_004e2afc + 4)) {
        GetCursorPos(&tStack_8);
        if (DAT_004e2c2c == 0) {
          lpPoint = &tStack_8;
          hWnd = (HWND)(**(code **)(*(int *)this + 0x4c))();
          ScreenToClient(hWnd,lpPoint);
        }
        FUN_00415760(DAT_004e240c,&tStack_8.x);
        return;
      }
    }
  }
  return;
}

