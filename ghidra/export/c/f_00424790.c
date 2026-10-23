// FUNCTION: PORT1111 0x00424790
// name: FUN_00424790
// sig: undefined FUN_00424790(void * this, char * param_1)


void __thiscall FUN_00424790(void *this,char *param_1)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  
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
  iVar3 = (**(code **)(**(int **)((int)this + 0x1c) + 8))(*(undefined4 *)((int)this + 0x18),pcVar1);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&stack0xfffffffc,&DAT_004cd26c);
  }
  return;
}

