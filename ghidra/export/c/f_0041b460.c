// FUNCTION: PORT1111 0x0041b460
// name: FUN_0041b460
// sig: undefined FUN_0041b460(void * this, uint param_1)


void __thiscall FUN_0041b460(void *this,uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = param_1;
  param_1 = FUN_00424310(param_1);
  if (param_1 < 0x10000) {
    param_1 = param_1 | 0x150000;
  }
  uVar2 = FUN_00424310(uVar1);
  uVar3 = FUN_00424310(uVar1);
  iVar4 = FUN_00424310(uVar1);
  *(uint *)((int)this + 0x28) = param_1;
  *(undefined4 *)((int)this + 0x30) = uVar3;
  *(undefined4 *)((int)this + 0x2c) = uVar2;
  if (4 < iVar4) {
    *(undefined4 *)((int)this + 0x34) = 4;
    return;
  }
  *(int *)((int)this + 0x34) = iVar4;
  return;
}

