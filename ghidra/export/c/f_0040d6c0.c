// FUNCTION: PORT1111 0x0040d6c0
// name: FUN_0040d6c0
// sig: undefined FUN_0040d6c0(void * this, int * param_1, int * param_2)


void __thiscall FUN_0040d6c0(void *this,int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x13c) * 0x10;
  *param_1 = ((*(int *)(&DAT_004d54f0 + iVar1) - *(int *)(&DAT_004d54e8 + iVar1)) + -0x14) / 2 +
             *(int *)(&DAT_004d54e8 + iVar1);
  *param_2 = *(int *)(&DAT_004d54ec + *(int *)((int)this + 0x13c) * 0x10) + -3;
  return;
}

