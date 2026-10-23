// FUNCTION: PORT1111 0x00482890
// name: FUN_00482890
// sig: undefined4 FUN_00482890(void * this, int param_1)


undefined4 __thiscall FUN_00482890(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00482810(this,param_1);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0x14);
  }
  return 0;
}

