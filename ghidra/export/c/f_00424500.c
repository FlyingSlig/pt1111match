// FUNCTION: PORT1111 0x00424500
// name: FUN_00424500
// sig: undefined FUN_00424500(void * this, char * param_1)


void __thiscall FUN_00424500(void *this,char *param_1)

{
  char *pcVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar1 = param_1;
  if (*(char **)((int)this + 0xc) < param_1) {
    piVar2 = FUN_00498201(*(int **)((int)this + 0x18),(uint *)param_1);
    if (piVar2 == (int *)0x0) {
      param_1 = "Memory allocation failure!";
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&param_1,&DAT_004cd26c);
    }
    *(char **)((int)this + 0xc) = pcVar1;
    *(int **)((int)this + 0x18) = piVar2;
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(char **)((int)this + 0x10) = pcVar1;
  pcVar3 = (char *)FUN_0044f970(*(int *)((int)this + 0x1c),*(int *)((int)this + 0x18),(uint)pcVar1);
  if (pcVar3 != pcVar1) {
    param_1 = "Error reading file";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&param_1,&DAT_004cd26c);
  }
  return;
}

