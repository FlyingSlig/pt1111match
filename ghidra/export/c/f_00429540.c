// FUNCTION: PORT1111 0x00429540
// name: FUN_00429540
// sig: undefined FUN_00429540(int param_1)


void __fastcall FUN_00429540(int param_1)

{
  uint uVar1;
  uint uVar2;
  void *this;
  int iVar3;
  int iVar4;
  undefined4 local_4;
  
  this = *(void **)(param_1 + 0x118);
  local_4 = 0;
  if (*(int *)(param_1 + 0x110) != 0) {
    uVar1 = *(uint *)(param_1 + 0x10c);
    do {
      iVar3 = local_4 * -0x20;
      iVar4 = local_4 << 4;
      uVar2 = 0;
      if (uVar1 != 0) {
        do {
          FUN_00426740(this,(short)iVar3,(short)iVar4);
          uVar1 = *(uint *)(param_1 + 0x10c);
          iVar3 = iVar3 + 0x20;
          iVar4 = iVar4 + 0x10;
          this = (void *)((int)this + 0x6c);
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar1);
      }
      local_4 = local_4 + 1;
    } while (local_4 < *(uint *)(param_1 + 0x110));
  }
  return;
}

