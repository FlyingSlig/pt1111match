// FUNCTION: PORT1111 0x0045b220
// name: FUN_0045b220
// sig: undefined FUN_0045b220(void * this, int param_1, int param_2)


void __thiscall FUN_0045b220(void *this,int param_1,int param_2)

{
  void *this_00;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  this_00 = (void *)((int)this + 0x4c);
  if (param_2 == 0) {
    iVar2 = FUN_004810c0((int)this_00);
    iVar2 = iVar2 + -0x3f7 + param_1;
    if (iVar2 < 0) {
      return;
    }
    uVar1 = iVar2 + 1;
    uVar3 = FUN_00457c20(*(int *)(*(int *)((int)this + 0xd0) + 0x10));
    if (uVar3 <= uVar1) {
      return;
    }
    FUN_00457c70(*(void **)(*(int *)((int)this + 0xd0) + 0x10),uVar1,iVar2);
    FUN_00481600(this_00,0);
    *(uint *)((int)this + 0xbcc) = uVar1;
  }
  else {
    iVar2 = FUN_004810c0((int)this_00);
    uVar1 = iVar2 + -0x3f2 + param_1;
    iVar2 = uVar1 - 1;
    if (iVar2 < 0) {
      return;
    }
    uVar3 = FUN_00457c20(*(int *)(*(int *)((int)this + 0xd0) + 0x10));
    if (uVar3 <= uVar1) {
      return;
    }
    FUN_00457c70(*(void **)(*(int *)((int)this + 0xd0) + 0x10),iVar2,uVar1);
    FUN_00481540(this_00,0);
    *(int *)((int)this + 0xbcc) = iVar2;
  }
  *(undefined4 *)((int)this + 0xd4) = 1;
  FUN_0045afa0(this);
  return;
}

