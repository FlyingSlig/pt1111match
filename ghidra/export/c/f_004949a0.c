// FUNCTION: PORT1111 0x004949a0
// name: FUN_004949a0
// sig: undefined FUN_004949a0(void * this, int param_1)


void __thiscall FUN_004949a0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)((int)this + 0x10);
  piVar2 = *(int **)(*(int *)((int)this + 4) +
                    (*(int *)((int)this + 0x14) * *(int *)((int)this + 8) + iVar1) * 4);
  iVar5 = 0;
  if (0 < *(int *)((int)this + 8)) {
    do {
      if (param_1 == 0) {
        iVar4 = *(int *)((int)this + 0x10) + -1;
      }
      else {
        iVar4 = *(int *)((int)this + 0x10) + 1;
      }
      *(int *)((int)this + 0x10) = iVar4;
      if (iVar4 < 0) {
        iVar4 = (**(code **)(*(int *)this + 0x10))(0);
        if (iVar4 == 0) {
LAB_00494a0c:
          *(undefined4 *)((int)this + 0x10) = 0;
        }
        else {
          *(int *)((int)this + 0x10) = *(int *)((int)this + 8) + -1;
        }
      }
      else if (*(int *)((int)this + 8) <= iVar4) {
        iVar4 = (**(code **)(*(int *)this + 0x10))(1);
        if (iVar4 != 0) goto LAB_00494a0c;
        *(int *)((int)this + 0x10) = *(int *)((int)this + 8) + -1;
      }
      piVar3 = *(int **)(*(int *)((int)this + 4) +
                        (*(int *)((int)this + 0x14) * *(int *)((int)this + 8) +
                        *(int *)((int)this + 0x10)) * 4);
      if ((((piVar3 != (int *)0x0) && (iVar4 = (**(code **)(*piVar3 + 0xa4))(), iVar4 != 0)) &&
          (piVar3[0x28] != 0)) && (((*(byte *)(piVar3 + 0xc) & 1) != 0 && (piVar3 != piVar2)))) {
        return;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)((int)this + 8));
  }
  *(int *)((int)this + 0x10) = iVar1;
  return;
}

