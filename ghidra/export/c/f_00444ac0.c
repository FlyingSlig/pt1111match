// FUNCTION: PORT1111 0x00444ac0
// name: FUN_00444ac0
// sig: int FUN_00444ac0(void * this, int param_1)


int __thiscall FUN_00444ac0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *local_4;
  
  local_4 = this;
  FUN_00413aa0((void *)((int)this + 0xc),&local_4,&param_1);
  piVar2 = local_4;
  if (local_4 == *(int **)((int)this + 0x10)) {
    return 2000;
  }
  iVar1 = local_4[4];
  iVar3 = FUN_00441900(DAT_004e2420,param_1);
  if (iVar3 != 0) {
    FUN_004164b0((void *)((int)this + 0xc),&param_1,piVar2);
  }
  return iVar1;
}

