// FUNCTION: PORT1111 0x004270d0
// name: FUN_004270d0
// sig: undefined FUN_004270d0(void * this, int * param_1)


void __thiscall FUN_004270d0(void *this,int *param_1)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  *(undefined4 *)((int)this + 0x44) = 0;
  if (*(int *)((int)this + 0x48) != 0) {
    if ((*(ushort *)((int)this + 0x3c) & DAT_004e2050) == DAT_004e2060) {
      return;
    }
    uVar2 = *(uint *)((int)this + 0x38);
    iVar4 = *(short *)((int)this + 6) + DAT_004e2c34;
    iVar6 = *(short *)((int)this + 4) + DAT_004e2c30;
    piVar3 = (int *)(**(code **)(*param_1 + 0x74))();
    FUN_004291a0(&DAT_004e20c8,piVar3,iVar6,iVar4,uVar2);
    return;
  }
  uVar2 = *(ushort *)((int)this + 0x3c) & DAT_004e2050;
  if (uVar2 == DAT_004e2058) {
    uVar2 = *(uint *)((int)this + 0x38);
    iVar4 = *(short *)((int)this + 6) + DAT_004e2c34;
    iVar6 = *(short *)((int)this + 4) + DAT_004e2c30;
    piVar3 = (int *)(**(code **)(*param_1 + 0x74))();
    FUN_004291a0(&DAT_004e20c8,piVar3,iVar6,iVar4,uVar2);
    bVar1 = *(byte *)((int)this + 0x3e);
    if (bVar1 == 0) {
      return;
    }
    if ((bVar1 & 0xf) == 0) goto LAB_00427172;
    iVar6 = *(short *)((int)this + 6) + DAT_004e2c34;
    iVar5 = *(short *)((int)this + 4) + DAT_004e2c30;
    iVar4 = (bVar1 & 0xf) * 0x30 + DAT_004e2044;
  }
  else {
    if (uVar2 != DAT_004e205c) {
      return;
    }
    FUN_00426920(this,param_1);
    iVar6 = *(short *)((int)this + 6) + DAT_004e2c34;
    iVar5 = *(short *)((int)this + 4) + DAT_004e2c30;
    iVar4 = DAT_004e2044;
  }
  (**(code **)(*param_1 + 0x34))(iVar4,iVar5,iVar6,0);
LAB_00427172:
  uVar2 = (uint)(*(byte *)((int)this + 0x3e) >> 4);
  if (uVar2 != 0) {
    (**(code **)(*param_1 + 0x34))
              (uVar2 * 0x30 + DAT_004e2040,*(short *)((int)this + 4) + DAT_004e2c30,
               *(short *)((int)this + 6) + DAT_004e2c34,0);
  }
  return;
}

