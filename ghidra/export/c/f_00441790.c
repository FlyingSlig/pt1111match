// FUNCTION: PORT1111 0x00441790
// name: FUN_00441790
// sig: int FUN_00441790(int param_1, int param_2, int param_3)


int FUN_00441790(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 < 1) {
    iVar1 = 999999;
  }
  else {
    iVar1 = param_1 / param_2;
  }
  if (iVar1 < param_3) {
    return 0x7d4;
  }
  return (iVar1 < param_3 * 3) + 0x7d5;
}

