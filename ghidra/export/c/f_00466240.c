// FUNCTION: PORT1111 0x00466240
// name: FUN_00466240
// sig: undefined4 FUN_00466240(void * this, uchar * param_1)


undefined4 __thiscall FUN_00466240(void *this,uchar *param_1)

{
  uchar uVar1;
  char cVar2;
  uchar *puVar3;
  uchar *puVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  puVar3 = *(uchar **)this;
  puVar4 = puVar3;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
  } while (uVar1 != '\0');
  if ((puVar4 != puVar3 + 1) && (param_1 != (uchar *)0x0)) {
    puVar4 = param_1;
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
    } while (uVar1 != '\0');
    if ((puVar4 != param_1 + 1) && (iVar5 = __mbscmp(puVar3,param_1), iVar5 == 0)) {
      return 1;
    }
  }
  pcVar7 = *(char **)this;
  pcVar6 = pcVar7;
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  if ((pcVar6 == pcVar7 + 1) && (param_1 == (uchar *)0x0)) {
    return 1;
  }
  pcVar6 = pcVar7 + 1;
  do {
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  if ((pcVar7 == pcVar6) && (param_1 != (uchar *)0x0)) {
    puVar3 = param_1 + 1;
    do {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
    } while (uVar1 != '\0');
    if (param_1 == puVar3) {
      return 1;
    }
  }
  return 0;
}

