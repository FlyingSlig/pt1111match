// FUNCTION: PORT1111 0x00452210
// name: FUN_00452210
// sig: undefined4 FUN_00452210(int param_1)


undefined4 __fastcall FUN_00452210(int param_1)

{
  void *this;
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  void *local_8;
  
  this = (void *)FUN_00468ef0(DAT_004e2b14,3);
  if (this == (void *)0x0) {
    return 0;
  }
  local_8 = (void *)(param_1 + 0x1a0);
  *(void **)(param_1 + 0x6e8) = this;
  puVar3 = (uint *)(param_1 + 0x680);
  uVar5 = 1;
  piVar4 = (int *)(param_1 + 4);
  while( true ) {
    piVar1 = (int *)FUN_0047cf90(this,uVar5 + 1);
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    (**(code **)(*piVar1 + 0x30))(piVar4 + -1);
    FUN_004534f0(local_8,piVar4[1] - piVar4[-1],piVar4[2] - *piVar4,0,0);
    uVar2 = FUN_0047d0a0(this,uVar5);
    *puVar3 = uVar2;
    if (uVar2 == 0) break;
    FUN_0046ff40(*(int **)(uVar2 + 0xb0));
    local_8 = (void *)((int)local_8 + 0x30);
    uVar5 = uVar5 + 2;
    puVar3 = puVar3 + 1;
    piVar4 = piVar4 + 4;
    if (0x34 < (int)uVar5) {
      return 1;
    }
  }
  return 0;
}

