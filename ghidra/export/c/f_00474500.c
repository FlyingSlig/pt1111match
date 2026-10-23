// FUNCTION: PORT1111 0x00474500
// name: FUN_00474500
// sig: undefined4 * FUN_00474500(undefined4 * param_1)


undefined4 * __fastcall FUN_00474500(undefined4 *param_1)

{
  param_1[0x1f7] = param_1 + 0x1f7;
  *param_1 = &PTR_LAB_004c657c;
  param_1[2] = 0;
  SetRect((LPRECT)(param_1 + 0x1f8),0x7fff,0x7fff,0x7fff,0x7fff);
  param_1[1] = 0;
  return param_1;
}

