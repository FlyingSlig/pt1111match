// FUNCTION: PORT1111 0x00465d10
// name: FUN_00465d10
// sig: undefined FUN_00465d10(int * param_1)


void __fastcall FUN_00465d10(int *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)*param_1;
  pcVar1 = pcVar3 + 1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  iVar4 = (int)pcVar3 - (int)pcVar1;
  if (iVar4 != 0) {
    while( true ) {
      iVar4 = iVar4 + -1;
      if (*(char *)(*param_1 + iVar4) != ' ') break;
      *(char *)(*param_1 + iVar4) = '\0';
    }
  }
  return;
}

