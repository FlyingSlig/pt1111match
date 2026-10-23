// FUNCTION: PORT1111 0x0046a6e0
// name: FUN_0046a6e0
// sig: WPARAM FUN_0046a6e0(int param_1)


WPARAM __fastcall FUN_0046a6e0(int param_1)

{
  int iVar1;
  BOOL BVar2;
  tagMSG local_1c;
  
  local_1c.message = 0;
  while( true ) {
    while( true ) {
      BVar2 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
      if (BVar2 != 0) break;
      if (*(int **)(param_1 + 0x68) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x68) + 0x28))();
        if ((((DAT_004dd968 != 0) && (iVar1 = *(int *)(*(int *)(param_1 + 0x68) + 0x18), iVar1 != 0)
             ) && (iVar1 = *(int *)(iVar1 + 0x24), iVar1 != 0)) && (*(int *)(iVar1 + 0x38) != 0)) {
          (**(code **)(**(int **)(*(int *)(param_1 + 0x6c) + 0xf8) + 0x14))();
          (**(code **)(**(int **)(*(int *)(param_1 + 0x6c) + 0xf8) + 0x18))
                    (*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x18));
        }
      }
    }
    if (local_1c.message == 0x12) break;
    TranslateMessage(&local_1c);
    DispatchMessageA(&local_1c);
  }
  return local_1c.wParam;
}

