// FUNCTION: PORT1111 0x00432150
// name: FUN_00432150
// sig: undefined4 FUN_00432150(int param_1)


undefined4 __fastcall FUN_00432150(int param_1)

{
  int *this;
  int iVar1;
  uint uVar2;
  void *this_00;
  uint uVar3;
  
  this = (int *)FUN_00414c30(DAT_004e240c);
  if (this != (int *)0x0) {
    if ((*(int *)(param_1 + 0xb8) == 0) && (this[0x1f] == 0)) {
      (**(code **)(**(int **)(this[0x18] + 0x1c) + 0x10))(this,*(int *)(param_1 + 0xd4) == 0);
      FUN_0045d150((void *)(param_1 + 0x34),(int)this);
      this[0x33] = 1;
      if (*(int *)(param_1 + 0x30) == 0) {
        this[0x2f] = 1;
      }
      if (*(int *)(param_1 + 0x20) != -1) {
        iVar1 = FUN_00414c30(DAT_004e240c);
        if (iVar1 != 0) {
          this[0x24] = *(int *)(iVar1 + 0x40);
          FUN_0045d6b0(param_1 + 0x34);
          return 1;
        }
      }
    }
    else {
      if (*(int *)(param_1 + 0xd4) != 0) {
        FUN_00405ad0(this,-1,-1);
      }
      FUN_004137d0((int)this);
      if ((*(int *)(param_1 + 0xb4) != 0) && (*(int *)(param_1 + 0xb8) == 1)) {
        iVar1 = FUN_00429b40(DAT_004e2404,*(int *)(param_1 + 0x40),*(int *)(param_1 + 0x44));
        if (iVar1 != 0) {
          uVar3 = (uint)*(short *)(iVar1 + 0x4c);
          uVar2 = (uint)*(short *)(iVar1 + 0x4e);
          this_00 = (void *)(**(code **)(*this + 0x88))();
          FUN_00423b10(this_00,uVar2,uVar3);
        }
      }
    }
  }
  FUN_0045d6b0(param_1 + 0x34);
  return 1;
}

