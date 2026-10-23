// FUNCTION: PORT1111 0x0047d3a0
// name: FUN_0047d3a0
// sig: undefined4 FUN_0047d3a0(void * this, int * param_1)


undefined4 __thiscall FUN_0047d3a0(void *this,int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  int iVar3;
  int iVar4;
  void *this_00;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)0x0;
  iVar4 = 0;
  *(int **)((int)this + 0x34) = param_1;
  if (*(int *)((int)this + 0xa4) != 0) {
    bVar1 = FUN_00465ec0((undefined4 *)((int)this + 0x14));
    if ((CONCAT31(extraout_var,bVar1) == 0) &&
       (puVar5 = FUN_0047c3c0(this), puVar5 == (undefined4 *)0x0)) {
      return 0;
    }
    iVar4 = (**(code **)(*param_1 + 0x3c))();
    if (puVar5 != (undefined4 *)0x0) {
      iVar2 = FUN_0047e810((int)puVar5);
      iVar3 = FUN_0047e870((int)puVar5);
      if ((iVar2 != *(int *)((int)this + 0x94)) || (iVar3 != *(int *)((int)this + 0x98))) {
        iVar4 = 1;
        *(int *)((int)this + 0x94) = iVar2;
        *(int *)((int)this + 0x98) = iVar3;
      }
    }
  }
  iVar4 = FUN_0047c690(this,iVar4);
  if (iVar4 != 0) {
    if (*(int *)((int)this + 0xa4) != 0) {
      if (puVar5 == (undefined4 *)0x0) {
        iVar4 = FUN_0047c600(this,(uchar *)0x0);
        if (iVar4 == 0) {
          return 0;
        }
      }
      else {
        (**(code **)(**(int **)((int)this + 0x24) + 0x38))(puVar5,0,0);
        (**(code **)*puVar5)(1);
      }
    }
    iVar4 = FUN_0047cba0((int)this);
    if (iVar4 != 0) {
      this_00 = (void *)((int)this + 0x48);
      if (this_00 != (void *)0x0) {
        FUN_00495070((int)this_00);
        FUN_00494e80(this_00,1);
      }
      return 1;
    }
    FUN_0047ce50((int)this);
  }
  return 0;
}

