// FUNCTION: PORT1111 0x00465e10
// name: FUN_00465e10
// sig: int FUN_00465e10(void * this, uint param_1)


int __thiscall FUN_00465e10(void *this,uint param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint3 uVar4;
  
  pcVar2 = *(char **)this;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = (uint3)((uint)((int)pcVar3 - (int)(pcVar2 + 1)) >> 8);
  if (param_1 < (uint)((int)pcVar3 - (int)(pcVar2 + 1))) {
    return CONCAT31(uVar4,pcVar2[param_1]);
  }
  return (uint)uVar4 << 8;
}

