// FUNCTION: PORT1111 0x00419240
// name: FUN_00419240
// sig: undefined FUN_00419240(int param_1)


void __fastcall FUN_00419240(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (*(char *)(param_1 + 100) == '\0') {
    iVar10 = 0x20;
    iVar4 = 0;
  }
  else {
    iVar10 = 0;
    iVar4 = -0x10;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  iVar2 = *(int *)(param_1 + 0x34);
  iVar7 = iVar2 * 0x20 + iVar1 * -0x20 + iVar10;
  *(int *)(param_1 + 0x1ac) = iVar7;
  iVar8 = (iVar2 + iVar1) * 0x10 + iVar4;
  *(int *)(param_1 + 0x1b0) = iVar8;
  iVar6 = *(int *)(param_1 + 0x40);
  iVar5 = iVar2 * 0x20 + iVar6 * -0x20 + iVar10;
  *(int *)(param_1 + 0x1c4) = iVar5;
  iVar3 = (iVar2 + iVar6) * 0x10 + iVar4;
  *(int *)(param_1 + 0x1c8) = iVar3;
  iVar2 = *(int *)(param_1 + 0x3c);
  iVar9 = (iVar6 + iVar2) * 0x10 + iVar4;
  *(int *)(param_1 + 0x1e0) = iVar9;
  iVar4 = iVar4 + (iVar2 + iVar1) * 0x10;
  iVar6 = iVar2 * 0x20 + iVar6 * -0x20 + iVar10;
  iVar10 = iVar10 + iVar2 * 0x20 + iVar1 * -0x20;
  *(int *)(param_1 + 0x1b4) = iVar7 + 0xc;
  iVar5 = iVar5 + 0xc;
  *(int *)(param_1 + 0x1bc) = iVar5;
  *(int *)(param_1 + 0x1cc) = iVar5;
  *(int *)(param_1 + 0x1d4) = iVar6 + 0xc;
  iVar1 = iVar10 + -0xc;
  *(int *)(param_1 + 0x1ec) = iVar1;
  *(int *)(param_1 + 0x1fc) = iVar1;
  iVar8 = iVar8 + 6;
  *(int *)(param_1 + 0x1a8) = iVar8;
  *(int *)(param_1 + 0x1b8) = iVar8;
  *(int *)(param_1 + 0x1dc) = iVar6;
  *(int *)(param_1 + 0x1a4) = iVar7 + -0xc;
  *(int *)(param_1 + 500) = iVar10;
  *(int *)(param_1 + 0x1f8) = iVar4;
  *(int *)(param_1 + 0x1e4) = iVar6 + -0xc;
  *(int *)(param_1 + 0x1c0) = iVar3 + -6;
  *(int *)(param_1 + 0x1d0) = iVar3 + 6;
  iVar9 = iVar9 + -6;
  *(int *)(param_1 + 0x1d8) = iVar9;
  *(int *)(param_1 + 0x1e8) = iVar9;
  *(int *)(param_1 + 0x1f0) = iVar4 + 6;
  *(int *)(param_1 + 0x200) = iVar4 + -6;
  return;
}

