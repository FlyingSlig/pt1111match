// FUNCTION: PORT1111 0x00494cb0
// name: FUN_00494cb0
// sig: undefined FUN_00494cb0(void * this, void * param_1, int param_2)


void __thiscall FUN_00494cb0(void *this,void *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)((int)this + 4) +
                    (*(int *)((int)this + 8) * *(int *)((int)this + 0x14) +
                    *(int *)((int)this + 0x10)) * 4);
  if (param_2 == 0) goto LAB_00494d68;
  if (piVar2 == (int *)0x0) {
LAB_00494cf2:
    FUN_00494760(this,1);
    piVar2 = *(int **)(*(int *)((int)this + 4) +
                      (*(int *)((int)this + 8) * *(int *)((int)this + 0x14) +
                      *(int *)((int)this + 0x10)) * 4);
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0xa4))();
      if (((iVar1 != 0) && (piVar2[0x28] != 0)) && ((*(byte *)(piVar2 + 0xc) & 1) != 0))
      goto LAB_00494d46;
    }
    FUN_00494880(this,1);
    piVar2 = *(int **)(*(int *)((int)this + 4) +
                      (*(int *)((int)this + 8) * *(int *)((int)this + 0x14) +
                      *(int *)((int)this + 0x10)) * 4);
  }
  else {
    iVar1 = (**(code **)(*piVar2 + 0xa4))();
    if (((iVar1 == 0) || (piVar2[0x28] == 0)) || ((*(byte *)(piVar2 + 0xc) & 1) == 0))
    goto LAB_00494cf2;
  }
LAB_00494d46:
  if (piVar2 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar2 + 0xa4))();
    if (((iVar1 != 0) && (piVar2[0x28] != 0)) && ((*(byte *)(piVar2 + 0xc) & 1) != 0)) {
LAB_00494d68:
      FUN_0047c2f0(param_1,piVar2);
      return;
    }
  }
  FUN_0047c2f0(param_1,(int *)0x0);
  return;
}

