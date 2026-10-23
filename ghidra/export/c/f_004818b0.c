// FUNCTION: PORT1111 0x004818b0
// name: FUN_004818b0
// sig: undefined FUN_004818b0(void * this, undefined4 param_1)


void __thiscall FUN_004818b0(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x2c);
  switch(param_1) {
  case 0x21:
    FUN_00481540(this,1);
    break;
  case 0x22:
    iVar2 = 1;
    goto LAB_004818e6;
  case 0x26:
    FUN_00481540(this,0);
    break;
  case 0x28:
    iVar2 = 0;
LAB_004818e6:
    FUN_00481600(this,iVar2);
  }
  if (*(int *)((int)this + 0x2c) != iVar1) {
    *(undefined4 *)((int)this + 0x80) = 1;
  }
  return;
}

