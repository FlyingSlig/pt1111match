// FUNCTION: PORT1111 0x00426920
// name: FUN_00426920
// sig: undefined FUN_00426920(void * this, int * param_1)


void __thiscall FUN_00426920(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)((int)this + 0x38);
  iVar3 = *(short *)((int)this + 6) + DAT_004e2c34;
  iVar1 = *(short *)((int)this + 4) + DAT_004e2c30;
  piVar2 = (int *)(**(code **)(*param_1 + 0x74))();
  FUN_004291a0(&DAT_004e20c8,piVar2,iVar1,iVar3,uVar4);
  return;
}

