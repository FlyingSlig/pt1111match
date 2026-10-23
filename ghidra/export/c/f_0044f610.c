// FUNCTION: PORT1111 0x0044f610
// name: FUN_0044f610
// sig: int FUN_0044f610(int param_1, char * param_2, int param_3)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl FUN_0044f610(int param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_158 [20];
  byte local_108 [260];
  undefined4 local_4;
  
  local_4 = DAT_004ddb0c;
  if (param_1 != 0) {
    pcVar5 = param_2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if ((uint)((int)pcVar5 - (int)(param_2 + 1)) < 0x100) {
      if (*(int *)(param_1 + 0x38) == 0) {
        return -100;
      }
      uVar2 = *(undefined4 *)(param_1 + 0x34);
      uVar3 = *(undefined4 *)(param_1 + 0x30);
      uVar4 = *(undefined4 *)(param_1 + 0x98);
      puVar8 = (undefined4 *)(param_1 + 0x48);
      puVar9 = local_158;
      for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      iVar6 = FUN_0044f550(param_1);
      while ((iVar6 == 0 &&
             (iVar6 = FUN_0044f180((int *)0x0,(int *)0x0,(int)local_108,0x100,0,0,0,0), iVar6 == 0))
            ) {
        iVar6 = FUN_0044efc0(param_2,local_108,(byte *)param_2,param_3);
        if (iVar6 == 0) {
          return 0;
        }
        iVar6 = FUN_0044f5a0(param_1);
      }
      *(undefined4 *)(param_1 + 0x30) = uVar3;
      puVar8 = local_158;
      puVar9 = (undefined4 *)(param_1 + 0x48);
      for (iVar7 = 0x14; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      *(undefined4 *)(param_1 + 0x34) = uVar2;
      *(undefined4 *)(param_1 + 0x98) = uVar4;
      return iVar6;
    }
  }
  return -0x66;
}

