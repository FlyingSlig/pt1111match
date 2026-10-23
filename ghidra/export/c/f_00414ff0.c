// FUNCTION: PORT1111 0x00414ff0
// name: FUN_00414ff0
// sig: undefined FUN_00414ff0(int param_1)


void __fastcall FUN_00414ff0(int param_1)

{
  char cVar1;
  int *piVar2;
  void **ppvVar3;
  int *piVar4;
  void *this;
  undefined4 *puVar5;
  int *piVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b635b;
  local_c = ExceptionList;
  piVar6 = (int *)**(int **)(param_1 + 8);
  ExceptionList = &local_c;
  ppvVar3 = &local_c;
  if (piVar6 != *(int **)(param_1 + 8)) {
    do {
      ExceptionList = ppvVar3;
      if (*(int *)(*(int *)(piVar6[4] + 0xb0) + 0x14) != 0) {
        *(undefined4 *)(piVar6[4] + 0xb4) = 1;
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
      ppvVar3 = ExceptionList;
    } while (piVar6 != *(int **)(param_1 + 8));
  }
  this = operator_new(0x34);
  local_4 = 0;
  if (this == (void *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)FUN_00434a30(this,4);
  }
  local_4 = 0xffffffff;
  if (DAT_004e2424 != (void *)0x0) {
    FUN_00434500(DAT_004e2424,puVar5,20000);
    ExceptionList = local_c;
    return;
  }
  if (puVar5 != (undefined4 *)0x0) {
    (**(code **)*puVar5)(1,this);
  }
  ExceptionList = local_c;
  return;
}

