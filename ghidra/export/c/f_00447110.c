// FUNCTION: PORT1111 0x00447110
// name: FUN_00447110
// sig: undefined FUN_00447110(int param_1)


void __fastcall FUN_00447110(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(**(int **)(DAT_004e2b14 + 0x5c) + 0x54))();
  (**(code **)(**(int **)(DAT_004e2b14 + 0x5c) + 8))(0);
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = (**(code **)(**(int **)(DAT_004e2b14 + 0x5c) + 0x70))();
  (**(code **)(iVar1 + 4))(uVar2);
  (**(code **)(**(int **)(DAT_004e2b14 + 0x5c) + 0x4c))(0);
  (**(code **)(**(int **)(DAT_004e2b14 + 0x5c) + 0x58))();
                    /* WARNING: Could not recover jumptable at 0x00447171. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(DAT_004e2b14 + 0x5c) + 100))();
  return;
}

