// FUNCTION: PORT1111 0x0045aac0
// name: FUN_0045aac0
// sig: undefined FUN_0045aac0(int param_1)


void __fastcall FUN_0045aac0(int param_1)

{
  int iVar1;
  
  FUN_004802e0(param_1);
  if (*(void **)(param_1 + 0xbc8) != (void *)0x0) {
    FUN_00472050(*(void **)(param_1 + 0xbc8),0xff,0xff,0xff);
    iVar1 = *(int *)(*(int *)(param_1 + 0xbc8) + 0x94);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x20) = 0xffffff;
    }
    *(undefined4 *)(*(int *)(param_1 + 0xbc8) + 0xa0) = 0;
  }
  return;
}

