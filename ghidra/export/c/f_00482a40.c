// FUNCTION: PORT1111 0x00482a40
// name: FUN_00482a40
// sig: undefined4 FUN_00482a40(void * this, int param_1)


undefined4 __thiscall FUN_00482a40(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (-1 < param_1) {
    iVar1 = FUN_004829c0(this,param_1);
    uVar2 = FUN_00465e00((undefined4 *)(iVar1 + 8));
    return uVar2;
  }
  return 0;
}

