// FUNCTION: PORT1111 0x00462b90
// name: FUN_00462b90
// sig: undefined FUN_00462b90(int * param_1, int * param_2)


void __cdecl FUN_00462b90(int *param_1,int *param_2)

{
  byte bVar1;
  short *psVar2;
  int *piVar3;
  byte bVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_8;
  int local_4;
  
  piVar3 = param_1;
  psVar2 = (short *)*param_2;
  iVar8 = -1;
  iVar7 = *(int *)param_2[2];
  local_4 = ((int *)param_2[2])[3];
  iVar5 = 0;
  local_8 = -1;
  param_1[0x512] = 0;
  param_1[0x513] = 0x23d;
  psVar6 = psVar2;
  if (0 < local_4) {
    do {
      if (*psVar6 == 0) {
        psVar6[1] = 0;
      }
      else {
        iVar8 = param_1[0x512];
        param_1[0x512] = iVar8 + 1;
        param_1[iVar8 + 0x2d6] = iVar5;
        *(undefined1 *)(iVar5 + 0x1450 + (int)param_1) = 0;
        iVar8 = iVar5;
        local_8 = iVar5;
      }
      iVar5 = iVar5 + 1;
      psVar6 = psVar6 + 2;
    } while (iVar5 < local_4);
  }
  iVar5 = param_1[0x512];
  while (iVar5 < 2) {
    if (iVar8 < 2) {
      iVar9 = iVar8 + 1;
      iVar8 = iVar9;
    }
    else {
      iVar9 = 0;
    }
    param_1[0x512] = iVar5 + 1;
    param_1[iVar5 + 0x2d6] = iVar9;
    psVar2[iVar9 * 2] = 1;
    *(undefined1 *)((int)param_1 + iVar9 + 0x1450) = 0;
    param_1[0x5a8] = param_1[0x5a8] + -1;
    if (iVar7 != 0) {
      param_1[0x5a9] = param_1[0x5a9] - (uint)*(ushort *)(iVar7 + 2 + iVar9 * 4);
    }
    local_8 = iVar8;
    iVar5 = param_1[0x512];
  }
  param_2[1] = iVar8;
  for (iVar7 = param_1[0x512] / 2; 0 < iVar7; iVar7 = iVar7 + -1) {
    FUN_00462dd0((int)param_1,(int)psVar2,iVar7);
  }
  param_1 = (int *)(psVar2 + local_4 * 2);
  do {
    iVar7 = piVar3[0x2d6];
    piVar3[0x2d6] = piVar3[piVar3[0x512] + 0x2d5];
    piVar3[0x512] = piVar3[0x512] + -1;
    FUN_00462dd0((int)piVar3,(int)psVar2,1);
    iVar8 = piVar3[0x513];
    iVar5 = piVar3[0x2d6];
    piVar3[0x513] = iVar8 + -1;
    piVar3[iVar8 + 0x2d4] = iVar7;
    iVar8 = piVar3[0x513];
    piVar3[0x513] = iVar8 + -1;
    piVar3[iVar8 + 0x2d4] = iVar5;
    *(short *)param_1 = psVar2[iVar5 * 2] + psVar2[iVar7 * 2];
    bVar1 = *(byte *)((int)piVar3 + iVar7 + 0x1450);
    bVar4 = *(byte *)((int)piVar3 + iVar5 + 0x1450);
    if (bVar4 <= bVar1) {
      bVar4 = bVar1;
    }
    *(byte *)((int)piVar3 + local_4 + 0x1450) = bVar4 + 1;
    psVar2[iVar5 * 2 + 1] = (short)local_4;
    psVar2[iVar7 * 2 + 1] = (short)local_4;
    piVar3[0x2d6] = local_4;
    local_4 = local_4 + 1;
    param_1 = param_1 + 1;
    FUN_00462dd0((int)piVar3,(int)psVar2,1);
  } while (1 < piVar3[0x512]);
  iVar7 = piVar3[0x513];
  piVar3[0x513] = iVar7 + -1;
  piVar3[iVar7 + 0x2d4] = piVar3[0x2d6];
  FUN_00462eb0(piVar3,param_2);
  FUN_004630e0(psVar2,local_8,(int)(piVar3 + 0x2cd));
  return;
}

