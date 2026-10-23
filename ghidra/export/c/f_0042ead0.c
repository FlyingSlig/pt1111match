// FUNCTION: PORT1111 0x0042ead0
// name: FUN_0042ead0
// sig: undefined FUN_0042ead0(void * this, int param_1, void * param_2, int param_3, int param_4, uint param_5)


void __thiscall
FUN_0042ead0(void *this,int param_1,void *param_2,int param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  
  if (this != param_2) {
    FUN_00409f80(this,param_5);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) - param_5;
  }
  **(int **)(param_3 + 4) = param_4;
  **(int **)(param_4 + 4) = param_1;
  **(int **)(param_1 + 4) = param_3;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_4 + 4);
  *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_3 + 4) = uVar1;
  return;
}

