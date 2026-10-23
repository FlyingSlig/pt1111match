// FUNCTION: PORT1111 0x00413300
// name: FUN_00413300
// sig: undefined FUN_00413300(void)


void FUN_00413300(void)

{
  FUN_0042bde0(DAT_004e2404);
  (**(code **)(**(int **)(DAT_004e2b14 + 0xf8) + 0x24))();
  (**(code **)(**(int **)(DAT_004e2b14 + 0xf8) + 0x14))();
  (**(code **)(**(int **)(DAT_004e2b14 + 0x5c) + 0x54))();
  (**(code **)(**(int **)(DAT_004e2b14 + 0xf8) + 0x1c))(0);
  (**(code **)(**(int **)(DAT_004e2b14 + 0x5c) + 0x4c))(0);
  (**(code **)(**(int **)(DAT_004e2b14 + 0x5c) + 0x58))();
                    /* WARNING: Could not recover jumptable at 0x00413370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(DAT_004e2b14 + 0x5c) + 100))();
  return;
}

