// FUNCTION: PORT1111 0x00414af0
// name: FUN_00414af0
// sig: undefined4 FUN_00414af0(int param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00414af0(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  piVar6 = (int *)**(int **)(param_1 + 8);
  if (piVar6 != *(int **)(param_1 + 8)) {
    do {
      piVar2 = (int *)piVar6[4];
      if (*(char *)((int)piVar6 + 0x15) == '\0') {
        piVar3 = (int *)piVar6[2];
        if (*(char *)((int)piVar3 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x15);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x15);
            piVar6 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x15);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
          while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
            cVar1 = *(char *)(piVar6[1] + 0x15);
            piVar5 = (int *)piVar6[1];
            piVar3 = piVar6;
          }
        }
      }
      if (piVar2 != (int *)0x0) {
        piVar3 = *(int **)(param_1 + 0x40);
        if (piVar2 == piVar3) {
          if (piVar3 != (int *)0x0) {
            *(undefined4 *)(piVar3[0x18] + 0x30) = 0;
          }
          *(undefined4 *)(param_1 + 0x40) = 0;
        }
        (**(code **)(*piVar2 + 0x50))();
        (**(code **)(*piVar2 + 0x80))();
        (**(code **)*piVar2)(1);
      }
    } while (piVar6 != *(int **)(param_1 + 8));
  }
  FUN_004137f0(*(void **)(*(int *)(param_1 + 8) + 4));
  *(int *)(*(int *)(param_1 + 8) + 4) = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 8);
  *(int *)(*(int *)(param_1 + 8) + 8) = *(int *)(param_1 + 8);
  FUN_004137f0(*(void **)(DAT_004e21c0 + 4));
  *(int *)(DAT_004e21c0 + 4) = DAT_004e21c0;
  _DAT_004e21c4 = 0;
  *(int *)DAT_004e21c0 = DAT_004e21c0;
  *(int *)(DAT_004e21c0 + 8) = DAT_004e21c0;
  iVar4 = *(int *)(param_1 + 0x18);
  while (iVar4 != 0) {
    piVar6 = *(int **)(*(int *)(*(int *)(param_1 + 0x14) + 4) + 8);
    piVar2 = *(int **)(param_1 + 0x40);
    if (piVar6 == piVar2) {
      if (piVar2 != (int *)0x0) {
        *(undefined4 *)(piVar2[0x18] + 0x30) = 0;
      }
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    (**(code **)(*piVar6 + 0x50))();
    (**(code **)(*piVar6 + 0x80))();
    (**(code **)*piVar6)(1);
    iVar4 = *(int *)(param_1 + 0x18);
  }
  FUN_00419480(param_1 + 0x10);
  return 1;
}

