// FUNCTION: PORT1111 0x0048d810
// name: FUN_0048d810
// sig: undefined FUN_0048d810(uint * param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int * param_9)


void __cdecl
FUN_0048d810(uint *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int *param_9)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  int iStack_10;
  int iStack_c;
  
  iVar2 = (**(code **)(*param_9 + 0x18))();
  iVar5 = param_3 >> 2;
  if ((iVar5 != 0) && (0 < param_4)) {
    iStack_c = param_4;
    do {
      if (0 < iVar5) {
        pbVar8 = (byte *)(param_2 + 3);
        pbVar4 = (byte *)(param_7 + 2);
        puVar3 = param_1;
        iStack_10 = iVar5;
        do {
          uVar1 = *(uint *)(pbVar4 + -2);
          if (uVar1 != 0) {
            if (uVar1 == 0xffffffff) {
              *puVar3 = *(uint *)(iVar2 + (*(uint *)(pbVar8 + -3) & 0xff) * 4);
              puVar3[1] = *(uint *)(iVar2 + (uint)pbVar8[-2] * 4);
              puVar3[2] = *(uint *)(iVar2 + (uint)pbVar4[param_2 - param_7] * 4);
              puVar3[3] = *(uint *)(iVar2 + (uint)*pbVar8 * 4);
            }
            else {
              uVar6 = *puVar3 & 0xff00;
              uVar7 = *(uint *)(iVar2 + (*(uint *)(pbVar8 + -3) & 0xff) * 4);
              uVar9 = *puVar3 & 0xff00ff;
              *puVar3 = (((uVar7 & 0xff00ff) - uVar9) * (uVar1 & 0xff) >> 8) + uVar9 & 0xff00ff |
                        (((uVar7 & 0xff00) - uVar6) * (uVar1 & 0xff) >> 8) + uVar6 & 0xff00;
              uVar1 = *(uint *)(iVar2 + (uint)pbVar8[-2] * 4);
              uVar7 = puVar3[1] & 0xff00;
              uVar6 = puVar3[1] & 0xff00ff;
              puVar3[1] = (((uVar1 & 0xff00ff) - uVar6) * (uint)pbVar4[-1] >> 8) + uVar6 & 0xff00ff
                          | (((uVar1 & 0xff00) - uVar7) * (uint)pbVar4[-1] >> 8) + uVar7 & 0xff00;
              uVar1 = *(uint *)(iVar2 + (uint)pbVar4[param_2 - param_7] * 4);
              uVar7 = puVar3[2] & 0xff00;
              uVar6 = puVar3[2] & 0xff00ff;
              puVar3[2] = (((uVar1 & 0xff00ff) - uVar6) * (uint)*pbVar4 >> 8) + uVar6 & 0xff00ff |
                          (((uVar1 & 0xff00) - uVar7) * (uint)*pbVar4 >> 8) + uVar7 & 0xff00;
              uVar1 = *(uint *)(iVar2 + (uint)*pbVar8 * 4);
              uVar7 = puVar3[3] & 0xff00;
              uVar6 = puVar3[3] & 0xff00ff;
              puVar3[3] = (((uVar1 & 0xff00ff) - uVar6) * (uint)pbVar4[1] >> 8) + uVar6 & 0xff00ff |
                          (((uVar1 & 0xff00) - uVar7) * (uint)pbVar4[1] >> 8) + uVar7 & 0xff00;
            }
          }
          puVar3 = puVar3 + 4;
          pbVar8 = pbVar8 + 4;
          pbVar4 = pbVar4 + 4;
          iStack_10 = iStack_10 + -1;
        } while (iStack_10 != 0);
      }
      param_2 = param_2 + param_6;
      param_7 = param_7 + param_8;
      param_1 = (uint *)((int)param_1 + param_5);
      iStack_c = iStack_c + -1;
    } while (iStack_c != 0);
  }
  return;
}

