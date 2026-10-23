// FUNCTION: PORT1111 0x00403d40
// name: FUN_00403d40
// sig: undefined FUN_00403d40(LONG * param_1, LONG param_2, LONG param_3, LONG param_4, LONG param_5)


void __cdecl FUN_00403d40(LONG *param_1,LONG param_2,LONG param_3,LONG param_4,LONG param_5)

{
  OffsetRect((LPRECT)&param_2,-DAT_004e2c30,-DAT_004e2c34);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}

