// FUNCTION: PORT1111 0x00403d80
// name: FUN_00403d80
// sig: undefined FUN_00403d80(int * param_1, int param_2, int param_3)


void __cdecl FUN_00403d80(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3 + DAT_004e2c34;
  *param_1 = param_2 + DAT_004e2c30;
  param_1[1] = iVar1;
  return;
}

