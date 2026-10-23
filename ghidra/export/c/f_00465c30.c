// FUNCTION: PORT1111 0x00465c30
// name: FUN_00465c30
// sig: undefined FUN_00465c30(undefined4 * param_1)


void __fastcall FUN_00465c30(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *local_4;
  
  *param_1 = &PTR_LAB_004bc3ec;
  piVar4 = *(int **)param_1[4];
  local_4 = param_1;
  if (piVar4 != (int *)param_1[4]) {
    do {
      DestroyCursor((HCURSOR)piVar4[4]);
      if (*(char *)((int)piVar4 + 0x15) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x15);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x15);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != (int *)param_1[4]);
  }
  *param_1 = &PTR_FUN_004bc3dc;
  FUN_00401bd0(param_1 + 3,&local_4,*(int **)param_1[4],(int *)param_1[4]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[4]);
}

