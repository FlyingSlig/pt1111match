// FUNCTION: PORT1111 0x0041b660
// name: FUN_0041b660
// sig: undefined FUN_0041b660(int * param_1)


void __fastcall FUN_0041b660(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1[0x10] != 0) {
    for (uVar2 = 0; (iVar1 = param_1[6], iVar1 != 0 && (uVar2 < (uint)(param_1[7] - iVar1 >> 2)));
        uVar2 = uVar2 + 1) {
      FUN_00427480(*(int *)(iVar1 + uVar2 * 4));
    }
    (**(code **)(*param_1 + 0x24))();
    iVar1 = FUN_00428890((void *)param_1[0x10],(int)param_1);
    if (iVar1 != 0) {
      FUN_00429ee0(DAT_004e2404,(int)param_1);
    }
  }
  return;
}

