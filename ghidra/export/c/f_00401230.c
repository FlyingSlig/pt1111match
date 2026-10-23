// FUNCTION: PORT1111 0x00401230
// name: FUN_00401230
// sig: undefined FUN_00401230(void * this, uint param_1)


void __thiscall FUN_00401230(void *this,uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)this + 0x54) == 0) {
    FUN_004656e0(this,param_1);
    return;
  }
  if (*(int *)((int)this + 8) != 0) {
    return;
  }
  if (*(uint *)((int)this + 4) == param_1) {
    return;
  }
  switch(param_1) {
  case 1:
    FUN_004010b0(*(void **)(DAT_004e2b14 + 0x5c),*(undefined4 *)((int)this + 0x18),
                 *(undefined4 *)((int)this + 0x1c),*(undefined4 *)((int)this + 0x20));
    *(uint *)((int)this + 4) = param_1;
    return;
  case 2:
    uVar1 = *(undefined4 *)((int)this + 0x44);
    uVar2 = *(undefined4 *)((int)this + 0x40);
    uVar3 = *(undefined4 *)((int)this + 0x3c);
    break;
  default:
    goto switchD_00401276_caseD_3;
  case 0x65:
    FUN_004010b0(*(void **)(DAT_004e2b14 + 0x5c),*(undefined4 *)((int)this + 0x24),
                 *(undefined4 *)((int)this + 0x28),*(undefined4 *)((int)this + 0x2c));
    *(uint *)((int)this + 4) = param_1;
    return;
  case 0x66:
    uVar1 = *(undefined4 *)((int)this + 0x38);
    uVar2 = *(undefined4 *)((int)this + 0x34);
    uVar3 = *(undefined4 *)((int)this + 0x30);
    break;
  case 0x68:
    FUN_004010b0(*(void **)(DAT_004e2b14 + 0x5c),*(undefined4 *)((int)this + 0x48),
                 *(undefined4 *)((int)this + 0x4c),*(undefined4 *)((int)this + 0x50));
    *(uint *)((int)this + 4) = param_1;
    return;
  }
  FUN_004010b0(*(void **)(DAT_004e2b14 + 0x5c),uVar3,uVar2,uVar1);
switchD_00401276_caseD_3:
  *(uint *)((int)this + 4) = param_1;
  return;
}

