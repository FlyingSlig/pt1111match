// FUNCTION: PORT1111 0x00455080
// name: FUN_00455080
// sig: undefined FUN_00455080(void * this, int param_1, int param_2, uchar * param_3)


void __thiscall FUN_00455080(void *this,int param_1,int param_2,uchar *param_3)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)param_2 + -1;
    FUN_004723f0(*(void **)(*(int *)((int)this + param_1 * 8 + 0x8a8) + 0xb0),DAT_004e2810,0,cVar1,1
                );
    FUN_004723f0(*(void **)(*(int *)((int)this + param_1 * 8 + 0x8a8) + 0xb4),DAT_004e2810,1,cVar1,1
                );
    FUN_004723f0(*(void **)(*(int *)((int)this + param_1 * 8 + 0x8a8) + 0xb8),DAT_004e2810,2,cVar1,1
                );
    FUN_00466af0(&stack0xfffffff0,param_3,0xffffffff);
    FUN_00452100(*(int *)((int)this + param_1 * 8 + 0x8a8));
    return;
  }
  FUN_0046ff40(*(int **)(*(int *)((int)this + param_1 * 8 + 0x8a8) + 0xb0));
  FUN_0046ff40(*(int **)(*(int *)((int)this + param_1 * 8 + 0x8a8) + 0xb4));
  FUN_0046ff40(*(int **)(*(int *)((int)this + param_1 * 8 + 0x8a8) + 0xb8));
  FUN_00466af0(&stack0xfffffff0,"",0xffffffff);
  FUN_00452100(*(int *)((int)this + param_1 * 8 + 0x8a8));
  return;
}

