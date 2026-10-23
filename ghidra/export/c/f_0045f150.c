// FUNCTION: PORT1111 0x0045f150
// name: FUN_0045f150
// sig: undefined4 FUN_0045f150(void * this, int param_1, int param_2)


undefined4 __thiscall FUN_0045f150(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *(int *)((int)this + 0x10) = param_2;
  iVar1 = FUN_0045f270(param_2);
  *(int *)((int)this + 4) = iVar1;
  uVar2 = FUN_00424310(param_1);
  *(undefined4 *)((int)this + 8) = uVar2;
  iVar1 = FUN_00424310(param_1);
  *(int *)((int)this + 0xc) = iVar1;
  iVar1 = FUN_0045f290(*(void **)((int)this + 0x10),*(int *)((int)this + 8),iVar1);
  *(int *)((int)this + 0x14) = iVar1;
  *(undefined4 *)((int)this + 0x18) = **(undefined4 **)(iVar1 + 4);
  return 1;
}

