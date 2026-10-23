// FUNCTION: PORT1111 0x0045c430
// name: FUN_0045c430
// sig: undefined4 FUN_0045c430(void * this, int param_1)


undefined4 __thiscall FUN_0045c430(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00424310(param_1);
  *(undefined4 *)((int)this + 8) = uVar1;
  uVar1 = FUN_00424310(param_1);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  uVar1 = FUN_00424310(param_1);
  *(undefined4 *)((int)this + 0x10) = uVar1;
  return 0;
}

