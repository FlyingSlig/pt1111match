// FUNCTION: PORT1111 0x00432ca0
// name: FUN_00432ca0
// sig: undefined4 FUN_00432ca0(int param_1)


undefined4 __fastcall FUN_00432ca0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = FUN_004147d0(*(int *)(param_1 + 0x14));
  piVar2 = (int *)FUN_00414c30(DAT_004e240c);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  iVar3 = (**(code **)(*piVar2 + 0x88))();
  FUN_0043d570(*(void **)(iVar3 + 0x20c),*(int *)(param_1 + 0x14),*(undefined4 *)(iVar1 + 0x110),
               *(undefined4 **)(param_1 + 4),*(undefined4 *)(param_1 + 0x18));
  FUN_004137d0((int)piVar2);
  return 1;
}

