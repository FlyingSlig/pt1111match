// FUNCTION: PORT1111 0x00465d70
// name: FUN_00465d70
// sig: undefined4 FUN_00465d70(void * this, int * param_1)


undefined4 __thiscall FUN_00465d70(void *this,int *param_1)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  
  piVar3 = param_1;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  pcVar4 = *(char **)this;
  uVar6 = 0;
  pcVar1 = pcVar4 + 1;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  iVar5 = *param_1;
  param_1 = (int *)(pcVar4 + -(int)pcVar1);
  iVar5 = (**(code **)(iVar5 + 0xc))(&param_1,4);
  if (iVar5 != 0) {
    uVar6 = (**(code **)(*piVar3 + 0xc))(*(undefined4 *)this,unaff_ESI);
  }
  return uVar6;
}

