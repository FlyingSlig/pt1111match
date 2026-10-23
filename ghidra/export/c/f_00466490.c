// FUNCTION: PORT1111 0x00466490
// name: FUN_00466490
// sig: int FUN_00466490(void * this, uchar * param_1, uint param_2)


int __thiscall FUN_00466490(void *this,uchar *param_1,uint param_2)

{
  char cVar1;
  uchar uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  uchar *puVar6;
  
  pcVar3 = *(char **)this;
  iVar4 = -1;
  pcVar5 = pcVar3;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if ((pcVar5 != pcVar3 + 1) && (param_1 != (uchar *)0x0)) {
    puVar6 = param_1;
    do {
      uVar2 = *puVar6;
      puVar6 = puVar6 + 1;
    } while (uVar2 != '\0');
    if (puVar6 != param_1 + 1) {
      pcVar5 = pcVar3;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if (param_2 < (uint)((int)pcVar5 - (int)(pcVar3 + 1))) {
        puVar6 = __mbsstr((uchar *)(pcVar3 + param_2),param_1);
        iVar4 = (int)puVar6 - *(int *)this;
        if (iVar4 < 0) {
          iVar4 = -1;
        }
      }
    }
  }
  return iVar4;
}

