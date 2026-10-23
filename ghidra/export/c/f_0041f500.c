// FUNCTION: PORT1111 0x0041f500
// name: FUN_0041f500
// sig: undefined FUN_0041f500(int param_1)


void __fastcall FUN_0041f500(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)**(int **)(param_1 + 0x80);
  if (piVar4 != *(int **)(param_1 + 0x80)) {
    do {
      FUN_00478a10(piVar4[3]);
      FUN_004788b0(piVar4[3]);
      if (*(char *)((int)piVar4 + 0x11) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x11);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x11);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x11);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != *(int **)(param_1 + 0x80));
  }
  FUN_0041f490(*(void **)(*(int *)(param_1 + 0x80) + 4));
  *(int *)(*(int *)(param_1 + 0x80) + 4) = *(int *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(int *)(*(int *)(param_1 + 0x80) + 8) = *(int *)(param_1 + 0x80);
  return;
}

