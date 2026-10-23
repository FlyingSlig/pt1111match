// FUNCTION: PORT1111 0x00424580
// name: FUN_00424580
// sig: undefined FUN_00424580(int param_1)


void __fastcall FUN_00424580(int param_1)

{
  BOOL BVar1;
  int *piVar2;
  uint *local_c;
  uint *local_8;
  char *local_4;
  
  BVar1 = ReadFile(*(HANDLE *)(param_1 + 0x1c),&local_8,4,(LPDWORD)&local_c,(LPOVERLAPPED)0x0);
  if ((BVar1 == 0) || (local_c != (uint *)0x4)) {
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
  *(uint **)(param_1 + 0x10) = local_8;
  *(undefined4 *)(param_1 + 0x14) = 0;
  BVar1 = ReadFile(*(HANDLE *)(param_1 + 0x1c),*(LPVOID *)(param_1 + 0x18),(DWORD)local_8,
                   (LPDWORD)&local_c,(LPOVERLAPPED)0x0);
  if ((BVar1 != 0) && (local_c == local_8)) {
    return;
  }
  local_4 = "Error reading file";
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_4,&DAT_004cd26c);
}

