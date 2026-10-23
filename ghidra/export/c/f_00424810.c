// FUNCTION: PORT1111 0x00424810
// name: FUN_00424810
// sig: undefined FUN_00424810(void * this, char * param_1)


void __thiscall FUN_00424810(void *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = param_1;
  iVar1 = *(int *)((int)this + 0x14) + 4;
  if (*(int *)((int)this + 0x10) < iVar1) {
    param_1 = "Unexpected number of byte.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&param_1,&DAT_004cd26c);
  }
  pcVar2 = *(char **)(*(int *)((int)this + 0x18) + *(int *)((int)this + 0x14));
  *(int *)((int)this + 0x14) = iVar1;
  FUN_00466100(param_1,(int)(pcVar2 + 1));
  FUN_004243d0(this,*(undefined4 **)pcVar3,pcVar2);
  pcVar2[*(int *)pcVar3] = '\0';
  return;
}

