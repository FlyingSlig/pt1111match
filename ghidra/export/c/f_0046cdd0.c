// FUNCTION: PORT1111 0x0046cdd0
// name: FUN_0046cdd0
// sig: undefined4 FUN_0046cdd0(int * param_1, int * param_2, int * param_3, int param_4, int param_5, LONG * param_6, int * param_7, int * param_8, undefined4 param_9, int * param_10, undefined4 param_11, int * param_12, undefined4 param_13, int * param_14, LPRECT param_15)


undefined4 __cdecl
FUN_0046cdd0(int *param_1,int *param_2,int *param_3,int param_4,int param_5,LONG *param_6,
            int *param_7,int *param_8,undefined4 param_9,int *param_10,undefined4 param_11,
            int *param_12,undefined4 param_13,int *param_14,LPRECT param_15)

{
  int iVar1;
  tagRECT local_10;
  
  iVar1 = FUN_0046cd40(param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_15,&local_10);
  if ((iVar1 == 0) || (iVar1 = FUN_0046b000(param_2,&local_10.left,param_9,param_10), iVar1 == 0)) {
    return 0;
  }
  iVar1 = FUN_0046b000(param_1,&param_15->left,param_11,param_12);
  if (iVar1 == 0) {
    (**(code **)(*param_2 + 0x34))();
    return 0;
  }
  if ((param_3 != (int *)0x0) &&
     (iVar1 = FUN_0046b000(param_3,&param_15->left,param_13,param_14), iVar1 == 0)) {
    (**(code **)(*param_2 + 0x34))();
    (**(code **)(*param_1 + 0x34))();
    return 0;
  }
  return 1;
}

