// FUNCTION: PORT1111 0x00415ec0
// name: FUN_00415ec0
// sig: undefined FUN_00415ec0(int param_1)


void __fastcall FUN_00415ec0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int local_8;
  int local_4;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x21c) + 4);
  piVar3 = (int *)*piVar1;
  if (piVar3 != piVar1) {
    do {
      local_8 = piVar3[2];
      FUN_00413aa0((void *)(param_1 + 4),&local_4,&local_8);
      if (((local_4 != *(int *)(param_1 + 8)) && (iVar2 = *(int *)(local_4 + 0x10), iVar2 != 0)) &&
         (*(int *)(*(int *)(iVar2 + 0xb0) + 0x14) != 0)) {
        *(undefined4 *)(iVar2 + 0xb4) = 1;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(*(int *)(param_1 + 0x21c) + 4));
  }
  return;
}

