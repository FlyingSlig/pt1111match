// FUNCTION: PORT1111 0x00404230
// name: FUN_00404230
// sig: undefined4 FUN_00404230(int * param_1)


undefined4 __fastcall FUN_00404230(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_004750b0(*(int *)(DAT_004e2b14 + 0xf8));
  if (iVar1 != 0) {
    puVar2 = FUN_00476aa0(*(void **)(DAT_004e2b14 + 0xf8),iVar1);
    param_1[1] = (int)puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = (**(code **)(*param_1 + 0x20))();
      return uVar3;
    }
  }
  return 0;
}

