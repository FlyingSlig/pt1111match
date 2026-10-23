// FUNCTION: PORT1111 0x00410970
// name: FUN_00410970
// sig: undefined FUN_00410970(void * this, int * param_1, int param_2, int param_3)


void __thiscall FUN_00410970(void *this,int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((*(int *)(*(int *)((int)this + 0x10) + 0x44) != 0) ||
     (*(int *)(*(int *)((int)this + 0x10) + 0x48) != 0)) {
    iVar1 = DAT_004e2c30 + *(int *)(*(int *)((int)this + 0x10) + 0x44);
    iVar3 = DAT_004e2c34 + *(int *)(*(int *)((int)this + 0x10) + 0x48);
    piVar2 = (int *)(**(code **)(*param_1 + 0x70))();
    FUN_0047ba20((void *)((int)this + 0x18),piVar2,iVar1,iVar3,param_2,param_3);
  }
  return;
}

