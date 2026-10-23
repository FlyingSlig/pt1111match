// FUNCTION: PORT1111 0x0048e780
// name: FUN_0048e780
// sig: int FUN_0048e780(int * param_1, int param_2)


int FUN_0048e780(int *param_1,int param_2)

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
  
  iVar1 = param_1[3];
  iVar2 = param_1[1];
  iVar10 = (iVar1 + iVar2 * 0x22) * 0x20;
  iVar3 = param_1[5];
  iVar4 = param_1[4];
  iVar5 = param_1[2];
  iVar6 = *param_1;
  iVar8 = (iVar6 * 0x22 + iVar1) * 0x20;
  iVar7 = (iVar6 * 0x22 + iVar5) * 0x20;
  iVar9 = (iVar5 + iVar2 * 0x22) * 0x20;
  return ((((*(int *)(param_2 + (iVar6 + iVar8 + iVar4 + iVar1) * 4) -
            *(int *)(param_2 + (iVar8 + iVar6 + iVar3 + iVar1) * 4)) -
           *(int *)(param_2 + (iVar9 + iVar5 + iVar3 + iVar2) * 4)) -
          *(int *)(param_2 + (iVar4 + iVar10 + iVar1 + iVar2) * 4)) -
         *(int *)(param_2 + (iVar6 + iVar7 + iVar5 + iVar4) * 4)) +
         *(int *)(param_2 + (iVar9 + iVar5 + iVar4 + iVar2) * 4) +
         *(int *)(param_2 + (iVar10 + iVar3 + iVar1 + iVar2) * 4) +
         *(int *)(param_2 + (iVar7 + iVar6 + iVar5 + iVar3) * 4);
}

