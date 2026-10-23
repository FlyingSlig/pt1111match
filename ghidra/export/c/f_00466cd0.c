// FUNCTION: PORT1111 0x00466cd0
// name: FUN_00466cd0
// sig: undefined4 * FUN_00466cd0(void * this, uchar * param_1, uchar * param_2, int param_3)


undefined4 * __thiscall FUN_00466cd0(void *this,uchar *param_1,uchar *param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  uchar uVar3;
  char *pcVar4;
  uint uVar5;
  uchar *puVar6;
  
  pcVar4 = *(char **)this;
  pcVar1 = pcVar4 + 1;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  if (pcVar4 == pcVar1) {
    return this;
  }
  if (param_1 == (uchar *)0x0) {
    return this;
  }
  uVar5 = FUN_00466490(this,param_1,0);
  if (uVar5 == 0xffffffff) {
    return this;
  }
  do {
    puVar6 = param_1;
    do {
      uVar3 = *puVar6;
      puVar6 = puVar6 + 1;
    } while (uVar3 != '\0');
    FUN_00466bc0(this,uVar5,(uint)(puVar6 + uVar5 + (-1 - (int)(param_1 + 1))));
    if (param_2 != (uchar *)0x0) {
      FUN_00465f10(this,uVar5,param_2);
    }
    uVar5 = FUN_00466490(this,param_1,0);
  } while ((param_3 != 0) && (uVar5 != 0xffffffff));
  return this;
}

