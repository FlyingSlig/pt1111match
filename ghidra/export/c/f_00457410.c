// FUNCTION: PORT1111 0x00457410
// name: FUN_00457410
// sig: undefined FUN_00457410(int * param_1)


void __fastcall FUN_00457410(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8e9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  puVar3 = FUN_00412e80();
  piVar6 = (int *)**(int **)(puVar3 + 4);
  puVar3 = FUN_00412e80();
  if (piVar6 != *(int **)(puVar3 + 4)) {
    do {
      iVar4 = piVar6[4];
      if (((*(int *)(iVar4 + 0x26c) == *param_1) && (*(int *)(iVar4 + 0x290) != 0)) &&
         (*(int *)(iVar4 + 0x294) - *(int *)(iVar4 + 0x290) >> 2 != 0)) {
        local_10 = operator_new(0x18);
        local_4 = 0;
        if (local_10 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_00458070(local_10,*(undefined4 *)(piVar6[4] + 0x14));
        }
        local_10 = *(int **)(piVar6[4] + 0x14);
        local_4 = 0xffffffff;
        piVar5 = FUN_00457220(param_1 + 1,(int *)&local_10);
        *piVar5 = iVar4;
      }
      if (*(char *)((int)piVar6 + 0x15) == '\0') {
        piVar5 = (int *)piVar6[2];
        if (*(char *)((int)piVar5 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar5 + 0x15);
          piVar6 = piVar5;
          piVar5 = (int *)*piVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar5 + 0x15);
            piVar6 = piVar5;
            piVar5 = (int *)*piVar5;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x15);
          piVar2 = (int *)piVar6[1];
          piVar5 = piVar6;
          while ((piVar6 = piVar2, cVar1 == '\0' && (piVar5 == (int *)piVar6[2]))) {
            cVar1 = *(char *)(piVar6[1] + 0x15);
            piVar2 = (int *)piVar6[1];
            piVar5 = piVar6;
          }
        }
      }
      puVar3 = FUN_00412e80();
    } while (piVar6 != *(int **)(puVar3 + 4));
  }
  ExceptionList = local_c;
  return;
}

