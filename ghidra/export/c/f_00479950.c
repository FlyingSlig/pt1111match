// FUNCTION: PORT1111 0x00479950
// name: FUN_00479950
// sig: undefined4 FUN_00479950(void * this, int param_1)


undefined4 __thiscall FUN_00479950(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  int *piStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 *puStack_20;
  undefined4 uStack_1c;
  undefined4 local_4;
  
  uStack_1c = 4;
  puStack_20 = &local_4;
  local_4 = 0xfa01;
  uStack_24 = 0x479973;
  FUN_0048a080(param_1);
  uStack_24 = 4;
  iStack_28 = (int)this + 0x28;
  iStack_2c = 0x479980;
  FUN_0048a080(param_1);
  iStack_2c = 4;
  piVar1 = (int *)((int)this + 0x2c);
  uStack_34 = 0x47998d;
  piStack_30 = piVar1;
  FUN_0048a080(param_1);
  uStack_34 = 4;
  iStack_38 = (int)this + 0x30;
  uStack_3c = 0x47999a;
  FUN_0048a080(param_1);
  iStack_40 = (int)this + 0x34;
  uStack_3c = 4;
  uStack_44 = 0x4799a7;
  FUN_0048a080(param_1);
  uStack_44 = 4;
  piStack_48 = (int *)((int)this + 0x38);
  uStack_4c = 0x4799b4;
  FUN_0048a080(param_1);
  iVar3 = 0;
  iStack_2c = 0;
  if (0 < *piVar1) {
    do {
      iStack_50 = *(int *)((int)this + 0x3c) + iVar3;
      uStack_4c = 2;
      iStack_54 = 0x4799d4;
      FUN_0048a080(param_1);
      iStack_54 = 2;
      iStack_58 = iVar3 + 2 + *(int *)((int)this + 0x3c);
      FUN_0048a080(param_1);
      FUN_0048a080(param_1);
      FUN_0048a080(param_1);
      iVar2 = *(int *)((int)this + 0x3c);
      iStack_58 = 0;
      if (*(int *)(iVar3 + 10 + iVar2) != 0) {
        iStack_58 = *(int *)(iVar3 + 10 + iVar2) - iVar2;
      }
      piStack_48 = &iStack_58;
      FUN_0048a080(param_1);
      iVar3 = iVar3 + 0xe;
    } while (iStack_54 + 1 < *piVar1);
  }
  iVar3 = 0;
  iStack_2c = 0;
  if (0 < *piVar1) {
    do {
      iVar2 = *(int *)((int)this + 0x3c);
      if (*(int *)(iVar3 + 10 + iVar2) != 0) {
        uStack_4c = *(undefined4 *)(iVar3 + 4 + iVar2);
        piStack_48 = *(int **)(iVar3 + iVar2 + 10);
        iStack_54 = 0x479a80;
        FUN_0048a080(param_1);
      }
      iStack_2c = iStack_2c + 1;
      iVar3 = iVar3 + 0xe;
    } while (iStack_2c < *piVar1);
  }
  if (*(int *)((int)this + 0x34) == 2) {
    iStack_50 = *(undefined4 *)((int)this + 0x14);
    uStack_4c = 0x200;
    iStack_54 = 0x479aa9;
    FUN_0048a080(param_1);
  }
  return 1;
}

