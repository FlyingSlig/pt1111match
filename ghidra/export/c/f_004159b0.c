// FUNCTION: PORT1111 0x004159b0
// name: FUN_004159b0
// sig: undefined FUN_004159b0(int * param_1)


void FUN_004159b0(int *param_1)

{
  undefined4 *_Memory;
  int iVar1;
  void *pvVar2;
  undefined1 auStack_60 [4];
  undefined4 *puStack_5c;
  undefined4 uStack_58;
  undefined4 auStack_54 [18];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b6378;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (iVar1 == 2) {
    (**(code **)(*param_1 + 0x20))();
    pvVar2 = (void *)FUN_0040af10(DAT_004e2418);
    if (pvVar2 != (void *)0x0) {
      FUN_0040a970(pvVar2,param_1[4]);
    }
    (**(code **)(*param_1 + 0x3c))(0);
  }
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (iVar1 == 1) {
    (**(code **)(*param_1 + 0x20))();
    pvVar2 = (void *)FUN_0040af10(DAT_004e2418);
    if (pvVar2 != (void *)0x0) {
      FUN_0040bc60(auStack_54);
      uStack_4 = 0;
      FUN_0040ae20(pvVar2,auStack_60);
      _Memory = (undefined4 *)*puStack_5c;
      *puStack_5c = puStack_5c;
      puStack_5c[1] = puStack_5c;
      uStack_58 = 0;
      if (_Memory != puStack_5c) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
                    /* WARNING: Subroutine does not return */
      _free(puStack_5c);
    }
  }
  ExceptionList = pvStack_c;
  return;
}

