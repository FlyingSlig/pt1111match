// FUNCTION: PORT1111 0x00424350
// name: FUN_00424350
// sig: float10 FUN_00424350(int param_1)


float10 __fastcall FUN_00424350(int param_1)

{
  int iVar1;
  float fVar2;
  char *local_4;
  
  iVar1 = *(int *)(param_1 + 0x14) + 4;
  if (*(int *)(param_1 + 0x10) < iVar1) {
    local_4 = "Unexpected number of byte.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_4,&DAT_004cd26c);
  }
  fVar2 = *(float *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x18));
  *(int *)(param_1 + 0x14) = iVar1;
  return (float10)fVar2;
}

