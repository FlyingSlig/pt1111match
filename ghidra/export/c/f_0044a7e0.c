// FUNCTION: PORT1111 0x0044a7e0
// name: FUN_0044a7e0
// sig: undefined4 FUN_0044a7e0(void * this, undefined2 param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0044a7e0(void *this,undefined2 param_1)

{
  int iVar1;
  
  switch(param_1) {
  case 0x65:
    iVar1 = *(int *)((int)this + 0x18) + 1;
    break;
  case 0x66:
    iVar1 = *(int *)((int)this + 0x18) + -1;
    break;
  default:
    return 0;
  case 0x68:
    FUN_00453550((void *)((int)this + 0x30),*(int *)((int)this + 0x48) + 1);
    DAT_004dc2a0 = *(undefined4 *)((int)this + 0x48);
    return 1;
  case 0x69:
    FUN_00453550((void *)((int)this + 0x30),*(int *)((int)this + 0x48) + -1);
    DAT_004dc2a0 = *(undefined4 *)((int)this + 0x48);
    return 1;
  case 0x6c:
    iVar1 = *(int *)((int)this + 0x78) + 1;
    goto LAB_0044a87d;
  case 0x6d:
    iVar1 = *(int *)((int)this + 0x78) + -1;
LAB_0044a87d:
    FUN_00453550((void *)((int)this + 0x60),iVar1);
    DAT_004db290 = *(undefined4 *)((int)this + 0x78);
    FUN_00475230(*(void **)(DAT_004e2b14 + 0xf8),(byte)DAT_004db290);
    if (DAT_004e2424 == 0) {
      return 1;
    }
    DAT_004d6a80 = DAT_004db290;
    return 1;
  case 0xdc:
    iVar1 = *(int *)((int)this + 0xa8) + 1;
    goto LAB_0044a8e0;
  case 0xdd:
    iVar1 = *(int *)((int)this + 0xa8) + -1;
LAB_0044a8e0:
    FUN_00453550((void *)((int)this + 0x90),iVar1);
    DAT_004db294 = *(undefined4 *)((int)this + 0xa8);
    return 1;
  }
  FUN_00453550(this,iVar1);
  if (DAT_004e2800 != (void *)0x0) {
    FUN_0044c020(DAT_004e2800,*(byte *)((int)this + 0x18));
  }
  _DAT_004dc29c = *(undefined4 *)((int)this + 0x18);
  return 1;
}

