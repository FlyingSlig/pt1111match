// FUNCTION: PORT1111 0x00412b80
// name: FUN_00412b80
// sig: bool FUN_00412b80(void * this, int param_1)


bool __thiscall FUN_00412b80(void *this,int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x50);
  iVar4 = (**(code **)(*(int *)this + 0x88))();
  iVar3 = *(int *)(*(int *)(iVar4 + 0x1fc) + iVar3 * 4);
  sVar1 = *(short *)(*(int *)((int)this + 0x40) + 0x4c);
  sVar2 = *(short *)(*(int *)((int)this + 0x40) + 0x4e);
  iVar4 = (**(code **)(*(int *)this + 0x88))();
  return iVar3 == *(int *)(*(int *)(iVar4 + 0x1fc) +
                          (*(int *)(iVar4 + 100) * (int)sVar1 + (int)sVar2) * 4);
}

