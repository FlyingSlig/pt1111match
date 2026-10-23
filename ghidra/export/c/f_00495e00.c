// FUNCTION: PORT1111 0x00495e00
// name: FUN_00495e00
// sig: undefined FUN_00495e00(void * this, int * param_1)


void __thiscall FUN_00495e00(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uStack_8;
  int *local_4;
  
  local_4 = (int *)((int)this + 0x24);
  (**(code **)(*(int *)((int)this + 0x24) + 4))();
  uStack_8 = FUN_0047fd20((int)param_1);
  FUN_00495300((void *)((int)this + 0x18),&param_1,&uStack_8);
  piVar3 = (int *)((int)this + 0x24);
  if (param_1 != *(int **)((int)this + 0x1c)) {
    *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) + -1;
    *(undefined4 *)(param_1[4] + 0x5c) = 0;
    iVar1 = *(int *)((int)this + 0x10);
    iVar2 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),param_1 + 4);
    FUN_00495d60((void *)((int)this + 0xc),1);
    *(int *)(iVar1 + 4) = iVar2;
    **(int **)(iVar2 + 4) = iVar2;
    FUN_00495aa0((void *)((int)this + 0x18),&param_1,param_1);
    (**(code **)(*(int *)((int)this + 0x40) + 8))();
    piVar3 = local_4;
  }
  (**(code **)(*piVar3 + 8))();
  return;
}

