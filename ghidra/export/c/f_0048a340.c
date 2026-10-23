// FUNCTION: PORT1111 0x0048a340
// name: FUN_0048a340
// sig: undefined FUN_0048a340(undefined4 * param_1, char * param_2, int param_3)


void __cdecl FUN_0048a340(undefined4 *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = FUN_0048a2e0(param_3);
  *param_1 = uVar3;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 700;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  *(undefined1 *)((int)param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  *(undefined1 *)((int)param_1 + 0x1a) = 0;
  *(undefined1 *)((int)param_1 + 0x1b) = 2;
  iVar2 = 0x1c - (int)param_2;
  do {
    cVar1 = *param_2;
    param_2[(int)param_1 + iVar2] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  return;
}

