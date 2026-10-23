// FUNCTION: PORT1111 0x0048a2e0
// name: FUN_0048a2e0
// sig: undefined4 FUN_0048a2e0(int param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0048a2e0(int param_1)

{
  HDC hdc;
  int iVar1;
  undefined2 unaff_DI;
  ulonglong uVar2;
  
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,0x5a);
  FUN_004980e0((double)((iVar1 * param_1) / 0x48) + _DAT_004bd578,unaff_DI);
  uVar2 = FUN_00497d88();
  ReleaseDC((HWND)0x0,hdc);
  return (int)uVar2;
}

