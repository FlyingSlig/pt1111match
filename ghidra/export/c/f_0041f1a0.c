// FUNCTION: PORT1111 0x0041f1a0
// name: FUN_0041f1a0
// sig: undefined FUN_0041f1a0(int * param_1)


void __cdecl FUN_0041f1a0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x11);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x11);
  }
  return;
}

