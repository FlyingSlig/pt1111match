// FUNCTION: PORT1111 0x0047c110
// name: FUN_0047c110
// sig: undefined FUN_0047c110(int param_1)


void __fastcall FUN_0047c110(int param_1)

{
  if ((*(int *)(param_1 + 0x24) == 0) && (*(HGLOBAL *)(param_1 + 0x20) != (HGLOBAL)0x0)) {
    GlobalUnlock(*(HGLOBAL *)(param_1 + 0x20));
    GlobalFree(*(HGLOBAL *)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

