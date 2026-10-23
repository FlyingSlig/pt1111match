// FUNCTION: PORT1111 0x0048e870
// name: FUN_0048e870
// sig: int FUN_0048e870(int * param_1, char param_2, int param_3)


int FUN_0048e870(int *param_1,char param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == '\0') {
    iVar1 = param_1[3];
    iVar2 = param_1[4];
    iVar3 = param_1[2];
    iVar4 = param_1[1];
    iVar5 = *param_1;
    return ((*(int *)(param_3 + ((iVar5 * 0x22 + iVar1) * 0x20 + iVar2 + iVar1 + iVar5) * 4) -
            *(int *)(param_3 + (iVar3 * 0x21 + iVar5 * 0x440 + iVar2) * 4 + iVar5 * 4)) -
           *(int *)(param_3 + ((iVar1 + iVar4 * 0x22) * 0x20 + iVar2 + iVar1 + iVar4) * 4)) +
           *(int *)(param_3 + (iVar4 * 0x440 + iVar3 * 0x20 + iVar3 + iVar2) * 4 + iVar4 * 4);
  }
  if (param_2 != '\x01') {
    if (param_2 != '\x02') {
      return 0;
    }
    iVar1 = *param_1;
    iVar2 = param_1[3];
    iVar3 = param_1[2];
    iVar4 = (iVar1 * 0x22 + iVar3) * 0x20;
    iVar5 = (iVar2 + iVar1 * 0x22) * 0x20;
    return ((*(int *)(param_3 + (iVar3 + iVar4 + param_1[5] + iVar1) * 4) -
            *(int *)(param_3 + (iVar4 + iVar3 + param_1[4] + iVar1) * 4)) -
           *(int *)(param_3 + (param_1[5] + iVar5 + iVar2 + iVar1) * 4)) +
           *(int *)(param_3 + (param_1[4] + iVar5 + iVar2 + iVar1) * 4);
  }
  iVar1 = param_1[1];
  iVar2 = param_1[2];
  iVar3 = *param_1;
  iVar4 = (iVar1 * 0x22 + iVar2) * 0x20;
  iVar5 = (iVar3 * 0x22 + iVar2) * 0x20;
  return ((*(int *)(param_3 + (param_1[4] + iVar4 + iVar2 + iVar1) * 4) -
          *(int *)(param_3 + (iVar4 + param_1[5] + iVar2 + iVar1) * 4)) -
         *(int *)(param_3 + (param_1[4] + iVar5 + iVar2 + iVar3) * 4)) +
         *(int *)(param_3 + (iVar5 + param_1[5] + iVar2 + iVar3) * 4);
}

