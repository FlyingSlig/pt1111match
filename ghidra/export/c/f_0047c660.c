// FUNCTION: PORT1111 0x0047c660
// name: FUN_0047c660
// sig: undefined FUN_0047c660(void * this, WPARAM param_1, undefined2 param_2, undefined2 param_3)


void __thiscall FUN_0047c660(void *this,WPARAM param_1,undefined2 param_2,undefined2 param_3)

{
  LPARAM lParam;
  HWND hWnd;
  UINT Msg;
  
  lParam = CONCAT22(param_2,param_3);
  Msg = 0x87cc;
  hWnd = (HWND)(**(code **)(**(int **)((int)this + 0x34) + 0x50))();
  PostMessageA(hWnd,Msg,param_1,lParam);
  return;
}

