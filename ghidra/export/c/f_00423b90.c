// FUNCTION: PORT1111 0x00423b90
// name: FUN_00423b90
// sig: undefined4 FUN_00423b90(int param_1)


undefined4 __fastcall FUN_00423b90(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  while ((*(int *)(param_1 + 8) != 0 && (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2 != 0))
        ) {
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 0xc) + -4);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2 != 0))
    {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -4;
    }
  }
  uVar2 = FUN_00426ad0();
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}

