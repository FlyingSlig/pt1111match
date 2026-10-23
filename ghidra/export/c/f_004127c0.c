// FUNCTION: PORT1111 0x004127c0
// name: FUN_004127c0
// sig: undefined4 FUN_004127c0(void * this, int param_1)


undefined4 __thiscall FUN_004127c0(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00424310(param_1);
  *(undefined4 *)((int)this + 0x54) = uVar1;
  uVar1 = FUN_00424310(param_1);
  *(undefined4 *)((int)this + 0x58) = uVar1;
  uVar1 = FUN_00424310(param_1);
  *(undefined4 *)((int)this + 0x44) = uVar1;
  uVar1 = FUN_00424310(param_1);
  *(undefined4 *)((int)this + 0x48) = uVar1;
  return 1;
}

