// FUNCTION: PORT1111 0x0044d700
// name: FUN_0044d700
// sig: undefined FUN_0044d700(int param_1, int param_2, undefined4 param_3, int param_4, int param_5)


void FUN_0044d700(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((DAT_004e2686 != '\0') && (param_1 != 0)) {
    puVar1 = *(undefined4 **)(param_1 + 4);
    iVar4 = param_5 + 1;
    if ((puVar1 == (undefined4 *)0x0) || (*(int *)(param_1 + 8) - (int)puVar1 >> 2 != 1)) {
      if (puVar1 == (undefined4 *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(int *)(param_1 + 8) - (int)puVar1 >> 2;
      }
      uVar3 = _rand();
      FUN_0044d570(*(int **)(*(int *)(param_1 + 4) + (uVar3 % uVar5) * 4),param_2,param_3,param_4,
                   iVar4);
    }
    else if ((iVar4 < 1) || (iVar2 = FUN_00486890((void *)*puVar1,iVar4), iVar2 == 0)) {
      FUN_0044d570((int *)**(undefined4 **)(param_1 + 4),param_2,param_3,param_4,iVar4);
      return;
    }
  }
  return;
}

