// FUNCTION: PORT1111 0x00466040
// name: FUN_00466040
// sig: undefined4 * FUN_00466040(void * this, char * param_1)


undefined4 * __thiscall FUN_00466040(void *this,char *param_1)

{
  char *_Size;
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *_Dest;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    return this;
  }
  pcVar2 = *(char **)this;
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (pcVar4 != pcVar2 + 1) {
    pcVar4 = pcVar2 + 1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    _Size = pcVar2 + (int)(pcVar3 + (-(int)(param_1 + 1) - (int)pcVar4)) + 1;
    _Dest = _malloc((size_t)_Size);
    pcVar6 = _Dest;
    for (uVar5 = (uint)_Size >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + 4;
    }
    for (uVar5 = (uint)_Size & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar6 = '\0';
      pcVar6 = pcVar6 + 1;
    }
    _sprintf(_Dest,"%s%s",*(undefined4 *)this,param_1);
    _Dest[(int)(pcVar2 + (int)(pcVar3 + (-(int)(param_1 + 1) - (int)pcVar4)))] = '\0';
    FUN_00465e40(this);
    *(char **)this = _Dest;
    return this;
  }
  pcVar2 = __strdup(param_1);
  *(char **)this = pcVar2;
  return this;
}

