// FUNCTION: PORT1111 0x004537d0
// name: FUN_004537d0
// sig: undefined FUN_004537d0(int param_1, int param_2)


void FUN_004537d0(int param_1,int param_2)

{
  int iVar1;
  
  FUN_00403d10(&param_1,param_1,param_2);
  iVar1 = FUN_00429c90(DAT_004e2404,&param_1,1,1);
  if (iVar1 == 0) {
    iVar1 = FUN_00429c90(DAT_004e2404,&param_1,0,1);
    if (iVar1 == 0) {
      FUN_00429c90(DAT_004e2404,&param_1,0,0);
    }
  }
  return;
}

