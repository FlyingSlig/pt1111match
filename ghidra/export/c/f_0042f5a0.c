// FUNCTION: PORT1111 0x0042f5a0
// name: FUN_0042f5a0
// sig: undefined FUN_0042f5a0(void * this, char * param_1)


void __thiscall FUN_0042f5a0(void *this,char *param_1)

{
  int iVar1;
  
  if (param_1 != (char *)0x0) {
    iVar1 = (**(code **)(**(int **)((int)this + 0x14) + 0xc))((int)this + 0xc,4);
    if (iVar1 == 0) {
      param_1 = "Error writing file";
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&param_1,&DAT_004cd26c);
    }
  }
  iVar1 = (**(code **)(**(int **)((int)this + 0x14) + 0xc))
                    (*(undefined4 *)((int)this + 0x10),*(undefined4 *)((int)this + 0xc));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&stack0xfffffffc,&DAT_004cd26c);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  return;
}

