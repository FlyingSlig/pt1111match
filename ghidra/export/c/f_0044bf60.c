// FUNCTION: PORT1111 0x0044bf60
// name: FUN_0044bf60
// sig: uint FUN_0044bf60(LPWSTR param_1, LPCSTR param_2, int param_3)


uint __cdecl FUN_0044bf60(LPWSTR param_1,LPCSTR param_2,int param_3)

{
  uint uVar1;
  
  if (((param_1 != (LPWSTR)0x0) && (param_2 != (LPCSTR)0x0)) && (0 < param_3)) {
    uVar1 = FUN_0044bf10(param_1,param_2,param_3);
    return uVar1;
  }
  return 0x80070057;
}

