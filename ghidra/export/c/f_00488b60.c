// FUNCTION: PORT1111 0x00488b60
// name: FUN_00488b60
// sig: undefined FUN_00488b60(HWND param_1, UINT param_2)


void __cdecl FUN_00488b60(HWND param_1,UINT param_2)

{
  bool bVar1;
  BOOL BVar2;
  WPARAM local_20;
  tagMSG local_1c;
  
  bVar1 = false;
  local_20 = 0;
  BVar2 = PeekMessageA(&local_1c,param_1,param_2,param_2,1);
  if (BVar2 != 0) {
    do {
      if (local_1c.message == 0x12) {
        local_20 = local_1c.wParam;
        bVar1 = true;
      }
      BVar2 = PeekMessageA(&local_1c,param_1,param_2,param_2,1);
    } while (BVar2 != 0);
    if (bVar1) {
      PostQuitMessage(local_20);
    }
  }
  return;
}

