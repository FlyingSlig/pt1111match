// FUNCTION: PORT1111 0x00426ef0
// name: FUN_00426ef0
// sig: undefined4 FUN_00426ef0(void * this, undefined2 * param_1)


undefined4 __thiscall FUN_00426ef0(void *this,undefined2 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  if (DAT_004e2681 == '\0') {
    piVar4 = *(int **)((int)this + 0x14);
    if (piVar4 != (int *)0x0) {
      if ((piVar4[2] == 0) || (*piVar4 == 0)) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = *(int **)(piVar4[2] + -4 + *piVar4 * 4);
      }
      iVar2 = (**(code **)(*piVar4 + 0x88))();
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*piVar4 + 0x88))();
        uVar1 = FUN_00422370(iVar2);
        *param_1 = uVar1;
        return 1;
      }
    }
    *param_1 = *(undefined2 *)(*(int *)((int)this + 0xc) + 0x2c);
    return 0;
  }
  uVar3 = *(ushort *)((int)this + 0x3c) & DAT_004e2050;
  if (uVar3 == DAT_004e2060) {
    *param_1 = DAT_004e0b18;
    return 0;
  }
  piVar4 = *(int **)((int)this + 0x14);
  if (piVar4 != (int *)0x0) {
    if ((piVar4[2] == 0) || (*piVar4 == 0)) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *(int **)(piVar4[2] + -4 + *piVar4 * 4);
    }
    if (uVar3 == DAT_004e205c) {
      if ((*(byte *)(piVar4 + 0xf) & 8) == 0) goto LAB_00426fab;
      iVar2 = (**(code **)(*piVar4 + 0x88))();
    }
    else {
      iVar2 = (**(code **)(*piVar4 + 0x88))();
      if (iVar2 == 0) {
        *param_1 = *(undefined2 *)(*(int *)((int)this + 0xc) + 0x2c);
        return 0;
      }
      iVar2 = (**(code **)(*piVar4 + 0x88))();
    }
    uVar1 = FUN_00422370(iVar2);
    *param_1 = uVar1;
    return 1;
  }
LAB_00426fab:
  if (uVar3 == DAT_004e205c) {
    *param_1 = *(undefined2 *)(*(int *)((int)this + 0xc) + 0x30);
    return 0;
  }
  *param_1 = *(undefined2 *)(*(int *)((int)this + 0xc) + 0x2c);
  return 0;
}

