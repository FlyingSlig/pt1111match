// FUNCTION: PORT1111 0x00475230
// name: FUN_00475230
// sig: undefined FUN_00475230(void * this, byte param_1)


void __thiscall FUN_00475230(void *this,byte param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  DWORD DVar5;
  int *piVar6;
  int *piVar7;
  
  DAT_004dd978 = 20000 >> (param_1 & 0x1f);
  if (DAT_004dd978 < 100) {
    DAT_004dd978 = 100;
  }
  DVar5 = GetTickCount();
  piVar2 = *(int **)(*(int *)((int)this + 0x14) + 4);
  piVar7 = (int *)*piVar2;
  if (piVar7 != piVar2) {
    do {
      piVar2 = *(int **)(*(int *)(piVar7[4] + 0xc) + 4);
      piVar6 = (int *)*piVar2;
      if (piVar6 != piVar2) {
        do {
          iVar3 = piVar6[4];
          if ((*(byte *)(iVar3 + 0x2c) & 1) != 0) {
            *(DWORD *)(iVar3 + 0x48) = DVar5;
            if (0 < *(short *)(iVar3 + 0x2e)) {
              *(short *)(iVar3 + 0x50) = *(short *)(iVar3 + 0x2e);
            }
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            piVar2 = (int *)piVar6[2];
            if (*(char *)((int)piVar2 + 0x15) == '\0') {
              cVar1 = *(char *)(*piVar2 + 0x15);
              piVar6 = piVar2;
              piVar2 = (int *)*piVar2;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*piVar2 + 0x15);
                piVar6 = piVar2;
                piVar2 = (int *)*piVar2;
              }
            }
            else {
              cVar1 = *(char *)(piVar6[1] + 0x15);
              piVar4 = (int *)piVar6[1];
              piVar2 = piVar6;
              while ((piVar6 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar6[2]))) {
                cVar1 = *(char *)(piVar6[1] + 0x15);
                piVar4 = (int *)piVar6[1];
                piVar2 = piVar6;
              }
            }
          }
        } while (piVar6 != *(int **)(*(int *)(piVar7[4] + 0xc) + 4));
      }
      if (*(char *)((int)piVar7 + 0x15) == '\0') {
        piVar2 = (int *)piVar7[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar7 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar7 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar7[1] + 0x15);
          piVar6 = (int *)piVar7[1];
          piVar2 = piVar7;
          while ((piVar7 = piVar6, cVar1 == '\0' && (piVar2 == (int *)piVar7[2]))) {
            cVar1 = *(char *)(piVar7[1] + 0x15);
            piVar6 = (int *)piVar7[1];
            piVar2 = piVar7;
          }
        }
      }
    } while (piVar7 != *(int **)(*(int *)((int)this + 0x14) + 4));
  }
  return;
}

