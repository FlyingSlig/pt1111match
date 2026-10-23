// FUNCTION: PORT1111 0x0044d910
// name: FUN_0044d910
// sig: undefined FUN_0044d910(void * this, char * param_1)


void __thiscall FUN_0044d910(void *this,char *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_004e2686 != '\0') {
    piVar1 = (int *)FUN_0044d850(this,param_1);
    if (piVar1 != (int *)0x0) {
      iVar2 = 0;
      if (DAT_004dc2a0 != 100) {
        iVar2 = (DAT_004dc2a0 * 10000) / 100 + -10000;
      }
      (**(code **)(*piVar1 + 4))(0,iVar2,0,0);
    }
  }
  return;
}

