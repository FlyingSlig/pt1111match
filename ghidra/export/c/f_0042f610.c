// FUNCTION: PORT1111 0x0042f610
// name: FUN_0042f610
// sig: undefined FUN_0042f610(void * this, char * param_1)


void __thiscall FUN_0042f610(void *this,char *param_1)

{
  char *pcVar1;
  
  pcVar1 = param_1;
  param_1 = (char *)FUN_00465d00((undefined4 *)param_1);
  FUN_0042f440(this,&param_1,(char *)0x4);
  FUN_0042f440(this,*(undefined4 **)pcVar1,param_1);
  return;
}

