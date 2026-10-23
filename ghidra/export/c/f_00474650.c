// FUNCTION: PORT1111 0x00474650
// name: FUN_00474650
// sig: undefined FUN_00474650(int * param_1)


void __fastcall FUN_00474650(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x2d) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x2d) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x2d);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x2d);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x2d) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x2d) == '\0');
    if (*(char *)((int)piVar4 + 0x2d) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}

