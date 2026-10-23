// FUNCTION: PORT1111 0x0043d3a0
// name: FUN_0043d3a0
// sig: undefined FUN_0043d3a0(int param_1)


void __fastcall FUN_0043d3a0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  for (puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 8);
      puVar1 != *(undefined4 **)(param_1 + 8); puVar1 = (undefined4 *)*puVar1) {
    iVar2 = iVar2 + *(int *)(puVar1[2] + 0xc);
  }
  iVar2 = (*(int *)(*(int *)(param_1 + 0x14) + 0x38) - *(int *)(param_1 + 0x10)) - iVar2;
  if (0 < iVar2) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar2;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_0043d310((void *)param_1,iVar2);
  return;
}

