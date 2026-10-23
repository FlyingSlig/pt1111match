// FUNCTION: PORT1111 0x004129f0
// name: FUN_004129f0
// sig: undefined FUN_004129f0(void * this, char * param_1)


void __thiscall FUN_004129f0(void *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 1) {
    (**(code **)(*(int *)this + 0x54))(param_1);
    return;
  }
  if (iVar1 != 2) {
    if (iVar1 != 3) {
      param_1 = "Unknown file format";
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&param_1,&DAT_004cd26c);
    }
    (**(code **)(*(int *)this + 0x54))(param_1);
    (**(code **)(*(int *)this + 0x58))(pcVar2);
    (**(code **)(*(int *)this + 0x5c))(pcVar2);
    return;
  }
  (**(code **)(*(int *)this + 0x54))(param_1);
  (**(code **)(*(int *)this + 0x58))(pcVar2);
  return;
}

