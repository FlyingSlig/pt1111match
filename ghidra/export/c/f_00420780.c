// FUNCTION: PORT1111 0x00420780
// name: FUN_00420780
// sig: undefined FUN_00420780(void * this, int * param_1, undefined4 * param_2, undefined4 * param_3)


void __thiscall FUN_00420780(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0xc != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0xc;
      goto LAB_004207c3;
    }
  }
  iVar1 = 0;
LAB_004207c3:
  FUN_0041ff30(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0xc;
  return;
}

