// FUNCTION: PORT1111 0x0045b2f0
// name: FUN_0045b2f0
// sig: undefined FUN_0045b2f0(void * param_1)


void __fastcall FUN_0045b2f0(void *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)((int)param_1 + 0x90c) + 0x2c))();
  FUN_00456670(*(void **)((int)param_1 + 0xd0),iVar1);
  FUN_00481480((void *)((int)param_1 + 0x4c),0);
  *(undefined4 *)((int)param_1 + 0xbcc) = 0;
  *(undefined4 *)((int)param_1 + 0xd4) = 1;
  iVar1 = FUN_00457c20(*(int *)(*(int *)((int)param_1 + 0xd0) + 0x10));
  iVar1 = iVar1 + -3;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  FUN_00481930((void *)((int)param_1 + 0x4c),0,iVar1);
  FUN_0045afa0(param_1);
  return;
}

