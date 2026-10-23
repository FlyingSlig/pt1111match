// FUNCTION: PORT1111 0x00465d40
// name: FUN_00465d40
// sig: undefined FUN_00465d40(void * this, uint param_1)


void __thiscall FUN_00465d40(void *this,uint param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = *(char **)this;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (param_1 < (uint)((int)pcVar3 - (int)(pcVar2 + 1))) {
    pcVar2[param_1] = '\0';
  }
  return;
}

