// FUNCTION: PORT1111 0x0044c400
// name: FUN_0044c400
// sig: undefined FUN_0044c400(int param_1)


void __fastcall FUN_0044c400(int param_1)

{
  char cVar1;
  void *_Memory;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_0044bb30(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  piVar3 = (int *)**(int **)(param_1 + 4);
  if (piVar3 != *(int **)(param_1 + 4)) {
    do {
      piVar4 = *(int **)(piVar3[4] + 4);
      if (piVar4 != *(int **)(piVar3[4] + 8)) {
        do {
          FUN_0044bc90((void *)*piVar4,0);
          if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)*piVar4)(1);
          }
          piVar4 = piVar4 + 1;
        } while (piVar4 != *(int **)(piVar3[4] + 8));
      }
      _Memory = (void *)piVar3[4];
      if (_Memory != (void *)0x0) {
        if (*(void **)((int)_Memory + 4) == (void *)0x0) {
          *(undefined4 *)((int)_Memory + 4) = 0;
          *(undefined4 *)((int)_Memory + 8) = 0;
          *(undefined4 *)((int)_Memory + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)_Memory + 4));
      }
      if (*(char *)((int)piVar3 + 0x15) == '\0') {
        piVar4 = (int *)piVar3[2];
        if (*(char *)((int)piVar4 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar4 + 0x15);
          piVar3 = piVar4;
          piVar4 = (int *)*piVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar4 + 0x15);
            piVar3 = piVar4;
            piVar4 = (int *)*piVar4;
          }
        }
        else {
          cVar1 = *(char *)(piVar3[1] + 0x15);
          piVar2 = (int *)piVar3[1];
          piVar4 = piVar3;
          while ((piVar3 = piVar2, cVar1 == '\0' && (piVar4 == (int *)piVar3[2]))) {
            cVar1 = *(char *)(piVar3[1] + 0x15);
            piVar2 = (int *)piVar3[1];
            piVar4 = piVar3;
          }
        }
      }
    } while (piVar3 != *(int **)(param_1 + 4));
  }
  FUN_0044c180(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  FUN_0044bb20(param_1 + 0x10);
  return;
}

