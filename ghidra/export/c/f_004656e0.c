// FUNCTION: PORT1111 0x004656e0
// name: FUN_004656e0
// sig: undefined FUN_004656e0(void * this, uint param_1)


void __thiscall FUN_004656e0(void *this,uint param_1)

{
  uint uVar1;
  HCURSOR hCursor;
  void *local_4;
  
  uVar1 = param_1;
  if ((*(int *)((int)this + 8) == 0) && (*(uint *)((int)this + 4) != param_1)) {
    local_4 = this;
    FUN_00495300((void *)((int)this + 0xc),&local_4,&param_1);
    if (local_4 == *(void **)((int)this + 0x10)) {
      hCursor = (HCURSOR)0x0;
    }
    else {
      hCursor = *(HCURSOR *)((int)local_4 + 0x10);
    }
    if (uVar1 == 1) {
      if (hCursor == (HCURSOR)0x0) {
        hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
      }
      SetCursor(hCursor);
      *(undefined4 *)((int)this + 4) = 1;
    }
    else {
      if (uVar1 == 2) {
        if (hCursor == (HCURSOR)0x0) {
          hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f02);
        }
        SetCursor(hCursor);
        *(undefined4 *)((int)this + 4) = 2;
        return;
      }
      if (hCursor != (HCURSOR)0x0) {
        *(uint *)((int)this + 4) = uVar1;
        SetCursor(hCursor);
        return;
      }
    }
  }
  return;
}

