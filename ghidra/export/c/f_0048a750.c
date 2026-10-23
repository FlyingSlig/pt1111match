// FUNCTION: PORT1111 0x0048a750
// name: FUN_0048a750
// sig: undefined FUN_0048a750(HDC param_1, LPCSTR param_2, LONG * param_3, int param_4, int param_5, uint param_6)


void __cdecl
FUN_0048a750(HDC param_1,LPCSTR param_2,LONG *param_3,int param_4,int param_5,uint param_6)

{
  int iVar1;
  undefined2 unaff_DI;
  ulonglong uVar2;
  UINT format;
  tagRECT local_10;
  
  local_10.left = *param_3;
  local_10.top = param_3[1];
  local_10.right = param_3[2];
  local_10.bottom = param_3[3];
  if (param_5 != 0) {
    if ((param_6 & 0x10) == 0) {
      format = 0x400;
    }
    else {
      format = 0x410;
    }
    iVar1 = DrawTextA(param_1,param_2,-1,&local_10,format);
    local_10.right = param_3[2];
    local_10.left = *param_3;
    local_10.bottom = param_3[3];
    local_10.top = param_3[1];
    if (iVar1 < local_10.bottom - local_10.top) {
      FUN_004980e0((double)(((local_10.bottom - local_10.top >> 1) - (iVar1 >> 1)) + local_10.top),
                   unaff_DI);
      uVar2 = FUN_00497d88();
      local_10.top = (LONG)uVar2;
    }
  }
  if (param_4 != 0x6a) {
    if (param_4 == 0x6b) {
      param_6 = param_6 | 2;
    }
    else if (param_4 == 0x6c) {
      param_6 = param_6 | 1;
    }
  }
  DrawTextA(param_1,param_2,-1,&local_10,param_6);
  return;
}

