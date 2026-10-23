// FUNCTION: PORT1111 0x004519d0
// name: FUN_004519d0
// sig: undefined4 FUN_004519d0(void * this, undefined4 * param_1, undefined4 * param_2)


undefined4 __thiscall FUN_004519d0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  
  if (*(int *)this != 0) {
    iVar2 = 2;
    pcVar1 = (char *)FUN_00465e00(param_1);
    iVar2 = FUN_0044f610(*(int *)this,pcVar1,iVar2);
    if (iVar2 == 0) {
      iVar2 = FUN_00465e00(param_2);
      iVar2 = FUN_004501a0(*(undefined4 **)this,iVar2);
      if (iVar2 == 0) {
        return 1;
      }
      FUN_0044fbf0(*(int *)this);
    }
  }
  return 0;
}

