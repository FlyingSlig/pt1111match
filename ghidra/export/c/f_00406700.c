// FUNCTION: PORT1111 0x00406700
// name: FUN_00406700
// sig: undefined FUN_00406700(void * this, int param_1)


void __thiscall FUN_00406700(void *this,int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_00412790(this,param_1);
  if (*(int *)((int)this + 0x10) == 0) {
    uVar1 = FUN_00424310(param_1);
    *(undefined4 *)((int)this + 0x10) = uVar1;
  }
  else {
    FUN_00424310(param_1);
  }
  uVar2 = FUN_004242d0(param_1);
  if ((char)uVar2 != -1) {
    if (DAT_004e26f0 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = DAT_004e26f4 - DAT_004e26f0 >> 2;
    }
    if ((uVar2 & 0xff) < uVar3) {
      *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(DAT_004e26f0 + (uVar2 & 0xff) * 4);
      return;
    }
  }
  *(undefined4 *)((int)this + 0x70) = 0;
  return;
}

