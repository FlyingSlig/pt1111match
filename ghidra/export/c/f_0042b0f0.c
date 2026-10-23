// FUNCTION: PORT1111 0x0042b0f0
// name: FUN_0042b0f0
// sig: int FUN_0042b0f0(void * this, uint param_1, uint param_2, undefined4 * param_3, char param_4)


int __thiscall FUN_0042b0f0(void *this,uint param_1,uint param_2,undefined4 *param_3,char param_4)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (((((int)param_1 < 0) || (*(uint *)((int)this + 0x10c) <= param_1)) || ((int)param_2 < 0)) ||
     (*(uint *)((int)this + 0x110) <= param_2)) {
    return -1;
  }
  pvVar2 = (void *)FUN_004147d0((int)param_3);
  if (pvVar2 != (void *)0x0) {
    iVar1 = *(int *)(DAT_004e26f0 + param_4 * 4);
    if (*(int *)((int)pvVar2 + 0x48) == 5) {
      pvVar3 = (void *)FUN_00429ac0(this,param_1,param_2);
      iVar4 = FUN_0040d8a0(pvVar2,iVar1,pvVar3);
    }
    else {
      iVar4 = FUN_00429c70(this,param_1,param_2,pvVar2);
    }
    if (iVar4 != 0) {
      iVar4 = (*(int *)((int)this + 0x10c) * param_2 + param_1) * 0x6c;
      iVar6 = (int)*(short *)(*(int *)((int)this + 0x118) + 4 + iVar4);
      iVar4 = (int)*(short *)(*(int *)((int)this + 0x118) + 6 + iVar4);
      if (*(char *)((int)pvVar2 + 100) != '\0') {
        iVar6 = iVar6 + 0x20;
        iVar4 = iVar4 + 0x10;
      }
      piVar5 = FUN_00413b80(param_3);
      if ((*(byte *)(piVar5 + 0xf) & 2) != 0) {
        (**(code **)(*piVar5 + 0x98))(iVar1);
      }
      (**(code **)(*piVar5 + 0x84))(iVar6,iVar4,0);
      FUN_00412880(piVar5);
      (**(code **)(*piVar5 + 0x4c))();
      return piVar5[4];
    }
  }
  return -1;
}

