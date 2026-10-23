// FUNCTION: PORT1111 0x0046cd40
// name: FUN_0046cd40
// sig: undefined FUN_0046cd40(int * param_1, int * param_2, int param_3, int param_4, LONG * param_5, int * param_6, int * param_7, LPRECT param_8, LPRECT param_9)


void __cdecl
FUN_0046cd40(int *param_1,int *param_2,int param_3,int param_4,LONG *param_5,int *param_6,
            int *param_7,LPRECT param_8,LPRECT param_9)

{
  LONG LVar1;
  RECT RStack_20;
  RECT RStack_10;
  
  LVar1 = (**(code **)(*param_2 + 8))();
  RStack_20.right = (**(code **)(*param_2 + 4))();
  RStack_20.left = 0;
  RStack_20.top = 0;
  RStack_20.bottom = LVar1;
  LVar1 = (**(code **)(*param_1 + 8))();
  RStack_10.right = (**(code **)(*param_1 + 4))();
  RStack_10.left = 0;
  RStack_10.top = 0;
  RStack_10.bottom = LVar1;
  FUN_0046cbc0(&RStack_10,&RStack_20,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}

