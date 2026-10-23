// FUNCTION: PORT1111 0x0047f260
// name: FUN_0047f260
// sig: undefined FUN_0047f260(void * this, int * param_1, undefined4 * param_2, undefined4 * param_3)


void __thiscall FUN_0047f260(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x14 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x14;
      goto LAB_0047f2a5;
    }
  }
  iVar1 = 0;
LAB_0047f2a5:
  FUN_0047eea0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x14;
  return;
}

