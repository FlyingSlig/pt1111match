// FUNCTION: PORT1111 0x00429620
// name: FUN_00429620
// sig: undefined4 FUN_00429620(void * this, int param_1, int param_2, uint * param_3, uint * param_4)


undefined4 __thiscall FUN_00429620(void *this,int param_1,int param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (param_1 - DAT_004e2c30) + -0x20;
  iVar1 = (param_2 - DAT_004e2c34) * 0x200;
  uVar3 = iVar1 + iVar2 * -0x100 >> 0xe;
  *param_3 = iVar1 + iVar2 * 0x100 >> 0xe;
  *param_4 = uVar3;
  if ((((-1 < (int)*param_3) && (-1 < (int)uVar3)) && (*param_3 < *(uint *)((int)this + 0x10c))) &&
     (uVar3 < *(uint *)((int)this + 0x110))) {
    return 1;
  }
  return 0;
}

