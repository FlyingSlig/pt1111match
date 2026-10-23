// FUNCTION: PORT1111 0x0044d570
// name: FUN_0044d570
// sig: undefined FUN_0044d570(int * param_1, int param_2, undefined4 param_3, int param_4, undefined4 param_5)


void FUN_0044d570(int *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if ((DAT_004e2686 != '\0') && ((param_4 != 0 || (iVar1 = FUN_00486830((int)param_1), iVar1 == 0)))
     ) {
    iVar1 = (param_2 - ((DAT_004e26d0 - DAT_004e26c8 >> 1) - DAT_004e2c30)) * 4;
    if (iVar1 < 0x2711) {
      if (iVar1 < -10000) {
        iVar1 = -10000;
      }
    }
    else {
      iVar1 = 10000;
    }
    uVar4 = FUN_00497d88();
    iVar2 = 0;
    if (500 < (int)uVar4) {
      uVar3 = 2;
      do {
        uVar3 = uVar3 >> 1;
      } while (uVar3 != 0);
      uVar4 = FUN_00497d88();
      iVar2 = (int)uVar4;
      if (iVar2 < -10000) {
        iVar2 = -10000;
      }
    }
    if (DAT_004dc2a0 != 100) {
      iVar2 = ((iVar2 + 10000) * DAT_004dc2a0) / 100 + -10000;
    }
    (**(code **)(*param_1 + 4))(iVar1,iVar2,0,param_5);
  }
  return;
}

