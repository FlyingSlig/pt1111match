// FUNCTION: PORT1111 0x00446230
// name: FUN_00446230
// sig: bool FUN_00446230(int param_1)


bool __fastcall FUN_00446230(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0047d020(*(void **)(param_1 + 0x24),0);
  *(undefined4 *)(*(int *)(*(int *)(uVar1 + 0x44) + 4) + 0xc) = 2;
  iVar2 = FUN_0044ac20((void *)(param_1 + 0x4c),*(void **)(param_1 + 0x24));
  return iVar2 != 0;
}

