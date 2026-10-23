// FUNCTION: PORT1111 0x00426810
// name: FUN_00426810
// sig: undefined FUN_00426810(void * this, int * param_1)


void __thiscall FUN_00426810(void *this,int *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)((int)this + 0x48) == 0) {
    return;
  }
  *(undefined4 *)((int)this + 0x44) = 0;
  uVar2 = *(ushort *)((int)this + 0x3c) & DAT_004e2050;
  if (uVar2 == DAT_004e2058) {
    if ((*(byte *)((int)this + 0x3e) & 0xf) == 0) goto LAB_004268ac;
    iVar4 = (int)*(short *)((int)this + 6);
    sVar1 = *(short *)((int)this + 4);
    iVar3 = (*(byte *)((int)this + 0x3e) & 0xf) * 0x30 + DAT_004e2044;
  }
  else {
    iVar4 = (int)*(short *)((int)this + 6);
    if (uVar2 != DAT_004e205c) {
      (**(code **)(*param_1 + 0x28))
                (DAT_004e2040,*(short *)((int)this + 4) + DAT_004e2c30,iVar4 + DAT_004e2c34,0);
      return;
    }
    sVar1 = *(short *)((int)this + 4);
    iVar3 = DAT_004e2044;
  }
  (**(code **)(*param_1 + 0x28))(iVar3,sVar1 + DAT_004e2c30,iVar4 + DAT_004e2c34,0);
LAB_004268ac:
  uVar2 = (uint)(*(byte *)((int)this + 0x3e) >> 4);
  if (uVar2 == 0) {
    return;
  }
  (**(code **)(*param_1 + 0x28))
            (uVar2 * 0x30 + DAT_004e2040,*(short *)((int)this + 4) + DAT_004e2c30,
             *(short *)((int)this + 6) + DAT_004e2c34,0);
  return;
}

