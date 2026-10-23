// FUNCTION: PORT1111 0x00477ae0
// name: FUN_00477ae0
// sig: int FUN_00477ae0(void * this, void * param_1, int param_2)


int __thiscall FUN_00477ae0(void *this,void *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 != 0) {
    iVar1 = *(int *)((int)this + 0x14) + 1;
    *(int *)((int)this + 0x14) = iVar1;
    *(short *)((int)param_1 + 0x34) = (short)iVar1;
  }
  param_2 = (int)*(short *)((int)param_1 + 0x34);
  piVar2 = FUN_00417480(*(void **)((int)this + 0xc),&param_2);
  *piVar2 = (int)param_1;
  FUN_00478450(param_1,this);
  return (int)*(short *)((int)param_1 + 0x34);
}

