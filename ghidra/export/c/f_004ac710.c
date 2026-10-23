// FUNCTION: PORT1111 0x004ac710
// name: FUN_004ac710
// sig: undefined FUN_004ac710(int param_1, char * param_2)


void __cdecl FUN_004ac710(int param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*param_2 == '#') {
    iVar1 = 1;
    do {
      if (param_2[iVar1] == ' ') break;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xf);
  }
  if (*(code **)(param_1 + 0x44) != (code *)0x0) {
    (**(code **)(param_1 + 0x44))(param_1,param_2 + iVar1);
    return;
  }
  FUN_004ac880(param_1,param_2 + iVar1);
  return;
}

