// FUNCTION: PORT1111 0x0048a840
// name: FUN_0048a840
// sig: undefined FUN_0048a840(HDC param_1, LPCSTR param_2, int * param_3, int param_4, int param_5, UINT param_6, COLORREF param_7, COLORREF param_8)


void __cdecl
FUN_0048a840(HDC param_1,LPCSTR param_2,int *param_3,int param_4,int param_5,UINT param_6,
            COLORREF param_7,COLORREF param_8)

{
  int iVar1;
  undefined2 unaff_DI;
  ulonglong uVar2;
  tagRECT local_10;
  
  local_10.top = param_3[1];
  local_10.left = *param_3 + 2;
  local_10.right = param_3[2];
  local_10.bottom = param_3[3];
  if (param_5 != 0) {
    iVar1 = DrawTextA(param_1,param_2,-1,&local_10,0x410);
    local_10.top = param_3[1];
    local_10.right = param_3[2];
    local_10.bottom = param_3[3];
    local_10.left = *param_3 + 2;
    if (iVar1 < local_10.bottom - local_10.top) {
      FUN_004980e0(((double)(local_10.bottom - local_10.top >> 1) + (double)local_10.top) -
                   (double)(iVar1 >> 1),unaff_DI);
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
  SetTextColor(param_1,param_8);
  local_10.left = local_10.left + 1;
  local_10.right = local_10.right + 1;
  local_10.top = local_10.top + 1;
  local_10.bottom = local_10.bottom + 1;
  DrawTextA(param_1,param_2,-1,&local_10,param_6);
  local_10.bottom = local_10.bottom + -2;
  local_10.top = local_10.top + -2;
  DrawTextA(param_1,param_2,-1,&local_10,param_6);
  local_10.left = local_10.left + -2;
  local_10.right = local_10.right + -2;
  DrawTextA(param_1,param_2,-1,&local_10,param_6);
  local_10.bottom = local_10.bottom + 2;
  local_10.top = local_10.top + 2;
  DrawTextA(param_1,param_2,-1,&local_10,param_6);
  local_10.left = local_10.left + 1;
  local_10.right = local_10.right + 1;
  local_10.top = local_10.top + -1;
  local_10.bottom = local_10.bottom + -1;
  SetTextColor(param_1,param_7);
  DrawTextA(param_1,param_2,-1,&local_10,param_6);
  return;
}

