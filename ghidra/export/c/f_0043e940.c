// FUNCTION: PORT1111 0x0043e940
// name: FUN_0043e940
// sig: undefined4 FUN_0043e940(int * param_1, int param_2)


undefined4 __cdecl FUN_0043e940(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int aiStack_8 [2];
  
  iVar3 = param_2;
  if (*(int *)(*(int *)(param_2 + 0x50) + 0x2a0) != 0xc) {
    return 0;
  }
  iVar4 = 0;
  iVar5 = 0;
  param_2 = 0;
  iVar1 = (**(code **)(*param_1 + 0x88))();
  aiStack_8[0] = 0;
  aiStack_8[1] = 0xffffffff;
  iVar2 = FUN_004267d0(*(void **)(iVar3 + 0x40),aiStack_8);
  if (iVar2 != 0) {
    iVar4 = *(int *)(*(int *)(iVar1 + 0x1fc) + *(int *)(iVar2 + 0x50) * 4);
  }
  aiStack_8[0] = 1;
  aiStack_8[1] = 0;
  iVar2 = FUN_004267d0(*(void **)(iVar3 + 0x40),aiStack_8);
  if (iVar2 != 0) {
    iVar5 = *(int *)(*(int *)(iVar1 + 0x1fc) + *(int *)(iVar2 + 0x50) * 4);
  }
  aiStack_8[0] = 0;
  aiStack_8[1] = 1;
  iVar2 = FUN_004267d0(*(void **)(iVar3 + 0x40),aiStack_8);
  if (iVar2 != 0) {
    param_2 = *(int *)(*(int *)(iVar1 + 0x1fc) + *(int *)(iVar2 + 0x50) * 4);
  }
  aiStack_8[0] = -1;
  aiStack_8[1] = 0;
  iVar3 = FUN_004267d0(*(void **)(iVar3 + 0x40),aiStack_8);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(iVar1 + 0x1fc) + *(int *)(iVar3 + 0x50) * 4);
  }
  if ((((iVar4 != iVar5) && (iVar4 != param_2)) && (iVar4 != iVar3)) &&
     (((iVar5 != param_2 && (iVar5 != iVar3)) && (param_2 != iVar3)))) {
    return 0;
  }
  return 1;
}

