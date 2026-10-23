// FUNCTION: PORT1111 0x0042f550
// name: FUN_0042f550
// sig: undefined FUN_0042f550(void * this, char * param_1, undefined4 param_2, size_t param_3)


void __thiscall FUN_0042f550(void *this,char *param_1,undefined4 param_2,size_t param_3)

{
  size_t sVar1;
  void *pvVar2;
  
  sVar1 = param_3;
  *(char **)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  pvVar2 = _malloc(param_3);
  *(void **)((int)this + 0x10) = pvVar2;
  if (pvVar2 != (void *)0x0) {
    *(size_t *)((int)this + 8) = sVar1;
    return;
  }
  param_1 = "Memory allocation failure!";
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&param_1,&DAT_004cd26c);
}

