// FUNCTION: PORT1111 0x00413030
// name: FUN_00413030
// sig: undefined FUN_00413030(int * param_1)


void __cdecl FUN_00413030(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return;
}

