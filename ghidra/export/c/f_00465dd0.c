// FUNCTION: PORT1111 0x00465dd0
// name: FUN_00465dd0
// sig: undefined4 FUN_00465dd0(void * this, int * param_1)


undefined4 __thiscall FUN_00465dd0(void *this,int *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  pcVar2 = *(char **)this;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = (**(code **)(*param_1 + 0xc))(pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  return uVar4;
}

