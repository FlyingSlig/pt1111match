// FUNCTION: PORT1111 0x00485490
// name: FUN_00485490
// sig: undefined FUN_00485490(int * param_1)


void __fastcall FUN_00485490(int *param_1)

{
  int *local_4;
  
  if (param_1[1] != 0) {
    local_4 = param_1;
    FUN_00495300(&DAT_004e2c84,&local_4,(uint *)(param_1 + 1));
    FUN_00484f60(&DAT_004e2c84,&local_4,local_4);
    param_1[1] = 0;
  }
  return;
}

