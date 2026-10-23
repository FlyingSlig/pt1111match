// FUNCTION: PORT1111 0x00451980
// name: FUN_00451980
// sig: undefined4 FUN_00451980(void * this, undefined4 * param_1)


undefined4 __thiscall FUN_00451980(void *this,undefined4 *param_1)

{
  char *pcVar1;
  int iVar2;
  
  if (*(int *)this != 0) {
    iVar2 = 2;
    pcVar1 = (char *)FUN_00465e00(param_1);
    iVar2 = FUN_0044f610(*(int *)this,pcVar1,iVar2);
    if (iVar2 == 0) {
      iVar2 = FUN_00450180(*(undefined4 **)this);
      if (iVar2 == 0) {
        return 1;
      }
      FUN_0044fbf0(*(int *)this);
    }
  }
  return 0;
}

