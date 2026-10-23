// FUNCTION: PORT1111 0x00412920
// name: FUN_00412920
// sig: undefined FUN_00412920(void * this, char * param_1)


void __thiscall FUN_00412920(void *this,char *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = param_1;
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 1) {
    (**(code **)(*(int *)this + 0x8c))();
    (**(code **)(*(int *)this + 0x40))(pcVar1);
    iVar3 = *(int *)this;
  }
  else {
    if (iVar3 == 2) {
      (**(code **)(*(int *)this + 0x40))(param_1);
      iVar2 = (**(code **)(*(int *)this + 0x44))(pcVar1);
      iVar3 = *(int *)this;
      if (iVar2 == 0) {
        (**(code **)(iVar3 + 0x74))();
        (**(code **)(*(int *)this + 0x78))();
        (**(code **)(*(int *)this + 0x7c))();
        return;
      }
      goto LAB_004129d7;
    }
    if (iVar3 != 3) {
      param_1 = "Unknown file format";
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&param_1,&DAT_004cd26c);
    }
    (**(code **)(*(int *)this + 0x40))(param_1);
    iVar2 = (**(code **)(*(int *)this + 0x44))(pcVar1);
    iVar3 = *(int *)this;
    if (iVar2 != 0) {
      iVar3 = (**(code **)(iVar3 + 0x48))(pcVar1);
      if (iVar3 != 0) {
        (**(code **)(*(int *)this + 0x7c))();
        return;
      }
      (**(code **)(*(int *)this + 0x78))();
      (**(code **)(*(int *)this + 0x7c))();
      return;
    }
  }
  (**(code **)(iVar3 + 0x74))();
  iVar3 = *(int *)this;
LAB_004129d7:
  (**(code **)(iVar3 + 0x78))();
  (**(code **)(*(int *)this + 0x7c))();
  return;
}

