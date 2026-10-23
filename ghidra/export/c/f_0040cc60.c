// FUNCTION: PORT1111 0x0040cc60
// name: FUN_0040cc60
// sig: int FUN_0040cc60(void * this, int param_1)


int __thiscall FUN_0040cc60(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0047fd20(*(int *)((int)this + 0x18));
  switch(*(undefined4 *)(param_1 + 8)) {
  case 1:
  case 2:
  case 10:
    goto switchD_0040cc7f_caseD_1;
  default:
    iVar1 = FUN_00407600(this,param_1);
switchD_0040cc7f_caseD_1:
    return iVar1;
  case 8:
    iVar1 = *(int *)(&DAT_004d5474 + iVar1 * 4);
    FUN_0040d580(*(void **)((int)this + 0x34),iVar1);
    FUN_004072a0(this,iVar1);
    return iVar1;
  }
}

