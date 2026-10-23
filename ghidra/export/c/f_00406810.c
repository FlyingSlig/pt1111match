// FUNCTION: PORT1111 0x00406810
// name: FUN_00406810
// sig: int FUN_00406810(void * this, int param_1)


int __thiscall FUN_00406810(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0047fd20(*(int *)((int)this + 0x18));
  switch(*(undefined4 *)(param_1 + 8)) {
  case 1:
  case 2:
    goto switchD_00406836_caseD_1;
  default:
    iVar1 = FUN_00407600(this,param_1);
    return iVar1;
  case 8:
    switch(iVar1) {
    case 1:
      FUN_004072a0(this,2);
      return 2;
    case 2:
    case 3:
      FUN_004072a0(this,3);
      return 3;
    case 4:
      FUN_004072a0(this,5);
      return 5;
    case 5:
    case 6:
      FUN_004072a0(this,6);
      return 6;
    case 7:
      FUN_004072a0(this,8);
      return 8;
    case 8:
    case 9:
      FUN_004072a0(this,9);
      return 9;
    case 10:
      FUN_004072a0(this,0xb);
      return 0xb;
    case 0xb:
    case 0xc:
      FUN_004072a0(this,0xc);
      return 0xc;
    case 0xd:
      FUN_004072a0(this,0xe);
      return 0xe;
    case 0xe:
    case 0xf:
      iVar1 = 0xf;
      FUN_004072a0(this,0xf);
      break;
    default:
      return 0;
    }
switchD_00406836_caseD_1:
    return iVar1;
  case 10:
    iVar2 = FUN_00406f90(*(int *)((int)this + 0x34));
    iVar1 = *(int *)(&DAT_004d53cc + iVar1 * 4) + iVar2 * 3;
    FUN_004072a0(this,*(int *)(&DAT_004d5340 + iVar1 * 4));
    return *(int *)(&DAT_004d5340 + iVar1 * 4);
  }
}

