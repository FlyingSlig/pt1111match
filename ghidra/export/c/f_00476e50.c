// FUNCTION: PORT1111 0x00476e50
// name: FUN_00476e50
// sig: undefined FUN_00476e50(int * param_1)


void __fastcall FUN_00476e50(int *param_1)

{
  void *pvVar1;
  
  (**(code **)(*param_1 + 0x20))();
  pvVar1 = (void *)param_1[10];
  if (pvVar1 != (void *)0x0) {
    FUN_00420900(pvVar1);
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    FUN_00476490(pvVar1);
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  pvVar1 = (void *)param_1[4];
  if (pvVar1 != (void *)0x0) {
    FUN_00476850(pvVar1);
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  pvVar1 = (void *)param_1[5];
  if (pvVar1 != (void *)0x0) {
    FUN_004764c0(pvVar1);
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}

