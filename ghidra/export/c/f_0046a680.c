// FUNCTION: PORT1111 0x0046a680
// name: FUN_0046a680
// sig: undefined FUN_0046a680(int param_1)


void __fastcall FUN_0046a680(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x68) + 0x28))();
    if ((((DAT_004dd968 != 0) && (iVar1 = *(int *)(*(int *)(param_1 + 0x68) + 0x18), iVar1 != 0)) &&
        (iVar1 = *(int *)(iVar1 + 0x24), iVar1 != 0)) && (*(int *)(iVar1 + 0x38) != 0)) {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x6c) + 0xf8) + 0x14))();
      (**(code **)(**(int **)(*(int *)(param_1 + 0x6c) + 0xf8) + 0x18))
                (*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x18));
    }
  }
  return;
}

