// FUNCTION: PORT1111 0x004572d0
// name: FUN_004572d0
// sig: undefined FUN_004572d0(int param_1)


void __fastcall FUN_004572d0(int param_1)

{
  char cVar1;
  int *piVar2;
  void **ppvVar3;
  int *piVar4;
  int *piVar5;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b8e7b;
  pvStack_c = ExceptionList;
  piVar5 = (int *)**(int **)(param_1 + 8);
  local_4 = 0;
  ExceptionList = &pvStack_c;
  ppvVar3 = &pvStack_c;
  local_10 = param_1;
  if (piVar5 != *(int **)(param_1 + 8)) {
    do {
      ExceptionList = ppvVar3;
      if ((undefined4 *)piVar5[4] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar5[4])(1);
      }
      if (*(char *)((int)piVar5 + 0x15) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar5 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar5 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x15);
          piVar4 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar5 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x15);
            piVar4 = (int *)piVar5[1];
            piVar2 = piVar5;
          }
        }
      }
      ppvVar3 = ExceptionList;
    } while (piVar5 != *(int **)(param_1 + 8));
  }
  FUN_00456630(*(void **)(*(int *)(param_1 + 8) + 4));
  *(int *)(*(int *)(param_1 + 8) + 4) = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 8);
  *(int *)(*(int *)(param_1 + 8) + 8) = *(int *)(param_1 + 8);
  local_4 = 0xffffffff;
  FUN_00456cf0((void *)(param_1 + 4),&local_10,(int *)**(int **)(param_1 + 8),*(int **)(param_1 + 8)
              );
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 8));
}

