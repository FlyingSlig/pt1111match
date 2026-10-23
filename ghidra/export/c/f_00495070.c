// FUNCTION: PORT1111 0x00495070
// name: FUN_00495070
// sig: undefined FUN_00495070(int param_1)


void __fastcall FUN_00495070(int param_1)

{
  int *piVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  piVar1 = *(int **)(param_1 + 8);
  if (((piVar1 != (int *)0x0) && (0 < *(int *)(param_1 + 0xc) - (int)piVar1 >> 2)) &&
     (iVar2 = *piVar1, iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  return;
}

