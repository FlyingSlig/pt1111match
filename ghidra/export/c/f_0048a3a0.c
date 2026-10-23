// FUNCTION: PORT1111 0x0048a3a0
// name: FUN_0048a3a0
// sig: undefined FUN_0048a3a0(LONG * param_1, HDC param_2, LPCSTR param_3, LONG * param_4)


void __cdecl FUN_0048a3a0(LONG *param_1,HDC param_2,LPCSTR param_3,LONG *param_4)

{
  tagRECT local_10;
  
  local_10.left = *param_4;
  local_10.top = param_4[1];
  local_10.right = param_4[2];
  local_10.bottom = param_4[3];
  DrawTextA(param_2,param_3,-1,&local_10,0x410);
  *param_1 = local_10.left;
  param_1[1] = local_10.top;
  param_1[2] = local_10.right;
  param_1[3] = local_10.bottom;
  return;
}

