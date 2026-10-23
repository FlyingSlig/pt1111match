// FUNCTION: PORT1111 0x00424450
// name: FUN_00424450
// sig: undefined FUN_00424450(int param_1)


void __fastcall FUN_00424450(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  uint *local_8;
  char *local_4;
  
  uVar1 = FUN_0044f970(*(int *)(param_1 + 0x1c),(int)&local_8,4);
  if (uVar1 != 4) {
    local_4 = "Error reading file";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_4,&DAT_004cd26c);
  }
  if (*(uint **)(param_1 + 0xc) < local_8) {
    piVar2 = FUN_00498201(*(int **)(param_1 + 0x18),local_8);
    if (piVar2 == (int *)0x0) {
      local_4 = "Memory allocation failure!";
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_4,&DAT_004cd26c);
    }
    *(uint **)(param_1 + 0xc) = local_8;
    *(int **)(param_1 + 0x18) = piVar2;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint **)(param_1 + 0x10) = local_8;
  puVar3 = (uint *)FUN_0044f970(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x18),(uint)local_8);
  if (puVar3 != local_8) {
    local_4 = "Error reading file";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_4,&DAT_004cd26c);
  }
  return;
}

