// FUNCTION: PORT1111 0x004961e0
// name: FUN_004961e0
// sig: undefined4 * FUN_004961e0(undefined4 * param_1)


undefined4 * __fastcall FUN_004961e0(undefined4 *param_1)

{
  HANDLE pvVar1;
  
  *param_1 = &PTR_FUN_004c6e04;
  param_1[3] = 0;
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[5] = 0;
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  param_1[10] = pvVar1;
  return param_1;
}

