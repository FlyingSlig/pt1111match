// FUNCTION: PORT1111 0x004356e0
// name: FUN_004356e0
// sig: undefined FUN_004356e0(undefined4 param_1)


void __fastcall FUN_004356e0(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined8 uVar9;
  int *piStack_10;
  int iStack_c;
  int iStack_8;
  undefined4 local_4;
  
  piVar7 = (int *)*DAT_004e21c0;
  local_4 = param_1;
  if (piVar7 != DAT_004e21c0) {
    do {
      piVar1 = (int *)piVar7[4];
      if ((((piVar1[0x1f] == 0) && (iVar5 = FUN_004040b0(piVar1[0x18]), iVar5 != 0)) &&
          (cVar4 = (**(code **)(**(int **)(piVar1[0x18] + 0x1c) + 0x18))(), cVar4 == '\0')) &&
         (iVar5 = FUN_00444a00(piVar1[0x2c]), iVar5 == 0)) {
        iStack_c = piVar1[2];
        iStack_8 = piVar1[1];
        piStack_10 = piVar7;
        FUN_00413730((int *)&piStack_10);
        piVar8 = piStack_10;
        if (piStack_10 != DAT_004e21c0) {
          do {
            iVar5 = piVar8[4];
            if (((*(int *)(iVar5 + 0x7c) == 0) &&
                (iVar6 = FUN_004040b0(*(int *)(iVar5 + 0x60)), iVar6 != 0)) &&
               ((cVar4 = (**(code **)(**(int **)(*(int *)(iVar5 + 0x60) + 0x1c) + 0x18))(),
                cVar4 == '\0' && (iVar6 = FUN_00444a00(*(int *)(iVar5 + 0xb0)), iVar6 == 0)))) {
              uVar9 = FUN_0043a170(iStack_c << 0x10,iStack_8 << 0x10,iStack_8 << 0x10,
                                   iStack_c << 0x10,*(int *)(iVar5 + 4) << 0x10,
                                   *(int *)(iVar5 + 8) << 0x10);
              if ((int)((int)uVar9 + 0x8000U & 0xffff0000) < 0x140000) {
                FUN_00435450(local_4,(int)((ulonglong)uVar9 >> 0x20),piVar1);
              }
            }
            if (*(char *)((int)piVar8 + 0x15) == '\0') {
              piVar2 = (int *)piVar8[2];
              if (*(char *)((int)piVar2 + 0x15) == '\0') {
                cVar4 = *(char *)(*piVar2 + 0x15);
                piVar8 = piVar2;
                piVar2 = (int *)*piVar2;
                while (cVar4 == '\0') {
                  cVar4 = *(char *)(*piVar2 + 0x15);
                  piVar8 = piVar2;
                  piVar2 = (int *)*piVar2;
                }
              }
              else {
                cVar4 = *(char *)(piVar8[1] + 0x15);
                piVar3 = (int *)piVar8[1];
                piVar2 = piVar8;
                while ((piVar8 = piVar3, cVar4 == '\0' && (piVar2 == (int *)piVar8[2]))) {
                  cVar4 = *(char *)(piVar8[1] + 0x15);
                  piVar3 = (int *)piVar8[1];
                  piVar2 = piVar8;
                }
              }
            }
          } while (piVar8 != DAT_004e21c0);
        }
      }
      if (*(char *)((int)piVar7 + 0x15) == '\0') {
        piVar1 = (int *)piVar7[2];
        if (*(char *)((int)piVar1 + 0x15) == '\0') {
          cVar4 = *(char *)(*piVar1 + 0x15);
          piVar7 = piVar1;
          piVar1 = (int *)*piVar1;
          while (cVar4 == '\0') {
            cVar4 = *(char *)(*piVar1 + 0x15);
            piVar7 = piVar1;
            piVar1 = (int *)*piVar1;
          }
        }
        else {
          cVar4 = *(char *)(piVar7[1] + 0x15);
          piVar8 = (int *)piVar7[1];
          piVar1 = piVar7;
          while ((piVar7 = piVar8, cVar4 == '\0' && (piVar1 == (int *)piVar7[2]))) {
            cVar4 = *(char *)(piVar7[1] + 0x15);
            piVar8 = (int *)piVar7[1];
            piVar1 = piVar7;
          }
        }
      }
    } while (piVar7 != DAT_004e21c0);
  }
  return;
}

