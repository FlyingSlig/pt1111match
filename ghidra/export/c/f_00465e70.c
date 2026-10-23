// FUNCTION: PORT1111 0x00465e70
// name: FUN_00465e70
// sig: undefined FUN_00465e70(void * this, char param_1)


void __thiscall FUN_00465e70(void *this,char param_1)

{
  uchar uVar1;
  uchar *puVar2;
  char *pcVar3;
  int iVar4;
  
  puVar2 = __mbsrchr(*(uchar **)this,(int)param_1);
  if (puVar2 != (uchar *)0x0) {
    pcVar3 = __strdup(*(char **)this);
    puVar2 = puVar2 + 1;
    iVar4 = (int)pcVar3 - (int)puVar2;
    do {
      uVar1 = *puVar2;
      puVar2[iVar4] = uVar1;
      puVar2 = puVar2 + 1;
    } while (uVar1 != '\0');
                    /* WARNING: Subroutine does not return */
    _free(*(void **)this);
  }
  return;
}

