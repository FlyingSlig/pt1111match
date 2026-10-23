// FUNCTION: PORT1111 0x0046cea0
// name: FUN_0046cea0
// sig: bool FUN_0046cea0(int * param_1, int * param_2, int param_3, int param_4, LONG * param_5, int * param_6, int * param_7, undefined4 param_8, int * param_9, LPRECT param_10)


bool __cdecl
FUN_0046cea0(int *param_1,int *param_2,int param_3,int param_4,LONG *param_5,int *param_6,
            int *param_7,undefined4 param_8,int *param_9,LPRECT param_10)

{
  int iVar1;
  tagRECT local_10;
  
  iVar1 = FUN_0046cd40(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_10,&local_10);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_0046b000(param_2,&local_10.left,param_8,param_9);
  return iVar1 != 0;
}

