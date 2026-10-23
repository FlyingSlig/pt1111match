// FUNCTION: PORT1111 0x00466450
// name: FUN_00466450
// sig: int FUN_00466450(void * this, char param_1)


int __thiscall FUN_00466450(void *this,char param_1)

{
  uchar uVar1;
  int iVar2;
  uchar *puVar3;
  uchar *puVar4;
  
  puVar3 = *(uchar **)this;
  iVar2 = -1;
  puVar4 = puVar3;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
  } while (uVar1 != '\0');
  if (puVar4 != puVar3 + 1) {
    puVar3 = __mbsrchr(puVar3,(int)param_1);
    iVar2 = (int)puVar3 - *(int *)this;
    if (iVar2 < 0) {
      iVar2 = -1;
    }
  }
  return iVar2;
}

