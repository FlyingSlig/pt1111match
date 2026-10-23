// FUNCTION: PORT1111 0x00494a70
// name: FUN_00494a70
// sig: undefined FUN_00494a70(void * this, int param_1)


void __thiscall FUN_00494a70(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)((int)this + 0x14);
  piVar2 = *(int **)(*(int *)((int)this + 4) +
                    (*(int *)((int)this + 8) * iVar1 + *(int *)((int)this + 0x10)) * 4);
  iVar5 = 0;
  if (0 < *(int *)((int)this + 0xc)) {
    do {
      if (param_1 == 0) {
        iVar4 = *(int *)((int)this + 0x14) + -1;
      }
      else {
        iVar4 = *(int *)((int)this + 0x14) + 1;
      }
      *(int *)((int)this + 0x14) = iVar4;
      if (iVar4 < 0) {
        iVar4 = (**(code **)(*(int *)this + 0xc))(0);
        if (iVar4 == 0) {
          *(undefined4 *)((int)this + 0x14) = 0;
        }
        else {
LAB_00494ae0:
          *(int *)((int)this + 0x14) = *(int *)((int)this + 0xc) + -1;
        }
      }
      else if (*(int *)((int)this + 0xc) <= iVar4) {
        iVar4 = (**(code **)(*(int *)this + 0xc))(1);
        if (iVar4 == 0) goto LAB_00494ae0;
        *(undefined4 *)((int)this + 0x14) = 0;
      }
      piVar3 = *(int **)(*(int *)((int)this + 4) +
                        (*(int *)((int)this + 8) * *(int *)((int)this + 0x14) +
                        *(int *)((int)this + 0x10)) * 4);
      if ((((piVar3 != (int *)0x0) && (iVar4 = (**(code **)(*piVar3 + 0xa4))(), iVar4 != 0)) &&
          (piVar3[0x28] != 0)) && (((*(byte *)(piVar3 + 0xc) & 1) != 0 && (piVar3 != piVar2)))) {
        return;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)((int)this + 0xc));
  }
  *(int *)((int)this + 0x14) = iVar1;
  return;
}

