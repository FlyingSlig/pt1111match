// FUNCTION: PORT1111 0x0048e9d0
// name: FUN_0048e9d0
// sig: int FUN_0048e9d0(int * param_1, char param_2, int param_3, int param_4)


int FUN_0048e9d0(int *param_1,char param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == '\0') {
    iVar1 = param_1[1];
    iVar2 = param_1[3];
    iVar3 = param_1[2];
    iVar4 = *param_1;
    return ((*(int *)(param_4 + (iVar1 * 0x440 + iVar2 * 0x20 + iVar2 + iVar1) * 4 + param_3 * 4) -
            *(int *)(param_4 + (iVar3 * 0x21 + iVar1 * 0x440 + iVar1) * 4 + param_3 * 4)) -
           *(int *)(param_4 + (iVar2 * 0x21 + iVar4 * 0x440 + iVar4) * 4 + param_3 * 4)) +
           *(int *)(param_4 + (iVar4 * 0x440 + iVar3 * 0x20 + iVar3 + iVar4) * 4 + param_3 * 4);
  }
  if (param_2 != '\x01') {
    if (param_2 != '\x02') {
      return 0;
    }
    iVar1 = param_1[3];
    iVar2 = param_1[2];
    iVar3 = (iVar1 + param_3 * 0x22) * 0x20;
    iVar4 = (param_3 * 0x22 + iVar2) * 0x20;
    return ((*(int *)(param_4 + (param_1[5] + iVar3 + iVar1 + param_3) * 4) -
            *(int *)(param_4 + (iVar2 + iVar4 + param_1[5] + param_3) * 4)) -
           *(int *)(param_4 + (iVar3 + param_1[4] + iVar1 + param_3) * 4)) +
           *(int *)(param_4 + (iVar4 + iVar2 + param_1[4] + param_3) * 4);
  }
  iVar1 = param_1[1];
  iVar2 = *param_1;
  iVar3 = (iVar2 * 0x22 + param_3) * 0x20;
  iVar4 = (iVar1 * 0x22 + param_3) * 0x20;
  return ((*(int *)(param_4 + (iVar3 + iVar2 + param_1[4] + param_3) * 4) -
          *(int *)(param_4 + (iVar3 + iVar2 + param_1[5] + param_3) * 4)) -
         *(int *)(param_4 + (param_1[4] + iVar4 + iVar1 + param_3) * 4)) +
         *(int *)(param_4 + (param_1[5] + iVar4 + iVar1 + param_3) * 4);
}

