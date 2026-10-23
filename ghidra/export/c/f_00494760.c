// FUNCTION: PORT1111 0x00494760
// name: FUN_00494760
// sig: undefined FUN_00494760(void * this, int param_1)


void __thiscall FUN_00494760(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((*(int *)((int)this + 0x18) != 0) ||
     (((0 < *(int *)((int)this + 0x10) + param_1 ||
       (iVar4 = (**(code **)(*(int *)this + 0x10))(0), iVar4 != 0)) &&
      ((*(int *)((int)this + 0x10) + param_1 < *(int *)((int)this + 8) ||
       (iVar4 = (**(code **)(*(int *)this + 0x10))(1), iVar4 != 0)))))) {
    iVar4 = *(int *)((int)this + 0x14);
    iVar1 = *(int *)((int)this + 0x10);
    piVar2 = *(int **)(*(int *)((int)this + 4) + (iVar4 * *(int *)((int)this + 8) + iVar1) * 4);
    iVar7 = 0;
    if (0 < *(int *)((int)this + 0xc) * *(int *)((int)this + 8)) {
      do {
        iVar6 = *(int *)((int)this + 0x10) + param_1;
        iVar5 = *(int *)((int)this + 8);
        *(int *)((int)this + 0x10) = iVar6;
        if (iVar6 < 0) {
          *(int *)((int)this + 0x10) = iVar5 + -1;
          iVar6 = *(int *)((int)this + 0x14) + -1;
LAB_00494808:
          *(int *)((int)this + 0x14) = iVar6;
        }
        else if (iVar5 <= iVar6) {
          *(undefined4 *)((int)this + 0x10) = 0;
          iVar6 = *(int *)((int)this + 0x14) + 1;
          goto LAB_00494808;
        }
        if (*(int *)((int)this + 0x14) < 0) {
          *(int *)((int)this + 0x14) = *(int *)((int)this + 0xc) + -1;
        }
        else if (*(int *)((int)this + 0xc) <= *(int *)((int)this + 0x14)) {
          *(undefined4 *)((int)this + 0x14) = 0;
        }
        piVar3 = *(int **)(*(int *)((int)this + 4) +
                          (*(int *)((int)this + 0x14) * iVar5 + *(int *)((int)this + 0x10)) * 4);
        if ((((piVar3 != (int *)0x0) && (iVar5 = (**(code **)(*piVar3 + 0xa4))(), iVar5 != 0)) &&
            (piVar3[0x28] != 0)) && (((*(byte *)(piVar3 + 0xc) & 1) != 0 && (piVar3 != piVar2)))) {
          return;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)((int)this + 8) * *(int *)((int)this + 0xc));
    }
    *(int *)((int)this + 0x10) = iVar1;
    *(int *)((int)this + 0x14) = iVar4;
  }
  return;
}

