// FUNCTION: PORT1111 0x0044bf10
// name: FUN_0044bf10
// sig: uint FUN_0044bf10(LPWSTR param_1, LPCSTR param_2, int param_3)


uint __cdecl FUN_0044bf10(LPWSTR param_1,LPCSTR param_2,int param_3)

{
  int iVar1;
  
  if (((param_1 != (LPWSTR)0x0) && (param_2 != (LPCSTR)0x0)) && (0 < param_3)) {
    iVar1 = MultiByteToWideChar(0,0,param_2,-1,param_1,param_3);
    param_1[param_3 + -1] = L'\0';
    return (iVar1 != 0) - 1 & 0x80004005;
  }
  return 0x80070057;
}

