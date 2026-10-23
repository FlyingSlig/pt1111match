// FUNCTION: PORT1111 0x00434490
// name: FUN_00434490
// sig: undefined FUN_00434490(void * this, undefined4 param_1, undefined4 param_2)


void __thiscall FUN_00434490(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_c;
  DWORD DStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*(int *)((int)this + 0x18) + 4))();
  uStack_c = param_1;
  uStack_4 = param_2;
  DStack_8 = GetTickCount();
  iVar1 = *(int *)((int)this + 0x3c);
  iVar2 = FUN_00433b30(iVar1,*(undefined4 *)(iVar1 + 4),&uStack_c);
  FUN_00433fd0((void *)((int)this + 0x38),1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  (**(code **)(*(int *)((int)this + 0x18) + 8))();
  return;
}

