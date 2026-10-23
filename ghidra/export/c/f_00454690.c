// FUNCTION: PORT1111 0x00454690
// name: FUN_00454690
// sig: undefined FUN_00454690(int param_1)


void __fastcall FUN_00454690(int param_1)

{
  undefined4 *puVar1;
  int local_8 [2];
  
  if (*(int *)(param_1 + 0x11c) != 0) {
    puVar1 = (undefined4 *)FUN_00403d10(local_8,*(int *)(param_1 + 0x120),*(int *)(param_1 + 0x124))
    ;
    FUN_00454140(*(void **)(param_1 + 0x118),*(int *)(param_1 + 0x128),*(uint *)(param_1 + 300),
                 *puVar1,puVar1[1],*(int **)(param_1 + 0x11c),'\x03');
  }
  *(undefined4 *)(param_1 + 0x11c) = 0;
  return;
}

