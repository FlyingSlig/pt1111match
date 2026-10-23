// FUNCTION: PORT1111 0x00494880
// name: FUN_00494880
// sig: undefined FUN_00494880(void * this, int param_1)


void __thiscall FUN_00494880(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((*(int *)((int)this + 0x18) != 0) ||
     (((0 < *(int *)((int)this + 0x14) + param_1 ||
       (iVar4 = (**(code **)(*(int *)this + 0xc))(0), iVar4 != 0)) &&
      ((*(int *)((int)this + 0x14) + param_1 < *(int *)((int)this + 0xc) ||
       (iVar4 = (**(code **)(*(int *)this + 0xc))(1), iVar4 != 0)))))) {
    iVar4 = *(int *)((int)this + 0x10);
    iVar1 = *(int *)((int)this + 0x14);
    piVar2 = *(int **)(*(int *)((int)this + 4) + (*(int *)((int)this + 8) * iVar1 + iVar4) * 4);
    iVar6 = 0;
    if (0 < *(int *)((int)this + 0xc) * *(int *)((int)this + 8)) {
      do {
        iVar5 = *(int *)((int)this + 0x14) + param_1;
        *(int *)((int)this + 0x14) = iVar5;
        if (iVar5 < 0) {
          *(int *)((int)this + 0x14) = *(int *)((int)this + 0xc) + -1;
          iVar5 = *(int *)((int)this + 0x10) + -1;
LAB_00494927:
          *(int *)((int)this + 0x10) = iVar5;
        }
        else if (*(int *)((int)this + 0xc) <= iVar5) {
          *(undefined4 *)((int)this + 0x14) = 0;
          iVar5 = *(int *)((int)this + 0x10) + 1;
          goto LAB_00494927;
        }
        iVar5 = *(int *)((int)this + 8);
        if (*(int *)((int)this + 0x10) < 0) {
          *(int *)((int)this + 0x10) = iVar5 + -1;
        }
        else if (iVar5 <= *(int *)((int)this + 0x10)) {
          *(undefined4 *)((int)this + 0x10) = 0;
        }
        piVar3 = *(int **)(*(int *)((int)this + 4) +
                          (*(int *)((int)this + 0x14) * iVar5 + *(int *)((int)this + 0x10)) * 4);
        if ((((piVar3 != (int *)0x0) && (iVar5 = (**(code **)(*piVar3 + 0xa4))(), iVar5 != 0)) &&
            (piVar3[0x28] != 0)) && (((*(byte *)(piVar3 + 0xc) & 1) != 0 && (piVar3 != piVar2)))) {
          return;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)((int)this + 0xc) * *(int *)((int)this + 8));
    }
    *(int *)((int)this + 0x10) = iVar4;
    *(int *)((int)this + 0x14) = iVar1;
  }
  return;
}

