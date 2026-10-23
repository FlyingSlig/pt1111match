// FUNCTION: PORT1111 0x00432390
// name: FUN_00432390
// sig: undefined4 FUN_00432390(int param_1)


undefined4 __fastcall FUN_00432390(int param_1)

{
  int *piVar1;
  void *this;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)FUN_00414c30(DAT_004e240c);
  if (piVar3 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar3 + 0xac))();
    if (iVar4 != 0) {
      if (*(char *)(piVar3[0x14] + 0x107) == '\0') {
        iVar4 = piVar3[0x36];
      }
      else {
        iVar4 = piVar3[0x37];
      }
      this = *(void **)(param_1 + 0x40);
      if (iVar4 < 1) {
        FUN_00405ad0(this,-1,-1);
        FUN_004137d0(*(int *)(param_1 + 0x40));
      }
      else {
        bVar2 = false;
        iVar4 = ((*(int *)(*(int *)((int)this + 0x50) + 0x100) - *(int *)((int)this + 0xdc)) -
                *(int *)((int)this + 0xd8)) - *(int *)((int)this + 0xd4);
        if (*(char *)(piVar3[0x14] + 0x107) == '\0') {
          if ((0 < iVar4) && (0 < piVar3[0x36])) {
            bVar2 = true;
          }
          if (iVar4 < piVar3[0x36]) {
            piVar1 = (int *)(*(int *)(param_1 + 0x40) + 0xd8);
            *piVar1 = *piVar1 + iVar4;
            piVar3[0x36] = piVar3[0x36] - iVar4;
          }
          else {
            piVar1 = (int *)(*(int *)(param_1 + 0x40) + 0xd8);
            *piVar1 = *piVar1 + piVar3[0x36];
            piVar3[0x36] = 0;
          }
        }
        else {
          if ((0 < iVar4) && (0 < piVar3[0x37])) {
            bVar2 = true;
          }
          if (iVar4 < piVar3[0x37]) {
            piVar1 = (int *)(*(int *)(param_1 + 0x40) + 0xdc);
            *piVar1 = *piVar1 + iVar4;
            piVar3[0x37] = piVar3[0x37] - iVar4;
          }
          else {
            piVar1 = (int *)(*(int *)(param_1 + 0x40) + 0xdc);
            *piVar1 = *piVar1 + piVar3[0x37];
            piVar3[0x37] = 0;
          }
        }
        FUN_00454e60((int)DAT_004e2410);
        FUN_00455220(DAT_004e2410);
        if (bVar2) {
          FUN_00445030(*(void **)(*(int *)(param_1 + 0x40) + 0xb0),0x3ef);
          FUN_00445030(*(void **)(*(int *)(param_1 + 0x40) + 0xb0),0x3f6);
          FUN_00445030((void *)piVar3[0x2c],0x3ef);
          FUN_00445030((void *)piVar3[0x2c],0x3f6);
          if (((*(int **)(param_1 + 0x40))[0xf] & 0x400U) != 0) {
            (**(code **)(**(int **)(param_1 + 0x40) + 0xcc))(1);
            return 1;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}

