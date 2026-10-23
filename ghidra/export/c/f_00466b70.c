// FUNCTION: PORT1111 0x00466b70
// name: FUN_00466b70
// sig: undefined4 * FUN_00466b70(undefined4 * param_1)


undefined4 * __fastcall FUN_00466b70(undefined4 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  
  pcVar1 = (char *)*param_1;
  pcVar2 = pcVar1;
  do {
    cVar4 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar4 != '\0');
  if (pcVar2 != pcVar1 + 1) {
    cVar4 = *pcVar1;
    iVar3 = 0;
    if (cVar4 != '\0') {
      do {
        if (cVar4 != ' ') break;
        cVar4 = pcVar1[iVar3 + 1];
        iVar3 = iVar3 + 1;
      } while (cVar4 != '\0');
      if (iVar3 != 0) {
        FUN_00466160(param_1,(uchar *)(pcVar1 + iVar3),0xffffffff);
      }
    }
  }
  return param_1;
}

