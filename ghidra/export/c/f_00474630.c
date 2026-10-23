// FUNCTION: PORT1111 0x00474630
// name: FUN_00474630
// sig: undefined FUN_00474630(int * param_1)


void __cdecl FUN_00474630(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x2d);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x2d);
  }
  return;
}

