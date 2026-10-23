// FUNCTION: PORT1111 0x00407600
// name: FUN_00407600
// sig: undefined4 FUN_00407600(void * this, int param_1)


undefined4 __thiscall FUN_00407600(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0047fd20(*(int *)((int)this + 0x18));
  switch(*(undefined4 *)(param_1 + 8)) {
  case 8:
    switch(uVar1) {
    case 1:
      FUN_004072a0(this,2);
      return 2;
    case 2:
      FUN_004074c0((int)this);
      iVar2 = FUN_004056a0(*(int *)((int)this + 0x34));
      if (iVar2 == 0) {
        FUN_00405de0(*(void **)((int)this + 0x34),0);
        FUN_004072a0(this,3);
        return 3;
      }
      break;
    case 3:
    case 4:
      break;
    default:
      goto switchD_0040761f_caseD_1;
    }
    FUN_004072a0(this,3);
    uVar1 = 3;
  }
switchD_0040761f_caseD_1:
  return uVar1;
}

