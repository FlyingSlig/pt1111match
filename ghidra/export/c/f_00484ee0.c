// FUNCTION: PORT1111 0x00484ee0
// name: FUN_00484ee0
// sig: undefined FUN_00484ee0(LPCSTR param_1, HICON param_2, HICON param_3, HCURSOR param_4, LPCSTR param_5, int param_6, int param_7)


void __cdecl
FUN_00484ee0(LPCSTR param_1,HICON param_2,HICON param_3,HCURSOR param_4,LPCSTR param_5,int param_6,
            int param_7)

{
  WNDCLASSEXA local_30;
  
  local_30.style = (-(uint)(param_7 != 0) & 0xfffffffb) + 8;
  local_30.hInstance = DAT_004e2c24;
  local_30.cbClsExtra = 0;
  local_30.cbWndExtra = 0;
  local_30.cbSize = 0x30;
  local_30.lpfnWndProc = FUN_00484e00;
  local_30.hIcon = param_2;
  local_30.hCursor = param_4;
  local_30.hbrBackground = GetStockObject(param_6);
  local_30.lpszMenuName = param_5;
  local_30.lpszClassName = param_1;
  local_30.hIconSm = param_3;
  RegisterClassExA(&local_30);
  return;
}

