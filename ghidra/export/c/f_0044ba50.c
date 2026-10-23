// FUNCTION: PORT1111 0x0044ba50
// name: FUN_0044ba50
// sig: uint * FUN_0044ba50(uint * param_1)


uint * __fastcall FUN_0044ba50(uint *param_1)

{
  HRESULT HVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  HVar1 = CoInitialize((LPVOID)0x0);
  *param_1 = (uint)(-1 < HVar1);
  return param_1;
}

