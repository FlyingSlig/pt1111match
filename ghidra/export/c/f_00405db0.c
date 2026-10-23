// FUNCTION: PORT1111 0x00405db0
// name: FUN_00405db0
// sig: undefined FUN_00405db0(void * this, int param_1, uint param_2)


void __thiscall FUN_00405db0(void *this,int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 8);
  iVar2 = *(int *)((int)this + 4);
  iVar1 = (**(code **)(*(int *)this + 4))();
  FUN_00453ee0(param_1,param_2,iVar1,iVar2,uVar3);
  return;
}

