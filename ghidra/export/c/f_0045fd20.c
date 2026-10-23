// FUNCTION: PORT1111 0x0045fd20
// name: FUN_0045fd20
// sig: undefined4 FUN_0045fd20(int param_1)


undefined4 __cdecl FUN_0045fd20(int param_1)

{
  int *piVar1;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) && (*(int *)(param_1 + 0x24) != 0)) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + 0x14);
    if (piVar1 != (int *)0x0) {
      FUN_00462410(piVar1,param_1);
    }
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return 0;
  }
  return 0xfffffffe;
}

